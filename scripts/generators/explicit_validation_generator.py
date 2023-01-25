#!/usr/bin/python3 -i
#
# Copyright (c) 2023 The Khronos Group Inc.
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

import os,re,sys,string,json
from enum import Enum
from generators.generator_utils import buildListVUs
from generators.vulkan_object import Handle, Command, Struct, Member, Param
from generators.base_generator import BaseGenerator

from vuAST import isCodifiedVU
from vu_allowlist import VU_ALLOWLIST
from vu_codegen import generateValidation, APIS_WITH_ADDITIONAL_STATE_ARG, ADDITIONAL_STATE_ARG

class TokenType(Enum):
    STRUCT = 0,
    COMMAND = 1,

class Prototype(Enum):
    DECLARATION = 0,
    IMPLEMENTATION = 1,

class ExplicitValidationOutputGenerator(BaseGenerator):
    def __init__(self,
                 valid_usage_file):
        BaseGenerator.__init__(self)

        self.INDENT_SPACES = 4

        # Dict of api -> [(vuid, vu)]
        self.vu_dict = self.extractCodifiedVUs(valid_usage_file)

        # An id to generate unique temp variables
        self.unique_id = 0

        # In some cases, validation for some structs need to be ignored.  For example, if
        # VkGraphicsPipelineCreateInfo doesn't include the tessellation states, pTessellationState
        # should be ignored, even if it's not nullptr.
        #
        # When these members are encountered, a call to `shouldIgnore_API_MEMBER()` is made, which
        # is manually implemented.
        #
        # TODO: currently a placeholder, needs to be completed.
        self.ignorables = {
            ('VkGraphicsPipelineCreateInfo', 'pTessellationState'),
        }

        # A list of objects to pass down from one API token to validation of its structs.  A map
        # from a function name or prefix to the parameters that should be carried over.
        #
        # TODO: currently a placeholder, needs to be completed.
        self.parent_object_list = [
            ('vkCmd', ['commandBuffer']),
        ]

        # The following are commands ignored by the chassis.  No code is generated for them.
        self.ignorelist = [
            # Explicitly skipped by chassis
            'vkEnumerateInstanceVersion',
            # ValidationCache functions do not get dispatched
            'vkCreateValidationCacheEXT',
            'vkDestroyValidationCacheEXT',
            'vkMergeValidationCachesEXT',
            'vkGetValidationCacheDataEXT',
        ]

    def generate(self):
        self.write(f'''// *** THIS FILE IS GENERATED - DO NOT EDIT ***
            // See {os.path.basename(__file__)} for modifications

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
            ****************************************************************************/\n''')
        self.write('// NOLINTBEGIN') # Wrap for clang-tidy to ignore

        if self.filename == 'explicit_validation_commands.cpp':
            self.generateCommands()
        elif self.filename == 'explicit_validation_structs.cpp':
            self.generateStructs()
        elif self.filename == 'explicit_validation_decl.h':
            self.generateDecl()

        self.write('// NOLINTEND') # Wrap for clang-tidy to ignore

    def generateCommands(self):
        out = ['#include "chassis.h"\n', '#include "explicit/explicit_validation.h"\n', '\n']

        for command in self.vk.commands.values():
            if command.name in self.ignorelist:
                continue

            out += self.makeGuardBegin(command.protect)
            out += self.generateImpl(command.name, command.params, command.alias, TokenType.COMMAND)
            out += self.makeGuardEnd(command.protect)

        self.write(''.join(out))

    def generateStructs(self):
        out = ['#include "chassis.h"\n', '#include "explicit/explicit_validation.h"\n', '\n']

        for struct in self.vk.structs.values():
            out += self.makeGuardBegin(struct.protect)
            out += self.generateImpl(struct.name, struct.members, None, TokenType.STRUCT)
            out += self.makeGuardEnd(struct.protect)

        out += self.makeValidatePNextFunction()

        self.write(''.join(out))

    def generateDecl(self):
        out = []

        for struct in self.vk.structs.values():
            out += self.makeGuardBegin(struct.protect)
            out += self.makePrototype(struct.name, struct.members, TokenType.STRUCT,
                                      Prototype.DECLARATION)
            out += self.makeGuardEnd(struct.protect)

        for command in self.vk.commands.values():
            if command.name in self.ignorelist:
                continue

            out += self.makeGuardBegin(command.protect)
            out += self.makePrototype(command.name, command.params, TokenType.COMMAND,
                                      Prototype.DECLARATION)
            out += self.makeGuardEnd(command.protect)

        out += self.makeValidatePNextProto(Prototype.DECLARATION)

        self.write(''.join(out))

    def makeIndent(self, indent):
        return ' ' * (indent * self.INDENT_SPACES)

    def makeUniqueVar(self, name):
        self.unique_id += 1
        return '_' + name + str(self.unique_id)

    # Walk the JSON-derived dict and find all "vuid"/"text" pairs of interest
    def extractCodifiedVUs(self, valid_usage_file):
        codifiedVUs = {}

        allVUs = buildListVUs(valid_usage_file)

        for api, apiVUs in allVUs.items():
            vus = []
            for vuid, vuText in apiVUs:
                # Turn literal '\n' to \n in VU text
                vuText = vuText.split('\\n')
                if isCodifiedVU(vuText):
                    # TODO: remove print; left there for debugging at the moment.
                    if vuid not in VU_ALLOWLIST:
                        print('Info: skipping explicit validation codegen for ' + vuid)
                    else:
                        vus.append((vuid, vuText))

            if len(vus) > 0:
                codifiedVUs[api] = vus

        return codifiedVUs

    def makeParamDecl(self, member, apiType):
        decl = member.cDeclaration.lstrip()

        # Remove `:bitcount` from decl, if any
        decl = decl.split(':')[0]

        # For structs, make all parameters const.
        if apiType == TokenType.STRUCT and 'const' not in decl:
            decl = 'const ' + decl

        return decl

    def makeFunctionName(self, api, apiType):
        assert(api[:2] in ['vk', 'Vk'])
        return ['PreCall' if apiType == TokenType.COMMAND else '', 'Validate', api[2:]]

    def makePrototype(self, api, members, apiType, prototypeScope):
        """Make a prototype for validating the api token when passed its members.

        For commands, this `override`s the functions in ValidationObject.  For structs, these would
        be helpers called indirectly from commands.

        A few functions in VVL have an extra state parameter.
        """

        out = ['bool ']
        if prototypeScope == Prototype.IMPLEMENTATION:
            out += ['ExplicitValidation::']
        out += self.makeFunctionName(api, apiType)
        separator = '('
        comma_separator = ',\n' + self.makeIndent(2)

        # For structs, carry over objects of interest from the caller.  For example when validating
        # VkImageSubresourceRange through vkCmdClearColorImage, we want to return the commandBuffer
        # in the object list as well.
        if apiType == TokenType.STRUCT:
            out += [separator, 'const LogObjectList &_parentObjects']
            separator = comma_separator

        for member in members:
            decl = self.makeParamDecl(member, apiType)
            out += [separator, decl]
            separator = comma_separator

        if apiType == TokenType.COMMAND:
            out += [separator, 'const ErrorObject& _error_obj']

        if api in APIS_WITH_ADDITIONAL_STATE_ARG:
            out += [separator, 'void *', ADDITIONAL_STATE_ARG]

        out += [') const']
        if prototypeScope == Prototype.DECLARATION:
            if apiType == TokenType.COMMAND:
                out += [' override']
            out += [';\n']
        return out

    def makeCallStructValidation(self, structName, expr, parentObjects, indent):
        """Given an expression that evaluates to a struct (e.g. *pDepthStencilAttachment), and the
        struct type (e.g. VkAttachmentReference), this function creates a call to
        PreCallValidateTYPE((expr).X, (expr).Y, ...)"""

        # Put the expression in a temporary variable for simplicity
        var = self.makeUniqueVar('s')
        indentStr = self.makeIndent(indent)
        out = [indentStr, 'const auto ', var, ' = ', expr, ';\n']

        # Make the call, or'ing the result with `skip`.
        assert(structName[:2] == 'Vk')
        out += [indentStr, 'skip |= Validate', structName[2:], '(', parentObjects]
        separator = ',\n' + self.makeIndent(indent + 1)

        for member in self.vk.structs[structName].members:
            out += [separator, var, '->', member.name]

        out += [');\n']
        return out

    # Check if the parameter passed in is a pointer, and how many pointer levels does it have
    def getPointerLevelCount(self, param):
        pointerLevelCount = param.cDeclaration.count('*')

        # For static arrays, consider them pointers too
        pointerLevelCount += param.cDeclaration.count('[')

        return pointerLevelCount

    def makeIgnoreCheckCall(self, api, name, members):
        # If it needs special ignore check, call that.
        if (api, name) in self.ignorables:
            args = ', '.join([member.name for member in members])
            return ''.join(['!shouldIgnore_', api, '_', name, '(', args, ')'])

        # Otherwise just do a null check
        return name + ' != nullptr'

    def makeGuardBegin(self, protect):
        return [f'#ifdef {protect}\n'] if protect else []

    def makeGuardEnd(self, protect):
        return [f'#endif // {protect}\n'] if protect else []

    def getPointerMap(self, members):
        """For each member, returns a map of name->pointer level.  This is used in combination with
        len to know if the len is a value or a pointer."""
        pointerMap = {}
        for member in members:
            pointerLevelCount = self.getPointerLevelCount(member)
            pointerMap[member.name] = pointerLevelCount
        return pointerMap

    def makeCallMemberValidation(self, api, members, parentObjects):
        """Go over every struct member/param and call validate on it (with expanded members)."""

        out = []

        pointerMap = self.getPointerMap(members)

        indent = 1;
        for member in members:
            # Only recurse for struct members
            if member.type not in self.vk.structs:
                continue

            # If the struct is return-only, don't validate it
            struct = self.vk.structs[member.type]
            if struct.returnedOnly:
                continue

            name = member.name
            typename = member.type
            pointerLevelCount = pointerMap[name]
            arrayLen = member.length
            # Take only the first array level. TODO: support multidimensional arrays
            if arrayLen is not None:
                arrayLen = arrayLen.split(',')[0]

            # If arrayLen is a pointer, dereference it for looping
            if arrayLen in pointerMap:
                arrayLen = '*' * pointerMap[arrayLen] + arrayLen

            # If pointer, add a null or ignore check
            has_null_check = pointerLevelCount > 0

            if has_null_check:
                out += [self.makeIndent(indent), 'if (',
                        self.makeIgnoreCheckCall(api, name, members), ') {\n']
                indent += 1

            # If array, validate every element
            index = ''
            if arrayLen:
                arrayVar = self.makeUniqueVar('i')
                out += [self.makeIndent(indent), 'for (uint32_t ', arrayVar, ' = 0;',
                        arrayVar, ' < ', arrayLen, '; ++', arrayVar, ') {\n']
                index = '[' + arrayVar + ']'
                indent += 1

                # Remove one pointer level in this case.
                assert(pointerLevelCount > 0)
                pointerLevelCount -= 1

            # The expression that refers to the struct is `{prefix}name{suffix}`, where `{prefix}`
            # can be `&` if the member is not a pointer, and `{suffix}` can be `[index]` if it's an
            # array.
            expr = ''.join(['&' if pointerLevelCount == 0 else '', name, index])
            out += self.makeCallStructValidation(typename, expr, parentObjects, indent)

            if arrayLen:
                indent -= 1
                out += [self.makeIndent(indent), '}\n']

            if has_null_check:
                indent -= 1
                out += [self.makeIndent(indent), '}\n']

        # Validate the pNext chain, if any.
        if len(members) >= 2 and members[1].name == 'pNext':
            out += self.makeValidatePNextCall(indent)

        return out

    def makeValidatePNextCall(self, indent):
        return [self.makeIndent(indent), 'skip |= ValidatePNext(_parentObjects, pNext);\n']

    def makeValidatePNextProto(self, prototypeScope):
        out = ['bool ']
        if prototypeScope == Prototype.IMPLEMENTATION:
            out += ['ExplicitValidation::']
        out += ['ValidatePNext(const LogObjectList &_parentObjects, const void *pnext) const']
        if prototypeScope == Prototype.DECLARATION:
            out += [';\n']

        return out

    def makeValidatePNextFunction(self):
        out = self.makeValidatePNextProto(Prototype.IMPLEMENTATION)
        out += [""" {
    bool skip = false;
    const VkBaseInStructure *header = reinterpret_cast<const VkBaseInStructure *>(pnext);
    while (header) {
        switch (header->sType) {
"""]

        indent = 2
        # Generate a case for each struct that may be in the pNext of another struct
        for struct in self.vk.structs.values():
            if struct.extends is None:
                continue

            out += self.makeGuardBegin(struct.protect)

            out += [self.makeIndent(indent), 'case ', struct.sType, ': {\n']
            out += self.makeCallStructValidation(struct.name,
                                                 'reinterpret_cast<const ' + struct.name + ' *>(header)',
                                                 '_parentObjects',
                                                 indent + 1)
            out += [self.makeIndent(indent + 1), 'break;\n']
            out += [self.makeIndent(indent), '}\n']

            out += self.makeGuardEnd(struct.protect)

        out += ["""        default:
            break;
        }
        header = header->pNext;
    }
    return skip;
}
"""]

        return out

    def makeAliasCall(self, alias, members, apiType):
        out = [self.makeIndent(1), 'return ']
        out += self.makeFunctionName(alias, apiType)
        separator = '('

        if apiType == TokenType.STRUCT:
            out += [separator, '_parentObjects']
            separator = ', '

        for member in members:
            out += [separator, member.name]
            separator = ', '

        out += [separator, '_error_obj']

        out += [');\n']
        return out

    def makeCarryOverObjects(self, api, apiType):
        # If this is a command, there are no objects already.  The carry over objects list starts
        # empty.  If it's a struct, `_parentObjects` may already contain objects.
        #
        # In either case, some objects may be added based on self.parent_object_list

        newObjects = None
        for prefix, toAdd in self.parent_object_list:
            if api.startswith(prefix):
                newObjects = toAdd
                break

        # Return list of objects already being carried over if there's nothing to add
        if newObjects is None:
            return [], '{}' if apiType == TokenType.COMMAND else '_parentObjects'

        # Otherwise, declare a new object list
        out = [self.makeIndent(1), 'LogObjectList _carryOverObjects']
        if apiType == TokenType.STRUCT:
            out += [' = _parentObjects']
        out += [';\n']

        for obj in newObjects:
            out += [self.makeIndent(1), '_carryOverObjects.add(', obj, ');\n']

        return out, '_carryOverObjects'

    # Generate validation for entry points and struct types
    def generateImpl(self, api, members, alias, apiType):
        out = self.makePrototype(api, members, apiType, Prototype.IMPLEMENTATION)
        out += [' {\n']

        if alias:
            # If this is an alias, call the validation for the alias instead.
            out += self.makeAliasCall(alias, members, apiType)
        else:
            out += [self.makeIndent(1), 'bool skip = false;\n']
            if api in self.vu_dict:
                out += generateValidation(self.vk, api, self.vu_dict[api])

            carryOverInit, carryOverExpr = self.makeCarryOverObjects(api, apiType)
            out += carryOverInit

            # Call validation for members that are of struct type too.
            out += self.makeCallMemberValidation(api, members, carryOverExpr)
            out += [self.makeIndent(1), 'return skip;\n']

        out += ['}\n']
        return out
