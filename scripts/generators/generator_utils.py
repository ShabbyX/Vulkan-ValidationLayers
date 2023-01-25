#!/usr/bin/python3 -i
#
# Copyright (c) 2023 Valve Corporation
# Copyright (c) 2023 LunarG, Inc.
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
import os
import sys
import json

# Build a set of all vus as found in validusage.json,
# grouped by their API token and associated with their VUIDs
def buildListVUs(valid_usage_file: str) -> dict:

    # Walk the JSON-derived dict and find all "vuid" key values
    def ExtractVUs(vus, api):
        if isinstance(vus, dict):
            # Get the vuid/text pair if any
            if 'vuid' in vus:
                assert('text' in vus)

                vuid = vus['vuid']
                vuText = vus['text']

                # Flag errors in the spec if {refpage} is not set correctly.
                assert(vuid.split('-')[1].startswith(api))

                yield api, vuid, vuText

            # Recursively extract VUIDs from nested items
            for name, subvus in vus.items():
                for vu in ExtractVUs(subvus, name if api == '' else api):
                    yield vu
        elif isinstance (vus, list):
            for subvus in vus:
                for vu in ExtractVUs(subvus, api):
                    yield vu

    if not os.path.isfile(valid_usage_file):
        print(f'Error: Could not find, or error loading {valid_usage_file}')
        sys.exit(1)
    json_file = open(valid_usage_file, 'r', encoding='utf-8')
    valid_usage = json.load(json_file)
    json_file.close()
    if len(valid_usage) == 0:
        print(f'Error: Failed to load {valid_usage_file}')
        sys.exit(1)

    vu_dict = {}
    for api, vuid, vu in ExtractVUs(valid_usage['validation'], ''):
        if api not in vu_dict:
            vu_dict[api] = []
        vu_dict[api].append((vuid, vu))

    return vu_dict

# Build a set of all vuid text strings found in validusage.json
def buildListVUID(valid_usage_file: str) -> set:

    vu_dict = buildListVUs(valid_usage_file)

    # Extract only the VUIDs and discard everything else
    valid_vuids = set([vuid for apiVUs in vu_dict.values() for vuid, _ in apiVUs])

    # List of VUs that should exists, but have a spec bug
    for vuid in [
        # https://gitlab.khronos.org/vulkan/vulkan/-/issues/3582
        "VUID-VkCopyImageToImageInfoEXT-commonparent",
        "VUID-vkUpdateDescriptorSetWithTemplate-descriptorSet-parent",
        "VUID-vkUpdateVideoSessionParametersKHR-videoSessionParameters-parent",
        "VUID-vkDestroyVideoSessionParametersKHR-videoSessionParameters-parent",
        "VUID-vkGetDescriptorSetHostMappingVALVE-descriptorSet-parent",
        ]:
        valid_vuids.add(vuid)

    return valid_vuids

# Will do a sanity check the VUID exists
def getVUID(valid_vuids: set, vuid: str, quotes: bool = True) -> str:
    if vuid not in valid_vuids:
        print(f'Warning: Could not find {vuid} in validusage.json')
        vuid = vuid.replace('VUID-', 'UNASSIGNED-')
    return vuid if not quotes else f'"{vuid}"'
