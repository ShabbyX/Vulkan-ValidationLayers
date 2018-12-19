/* Copyright (c) 2015-2018 The Khronos Group Inc.
 * Copyright (c) 2015-2018 Valve Corporation
 * Copyright (c) 2015-2018 LunarG, Inc.
 * Copyright (C) 2015-2018 Google Inc.
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
 *
 * Author: Dustin Graves <dustin@lunarg.com>
 * Author: Mark Lobodzinski <mark@lunarg.com>
 */

#pragma once

#include <bitset>

#include "parameter_name.h"

// Suppress unused warning on Linux
#if defined(__GNUC__)
#define DECORATE_UNUSED __attribute__((unused))
#else
#define DECORATE_UNUSED
#endif

static const char DECORATE_UNUSED *kVUID_PVError_NONE = "UNASSIGNED-GeneralParameterError-Info";
static const char DECORATE_UNUSED *kVUID_PVError_InvalidUsage = "UNASSIGNED-GeneralParameterError-InvalidUsage";
static const char DECORATE_UNUSED *kVUID_PVError_InvalidStructSType = "UNASSIGNED-GeneralParameterError-InvalidStructSType";
static const char DECORATE_UNUSED *kVUID_PVError_InvalidStructPNext = "UNASSIGNED-GeneralParameterError-InvalidStructPNext";
static const char DECORATE_UNUSED *kVUID_PVError_RequiredParameter = "UNASSIGNED-GeneralParameterError-RequiredParameter";
static const char DECORATE_UNUSED *kVUID_PVError_ReservedParameter = "UNASSIGNED-GeneralParameterError-ReservedParameter";
static const char DECORATE_UNUSED *kVUID_PVError_UnrecognizedValue = "UNASSIGNED-GeneralParameterError-UnrecognizedValue";
static const char DECORATE_UNUSED *kVUID_PVError_DeviceLimit = "UNASSIGNED-GeneralParameterError-DeviceLimit";
static const char DECORATE_UNUSED *kVUID_PVError_DeviceFeature = "UNASSIGNED-GeneralParameterError-DeviceFeature";
static const char DECORATE_UNUSED *kVUID_PVError_FailureCode = "UNASSIGNED-GeneralParameterError-FailureCode";
static const char DECORATE_UNUSED *kVUID_PVError_ExtensionNotEnabled = "UNASSIGNED-GeneralParameterError-ExtensionNotEnabled";

#undef DECORATE_UNUSED

extern const uint32_t GeneratedHeaderVersion;

extern const VkQueryPipelineStatisticFlags AllVkQueryPipelineStatisticFlagBits;
extern const VkColorComponentFlags AllVkColorComponentFlagBits;
extern const VkShaderStageFlags AllVkShaderStageFlagBits;
extern const VkQueryControlFlags AllVkQueryControlFlagBits;
extern const VkImageUsageFlags AllVkImageUsageFlagBits;

extern const std::vector<VkCompareOp> AllVkCompareOpEnums;
extern const std::vector<VkStencilOp> AllVkStencilOpEnums;
extern const std::vector<VkBlendFactor> AllVkBlendFactorEnums;
extern const std::vector<VkBlendOp> AllVkBlendOpEnums;
extern const std::vector<VkLogicOp> AllVkLogicOpEnums;
extern const std::vector<VkBorderColor> AllVkBorderColorEnums;
extern const std::vector<VkImageLayout> AllVkImageLayoutEnums;

struct GenericHeader {
    VkStructureType sType;
    const void *pNext;
};

// String returned by string_VkStructureType for an unrecognized type.
const std::string UnsupportedStructureTypeString = "Unhandled VkStructureType";

// String returned by string_VkResult for an unrecognized type.
const std::string UnsupportedResultString = "Unhandled VkResult";

// The base value used when computing the offset for an enumeration token value that is added by an extension.
// When validating enumeration tokens, any value >= to this value is considered to be provided by an extension.
// See Appendix C.10 "Assigning Extension Token Values" from the Vulkan specification
const uint32_t ExtEnumBaseValue = 1000000000;

// The value of all VK_xxx_MAX_ENUM tokens
const uint32_t MaxEnumValue = 0x7FFFFFFF;

// Misc parameters of log_msg that are likely constant per command (or low frequency change)
struct LogMiscParams {
    VkDebugReportObjectTypeEXT objectType;
    uint64_t srcObject;
    const char *api_name;
};

class StatelessValidation : public ValidationObject {
   public:
    // Map for queue family index to queue count
    std::unordered_map<uint32_t, uint32_t> queueFamilyIndexMap;

    VkPhysicalDeviceLimits device_limits = {};
    VkPhysicalDeviceFeatures physical_device_features = {};
    VkDevice device = VK_NULL_HANDLE;
    uint32_t api_version;

    // Device extension properties -- storing properties gathered from VkPhysicalDeviceProperties2KHR::pNext chain
    struct DeviceExtensionProperties {
        VkPhysicalDeviceShadingRateImagePropertiesNV shading_rate_image_props;
        VkPhysicalDeviceMeshShaderPropertiesNV mesh_shader_props;
    };
    DeviceExtensionProperties phys_dev_ext_props = {};

    struct SubpassesUsageStates {
        std::unordered_set<uint32_t> subpasses_using_color_attachment;
        std::unordered_set<uint32_t> subpasses_using_depthstencil_attachment;
    };

    std::unordered_map<VkRenderPass, SubpassesUsageStates> renderpasses_states;

    // Constructor for stateles validation tracking
    // StatelessValidation() : {}
    /**
     * Validate a minimum value.
     *
     * Verify that the specified value is greater than the specified lower bound.
     *
     * @param api_name Name of API call being validated.
     * @param parameter_name Name of parameter being validated.
     * @param value Value to validate.
     * @param lower_bound Lower bound value to use for validation.
     * @return Boolean value indicating that the call should be skipped.
     */
    template <typename T>
    bool ValidateGreaterThan(const T value, const T lower_bound, const ParameterName &parameter_name, const std::string &vuid,
                             const LogMiscParams &misc) {
        bool skip_call = false;

        if (value <= lower_bound) {
            std::ostringstream ss;
            ss << misc.api_name << ": parameter " << parameter_name.get_name() << " (= " << value << ") is greater than "
               << lower_bound;
            skip_call |= log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, misc.objectType, misc.srcObject, vuid, "%s",
                                 ss.str().c_str());
        }

        return skip_call;
    }

    template <typename T>
    bool ValidateGreaterThanZero(const T value, const ParameterName &parameter_name, const std::string &vuid,
                                 const LogMiscParams &misc) {
        return ValidateGreaterThan(value, T{0}, parameter_name, vuid, misc);
    }
    /**
     * Validate a required pointer.
     *
     * Verify that a required pointer is not NULL.
     *
     * @param apiName Name of API call being validated.
     * @param parameterName Name of parameter being validated.
     * @param value Pointer to validate.
     * @return Boolean value indicating that the call should be skipped.
     */
     bool validate_required_pointer(const char *apiName, const ParameterName &parameterName,
                                          const void *value, const std::string &vuid) {
        bool skip_call = false;

        if (value == NULL) {
            skip_call |= log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0, vuid,
                                 "%s: required parameter %s specified as NULL.", apiName, parameterName.get_name().c_str());
        }

        return skip_call;
    }

    /**
     * Validate array count and pointer to array.
     *
     * Verify that required count and array parameters are not 0 or NULL.  If the
     * count parameter is not optional, verify that it is not 0.  If the array
     * parameter is NULL, and it is not optional, verify that count is 0.
     *
     * @param apiName Name of API call being validated.
     * @param countName Name of count parameter.
     * @param arrayName Name of array parameter.
     * @param count Number of elements in the array.
     * @param array Array to validate.
     * @param countRequired The 'count' parameter may not be 0 when true.
     * @param arrayRequired The 'array' parameter may not be NULL when true.
     * @return Boolean value indicating that the call should be skipped.
     */
    template <typename T1, typename T2>
    bool validate_array(const char *apiName, const ParameterName &countName,
                        const ParameterName &arrayName, T1 count, const T2 *array, bool countRequired, bool arrayRequired,
                        const std::string &count_required_vuid, const std::string &array_required_vuid) {
        bool skip_call = false;

        // Count parameters not tagged as optional cannot be 0
        if (countRequired && (count == 0)) {
            skip_call |=
                log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0, count_required_vuid,
                        "%s: parameter %s must be greater than 0.", apiName, countName.get_name().c_str());
        }

        // Array parameters not tagged as optional cannot be NULL, unless the count is 0
        if (arrayRequired && (count != 0) && (*array == NULL)) {
            skip_call |=
                log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0, array_required_vuid,
                        "%s: required parameter %s specified as NULL.", apiName, arrayName.get_name().c_str());
        }

        return skip_call;
    }

    /**
     * Validate pointer to array count and pointer to array.
     *
     * Verify that required count and array parameters are not NULL.  If count
     * is not NULL and its value is not optional, verify that it is not 0.  If the
     * array parameter is NULL, and it is not optional, verify that count is 0.
     * The array parameter will typically be optional for this case (where count is
     * a pointer), allowing the caller to retrieve the available count.
     *
     * @param apiName Name of API call being validated.
     * @param countName Name of count parameter.
     * @param arrayName Name of array parameter.
     * @param count Pointer to the number of elements in the array.
     * @param array Array to validate.
     * @param countPtrRequired The 'count' parameter may not be NULL when true.
     * @param countValueRequired The '*count' value may not be 0 when true.
     * @param arrayRequired The 'array' parameter may not be NULL when true.
     * @return Boolean value indicating that the call should be skipped.
     */
    template <typename T1, typename T2>
    bool validate_array(const char *apiName, const ParameterName &countName,
                        const ParameterName &arrayName, const T1 *count, const T2 *array, bool countPtrRequired,
                        bool countValueRequired, bool arrayRequired, const std::string &count_required_vuid,
                        const std::string &array_required_vuid) {
        bool skip_call = false;

        if (count == NULL) {
            if (countPtrRequired) {
                skip_call |= log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0,
                                     kVUID_PVError_RequiredParameter, "%s: required parameter %s specified as NULL", apiName,
                                     countName.get_name().c_str());
            }
        } else {
            skip_call |= validate_array(report_data, apiName, countName, arrayName, *array ? (*count) : 0, &array,
                                        countValueRequired, arrayRequired, count_required_vuid, array_required_vuid);
        }

        return skip_call;
    }

    /**
     * Validate a pointer to a Vulkan structure.
     *
     * Verify that a required pointer to a structure is not NULL.  If the pointer is
     * not NULL, verify that each structure's sType field is set to the correct
     * VkStructureType value.
     *
     * @param apiName Name of API call being validated.
     * @param parameterName Name of struct parameter being validated.
     * @param sTypeName Name of expected VkStructureType value.
     * @param value Pointer to the struct to validate.
     * @param sType VkStructureType for structure validation.
     * @param required The parameter may not be NULL when true.
     * @return Boolean value indicating that the call should be skipped.
     */
    template <typename T>
    bool validate_struct_type(const char *apiName, const ParameterName &parameterName,
                              const char *sTypeName, const T *value, VkStructureType sType, bool required,
                              const std::string &struct_vuid, const std::string &stype_vuid) {
        bool skip_call = false;

        if (value == NULL) {
            if (required) {
                skip_call |=
                    log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0, struct_vuid,
                            "%s: required parameter %s specified as NULL", apiName, parameterName.get_name().c_str());
            }
        } else if (value->sType != sType) {
            skip_call |= log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0, stype_vuid,
                                 "%s: parameter %s->sType must be %s.", apiName, parameterName.get_name().c_str(), sTypeName);
        }

        return skip_call;
    }

    /**
     * Validate an array of Vulkan structures
     *
     * Verify that required count and array parameters are not 0 or NULL.  If
     * the array contains 1 or more structures, verify that each structure's
     * sType field is set to the correct VkStructureType value.
     *
     * @param apiName Name of API call being validated.
     * @param countName Name of count parameter.
     * @param arrayName Name of array parameter.
     * @param sTypeName Name of expected VkStructureType value.
     * @param count Number of elements in the array.
     * @param array Array to validate.
     * @param sType VkStructureType for structure validation.
     * @param countRequired The 'count' parameter may not be 0 when true.
     * @param arrayRequired The 'array' parameter may not be NULL when true.
     * @return Boolean value indicating that the call should be skipped.
     */
    template <typename T>
    bool validate_struct_type_array(const char *apiName, const ParameterName &countName,
                                    const ParameterName &arrayName, const char *sTypeName, uint32_t count, const T *array,
                                    VkStructureType sType, bool countRequired, bool arrayRequired, const std::string &stype_vuid,
                                    const std::string &param_vuid) {
        bool skip_call = false;

        if ((count == 0) || (array == NULL)) {
            skip_call |= validate_array(report_data, apiName, countName, arrayName, count, &array, countRequired, arrayRequired,
                                        kVUIDUndefined, param_vuid);
        } else {
            // Verify that all structs in the array have the correct type
            for (uint32_t i = 0; i < count; ++i) {
                if (array[i].sType != sType) {
                    skip_call |=
                        log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0, stype_vuid,
                                "%s: parameter %s[%d].sType must be %s", apiName, arrayName.get_name().c_str(), i, sTypeName);
                }
            }
        }

        return skip_call;
    }

    /**
     * Validate an array of Vulkan structures.
     *
     * Verify that required count and array parameters are not NULL.  If count
     * is not NULL and its value is not optional, verify that it is not 0.
     * If the array contains 1 or more structures, verify that each structure's
     * sType field is set to the correct VkStructureType value.
     *
     * @param apiName Name of API call being validated.
     * @param countName Name of count parameter.
     * @param arrayName Name of array parameter.
     * @param sTypeName Name of expected VkStructureType value.
     * @param count Pointer to the number of elements in the array.
     * @param array Array to validate.
     * @param sType VkStructureType for structure validation.
     * @param countPtrRequired The 'count' parameter may not be NULL when true.
     * @param countValueRequired The '*count' value may not be 0 when true.
     * @param arrayRequired The 'array' parameter may not be NULL when true.
     * @return Boolean value indicating that the call should be skipped.
     */
    template <typename T>
    bool validate_struct_type_array(const char *apiName, const ParameterName &countName,
                                    const ParameterName &arrayName, const char *sTypeName, uint32_t *count, const T *array,
                                    VkStructureType sType, bool countPtrRequired, bool countValueRequired, bool arrayRequired,
                                    const std::string &stype_vuid, const std::string &param_vuid) {
        bool skip_call = false;

        if (count == NULL) {
            if (countPtrRequired) {
                skip_call |= log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0,
                                     kVUID_PVError_RequiredParameter, "%s: required parameter %s specified as NULL", apiName,
                                     countName.get_name().c_str());
            }
        } else {
            skip_call |= validate_struct_type_array(report_data, apiName, countName, arrayName, sTypeName, (*count), array, sType,
                                                    countValueRequired, arrayRequired, stype_vuid, param_vuid);
        }

        return skip_call;
    }

    /**
     * Validate a Vulkan handle.
     *
     * Verify that the specified handle is not VK_NULL_HANDLE.
     *
     * @param api_name Name of API call being validated.
     * @param parameter_name Name of struct parameter being validated.
     * @param value Handle to validate.
     * @return Boolean value indicating that the call should be skipped.
     */
    template <typename T>
    bool validate_required_handle(const char *api_name, const ParameterName &parameter_name,
                                  T value) {
        bool skip_call = false;

        if (value == VK_NULL_HANDLE) {
            skip_call |= log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0,
                                 kVUID_PVError_RequiredParameter, "%s: required parameter %s specified as VK_NULL_HANDLE", api_name,
                                 parameter_name.get_name().c_str());
        }

        return skip_call;
    }

    /**
     * Validate an array of Vulkan handles.
     *
     * Verify that required count and array parameters are not NULL.  If count
     * is not NULL and its value is not optional, verify that it is not 0.
     * If the array contains 1 or more handles, verify that no handle is set to
     * VK_NULL_HANDLE.
     *
     * @note This function is only intended to validate arrays of handles when none
     *       of the handles are allowed to be VK_NULL_HANDLE.  For arrays of handles
     *       that are allowed to contain VK_NULL_HANDLE, use validate_array() instead.
     *
     * @param api_name Name of API call being validated.
     * @param count_name Name of count parameter.
     * @param array_name Name of array parameter.
     * @param count Number of elements in the array.
     * @param array Array to validate.
     * @param count_required The 'count' parameter may not be 0 when true.
     * @param array_required The 'array' parameter may not be NULL when true.
     * @return Boolean value indicating that the call should be skipped.
     */
    template <typename T>
    bool validate_handle_array(const char *api_name, const ParameterName &count_name,
                               const ParameterName &array_name, uint32_t count, const T *array, bool count_required,
                               bool array_required) {
        bool skip_call = false;

        if ((count == 0) || (array == NULL)) {
            skip_call |= validate_array(report_data, api_name, count_name, array_name, count, &array, count_required,
                                        array_required, kVUIDUndefined, kVUIDUndefined);
        } else {
            // Verify that no handles in the array are VK_NULL_HANDLE
            for (uint32_t i = 0; i < count; ++i) {
                if (array[i] == VK_NULL_HANDLE) {
                    skip_call |=
                        log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0,
                                kVUID_PVError_RequiredParameter, "%s: required parameter %s[%d] specified as VK_NULL_HANDLE",
                                api_name, array_name.get_name().c_str(), i);
                }
            }
        }

        return skip_call;
    }

    /**
     * Validate string array count and content.
     *
     * Verify that required count and array parameters are not 0 or NULL.  If the
     * count parameter is not optional, verify that it is not 0.  If the array
     * parameter is NULL, and it is not optional, verify that count is 0.  If the
     * array parameter is not NULL, verify that none of the strings are NULL.
     *
     * @param apiName Name of API call being validated.
     * @param countName Name of count parameter.
     * @param arrayName Name of array parameter.
     * @param count Number of strings in the array.
     * @param array Array of strings to validate.
     * @param countRequired The 'count' parameter may not be 0 when true.
     * @param arrayRequired The 'array' parameter may not be NULL when true.
     * @return Boolean value indicating that the call should be skipped.
     */
    bool validate_string_array(const char *apiName, const ParameterName &countName,
                                      const ParameterName &arrayName, uint32_t count, const char *const *array, bool countRequired,
                                      bool arrayRequired, const std::string &count_required_vuid,
                                      const std::string &array_required_vuid) {
        bool skip_call = false;

        if ((count == 0) || (array == NULL)) {
            skip_call |= validate_array(report_data, apiName, countName, arrayName, count, &array, countRequired, arrayRequired,
                                        count_required_vuid, array_required_vuid);
        } else {
            // Verify that strings in the array are not NULL
            for (uint32_t i = 0; i < count; ++i) {
                if (array[i] == NULL) {
                    skip_call |= log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0,
                                         kVUID_PVError_RequiredParameter, "%s: required parameter %s[%d] specified as NULL",
                                         apiName, arrayName.get_name().c_str(), i);
                }
            }
        }

        return skip_call;
    }

    // Forward declaration for pNext validation
    bool ValidatePnextStructContents(const char *api_name, const ParameterName &parameter_name,
                                     const GenericHeader *header);

    /**
     * Validate a structure's pNext member.
     *
     * Verify that the specified pNext value points to the head of a list of
     * allowed extension structures.  If no extension structures are allowed,
     * verify that pNext is null.
     *
     * @param api_name Name of API call being validated.
     * @param parameter_name Name of parameter being validated.
     * @param allowed_struct_names Names of allowed structs.
     * @param next Pointer to validate.
     * @param allowed_type_count Total number of allowed structure types.
     * @param allowed_types Array of structure types allowed for pNext.
     * @param header_version Version of header defining the pNext validation rules.
     * @return Boolean value indicating that the call should be skipped.
     */
    bool validate_struct_pnext(const char *api_name, const ParameterName &parameter_name,
                                      const char *allowed_struct_names, const void *next, size_t allowed_type_count,
                                      const VkStructureType *allowed_types, uint32_t header_version, const std::string &vuid) {
        bool skip_call = false;
        std::unordered_set<const void *> cycle_check;
        std::unordered_set<VkStructureType, std::hash<int>> unique_stype_check;

        const char disclaimer[] =
            "This warning is based on the Valid Usage documentation for version %d of the Vulkan header.  It is possible that you "
            "are "
            "using a struct from a private extension or an extension that was added to a later version of the Vulkan header, in "
            "which "
            "case your use of %s is perfectly valid but is not guaranteed to work correctly with validation enabled";

        // TODO: The valid pNext structure types are not recursive. Each structure has its own list of valid sTypes for pNext.
        // Codegen a map of vectors containing the allowable pNext types for each struct and use that here -- also simplifies parms.
        if (next != NULL) {
            if (allowed_type_count == 0) {
                std::string message = "%s: value of %s must be NULL. ";
                message += disclaimer;
                skip_call |= log_msg(report_data, VK_DEBUG_REPORT_WARNING_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0, vuid,
                                     message.c_str(), api_name, parameter_name.get_name().c_str(), header_version,
                                     parameter_name.get_name().c_str());
            } else {
                const VkStructureType *start = allowed_types;
                const VkStructureType *end = allowed_types + allowed_type_count;
                const GenericHeader *current = reinterpret_cast<const GenericHeader *>(next);

                cycle_check.insert(next);

                while (current != NULL) {
                    if (((strncmp(api_name, "vkCreateInstance", strlen(api_name)) != 0) ||
                         (current->sType != VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO)) &&
                        ((strncmp(api_name, "vkCreateDevice", strlen(api_name)) != 0) ||
                         (current->sType != VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO))) {
                        if (cycle_check.find(current->pNext) != cycle_check.end()) {
                            std::string message = "%s: %s chain contains a cycle -- pNext pointer " PRIx64 " is repeated.";
                            skip_call |=
                                log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0,
                                        kVUID_PVError_InvalidStructPNext, message.c_str(), api_name,
                                        parameter_name.get_name().c_str(), reinterpret_cast<uint64_t>(next));
                            break;
                        } else {
                            cycle_check.insert(current->pNext);
                        }

                        std::string type_name = string_VkStructureType(current->sType);
                        if (unique_stype_check.find(current->sType) != unique_stype_check.end()) {
                            std::string message = "%s: %s chain contains duplicate structure types: %s appears multiple times.";
                            skip_call |= log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT,
                                                 VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0, kVUID_PVError_InvalidStructPNext,
                                                 message.c_str(), api_name, parameter_name.get_name().c_str(), type_name.c_str());
                        } else {
                            unique_stype_check.insert(current->sType);
                        }

                        if (std::find(start, end, current->sType) == end) {
                            if (type_name == UnsupportedStructureTypeString) {
                                std::string message =
                                    "%s: %s chain includes a structure with unknown VkStructureType (%d); Allowed structures are "
                                    "[%s]. ";
                                message += disclaimer;
                                skip_call |=
                                    log_msg(report_data, VK_DEBUG_REPORT_WARNING_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT,
                                            0, vuid, message.c_str(), api_name, parameter_name.get_name().c_str(), current->sType,
                                            allowed_struct_names, header_version, parameter_name.get_name().c_str());
                            } else {
                                std::string message =
                                    "%s: %s chain includes a structure with unexpected VkStructureType %s; Allowed structures are "
                                    "[%s]. ";
                                message += disclaimer;
                                skip_call |= log_msg(report_data, VK_DEBUG_REPORT_WARNING_BIT_EXT,
                                                     VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0, vuid, message.c_str(), api_name,
                                                     parameter_name.get_name().c_str(), type_name.c_str(), allowed_struct_names,
                                                     header_version, parameter_name.get_name().c_str());
                            }
                        }
                        // LUGMAL Insert pNext struct check here:
                        skip_call |= ValidatePnextStructContents(report_data, api_name, parameter_name, current);
                    }
                    current = reinterpret_cast<const GenericHeader *>(current->pNext);
                }
            }
        }

        return skip_call;
    }

    /**
     * Validate a VkBool32 value.
     *
     * Generate a warning if a VkBool32 value is neither VK_TRUE nor VK_FALSE.
     *
     * @param apiName Name of API call being validated.
     * @param parameterName Name of parameter being validated.
     * @param value Boolean value to validate.
     * @return Boolean value indicating that the call should be skipped.
     */
    bool validate_bool32(const char *apiName, const ParameterName &parameterName,
                                VkBool32 value) {
        bool skip_call = false;

        if ((value != VK_TRUE) && (value != VK_FALSE)) {
            skip_call |= log_msg(report_data, VK_DEBUG_REPORT_WARNING_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0,
                                 kVUID_PVError_UnrecognizedValue, "%s: value of %s (%d) is neither VK_TRUE nor VK_FALSE", apiName,
                                 parameterName.get_name().c_str(), value);
        }

        return skip_call;
    }

    /**
     * Validate a Vulkan enumeration value.
     *
     * Generate a warning if an enumeration token value does not fall within the core enumeration
     * begin and end token values, and was not added to the enumeration by an extension.  Extension
     * provided enumerations use the equation specified in Appendix C.10 of the Vulkan specification,
     * with 1,000,000,000 as the base token value.
     *
     * @note This function does not expect to process enumerations defining bitmask flag bits.
     *
     * @param apiName Name of API call being validated.
     * @param parameterName Name of parameter being validated.
     * @param enumName Name of the enumeration being validated.
     * @param valid_values The list of valid values for the enumeration.
     * @param value Enumeration value to validate.
     * @return Boolean value indicating that the call should be skipped.
     */
    template <typename T>
    bool validate_ranged_enum(const char *apiName, const ParameterName &parameterName,
                              const char *enumName, const std::vector<T> &valid_values, T value, const std::string &vuid) {
        bool skip = false;

        if (std::find(valid_values.begin(), valid_values.end(), value) == valid_values.end()) {
            skip |=
                log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0, vuid,
                        "%s: value of %s (%d) does not fall within the begin..end range of the core %s enumeration tokens and is "
                        "not an extension added token.",
                        apiName, parameterName.get_name().c_str(), value, enumName);
        }

        return skip;
    }

    /**
     * Validate an array of Vulkan enumeration value.
     *
     * Process all enumeration token values in the specified array and generate a warning if a value
     * does not fall within the core enumeration begin and end token values, and was not added to
     * the enumeration by an extension.  Extension provided enumerations use the equation specified
     * in Appendix C.10 of the Vulkan specification, with 1,000,000,000 as the base token value.
     *
     * @note This function does not expect to process enumerations defining bitmask flag bits.
     *
     * @param apiName Name of API call being validated.
     * @param countName Name of count parameter.
     * @param arrayName Name of array parameter.
     * @param enumName Name of the enumeration being validated.
     * @param valid_values The list of valid values for the enumeration.
     * @param count Number of enumeration values in the array.
     * @param array Array of enumeration values to validate.
     * @param countRequired The 'count' parameter may not be 0 when true.
     * @param arrayRequired The 'array' parameter may not be NULL when true.
     * @return Boolean value indicating that the call should be skipped.
     */
    template <typename T>
    bool validate_ranged_enum_array(const char *apiName, const ParameterName &countName,
                                           const ParameterName &arrayName, const char *enumName, const std::vector<T> &valid_values,
                                           uint32_t count, const T *array, bool countRequired, bool arrayRequired) {
        bool skip_call = false;

        if ((count == 0) || (array == NULL)) {
            skip_call |= validate_array(report_data, apiName, countName, arrayName, count, &array, countRequired, arrayRequired,
                                        kVUIDUndefined, kVUIDUndefined);
        } else {
            for (uint32_t i = 0; i < count; ++i) {
                if (std::find(valid_values.begin(), valid_values.end(), array[i]) == valid_values.end()) {
                    skip_call |= log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0,
                                         kVUID_PVError_UnrecognizedValue,
                                         "%s: value of %s[%d] (%d) does not fall within the begin..end range of the core %s "
                                         "enumeration tokens and is not an extension added token",
                                         apiName, arrayName.get_name().c_str(), i, array[i], enumName);
                }
            }
        }

        return skip_call;
    }

    /**
     * Verify that a reserved VkFlags value is zero.
     *
     * Verify that the specified value is zero, to check VkFlags values that are reserved for
     * future use.
     *
     * @param api_name Name of API call being validated.
     * @param parameter_name Name of parameter being validated.
     * @param value Value to validate.
     * @return Boolean value indicating that the call should be skipped.
     */
    bool validate_reserved_flags(const char *api_name, const ParameterName &parameter_name,
                                        VkFlags value, const std::string &vuid) {
        bool skip_call = false;

        if (value != 0) {
            skip_call |= log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0, vuid,
                                 "%s: parameter %s must be 0.", api_name, parameter_name.get_name().c_str());
        }

        return skip_call;
    }

    /**
     * Validate a Vulkan bitmask value.
     *
     * Generate a warning if a value with a VkFlags derived type does not contain valid flag bits
     * for that type.
     *
     * @param api_name Name of API call being validated.
     * @param parameter_name Name of parameter being validated.
     * @param flag_bits_name Name of the VkFlags type being validated.
     * @param all_flags A bit mask combining all valid flag bits for the VkFlags type being validated.
     * @param value VkFlags value to validate.
     * @param flags_required The 'value' parameter may not be 0 when true.
     * @param singleFlag The 'value' parameter may not contain more than one bit from all_flags.
     * @return Boolean value indicating that the call should be skipped.
     */
    bool validate_flags(const char *api_name, const ParameterName &parameter_name,
                               const char *flag_bits_name, VkFlags all_flags, VkFlags value, bool flags_required, bool singleFlag,
                               const std::string &vuid) {
        bool skip_call = false;

        if (value == 0) {
            if (flags_required) {
                skip_call |= log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0, vuid,
                                     "%s: value of %s must not be 0.", api_name, parameter_name.get_name().c_str());
            }
        } else if ((value & (~all_flags)) != 0) {
            skip_call |=
                log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0,
                        kVUID_PVError_UnrecognizedValue, "%s: value of %s contains flag bits that are not recognized members of %s",
                        api_name, parameter_name.get_name().c_str(), flag_bits_name);
        } else if (singleFlag && (std::bitset<sizeof(VkFlags) * 8>(value).count() > 1)) {
            skip_call |= log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0,
                                 kVUID_PVError_UnrecognizedValue,
                                 "%s: value of %s contains multiple members of %s when only a single value is allowed", api_name,
                                 parameter_name.get_name().c_str(), flag_bits_name);
        }

        return skip_call;
    }

    /**
     * Validate an array of Vulkan bitmask values.
     *
     * Generate a warning if a value with a VkFlags derived type does not contain valid flag bits
     * for that type.
     *
     * @param api_name Name of API call being validated.
     * @param count_name Name of parameter being validated.
     * @param array_name Name of parameter being validated.
     * @param flag_bits_name Name of the VkFlags type being validated.
     * @param all_flags A bitmask combining all valid flag bits for the VkFlags type being validated.
     * @param count Number of VkFlags values in the array.
     * @param array Array of VkFlags value to validate.
     * @param count_required The 'count' parameter may not be 0 when true.
     * @param array_required The 'array' parameter may not be NULL when true.
     * @return Boolean value indicating that the call should be skipped.
     */
    bool validate_flags_array(const char *api_name, const ParameterName &count_name,
                                     const ParameterName &array_name, const char *flag_bits_name, VkFlags all_flags, uint32_t count,
                                     const VkFlags *array, bool count_required, bool array_required) {
        bool skip_call = false;

        if ((count == 0) || (array == NULL)) {
            skip_call |= validate_array(report_data, api_name, count_name, array_name, count, &array, count_required,
                                        array_required, kVUIDUndefined, kVUIDUndefined);
        } else {
            // Verify that all VkFlags values in the array
            for (uint32_t i = 0; i < count; ++i) {
                if (array[i] == 0) {
                    // Current XML registry logic for validity generation uses the array parameter's optional tag to determine if
                    // elements in the array are allowed be 0
                    if (array_required) {
                        skip_call |= log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0,
                                             kVUID_PVError_RequiredParameter, "%s: value of %s[%d] must not be 0", api_name,
                                             array_name.get_name().c_str(), i);
                    }
                } else if ((array[i] & (~all_flags)) != 0) {
                    skip_call |= log_msg(report_data, VK_DEBUG_REPORT_ERROR_BIT_EXT, VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT, 0,
                                         kVUID_PVError_UnrecognizedValue,
                                         "%s: value of %s[%d] contains flag bits that are not recognized members of %s", api_name,
                                         array_name.get_name().c_str(), i, flag_bits_name);
                }
            }
        }

        return skip_call;
    }


    bool ValidatePnextStructContents(const char *api_name, const ParameterName &parameter_name, const GenericHeader* header);


    void PostCallRecordCreateRenderPass(VkDevice device, const VkRenderPassCreateInfo *pCreateInfo,
                                        const VkAllocationCallbacks *pAllocator, VkRenderPass *pRenderPass);
    void PostCallRecordCreateRenderPass2KHR(VkDevice device, const VkRenderPassCreateInfo2KHR *pCreateInfo,
                                            const VkAllocationCallbacks *pAllocator, VkRenderPass *pRenderPass);
    void PostCallRecordDestroyRenderPass(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks *pAllocator);
    void PostCallRecordCreateDevice(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo *pCreateInfo,
                                    const VkAllocationCallbacks *pAllocator, VkDevice *pDevice);

    bool manual_PreCallValidateCreateInstance(const VkInstanceCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator,
                                              VkInstance *pInstance);

    bool manual_PreCallValidateCreateDevice(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo *pCreateInfo,
                                            const VkAllocationCallbacks *pAllocator, VkDevice *pDevice);

    bool manual_PreCallValidateGetDeviceQueue(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue *pQueue);

    bool manual_PreCallValidateCreateBuffer(VkDevice device, const VkBufferCreateInfo *pCreateInfo,
                                            const VkAllocationCallbacks *pAllocator, VkBuffer *pBuffer);

    bool manual_PreCallValidateCreateImage(VkDevice device, const VkImageCreateInfo *pCreateInfo,
                                           const VkAllocationCallbacks *pAllocator, VkImage *pImage);

    bool manual_PreCallValidateCreateImageView(VkDevice device, const VkImageViewCreateInfo *pCreateInfo,
                                               const VkAllocationCallbacks *pAllocator, VkImageView *pView);

    bool manual_PreCallValidateViewport(const VkViewport &viewport, const char *fn_name,
                                        const char *param_name, VkDebugReportObjectTypeEXT object_type, uint64_t object = 0);

    bool manual_PreCallValidateCreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                                       const VkGraphicsPipelineCreateInfo *pCreateInfos,
                                                       const VkAllocationCallbacks *pAllocator, VkPipeline *pPipelines);
    bool manual_PreCallValidateCreateComputePipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                                      const VkComputePipelineCreateInfo *pCreateInfos,
                                                      const VkAllocationCallbacks *pAllocator, VkPipeline *pPipelines);

    bool manual_PreCallValidateCreateSampler(VkDevice device, const VkSamplerCreateInfo *pCreateInfo,
                                             const VkAllocationCallbacks *pAllocator, VkSampler *pSampler);
    bool manualPreCallValidateCreateDescriptorSetLayout(VkDevice device, const VkDescriptorSetLayoutCreateInfo *pCreateInfo,
                                                        const VkAllocationCallbacks *pAllocator, VkDescriptorSetLayout *pSetLayout);

    bool manual_PreCallValidateFreeDescriptorSets(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount,
                                                  const VkDescriptorSet *pDescriptorSets);

    bool manual_PreCallValidateCreateRenderPass(VkDevice device, const VkRenderPassCreateInfo *pCreateInfo,
                                                const VkAllocationCallbacks *pAllocator, VkRenderPass *pRenderPass);

    bool manual_PreCallValidateCreateRenderPass2KHR(VkDevice device, const VkRenderPassCreateInfo2KHR *pCreateInfo,
                                                    const VkAllocationCallbacks *pAllocator, VkRenderPass *pRenderPass);

    bool manual_PreCallValidateFreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount,
                                                  const VkCommandBuffer *pCommandBuffers);

    bool manual_PreCallValidateBeginCommandBuffer(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo *pBeginInfo);

    bool manual_PreCallValidateCmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount,
                                              const VkViewport *pViewports);

    bool manual_PreCallValidateCmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount,
                                             const VkRect2D *pScissors);
    bool manual_PreCallValidateCmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth);

    bool manual_PreCallValidateCmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount,
                                       uint32_t firstVertex, uint32_t firstInstance);

    bool manual_PreCallValidateCmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t count,
                                               uint32_t stride);

    bool manual_PreCallValidateCmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                      uint32_t count, uint32_t stride);

    bool manual_PreCallValidateCmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout,
                                            VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount,
                                            const VkImageCopy *pRegions);

    bool manual_PreCallValidateCmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout,
                                            VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount,
                                            const VkImageBlit *pRegions, VkFilter filter);

    bool manual_PreCallValidateCmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage,
                                                    VkImageLayout dstImageLayout, uint32_t regionCount,
                                                    const VkBufferImageCopy *pRegions);

    bool manual_PreCallValidateCmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout,
                                                    VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy *pRegions);

    bool manual_PreCallValidateCmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset,
                                               VkDeviceSize dataSize, const void *pData);

    bool manual_PreCallValidateCmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset,
                                             VkDeviceSize size, uint32_t data);

    bool manual_PreCallValidateCreateSwapchainKHR(VkDevice device, const VkSwapchainCreateInfoKHR *pCreateInfo,
                                                  const VkAllocationCallbacks *pAllocator, VkSwapchainKHR *pSwapchain);
    bool manual_PreCallValidateQueuePresentKHR(VkQueue queue, const VkPresentInfoKHR *pPresentInfo);

#ifdef VK_USE_PLATFORM_WIN32_KHR
    bool manual_PreCallValidateCreateWin32SurfaceKHR(VkInstance instance, const VkWin32SurfaceCreateInfoKHR *pCreateInfo,
                                                     const VkAllocationCallbacks *pAllocator, VkSurfaceKHR *pSurface);
#endif  // VK_USE_PLATFORM_WIN32_KHR

    bool manual_PreCallValidateDebugMarkerSetObjectNameEXT(VkDevice device, const VkDebugMarkerObjectNameInfoEXT *pNameInfo);

    bool manual_PreCallValidateCreateDescriptorPool(VkDevice device, const VkDescriptorPoolCreateInfo *pCreateInfo,
                                                    const VkAllocationCallbacks *pAllocator, VkDescriptorPool *pDescriptorPool);
    bool manual_PreCallValidateCmdDispatch(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY,
                                           uint32_t groupCountZ);

    bool manual_PreCallValidateCmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset);

    bool manual_PreCallValidateCmdDispatchBaseKHR(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY,
                                                  uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY,
                                                  uint32_t groupCountZ);
    bool manual_PreCallValidateCmdSetExclusiveScissorNV(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor,
                                                        uint32_t exclusiveScissorCount, const VkRect2D *pExclusiveScissors);
    bool manual_PreCallValidateCmdSetViewportShadingRatePaletteNV(VkCommandBuffer commandBuffer, uint32_t firstViewport,
                                                                  uint32_t viewportCount,
                                                                  const VkShadingRatePaletteNV *pShadingRatePalettes);

    bool manual_PreCallValidateCmdSetCoarseSampleOrderNV(VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType,
                                                         uint32_t customSampleOrderCount,
                                                         const VkCoarseSampleOrderCustomNV *pCustomSampleOrders);

    bool manual_PreCallValidateCmdDrawMeshTasksNV(VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask);
    bool manual_PreCallValidateCmdDrawMeshTasksIndirectNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                          uint32_t drawCount, uint32_t stride);

    bool manual_PreCallValidateCmdDrawMeshTasksIndirectCountNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                               VkBuffer countBuffer, VkDeviceSize countBufferOffset,
                                                               uint32_t maxDrawCount, uint32_t stride);
    bool manual_PreCallValidateCreateCommandPool(VkDevice device, const VkCommandPoolCreateInfo *pCreateInfo,
                                                 const VkAllocationCallbacks *pAllocator, VkCommandPool *pCommandPool);

    bool manual_PreCallValidateEnumerateDeviceExtensionProperties(VkPhysicalDevice physicalDevice, const char *pLayerName,
                                                                  uint32_t *pPropertyCount, VkExtensionProperties *pProperties);
#include "parameter_validation.h"
};  // Class StatelessValidation