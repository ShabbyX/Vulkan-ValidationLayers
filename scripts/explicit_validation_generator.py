#!/usr/bin/python3
#
# Copyright (c) 2023 LunarG, Inc.
# Copyright (c) 2023 Google Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# Author: Shahbaz Youssefi <syoussefi@google.com>

"""Used to generate VVL code from codified VUs in chapter files of the spec.

**This is a proof of concept.**

Usage: `vu_generator_poc.py /path/to/spec`
"""

import argparse
import ast
from collections import namedtuple
import os
from pathlib import Path
import sys

from vu_merger import mergeVus
from vu_message import generateVuMessage, VuPrintfStyler
from vu_allowlist import VU_ALLOWLIST

# TODO: remove; for debugging
import xml.etree.ElementTree as etree

OUTPUT_HEADING = """// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See explicit_validation_generator.py for modifications


/***************************************************************************
 *
 * Copyright (c) 2023 The Khronos Group Inc.
 * Copyright (c) 2023 LunarG, Inc.
 * Copyright (c) 2023 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ****************************************************************************/
"""

Type = namedtuple('Type', ['typeStr', 'pointerLevel', 'arrayLen'], defaults=['', None])

def removeOneArrayLevel(t):
    lastStar = t.pointerLevel.rfind('*')

    assert(lastStar != 1)
    secondLastStar = t.pointerLevel.rfind('*', 0, lastStar)

    if secondLastStar == -1:
        return Type(t.typeStr, t.pointerLevel[:lastStar], None)

    return Type(t.typeStr, t.pointerLevel[:secondLastStar + 1], None)

def getAPIMemberInfo(member):
    nameElem = member.find('name')
    assert(nameElem is not None)

    typeElem = member.find('type')
    assert(typeElem is not None)

    nameTail = nameElem.tail.strip() if nameElem.tail is not None else ''
    typeTail = typeElem.tail.strip()
    typeHead = member.text if member.text is not None else ''

    typeStr = typeHead + typeElem.text + typeTail

    arrayLen = member.attrib.get('len')
    pointerLevel = typeTail

    if arrayLen is None and nameTail != '' and nameTail[0] == '[':
        arrayLen = member.find('enum').text
        typeStr += '[' + arrayLen + ']'
        pointerLevel += '*'

    return nameElem.text, typeStr, Type(typeElem.text, pointerLevel, arrayLen)

def getAPIParamInfo(entity_db, api, symbol):
    # For the specific case of 'VkPipelineCreateInfo' and 'flags', use any
    # of the real Vk*PipelineCreateInfo types.  They all have flags.
    if api == 'VkPipelineCreateInfo' and symbol == 'flags':
        api = 'VkGraphicsPipelineCreateInfo'
    members = entity_db.getMemberElems(api)
    assert(members is not None)

    for member in members:
        name = member.find('name').text
        if symbol == name:
            return getAPIMemberInfo(member)

    # If no members, check to see if this is an alias
    entity = entity_db.findEntity(api)
    if entity is not None:
        alias = entity.elem.get('alias')
        if alias:
            return getAPIParamInfo(entity_db, alias, symbol)

    # VU contains an unrecognized symbol
    return '', 'const auto', Type('const auto')

def getAPIType(entity):
    return Type('const auto')

    # TODO: test all this
    #if entity.category == 'flags':
    #    nameElem = entity.find('name')
    #    return Type(nameElem.text)

    #if entity.category == 'enums':
    #    enumName = entity.elem.attrib.get('name')
    #    return Type(enumName)

    # etc

# TODO: complete this list
statefulObjectTypeMap = {
    'VkPhysicalDevice': 'PHYSICAL_DEVICE_STATE',
    'VkSurfaceKHR': 'SURFACE_STATE',
    'VkBuffer': 'BUFFER_STATE',
    'VkImage': 'IMAGE_STATE',
    'VkDeviceMemory': 'DEVICE_MEMORY_STATE',
    'VkBufferView': 'BUFFER_VIEW_STATE',
    'VkImageView': 'IMAGE_VIEW_STATE',
    'VkSampler': 'SAMPLER_STATE',
    'VkSamplerYcbcrConversion': 'SAMPLER_YCBCR_CONVERSION_STATE',
    'VkFramebuffer': 'FRAMEBUFFER_STATE',
    'VkRenderPass': 'RENDER_PASS_STATE',
    'VkEvent': 'EVENT_STATE',
    'VkCommandPool': 'COMMAND_POOL_STATE',
    'VkDescriptorPool': 'DESCRIPTOR_POOL_STATE',
    'VkPipelineLayout': 'PIPELINE_LAYOUT_STATE',
    'VkPipeline': 'PIPELINE_STATE',
    'VkQueryPool': 'QUERY_POOL_STATE',
    'VkQuery': 'QUERY_STATE',
}

def lookUpStateObject(objType, expr):
    if objType.pointerLevel != '' or objType.arrayLen is not None:
        return []

    if objType.typeStr in statefulObjectTypeMap:
        return ['Get<', statefulObjectTypeMap[objType.typeStr], '>(', expr, ')']

    return []

def makeStateObjectName(name):
    return name + '_'

class VuCodegen(ast.NodeVisitor):
    def __init__(self, entity_db, api, membersInfo, vuids, originalVus, variableIdMap):
        self.entity_db = entity_db
        self.api = api
        self.membersInfo = membersInfo
        self.typeExtractor = VuTypeExtractor(entity_db, api)

        self.vuids = vuids
        self.originalVus = originalVus
        self.variableIdMap = variableIdMap

        self.indent = 1
        self.variableTypeMap = {}
        self.loopVariableMap = {}

    def generate(self, vuAST):
        self.variableTypeMap = {}
        self.loopVariableMap = {}
        self.generated = []

        result = self.visit(vuAST)
        return ''.join(result)

    def regenerateSubExpression(self, expression):
        """Generate code for a subexpression that is previously visited.

        This is used by VuPrintfStyler to generate printf argument expressions.  That is only
        meaningful for expressions that are in scope (i.e. it cannot be called on expressions that
        have yet to be visited by VuCodegen.

        As such, this function will only need to look things up in the maps, but never add to them.
        """
        return self.visit(expression)

    def beginScope(self):
        # Scope always begins with { and a new line
        result = self.endLine()
        result += self.beginLine()
        result += ['{']
        result += self.endLine()
        self.indent += 1
        return result

    def endScope(self):
        # Scope ends with }
        self.indent -= 1
        result = self.beginLine()
        result += ['}']
        result += self.endLine()
        return result

    def beginParenthesis(self):
        return ['(']

    def endParenthesis(self):
        return [')']

    def makeIndent(self, indent):
        return ' ' * (indent * 4)

    def beginLine(self):
        return [self.makeIndent(self.indent)]

    def endLine(self):
        return ['\n']

    def getMappedName(self, name):
        if '|' in name:
            varName, varId = name.split('|')

            # Make sure merged variables use the merged variable name
            if varId in self.variableIdMap:
                return self.variableIdMap[varId]

        return name

    def makeVarName(self, name):
        # Change var|id to var_id to make it a valid name.  By adding id to the name, this makes
        # sure the name is unique in the generated code.
        assert('|' in name)
        return '_'.join(name.split('|'))

    def hasStateObject(self, objType):
        return objType.typeStr in statefulObjectTypeMap

    def getStateObject(self, expr, objType):
        # If it's a member, state object is already cached
        if expr in [name for name, _, _ in self.membersInfo]:
            return [makeStateObjectName(expr)]

        result = lookUpStateObject(objType, expr)
        assert(len(result) > 0)
        return result

    def visitBody(self, statements):
        # Handle a list of statements, adding indentation appropriately
        body = self.beginScope()

        for statement in statements:
            body += self.beginLine()
            body += self.visit(statement)
            body += self.endLine()

        body += self.endScope()
        return body

    # Map of op classes to their textual representation
    opMap = {
        # Found in BoolOp
        ast.And: '&&',
        ast.Or: '||',
        # Found in BinOp
        ast.Add: '+',
        ast.Sub: '-',
        ast.Mult: '*',
        ast.MatMult: 'UNIMPLEMENTED',
        ast.Div: '/',
        ast.Mod: '%',
        ast.Pow: 'UNIMPLEMENTED',
        ast.LShift: '<<',
        ast.RShift: '>>',
        ast.BitOr: '|',
        ast.BitXor: '^',
        ast.BitAnd: '&',
        ast.FloorDiv: 'UNIMPLEMENTED',
        # Found in UnaryOp
        ast.Invert: '~',
        ast.Not: '!',
        ast.UAdd: '+',
        ast.USub: '-',
        # Found in CompOp
        ast.Eq: '==',
        ast.NotEq: '!=',
        ast.Lt: '<',
        ast.LtE: '<=',
        ast.Gt: '>',
        ast.GtE: '>=',
        ast.Is: 'UNIMPLEMENTED',
        ast.IsNot: 'UNIMPLEMENTED',
        ast.In: 'UNIMPLEMENTED',
        ast.NotIn: 'UNIMPLEMENTED',
    }

    def addBinaryExpression(self, left, op, right):
        leftExpr, leftType = self.visit(left)
        rightExpr, rightType = self.visit(right)

        expr = self.beginParenthesis()
        expr += leftExpr
        expr += [' ', self.opMap[op.__class__], ' ']
        expr += rightExpr
        expr += self.endParenthesis()

        resultType = None
        if op.__class__ in [ast.Eq, ast.NotEq, ast.Lt, ast.LtE, ast.Gt, ast.GtE]:
            resultType = Type('bool')
        elif op.__class__ in [ast.Add, ast.Sub, ast.Mult, ast.MatMult, ast.Div,
                              ast.Mod, ast.Pow, ast.FloorDiv, ast.LShift,
                              ast.RShift, ast.BitOr, ast.BitXor, ast.BitAnd]:
            resultType = leftType

        return expr, resultType

    def visit_Module(self, node):
        result = self.beginLine()
        result += ['bool skip = false;']
        result += self.endLine()

        result += self.visitBody(node.body)

        result += self.beginLine()
        result += ['return skip;']
        result += self.endLine()
        return result

    def visit_Expr(self, node):
        result, _ = self.visit(node.value)

        isRequire = (isinstance(node.value, ast.Call) and
                     isinstance(node.value.func, ast.Name) and
                     node.value.func.id == 'require')

        # require() calls are turned into if () ..., so don't add `;` for them.
        if not isRequire:
            result += [';']
        return result

    def visit_Assign(self, node):
        lhs = self.getMappedName(node.targets[0].id)
        rhs, rhsType = self.visit(node.value)

        assign = []

        if lhs not in self.variableTypeMap:
            if rhsType.pointerLevel != '':
                assign += ['const ']
            assign += [rhsType.typeStr, ' ', rhsType.pointerLevel]
            self.variableTypeMap[lhs] = rhsType

        assign += [self.makeVarName(lhs)]
        assign += ['=']
        assign += rhs
        assign += [';']

        return assign

    def visit_If(self, node):
        result = ['if ']
        result += self.beginParenthesis()
        test, _ = self.visit(node.test)
        result += test
        result += self.endParenthesis()
        result += self.visitBody(node.body)

        return result

    def visit_For(self, node):
        array, arrayType = self.visit(node.iter)
        loopVar = self.getMappedName(node.target.id)
        loopVarType = removeOneArrayLevel(arrayType)

        loopIndex = 'i' + str(self.indent)
        self.variableTypeMap[loopVar] = loopVarType
        self.loopVariableMap[loopVar] = loopIndex

        result = ['for ']
        result += self.beginParenthesis()
        result += ['uint32_t ' + loopIndex + ' = 0; ' + loopIndex + ' < ' + arrayType.arrayLen + '; ++' + loopIndex]
        result += self.endParenthesis()
        result += self.beginScope()

        result += self.beginLine()
        result += ['const ' + loopVarType.typeStr + loopVarType.pointerLevel + ' &' +
                   self.makeVarName(loopVar) + ' = ']
        result += array
        result += ['[' + loopIndex + '];']

        result += self.visitBody(node.body)
        result += self.endScope()

        return result

    def visit_While(self, node):
        result = ['while ']
        result += self.beginParenthesis()
        test, _ = self.visit(node.test)
        result += test
        result += self.endParenthesis()
        result += self.visitBody(node.body)

        return result

    def visit_Break(self, node):
        return ['break;']

    def visit_Continue(self, node):
        return ['continue;']

    def visit_BoolOp(self, node):
        result = self.beginParenthesis()

        opText = self.opMap[node.op.__class__]

        first = True
        for value in node.values:
            if not first:
                result += [opText]
            first = False

            expr, _ = self.visit(value)
            result += expr

        result += self.endParenthesis()

        return result, Type('bool')

    def visit_UnaryOp(self, node):
        opText = self.opMap[node.op.__class__]

        result = [opText]
        result += self.beginParenthesis()
        expr, operandType = self.visit(node.operand)
        result += expr
        result += self.endParenthesis()

        return result, operandType

    def visit_BinOp(self, node):
        return self.addBinaryExpression(node.left, node.op, node.right)

    def visit_Compare(self, node):
        return self.addBinaryExpression(node.left, node.ops[0], node.comparators[0])

    def generate_loop_index(self, node):
        loopTarget = self.getMappedName(node.args[0].id)
        return [self.loopVariableMap[loopTarget]], self.variableTypeMap[loopTarget]

    def generate_require(self, node):
        result = []

        condition = node.args[0]
        vuIndex = node.args[1].value
        requireIndex = node.args[2].value

        result += ['if (!(']
        condExpr, _ = self.visit(condition)
        result += condExpr
        result += ['))']

        result += self.beginScope()
        result += self.beginLine()

        # Generate an error message based on the original VU, extracting relevant objects,
        # adding relevant values and highlighting the failed require().
        formatter = VuFormatter(VuPrintfStyler(self, requireIndex))
        message, objects = generateVuMessage(formatter, self.originalVus[vuIndex])

        # List of objects that are involved in the VU
        result += ['const LogObjectList objlist{', ', '.join(objects), '};']
        result += self.endLine()
        result += self.beginLine()

        # The error message itself
        indent = self.makeIndent(self.indent + 1)
        result += ['skip |= LogFail(objlist, "', self.vuids[vuIndex], '",\n',
                   ',\n'.join(indent + arg for arg in message), ');']
        result += self.endLine()
        result += self.endScope()

        return result

    def visit_Call(self, node):
        funcname = ''
        obj = None
        objType = None
        if isinstance(node.func, ast.Attribute):
            funcname = node.func.attr
            obj, objType = self.visit(node.func.value)
        else:
            funcname = node.func.id

        if funcname == 'require':
            return self.generate_require(node), Type('void')
        if funcname == 'loop_index':
            return self.generate_loop_index(node)

        result = ['Builtin_' + funcname]

        ispnext = funcname == 'has_pnext' or funcname == 'pnext'

        # For has_pnext() and pnext() builtins, get the structure type out of the first argument and
        # use that as template argument.  Then the object would have to be suffixed with `.pNext`,
        # or if there's no object, the pNext function argument should be used.
        args = node.args
        if ispnext:
            args = node.args[1:]
            result += ['<', node.args[0].id, '>']

            if obj is None:
                obj = ['pNext']

        result += self.beginParenthesis()

        # Some built-ins need the state object (like IMAGE_STATE) instead of the handle.
        needsStateObject = funcname.endswith('create_info')

        delimiter = []
        if obj:
            if needsStateObject and self.hasStateObject(objType):
                obj = self.getStateObject(''.join(obj), objType)

            result += obj
            delimiter = [', ']

        for arg in args:
            result += delimiter
            delimiter = [', ']

            argExpr, _ = self.visit(arg)
            result += argExpr

        result += self.endParenthesis()

        resultType = Type('void')
        if funcname in ['has_pnext', 'ext_enabled', 'externally_synchronized', 'has_bit', 'any', 'none', 'valid']:
            resultType = Type('bool')
        elif funcname == 'pnext':
            resultType = Type(node.args[0].id, pointerLevel='*')
        elif funcname == 'create_info':
            resultType = Type(objType.typeStr + 'CreateInfo')
        elif funcname == 'graphics_create_info':
            resultType = Type(objType.typeStr[:2] + 'Graphics' + objType.typeStr[2:] + 'CreateInfo')
        elif funcname == 'compute_create_info':
            resultType = Type(objType.typeStr[:2] + 'Compute' + objType.typeStr[2:] + 'CreateInfo')
        elif funcname == 'raytracing_create_info':
            resultType = Type(objType.typeStr[:2] + 'RayTracing' + objType.typeStr[2:] + 'CreateInfo')

        return result, resultType

    def visit_Attribute(self, node):
        obj, objType = self.visit(node.value)

        result = obj
        if '*' in objType.pointerLevel:
            result += ['->']
        else:
            result += ['.']
        result += [node.attr]

        _, _, memberType = getAPIParamInfo(self.entity_db, objType.typeStr, node.attr)
        return result, memberType

    def visit_Subscript(self, node):
        array, arrayType = self.visit(node.value)
        index, _ = self.visit(node.slice)

        result = array
        result += ['[']
        result += index
        result += [']']

        return result, removeOneArrayLevel(arrayType)

    def visit_IfExp(self, node):
        left, leftType = self.visit(node.body)
        cond, _ = self.visit(node.test)
        right, rightType = self.visit(node.orelse)

        result = self.beginParenthesis()

        result += self.beginParenthesis()
        result += cond
        result += self.endParenthesis()

        result += [' ? ']
        result += left
        result += [' : ']

        result += self.beginParenthesis()
        result += right
        result += self.endParenthesis()

        result += self.endParenthesis()

        return result, leftType

    def visit_Constant(self, node):
        if isinstance(node.value, str):
            result = ['"']
            result += [node.value]
            result += ['"']
            return result, Type('const char', '*')

        if isinstance(node.value, bool):
            result = ['true' if node.value else 'false']
            return result, Type('bool')

        # TODO: correct type
        return [str(node.value), 'uint32_t']

    def visit_Name(self, node):
        name = self.getMappedName(node.id)
        if name in self.variableTypeMap:
            varType = self.variableTypeMap[name]
            return [self.makeVarName(name)], varType

        assert('|' not in node.id)
        _, _, varType = getAPIParamInfo(self.entity_db, self.api, node.id)

        return [node.id], varType


def generateArgs(membersInfo):
    """Generate the `type name` list of arguments for the PreCallValidate* function.

    In the process, look up code is generated for any object that has state tracking (VkImage,
    VkImageView, etc), so it doesn't need to be looked up so often."""

    args = []
    lookUpCode = []

    for name, typeStr, objType in membersInfo:
        args.append(typeStr + ' ' + name)

        # If this object is stateful, get the state object.
        stateObject = lookUpStateObject(objType, name)
        if len(stateObject) > 0:
            lookUpCode.append(''.join(['    auto ', makeStateObjectName(name), ' = '] +
                                      stateObject + [';\n']))

    return ', '.join(args), ''.join(lookUpCode)


class CodegenCallbacks:
    """State and arguments for codegen.

    Used with DocTransformer to process a file."""
    def __init__(self,
                 args,
                 entity_db,
                 filename,
                 macros,
                 vuMap):

        self.entity_db = entity_db
        self.args = args

        self.filename = filename
        """Base name of file being read from."""

        # Prime the macro dictionary from the input values if any, but don't
        # let it be modified out of the scope of this file.
        self.macros = dict(macros)
        """Dictionary of current macro values."""

        self.vuMap = vuMap
        """map of api name -> generated validation code per VUID."""

    def getApiName(self, state):
        if state.apiName[0] == '{':
            assert(state.apiName[-1] == '}')
            return self.macros[state.apiName[1:-1]]

        return state.apiName

    def transformParagraph(self, para, state):
        # Skip all non-VU paragraphs
        if not state.isVU:
            return para

        # Skip all VUs written in prose
        if not isCodifiedVU(para[1:]):
            return para

        assert(para[0].lstrip()[0] == '*')
        vuid = para[0].lstrip()[1:].strip()[2:-2]
        for macro, value in self.macros.items():
            vuid = vuid.replace('{' + macro + '}', value)

        # For now, only accept VUs in the allowlist
        if vuid not in VU_ALLOWLIST:
            if not self.args.quiet:
                print('Info: skipping explicit validation codegen for ' + vuid)
            return para

        vu = VuAST()
        vu.parse('\n'.join(para[1:]), self.filename, state.lineNumber)
        vu.applyMacros(self.macros)

        apiName = self.getApiName(state)

        if apiName not in vuMap:
            vuMap[apiName] = []

        vuMap[apiName].append((vuid, vu))

        return para

    def transformInclude(self, line, state):
        # Check to see if this is in the form:
        #     include::{chapters}/commonvalidity/<foo>.adoc[]
        #
        # If so, extract foo.adoc and process it.
        commonvalidityInclude = 'include::{chapters}/commonvalidity/'
        commonvalidityIncludeEnd = '[]'
        if not line.startswith(commonvalidityInclude):
            return line

        assert(line.rstrip().endswith(commonvalidityIncludeEnd))
        inFilename = line.rstrip()[len(commonvalidityInclude):-len(commonvalidityIncludeEnd)]
        assert(inFilename.endswith('.adoc'))

        infile = os.path.join(args.specpath, 'chapters', 'commonvalidity', inFilename)
        processFile(self.args, infile, self.entity_db, self.macros, self.vuMap)

        return line

    def onMacro(self, line, state):
        # Parse the macro definition and record it
        assert(line[0] == ':')

        endingColon = line.find(':', 1)
        assert(endingColon != -1)

        macroName = line[1:endingColon]
        macroValue = line[endingColon + 1:].strip()

        self.macros[macroName] = macroValue

    def onEmbeddedVUConditional(self, state):
        # This is not supported.  reflow.py already complains about this.
        print('error: ifdef inside VU is disallowed')
        assert(false)


def processFile(args, infile, entity_db, macros, vuMap):
    if not args.quiet:
        print('Processing: ' + infile)
    lines, _ = loadFile(infile)

    if lines is not None:
        callback = CodegenCallbacks(args, entity_db, infile, macros, vuMap)

        transformer = doctransformer.DocTransformer(infile,
                                                    outfile = None,
                                                    callback = callback)

        transformer.transformFile(lines)

def generateVUs(args, entity_db, inpath, vuMap):
    defaultMacros = {}

    passed = True
    root, subdirs, files = next(os.walk(inpath))
    for file in files:
        if file.endswith('.adoc'):
            infile = os.path.join(root, file)
            processFile(args, infile, entity_db, defaultMacros, vuMap)
    for subdir in subdirs:
        if os.path.basename(subdir) == 'commonvalidity':
            # Process commonvalidity files as they are encountered
            continue
        insubdir = os.path.join(root, subdir)
        generateVUs(args, entity_db, insubdir, vuMap)


def generateOutput(args, vuMap, entity_db):

    outpath = args.gendir
    sourcefile = os.path.join(outpath, 'explicit_validation.cpp')
    src = open(sourcefile, 'w', encoding='utf8', newline='\n')

    headerfile = os.path.join(outpath, 'explicit_validation_functions.h')
    hdr = open(headerfile, 'w', encoding='utf8', newline='\n')

    # TODO: go over every function:
    # - If it's an alias, generate an entry that calls into the one generated above (if any)
    # - If it is in vuMap, generate code for it, then do the next step. Otherwise always do the next
    # step:
    # - Recursively generate code that calls PreCallValidate* for structs used in the call/struct.

    # TODO: For (some) calls, pass in handles from the caller to the validation of contained struct
    # nodes.  For example, when validation VkRenderingInfo, need the commandBuffer passed to
    # vkCmdBeginRendering purely to add it to the object list of validation failures.

    # TODO: So a way to support all the above nicely is to have the below calls make "Helper"
    # functions.  Then when recursing, can check if the entire recursive call was empty and if so
    # not generate the unnecessary calls.  Then the helpers can also take a LogObjectList that's
    # passed to helpers as necessary (and as deeply nested as needed).

    src.write(OUTPUT_HEADING)
    hdr.write(OUTPUT_HEADING)

    src.write('#include "chassis.h"\n')
    src.write('#include "explicit/explicit_validation.h"\n\n')

    for apiName, vus in vuMap.items():
        # Generate the following:
        #
        # bool ExplicitValidation::PreCallValidate<apiName>(<api members/params...>) const {
        #     vucode1
        #     vucode2
        #     ...
        # }
        #
        assert(apiName[:2] == 'vk' or apiName[:2] == 'Vk')
        funcName = 'PreCallValidate' + apiName[2:]

        members = entity_db.getMemberElems(apiName)
        assert(members is not None)

        membersInfo = [getAPIMemberInfo(member) for member in members]
        funcArgs, stateInit = generateArgs(membersInfo)

        entity = entity_db.findEntity(apiName)
        assert(entity is not None)
        isFunction = entity.category == 'commands'
        assert(isFunction == (apiName[:2] == 'vk'))

        hdr.write('bool ' + funcName + '(' + funcArgs + ') const' +
                  (' override' if isFunction else '') + ';\n')
        src.write('bool ExplicitValidation::' + funcName + '(' + funcArgs + ') const\n{\n')
        src.write(stateInit)

        # Merge the VUs into one to avoid duplicate logic.
        vuids = [vuid for vuid, _ in vus]
        merged, originalVus, variableIdMap = mergeVus([vu.astExpanded for _, vu in vus])

        generator = VuCodegen(entity_db, apiName, membersInfo, vuids, originalVus, variableIdMap)
        generated = generator.generate(merged)
        src.write(generated)

        src.write('}\n\n')

    src.close()
    hdr.close()


if __name__ == '__main__':
    parser = argparse.ArgumentParser()

    parser.add_argument('-specpath', action='store', default='external/Vulkan-Headers',
                        help='Path to the Vulkan specification')
    parser.add_argument('-gendir', action='store',
                        default=os.path.abspath(os.path.join(os.path.dirname(__file__), '..',
                                                             'layers', 'generated')),
                        help='Path to place generated files')
    parser.add_argument('-quiet', action='store_true', default=False,
                        help='Suppress script output during normal execution.')
    parser.add_argument('--version', action='version', version='%(prog)s 0.1')

    args = parser.parse_args()

    sys.path.insert(0, os.path.join(args.specpath, 'scripts'))

    from reflib import loadFile
    import doctransformer
    from check_spec_links import VulkanEntityDatabase
    from vuAST import isCodifiedVU, VuAST, VuTypeExtractor, VuFormatter

    entity_db = VulkanEntityDatabase()
    vuMap = {}

    generateVUs(args, entity_db, os.path.join(args.specpath, 'chapters'), vuMap)
    generateOutput(args, vuMap, entity_db)
