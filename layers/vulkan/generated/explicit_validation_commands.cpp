// *** THIS FILE IS GENERATED - DO NOT EDIT ***
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

// NOLINTBEGIN
#include "chassis.h"
#include "explicit/explicit_validation.h"

bool ExplicitValidation::PreCallValidateCreateInstance(const VkInstanceCreateInfo* pCreateInfo,
                                                       const VkAllocationCallbacks* pAllocator, VkInstance* pInstance,
                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s1 = pCreateInfo;
        skip |= ValidateInstanceCreateInfo({}, _s1->sType, _s1->pNext, _s1->flags, _s1->pApplicationInfo, _s1->enabledLayerCount,
                                           _s1->ppEnabledLayerNames, _s1->enabledExtensionCount, _s1->ppEnabledExtensionNames);
    }
    if (pAllocator != nullptr) {
        const auto _s2 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s2->pUserData, _s2->pfnAllocation, _s2->pfnReallocation, _s2->pfnFree,
                                            _s2->pfnInternalAllocation, _s2->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyInstance(VkInstance instance, const VkAllocationCallbacks* pAllocator,
                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s3 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s3->pUserData, _s3->pfnAllocation, _s3->pfnReallocation, _s3->pfnFree,
                                            _s3->pfnInternalAllocation, _s3->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateEnumeratePhysicalDevices(VkInstance instance, uint32_t* pPhysicalDeviceCount,
                                                                 VkPhysicalDevice* pPhysicalDevices,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceFeatures(VkPhysicalDevice physicalDevice,
                                                                  VkPhysicalDeviceFeatures* pFeatures,
                                                                  const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pFeatures != nullptr) {
        const auto _s4 = pFeatures;
        skip |= ValidatePhysicalDeviceFeatures(
            {}, _s4->robustBufferAccess, _s4->fullDrawIndexUint32, _s4->imageCubeArray, _s4->independentBlend, _s4->geometryShader,
            _s4->tessellationShader, _s4->sampleRateShading, _s4->dualSrcBlend, _s4->logicOp, _s4->multiDrawIndirect,
            _s4->drawIndirectFirstInstance, _s4->depthClamp, _s4->depthBiasClamp, _s4->fillModeNonSolid, _s4->depthBounds,
            _s4->wideLines, _s4->largePoints, _s4->alphaToOne, _s4->multiViewport, _s4->samplerAnisotropy,
            _s4->textureCompressionETC2, _s4->textureCompressionASTC_LDR, _s4->textureCompressionBC, _s4->occlusionQueryPrecise,
            _s4->pipelineStatisticsQuery, _s4->vertexPipelineStoresAndAtomics, _s4->fragmentStoresAndAtomics,
            _s4->shaderTessellationAndGeometryPointSize, _s4->shaderImageGatherExtended, _s4->shaderStorageImageExtendedFormats,
            _s4->shaderStorageImageMultisample, _s4->shaderStorageImageReadWithoutFormat, _s4->shaderStorageImageWriteWithoutFormat,
            _s4->shaderUniformBufferArrayDynamicIndexing, _s4->shaderSampledImageArrayDynamicIndexing,
            _s4->shaderStorageBufferArrayDynamicIndexing, _s4->shaderStorageImageArrayDynamicIndexing, _s4->shaderClipDistance,
            _s4->shaderCullDistance, _s4->shaderFloat64, _s4->shaderInt64, _s4->shaderInt16, _s4->shaderResourceResidency,
            _s4->shaderResourceMinLod, _s4->sparseBinding, _s4->sparseResidencyBuffer, _s4->sparseResidencyImage2D,
            _s4->sparseResidencyImage3D, _s4->sparseResidency2Samples, _s4->sparseResidency4Samples, _s4->sparseResidency8Samples,
            _s4->sparseResidency16Samples, _s4->sparseResidencyAliased, _s4->variableMultisampleRate, _s4->inheritedQueries);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format,
                                                                          VkFormatProperties* pFormatProperties,
                                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format,
                                                                               VkImageType type, VkImageTiling tiling,
                                                                               VkImageUsageFlags usage, VkImageCreateFlags flags,
                                                                               VkImageFormatProperties* pImageFormatProperties,
                                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceProperties(VkPhysicalDevice physicalDevice,
                                                                    VkPhysicalDeviceProperties* pProperties,
                                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceQueueFamilyProperties(VkPhysicalDevice physicalDevice,
                                                                               uint32_t* pQueueFamilyPropertyCount,
                                                                               VkQueueFamilyProperties* pQueueFamilyProperties,
                                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceMemoryProperties(VkPhysicalDevice physicalDevice,
                                                                          VkPhysicalDeviceMemoryProperties* pMemoryProperties,
                                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetInstanceProcAddr(VkInstance instance, const char* pName,
                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDeviceProcAddr(VkDevice device, const char* pName, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateDevice(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo,
                                                     const VkAllocationCallbacks* pAllocator, VkDevice* pDevice,
                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s5 = pCreateInfo;
        skip |= ValidateDeviceCreateInfo({}, _s5->sType, _s5->pNext, _s5->flags, _s5->queueCreateInfoCount, _s5->pQueueCreateInfos,
                                         _s5->enabledLayerCount, _s5->ppEnabledLayerNames, _s5->enabledExtensionCount,
                                         _s5->ppEnabledExtensionNames, _s5->pEnabledFeatures);
    }
    if (pAllocator != nullptr) {
        const auto _s6 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s6->pUserData, _s6->pfnAllocation, _s6->pfnReallocation, _s6->pfnFree,
                                            _s6->pfnInternalAllocation, _s6->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyDevice(VkDevice device, const VkAllocationCallbacks* pAllocator,
                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s7 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s7->pUserData, _s7->pfnAllocation, _s7->pfnReallocation, _s7->pfnFree,
                                            _s7->pfnInternalAllocation, _s7->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateEnumerateInstanceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount,
                                                                             VkExtensionProperties* pProperties,
                                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateEnumerateDeviceExtensionProperties(VkPhysicalDevice physicalDevice, const char* pLayerName,
                                                                           uint32_t* pPropertyCount,
                                                                           VkExtensionProperties* pProperties,
                                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateEnumerateInstanceLayerProperties(uint32_t* pPropertyCount, VkLayerProperties* pProperties,
                                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateEnumerateDeviceLayerProperties(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount,
                                                                       VkLayerProperties* pProperties,
                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDeviceQueue(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex,
                                                       VkQueue* pQueue, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateQueueSubmit(VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits,
                                                    VkFence fence, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pSubmits != nullptr) {
        for (uint32_t _i8 = 0; _i8 < submitCount; ++_i8) {
            const auto _s9 = &pSubmits[_i8];
            skip |= ValidateSubmitInfo({}, _s9->sType, _s9->pNext, _s9->waitSemaphoreCount, _s9->pWaitSemaphores,
                                       _s9->pWaitDstStageMask, _s9->commandBufferCount, _s9->pCommandBuffers,
                                       _s9->signalSemaphoreCount, _s9->pSignalSemaphores);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateQueueWaitIdle(VkQueue queue, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateDeviceWaitIdle(VkDevice device, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateAllocateMemory(VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo,
                                                       const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory,
                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocateInfo != nullptr) {
        const auto _s10 = pAllocateInfo;
        skip |= ValidateMemoryAllocateInfo({}, _s10->sType, _s10->pNext, _s10->allocationSize, _s10->memoryTypeIndex);
    }
    if (pAllocator != nullptr) {
        const auto _s11 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s11->pUserData, _s11->pfnAllocation, _s11->pfnReallocation, _s11->pfnFree,
                                            _s11->pfnInternalAllocation, _s11->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateFreeMemory(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator,
                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s12 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s12->pUserData, _s12->pfnAllocation, _s12->pfnReallocation, _s12->pfnFree,
                                            _s12->pfnInternalAllocation, _s12->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateMapMemory(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size,
                                                  VkMemoryMapFlags flags, void** ppData, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateUnmapMemory(VkDevice device, VkDeviceMemory memory, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateFlushMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount,
                                                                const VkMappedMemoryRange* pMemoryRanges,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pMemoryRanges != nullptr) {
        for (uint32_t _i13 = 0; _i13 < memoryRangeCount; ++_i13) {
            const auto _s14 = &pMemoryRanges[_i13];
            skip |= ValidateMappedMemoryRange({}, _s14->sType, _s14->pNext, _s14->memory, _s14->offset, _s14->size);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateInvalidateMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount,
                                                                     const VkMappedMemoryRange* pMemoryRanges,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pMemoryRanges != nullptr) {
        for (uint32_t _i15 = 0; _i15 < memoryRangeCount; ++_i15) {
            const auto _s16 = &pMemoryRanges[_i15];
            skip |= ValidateMappedMemoryRange({}, _s16->sType, _s16->pNext, _s16->memory, _s16->offset, _s16->size);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDeviceMemoryCommitment(VkDevice device, VkDeviceMemory memory,
                                                                  VkDeviceSize* pCommittedMemoryInBytes,
                                                                  const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateBindBufferMemory(VkDevice device, VkBuffer buffer, VkDeviceMemory memory,
                                                         VkDeviceSize memoryOffset, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateBindImageMemory(VkDevice device, VkImage image, VkDeviceMemory memory,
                                                        VkDeviceSize memoryOffset, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetBufferMemoryRequirements(VkDevice device, VkBuffer buffer,
                                                                    VkMemoryRequirements* pMemoryRequirements,
                                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetImageMemoryRequirements(VkDevice device, VkImage image,
                                                                   VkMemoryRequirements* pMemoryRequirements,
                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetImageSparseMemoryRequirements(VkDevice device, VkImage image,
                                                                         uint32_t* pSparseMemoryRequirementCount,
                                                                         VkSparseImageMemoryRequirements* pSparseMemoryRequirements,
                                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceSparseImageFormatProperties(
    VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage,
    VkImageTiling tiling, uint32_t* pPropertyCount, VkSparseImageFormatProperties* pProperties,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateQueueBindSparse(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo,
                                                        VkFence fence, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pBindInfo != nullptr) {
        for (uint32_t _i17 = 0; _i17 < bindInfoCount; ++_i17) {
            const auto _s18 = &pBindInfo[_i17];
            skip |= ValidateBindSparseInfo({}, _s18->sType, _s18->pNext, _s18->waitSemaphoreCount, _s18->pWaitSemaphores,
                                           _s18->bufferBindCount, _s18->pBufferBinds, _s18->imageOpaqueBindCount,
                                           _s18->pImageOpaqueBinds, _s18->imageBindCount, _s18->pImageBinds,
                                           _s18->signalSemaphoreCount, _s18->pSignalSemaphores);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateFence(VkDevice device, const VkFenceCreateInfo* pCreateInfo,
                                                    const VkAllocationCallbacks* pAllocator, VkFence* pFence,
                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s19 = pCreateInfo;
        skip |= ValidateFenceCreateInfo({}, _s19->sType, _s19->pNext, _s19->flags);
    }
    if (pAllocator != nullptr) {
        const auto _s20 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s20->pUserData, _s20->pfnAllocation, _s20->pfnReallocation, _s20->pfnFree,
                                            _s20->pfnInternalAllocation, _s20->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyFence(VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator,
                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s21 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s21->pUserData, _s21->pfnAllocation, _s21->pfnReallocation, _s21->pfnFree,
                                            _s21->pfnInternalAllocation, _s21->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateResetFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences,
                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetFenceStatus(VkDevice device, VkFence fence, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateWaitForFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences,
                                                      VkBool32 waitAll, uint64_t timeout, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateSemaphore(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo,
                                                        const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore,
                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s22 = pCreateInfo;
        skip |= ValidateSemaphoreCreateInfo({}, _s22->sType, _s22->pNext, _s22->flags);
    }
    if (pAllocator != nullptr) {
        const auto _s23 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s23->pUserData, _s23->pfnAllocation, _s23->pfnReallocation, _s23->pfnFree,
                                            _s23->pfnInternalAllocation, _s23->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroySemaphore(VkDevice device, VkSemaphore semaphore,
                                                         const VkAllocationCallbacks* pAllocator,
                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s24 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s24->pUserData, _s24->pfnAllocation, _s24->pfnReallocation, _s24->pfnFree,
                                            _s24->pfnInternalAllocation, _s24->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateEvent(VkDevice device, const VkEventCreateInfo* pCreateInfo,
                                                    const VkAllocationCallbacks* pAllocator, VkEvent* pEvent,
                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s25 = pCreateInfo;
        skip |= ValidateEventCreateInfo({}, _s25->sType, _s25->pNext, _s25->flags);
    }
    if (pAllocator != nullptr) {
        const auto _s26 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s26->pUserData, _s26->pfnAllocation, _s26->pfnReallocation, _s26->pfnFree,
                                            _s26->pfnInternalAllocation, _s26->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyEvent(VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator,
                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s27 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s27->pUserData, _s27->pfnAllocation, _s27->pfnReallocation, _s27->pfnFree,
                                            _s27->pfnInternalAllocation, _s27->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetEventStatus(VkDevice device, VkEvent event, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateSetEvent(VkDevice device, VkEvent event, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateResetEvent(VkDevice device, VkEvent event, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateQueryPool(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo,
                                                        const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool,
                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s28 = pCreateInfo;
        skip |= ValidateQueryPoolCreateInfo({}, _s28->sType, _s28->pNext, _s28->flags, _s28->queryType, _s28->queryCount,
                                            _s28->pipelineStatistics);
    }
    if (pAllocator != nullptr) {
        const auto _s29 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s29->pUserData, _s29->pfnAllocation, _s29->pfnReallocation, _s29->pfnFree,
                                            _s29->pfnInternalAllocation, _s29->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyQueryPool(VkDevice device, VkQueryPool queryPool,
                                                         const VkAllocationCallbacks* pAllocator,
                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s30 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s30->pUserData, _s30->pfnAllocation, _s30->pfnReallocation, _s30->pfnFree,
                                            _s30->pfnInternalAllocation, _s30->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetQueryPoolResults(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery,
                                                            uint32_t queryCount, size_t dataSize, void* pData, VkDeviceSize stride,
                                                            VkQueryResultFlags flags, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateBuffer(VkDevice device, const VkBufferCreateInfo* pCreateInfo,
                                                     const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer,
                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s31 = pCreateInfo;
        skip |= ValidateBufferCreateInfo({}, _s31->sType, _s31->pNext, _s31->flags, _s31->size, _s31->usage, _s31->sharingMode,
                                         _s31->queueFamilyIndexCount, _s31->pQueueFamilyIndices);
    }
    if (pAllocator != nullptr) {
        const auto _s32 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s32->pUserData, _s32->pfnAllocation, _s32->pfnReallocation, _s32->pfnFree,
                                            _s32->pfnInternalAllocation, _s32->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyBuffer(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator,
                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s33 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s33->pUserData, _s33->pfnAllocation, _s33->pfnReallocation, _s33->pfnFree,
                                            _s33->pfnInternalAllocation, _s33->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateBufferView(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo,
                                                         const VkAllocationCallbacks* pAllocator, VkBufferView* pView,
                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s34 = pCreateInfo;
        skip |= ValidateBufferViewCreateInfo({}, _s34->sType, _s34->pNext, _s34->flags, _s34->buffer, _s34->format, _s34->offset,
                                             _s34->range);
    }
    if (pAllocator != nullptr) {
        const auto _s35 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s35->pUserData, _s35->pfnAllocation, _s35->pfnReallocation, _s35->pfnFree,
                                            _s35->pfnInternalAllocation, _s35->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyBufferView(VkDevice device, VkBufferView bufferView,
                                                          const VkAllocationCallbacks* pAllocator,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s36 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s36->pUserData, _s36->pfnAllocation, _s36->pfnReallocation, _s36->pfnFree,
                                            _s36->pfnInternalAllocation, _s36->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateImage(VkDevice device, const VkImageCreateInfo* pCreateInfo,
                                                    const VkAllocationCallbacks* pAllocator, VkImage* pImage,
                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s37 = pCreateInfo;
        skip |=
            ValidateImageCreateInfo({}, _s37->sType, _s37->pNext, _s37->flags, _s37->imageType, _s37->format, _s37->extent,
                                    _s37->mipLevels, _s37->arrayLayers, _s37->samples, _s37->tiling, _s37->usage, _s37->sharingMode,
                                    _s37->queueFamilyIndexCount, _s37->pQueueFamilyIndices, _s37->initialLayout);
    }
    if (pAllocator != nullptr) {
        const auto _s38 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s38->pUserData, _s38->pfnAllocation, _s38->pfnReallocation, _s38->pfnFree,
                                            _s38->pfnInternalAllocation, _s38->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyImage(VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator,
                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s39 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s39->pUserData, _s39->pfnAllocation, _s39->pfnReallocation, _s39->pfnFree,
                                            _s39->pfnInternalAllocation, _s39->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetImageSubresourceLayout(VkDevice device, VkImage image,
                                                                  const VkImageSubresource* pSubresource,
                                                                  VkSubresourceLayout* pLayout,
                                                                  const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pSubresource != nullptr) {
        const auto _s40 = pSubresource;
        skip |= ValidateImageSubresource({}, _s40->aspectMask, _s40->mipLevel, _s40->arrayLayer);
    }
    if (pLayout != nullptr) {
        const auto _s41 = pLayout;
        skip |= ValidateSubresourceLayout({}, _s41->offset, _s41->size, _s41->rowPitch, _s41->arrayPitch, _s41->depthPitch);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateImageView(VkDevice device, const VkImageViewCreateInfo* pCreateInfo,
                                                        const VkAllocationCallbacks* pAllocator, VkImageView* pView,
                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s42 = pCreateInfo;
        skip |= ValidateImageViewCreateInfo({}, _s42->sType, _s42->pNext, _s42->flags, _s42->image, _s42->viewType, _s42->format,
                                            _s42->components, _s42->subresourceRange);
    }
    if (pAllocator != nullptr) {
        const auto _s43 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s43->pUserData, _s43->pfnAllocation, _s43->pfnReallocation, _s43->pfnFree,
                                            _s43->pfnInternalAllocation, _s43->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyImageView(VkDevice device, VkImageView imageView,
                                                         const VkAllocationCallbacks* pAllocator,
                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s44 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s44->pUserData, _s44->pfnAllocation, _s44->pfnReallocation, _s44->pfnFree,
                                            _s44->pfnInternalAllocation, _s44->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateShaderModule(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo,
                                                           const VkAllocationCallbacks* pAllocator, VkShaderModule* pShaderModule,
                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s45 = pCreateInfo;
        skip |= ValidateShaderModuleCreateInfo({}, _s45->sType, _s45->pNext, _s45->flags, _s45->codeSize, _s45->pCode);
    }
    if (pAllocator != nullptr) {
        const auto _s46 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s46->pUserData, _s46->pfnAllocation, _s46->pfnReallocation, _s46->pfnFree,
                                            _s46->pfnInternalAllocation, _s46->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyShaderModule(VkDevice device, VkShaderModule shaderModule,
                                                            const VkAllocationCallbacks* pAllocator,
                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s47 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s47->pUserData, _s47->pfnAllocation, _s47->pfnReallocation, _s47->pfnFree,
                                            _s47->pfnInternalAllocation, _s47->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreatePipelineCache(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo,
                                                            const VkAllocationCallbacks* pAllocator,
                                                            VkPipelineCache* pPipelineCache, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s48 = pCreateInfo;
        skip |=
            ValidatePipelineCacheCreateInfo({}, _s48->sType, _s48->pNext, _s48->flags, _s48->initialDataSize, _s48->pInitialData);
    }
    if (pAllocator != nullptr) {
        const auto _s49 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s49->pUserData, _s49->pfnAllocation, _s49->pfnReallocation, _s49->pfnFree,
                                            _s49->pfnInternalAllocation, _s49->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyPipelineCache(VkDevice device, VkPipelineCache pipelineCache,
                                                             const VkAllocationCallbacks* pAllocator,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s50 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s50->pUserData, _s50->pfnAllocation, _s50->pfnReallocation, _s50->pfnFree,
                                            _s50->pfnInternalAllocation, _s50->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPipelineCacheData(VkDevice device, VkPipelineCache pipelineCache, size_t* pDataSize,
                                                             void* pData, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateMergePipelineCaches(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount,
                                                            const VkPipelineCache* pSrcCaches,
                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache,
                                                                uint32_t createInfoCount,
                                                                const VkGraphicsPipelineCreateInfo* pCreateInfos,
                                                                const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines,
                                                                const ErrorObject& _error_obj, void* validation_state) const {
    bool skip = ValidationStateTracker::PreCallValidateCreateGraphicsPipelines(
        device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines, _error_obj, validation_state);
    if (pCreateInfos != nullptr) {
        for (uint32_t _i51 = 0; _i51 < createInfoCount; ++_i51) {
            const auto _s52 = &pCreateInfos[_i51];
            skip |= ValidateGraphicsPipelineCreateInfo(
                {}, _s52->sType, _s52->pNext, _s52->flags, _s52->stageCount, _s52->pStages, _s52->pVertexInputState,
                _s52->pInputAssemblyState, _s52->pTessellationState, _s52->pViewportState, _s52->pRasterizationState,
                _s52->pMultisampleState, _s52->pDepthStencilState, _s52->pColorBlendState, _s52->pDynamicState, _s52->layout,
                _s52->renderPass, _s52->subpass, _s52->basePipelineHandle, _s52->basePipelineIndex);
        }
    }
    if (pAllocator != nullptr) {
        const auto _s53 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s53->pUserData, _s53->pfnAllocation, _s53->pfnReallocation, _s53->pfnFree,
                                            _s53->pfnInternalAllocation, _s53->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateComputePipelines(VkDevice device, VkPipelineCache pipelineCache,
                                                               uint32_t createInfoCount,
                                                               const VkComputePipelineCreateInfo* pCreateInfos,
                                                               const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines,
                                                               const ErrorObject& _error_obj, void* validation_state) const {
    bool skip = ValidationStateTracker::PreCallValidateCreateComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos,
                                                                              pAllocator, pPipelines, _error_obj, validation_state);
    if (pCreateInfos != nullptr) {
        for (uint32_t _i54 = 0; _i54 < createInfoCount; ++_i54) {
            const auto _s55 = &pCreateInfos[_i54];
            skip |= ValidateComputePipelineCreateInfo({}, _s55->sType, _s55->pNext, _s55->flags, _s55->stage, _s55->layout,
                                                      _s55->basePipelineHandle, _s55->basePipelineIndex);
        }
    }
    if (pAllocator != nullptr) {
        const auto _s56 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s56->pUserData, _s56->pfnAllocation, _s56->pfnReallocation, _s56->pfnFree,
                                            _s56->pfnInternalAllocation, _s56->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyPipeline(VkDevice device, VkPipeline pipeline,
                                                        const VkAllocationCallbacks* pAllocator,
                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s57 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s57->pUserData, _s57->pfnAllocation, _s57->pfnReallocation, _s57->pfnFree,
                                            _s57->pfnInternalAllocation, _s57->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreatePipelineLayout(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo,
                                                             const VkAllocationCallbacks* pAllocator,
                                                             VkPipelineLayout* pPipelineLayout,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s58 = pCreateInfo;
        skip |= ValidatePipelineLayoutCreateInfo({}, _s58->sType, _s58->pNext, _s58->flags, _s58->setLayoutCount, _s58->pSetLayouts,
                                                 _s58->pushConstantRangeCount, _s58->pPushConstantRanges);
    }
    if (pAllocator != nullptr) {
        const auto _s59 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s59->pUserData, _s59->pfnAllocation, _s59->pfnReallocation, _s59->pfnFree,
                                            _s59->pfnInternalAllocation, _s59->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyPipelineLayout(VkDevice device, VkPipelineLayout pipelineLayout,
                                                              const VkAllocationCallbacks* pAllocator,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s60 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s60->pUserData, _s60->pfnAllocation, _s60->pfnReallocation, _s60->pfnFree,
                                            _s60->pfnInternalAllocation, _s60->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateSampler(VkDevice device, const VkSamplerCreateInfo* pCreateInfo,
                                                      const VkAllocationCallbacks* pAllocator, VkSampler* pSampler,
                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s61 = pCreateInfo;
        skip |= ValidateSamplerCreateInfo(
            {}, _s61->sType, _s61->pNext, _s61->flags, _s61->magFilter, _s61->minFilter, _s61->mipmapMode, _s61->addressModeU,
            _s61->addressModeV, _s61->addressModeW, _s61->mipLodBias, _s61->anisotropyEnable, _s61->maxAnisotropy,
            _s61->compareEnable, _s61->compareOp, _s61->minLod, _s61->maxLod, _s61->borderColor, _s61->unnormalizedCoordinates);
    }
    if (pAllocator != nullptr) {
        const auto _s62 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s62->pUserData, _s62->pfnAllocation, _s62->pfnReallocation, _s62->pfnFree,
                                            _s62->pfnInternalAllocation, _s62->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroySampler(VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator,
                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s63 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s63->pUserData, _s63->pfnAllocation, _s63->pfnReallocation, _s63->pfnFree,
                                            _s63->pfnInternalAllocation, _s63->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateDescriptorSetLayout(VkDevice device,
                                                                  const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
                                                                  const VkAllocationCallbacks* pAllocator,
                                                                  VkDescriptorSetLayout* pSetLayout,
                                                                  const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s64 = pCreateInfo;
        skip |=
            ValidateDescriptorSetLayoutCreateInfo({}, _s64->sType, _s64->pNext, _s64->flags, _s64->bindingCount, _s64->pBindings);
    }
    if (pAllocator != nullptr) {
        const auto _s65 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s65->pUserData, _s65->pfnAllocation, _s65->pfnReallocation, _s65->pfnFree,
                                            _s65->pfnInternalAllocation, _s65->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyDescriptorSetLayout(VkDevice device, VkDescriptorSetLayout descriptorSetLayout,
                                                                   const VkAllocationCallbacks* pAllocator,
                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s66 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s66->pUserData, _s66->pfnAllocation, _s66->pfnReallocation, _s66->pfnFree,
                                            _s66->pfnInternalAllocation, _s66->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateDescriptorPool(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo,
                                                             const VkAllocationCallbacks* pAllocator,
                                                             VkDescriptorPool* pDescriptorPool,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s67 = pCreateInfo;
        skip |= ValidateDescriptorPoolCreateInfo({}, _s67->sType, _s67->pNext, _s67->flags, _s67->maxSets, _s67->poolSizeCount,
                                                 _s67->pPoolSizes);
    }
    if (pAllocator != nullptr) {
        const auto _s68 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s68->pUserData, _s68->pfnAllocation, _s68->pfnReallocation, _s68->pfnFree,
                                            _s68->pfnInternalAllocation, _s68->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool,
                                                              const VkAllocationCallbacks* pAllocator,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s69 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s69->pUserData, _s69->pfnAllocation, _s69->pfnReallocation, _s69->pfnFree,
                                            _s69->pfnInternalAllocation, _s69->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateResetDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool,
                                                            VkDescriptorPoolResetFlags flags, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateAllocateDescriptorSets(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo,
                                                               VkDescriptorSet* pDescriptorSets, const ErrorObject& _error_obj,
                                                               void* validation_state) const {
    bool skip = ValidationStateTracker::PreCallValidateAllocateDescriptorSets(device, pAllocateInfo, pDescriptorSets, _error_obj,
                                                                              validation_state);
    if (pAllocateInfo != nullptr) {
        const auto _s70 = pAllocateInfo;
        skip |= ValidateDescriptorSetAllocateInfo({}, _s70->sType, _s70->pNext, _s70->descriptorPool, _s70->descriptorSetCount,
                                                  _s70->pSetLayouts);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateFreeDescriptorSets(VkDevice device, VkDescriptorPool descriptorPool,
                                                           uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets,
                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateUpdateDescriptorSets(VkDevice device, uint32_t descriptorWriteCount,
                                                             const VkWriteDescriptorSet* pDescriptorWrites,
                                                             uint32_t descriptorCopyCount,
                                                             const VkCopyDescriptorSet* pDescriptorCopies,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pDescriptorWrites != nullptr) {
        for (uint32_t _i71 = 0; _i71 < descriptorWriteCount; ++_i71) {
            const auto _s72 = &pDescriptorWrites[_i71];
            skip |= ValidateWriteDescriptorSet({}, _s72->sType, _s72->pNext, _s72->dstSet, _s72->dstBinding, _s72->dstArrayElement,
                                               _s72->descriptorCount, _s72->descriptorType, _s72->pImageInfo, _s72->pBufferInfo,
                                               _s72->pTexelBufferView);
        }
    }
    if (pDescriptorCopies != nullptr) {
        for (uint32_t _i73 = 0; _i73 < descriptorCopyCount; ++_i73) {
            const auto _s74 = &pDescriptorCopies[_i73];
            skip |= ValidateCopyDescriptorSet({}, _s74->sType, _s74->pNext, _s74->srcSet, _s74->srcBinding, _s74->srcArrayElement,
                                              _s74->dstSet, _s74->dstBinding, _s74->dstArrayElement, _s74->descriptorCount);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateFramebuffer(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo,
                                                          const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s75 = pCreateInfo;
        skip |= ValidateFramebufferCreateInfo({}, _s75->sType, _s75->pNext, _s75->flags, _s75->renderPass, _s75->attachmentCount,
                                              _s75->pAttachments, _s75->width, _s75->height, _s75->layers);
    }
    if (pAllocator != nullptr) {
        const auto _s76 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s76->pUserData, _s76->pfnAllocation, _s76->pfnReallocation, _s76->pfnFree,
                                            _s76->pfnInternalAllocation, _s76->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyFramebuffer(VkDevice device, VkFramebuffer framebuffer,
                                                           const VkAllocationCallbacks* pAllocator,
                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s77 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s77->pUserData, _s77->pfnAllocation, _s77->pfnReallocation, _s77->pfnFree,
                                            _s77->pfnInternalAllocation, _s77->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateRenderPass(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo,
                                                         const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass,
                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s78 = pCreateInfo;
        skip |= ValidateRenderPassCreateInfo({}, _s78->sType, _s78->pNext, _s78->flags, _s78->attachmentCount, _s78->pAttachments,
                                             _s78->subpassCount, _s78->pSubpasses, _s78->dependencyCount, _s78->pDependencies);
    }
    if (pAllocator != nullptr) {
        const auto _s79 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s79->pUserData, _s79->pfnAllocation, _s79->pfnReallocation, _s79->pfnFree,
                                            _s79->pfnInternalAllocation, _s79->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyRenderPass(VkDevice device, VkRenderPass renderPass,
                                                          const VkAllocationCallbacks* pAllocator,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s80 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s80->pUserData, _s80->pfnAllocation, _s80->pfnReallocation, _s80->pfnFree,
                                            _s80->pfnInternalAllocation, _s80->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetRenderAreaGranularity(VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pGranularity != nullptr) {
        const auto _s81 = pGranularity;
        skip |= ValidateExtent2D({}, _s81->width, _s81->height);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateCommandPool(VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo,
                                                          const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s82 = pCreateInfo;
        skip |= ValidateCommandPoolCreateInfo({}, _s82->sType, _s82->pNext, _s82->flags, _s82->queueFamilyIndex);
    }
    if (pAllocator != nullptr) {
        const auto _s83 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s83->pUserData, _s83->pfnAllocation, _s83->pfnReallocation, _s83->pfnFree,
                                            _s83->pfnInternalAllocation, _s83->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyCommandPool(VkDevice device, VkCommandPool commandPool,
                                                           const VkAllocationCallbacks* pAllocator,
                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s84 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s84->pUserData, _s84->pfnAllocation, _s84->pfnReallocation, _s84->pfnFree,
                                            _s84->pfnInternalAllocation, _s84->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateResetCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags,
                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateAllocateCommandBuffers(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo,
                                                               VkCommandBuffer* pCommandBuffers,
                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocateInfo != nullptr) {
        const auto _s85 = pAllocateInfo;
        skip |= ValidateCommandBufferAllocateInfo({}, _s85->sType, _s85->pNext, _s85->commandPool, _s85->level,
                                                  _s85->commandBufferCount);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateFreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount,
                                                           const VkCommandBuffer* pCommandBuffers,
                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateBeginCommandBuffer(VkCommandBuffer commandBuffer,
                                                           const VkCommandBufferBeginInfo* pBeginInfo,
                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pBeginInfo != nullptr) {
        const auto _s86 = pBeginInfo;
        skip |= ValidateCommandBufferBeginInfo({}, _s86->sType, _s86->pNext, _s86->flags, _s86->pInheritanceInfo);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateEndCommandBuffer(VkCommandBuffer commandBuffer, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateResetCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags,
                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint,
                                                        VkPipeline pipeline, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport,
                                                       uint32_t viewportCount, const VkViewport* pViewports,
                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pViewports != nullptr) {
        for (uint32_t _i87 = 0; _i87 < viewportCount; ++_i87) {
            const auto _s88 = &pViewports[_i87];
            skip |=
                ValidateViewport(_carryOverObjects, _s88->x, _s88->y, _s88->width, _s88->height, _s88->minDepth, _s88->maxDepth);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount,
                                                      const VkRect2D* pScissors, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pScissors != nullptr) {
        for (uint32_t _i89 = 0; _i89 < scissorCount; ++_i89) {
            const auto _s90 = &pScissors[_i89];
            skip |= ValidateRect2D(_carryOverObjects, _s90->offset, _s90->extent);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth,
                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetDepthBias(VkCommandBuffer commandBuffer, float depthBiasConstantFactor,
                                                        float depthBiasClamp, float depthBiasSlopeFactor,
                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetBlendConstants(VkCommandBuffer commandBuffer, const float blendConstants[4],
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetDepthBounds(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetStencilCompareMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask,
                                                                 uint32_t compareMask, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetStencilWriteMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask,
                                                               uint32_t writeMask, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask,
                                                               uint32_t reference, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint,
                                                              VkPipelineLayout layout, uint32_t firstSet,
                                                              uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets,
                                                              uint32_t dynamicOffsetCount, const uint32_t* pDynamicOffsets,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                           VkIndexType indexType, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding,
                                                             uint32_t bindingCount, const VkBuffer* pBuffers,
                                                             const VkDeviceSize* pOffsets, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount,
                                                uint32_t firstVertex, uint32_t firstInstance, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount,
                                                       uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance,
                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                        uint32_t drawCount, uint32_t stride, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                               uint32_t drawCount, uint32_t stride,
                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDispatch(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY,
                                                    uint32_t groupCountZ, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer,
                                                      uint32_t regionCount, const VkBufferCopy* pRegions,
                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pRegions != nullptr) {
        for (uint32_t _i91 = 0; _i91 < regionCount; ++_i91) {
            const auto _s92 = &pRegions[_i91];
            skip |= ValidateBufferCopy(_carryOverObjects, _s92->srcOffset, _s92->dstOffset, _s92->size);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout,
                                                     VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount,
                                                     const VkImageCopy* pRegions, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pRegions != nullptr) {
        for (uint32_t _i93 = 0; _i93 < regionCount; ++_i93) {
            const auto _s94 = &pRegions[_i93];
            skip |= ValidateImageCopy(_carryOverObjects, _s94->srcSubresource, _s94->srcOffset, _s94->dstSubresource,
                                      _s94->dstOffset, _s94->extent);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout,
                                                     VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount,
                                                     const VkImageBlit* pRegions, VkFilter filter,
                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pRegions != nullptr) {
        for (uint32_t _i95 = 0; _i95 < regionCount; ++_i95) {
            const auto _s96 = &pRegions[_i95];
            skip |= ValidateImageBlit(_carryOverObjects, _s96->srcSubresource, _s96->srcOffsets, _s96->dstSubresource,
                                      _s96->dstOffsets);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage,
                                                             VkImageLayout dstImageLayout, uint32_t regionCount,
                                                             const VkBufferImageCopy* pRegions,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pRegions != nullptr) {
        for (uint32_t _i97 = 0; _i97 < regionCount; ++_i97) {
            const auto _s98 = &pRegions[_i97];
            skip |= ValidateBufferImageCopy(_carryOverObjects, _s98->bufferOffset, _s98->bufferRowLength, _s98->bufferImageHeight,
                                            _s98->imageSubresource, _s98->imageOffset, _s98->imageExtent);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage,
                                                             VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount,
                                                             const VkBufferImageCopy* pRegions,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pRegions != nullptr) {
        for (uint32_t _i99 = 0; _i99 < regionCount; ++_i99) {
            const auto _s100 = &pRegions[_i99];
            skip |=
                ValidateBufferImageCopy(_carryOverObjects, _s100->bufferOffset, _s100->bufferRowLength, _s100->bufferImageHeight,
                                        _s100->imageSubresource, _s100->imageOffset, _s100->imageExtent);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset,
                                                        VkDeviceSize dataSize, const void* pData,
                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset,
                                                      VkDeviceSize size, uint32_t data, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout,
                                                           const VkClearColorValue* pColor, uint32_t rangeCount,
                                                           const VkImageSubresourceRange* pRanges,
                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pColor != nullptr) {
        const auto _s101 = pColor;
        skip |= ValidateClearColorValue(_carryOverObjects, _s101->float32, _s101->int32, _s101->uint32);
    }
    if (pRanges != nullptr) {
        for (uint32_t _i102 = 0; _i102 < rangeCount; ++_i102) {
            const auto _s103 = &pRanges[_i102];
            skip |= ValidateImageSubresourceRange(_carryOverObjects, _s103->aspectMask, _s103->baseMipLevel, _s103->levelCount,
                                                  _s103->baseArrayLayer, _s103->layerCount);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdClearDepthStencilImage(VkCommandBuffer commandBuffer, VkImage image,
                                                                  VkImageLayout imageLayout,
                                                                  const VkClearDepthStencilValue* pDepthStencil,
                                                                  uint32_t rangeCount, const VkImageSubresourceRange* pRanges,
                                                                  const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pDepthStencil != nullptr) {
        const auto _s104 = pDepthStencil;
        skip |= ValidateClearDepthStencilValue(_carryOverObjects, _s104->depth, _s104->stencil);
    }
    if (pRanges != nullptr) {
        for (uint32_t _i105 = 0; _i105 < rangeCount; ++_i105) {
            const auto _s106 = &pRanges[_i105];
            skip |= ValidateImageSubresourceRange(_carryOverObjects, _s106->aspectMask, _s106->baseMipLevel, _s106->levelCount,
                                                  _s106->baseArrayLayer, _s106->layerCount);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount,
                                                            const VkClearAttachment* pAttachments, uint32_t rectCount,
                                                            const VkClearRect* pRects, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pAttachments != nullptr) {
        for (uint32_t _i107 = 0; _i107 < attachmentCount; ++_i107) {
            const auto _s108 = &pAttachments[_i107];
            skip |= ValidateClearAttachment(_carryOverObjects, _s108->aspectMask, _s108->colorAttachment, _s108->clearValue);
        }
    }
    if (pRects != nullptr) {
        for (uint32_t _i109 = 0; _i109 < rectCount; ++_i109) {
            const auto _s110 = &pRects[_i109];
            skip |= ValidateClearRect(_carryOverObjects, _s110->rect, _s110->baseArrayLayer, _s110->layerCount);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdResolveImage(VkCommandBuffer commandBuffer, VkImage srcImage,
                                                        VkImageLayout srcImageLayout, VkImage dstImage,
                                                        VkImageLayout dstImageLayout, uint32_t regionCount,
                                                        const VkImageResolve* pRegions, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pRegions != nullptr) {
        for (uint32_t _i111 = 0; _i111 < regionCount; ++_i111) {
            const auto _s112 = &pRegions[_i111];
            skip |= ValidateImageResolve(_carryOverObjects, _s112->srcSubresource, _s112->srcOffset, _s112->dstSubresource,
                                         _s112->dstOffset, _s112->extent);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask,
                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdResetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask,
                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdWaitEvents(
    VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask,
    VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers,
    uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount,
    const VkImageMemoryBarrier* pImageMemoryBarriers, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pMemoryBarriers != nullptr) {
        for (uint32_t _i113 = 0; _i113 < memoryBarrierCount; ++_i113) {
            const auto _s114 = &pMemoryBarriers[_i113];
            skip |=
                ValidateMemoryBarrier(_carryOverObjects, _s114->sType, _s114->pNext, _s114->srcAccessMask, _s114->dstAccessMask);
        }
    }
    if (pBufferMemoryBarriers != nullptr) {
        for (uint32_t _i115 = 0; _i115 < bufferMemoryBarrierCount; ++_i115) {
            const auto _s116 = &pBufferMemoryBarriers[_i115];
            skip |= ValidateBufferMemoryBarrier(_carryOverObjects, _s116->sType, _s116->pNext, _s116->srcAccessMask,
                                                _s116->dstAccessMask, _s116->srcQueueFamilyIndex, _s116->dstQueueFamilyIndex,
                                                _s116->buffer, _s116->offset, _s116->size);
        }
    }
    if (pImageMemoryBarriers != nullptr) {
        for (uint32_t _i117 = 0; _i117 < imageMemoryBarrierCount; ++_i117) {
            const auto _s118 = &pImageMemoryBarriers[_i117];
            skip |= ValidateImageMemoryBarrier(_carryOverObjects, _s118->sType, _s118->pNext, _s118->srcAccessMask,
                                               _s118->dstAccessMask, _s118->oldLayout, _s118->newLayout, _s118->srcQueueFamilyIndex,
                                               _s118->dstQueueFamilyIndex, _s118->image, _s118->subresourceRange);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdPipelineBarrier(
    VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask,
    VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers,
    uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount,
    const VkImageMemoryBarrier* pImageMemoryBarriers, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pMemoryBarriers != nullptr) {
        for (uint32_t _i119 = 0; _i119 < memoryBarrierCount; ++_i119) {
            const auto _s120 = &pMemoryBarriers[_i119];
            skip |=
                ValidateMemoryBarrier(_carryOverObjects, _s120->sType, _s120->pNext, _s120->srcAccessMask, _s120->dstAccessMask);
        }
    }
    if (pBufferMemoryBarriers != nullptr) {
        for (uint32_t _i121 = 0; _i121 < bufferMemoryBarrierCount; ++_i121) {
            const auto _s122 = &pBufferMemoryBarriers[_i121];
            skip |= ValidateBufferMemoryBarrier(_carryOverObjects, _s122->sType, _s122->pNext, _s122->srcAccessMask,
                                                _s122->dstAccessMask, _s122->srcQueueFamilyIndex, _s122->dstQueueFamilyIndex,
                                                _s122->buffer, _s122->offset, _s122->size);
        }
    }
    if (pImageMemoryBarriers != nullptr) {
        for (uint32_t _i123 = 0; _i123 < imageMemoryBarrierCount; ++_i123) {
            const auto _s124 = &pImageMemoryBarriers[_i123];
            skip |= ValidateImageMemoryBarrier(_carryOverObjects, _s124->sType, _s124->pNext, _s124->srcAccessMask,
                                               _s124->dstAccessMask, _s124->oldLayout, _s124->newLayout, _s124->srcQueueFamilyIndex,
                                               _s124->dstQueueFamilyIndex, _s124->image, _s124->subresourceRange);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBeginQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query,
                                                      VkQueryControlFlags flags, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdEndQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query,
                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery,
                                                          uint32_t queryCount, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage,
                                                          VkQueryPool queryPool, uint32_t query,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyQueryPoolResults(VkCommandBuffer commandBuffer, VkQueryPool queryPool,
                                                                uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer,
                                                                VkDeviceSize dstOffset, VkDeviceSize stride,
                                                                VkQueryResultFlags flags, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout,
                                                         VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size,
                                                         const void* pValues, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBeginRenderPass(VkCommandBuffer commandBuffer,
                                                           const VkRenderPassBeginInfo* pRenderPassBegin,
                                                           VkSubpassContents contents, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pRenderPassBegin != nullptr) {
        const auto _s125 = pRenderPassBegin;
        skip |= ValidateRenderPassBeginInfo(_carryOverObjects, _s125->sType, _s125->pNext, _s125->renderPass, _s125->framebuffer,
                                            _s125->renderArea, _s125->clearValueCount, _s125->pClearValues);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdNextSubpass(VkCommandBuffer commandBuffer, VkSubpassContents contents,
                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdEndRenderPass(VkCommandBuffer commandBuffer, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount,
                                                           const VkCommandBuffer* pCommandBuffers,
                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateBindBufferMemory2(VkDevice device, uint32_t bindInfoCount,
                                                          const VkBindBufferMemoryInfo* pBindInfos,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pBindInfos != nullptr) {
        for (uint32_t _i126 = 0; _i126 < bindInfoCount; ++_i126) {
            const auto _s127 = &pBindInfos[_i126];
            skip |= ValidateBindBufferMemoryInfo({}, _s127->sType, _s127->pNext, _s127->buffer, _s127->memory, _s127->memoryOffset);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateBindImageMemory2(VkDevice device, uint32_t bindInfoCount,
                                                         const VkBindImageMemoryInfo* pBindInfos,
                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pBindInfos != nullptr) {
        for (uint32_t _i128 = 0; _i128 < bindInfoCount; ++_i128) {
            const auto _s129 = &pBindInfos[_i128];
            skip |= ValidateBindImageMemoryInfo({}, _s129->sType, _s129->pNext, _s129->image, _s129->memory, _s129->memoryOffset);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDeviceGroupPeerMemoryFeatures(VkDevice device, uint32_t heapIndex,
                                                                         uint32_t localDeviceIndex, uint32_t remoteDeviceIndex,
                                                                         VkPeerMemoryFeatureFlags* pPeerMemoryFeatures,
                                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetDeviceMask(VkCommandBuffer commandBuffer, uint32_t deviceMask,
                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDispatchBase(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY,
                                                        uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY,
                                                        uint32_t groupCountZ, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateEnumeratePhysicalDeviceGroups(
    VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetImageMemoryRequirements2(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo,
                                                                    VkMemoryRequirements2* pMemoryRequirements,
                                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s130 = pInfo;
        skip |= ValidateImageMemoryRequirementsInfo2({}, _s130->sType, _s130->pNext, _s130->image);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetBufferMemoryRequirements2(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo,
                                                                     VkMemoryRequirements2* pMemoryRequirements,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s131 = pInfo;
        skip |= ValidateBufferMemoryRequirementsInfo2({}, _s131->sType, _s131->pNext, _s131->buffer);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetImageSparseMemoryRequirements2(
    VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2* pSparseMemoryRequirements, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s132 = pInfo;
        skip |= ValidateImageSparseMemoryRequirementsInfo2({}, _s132->sType, _s132->pNext, _s132->image);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceFeatures2(VkPhysicalDevice physicalDevice,
                                                                   VkPhysicalDeviceFeatures2* pFeatures,
                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pFeatures != nullptr) {
        const auto _s133 = pFeatures;
        skip |= ValidatePhysicalDeviceFeatures2({}, _s133->sType, _s133->pNext, _s133->features);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceProperties2(VkPhysicalDevice physicalDevice,
                                                                     VkPhysicalDeviceProperties2* pProperties,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceFormatProperties2(VkPhysicalDevice physicalDevice, VkFormat format,
                                                                           VkFormatProperties2* pFormatProperties,
                                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceImageFormatProperties2(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo,
    VkImageFormatProperties2* pImageFormatProperties, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pImageFormatInfo != nullptr) {
        const auto _s134 = pImageFormatInfo;
        skip |= ValidatePhysicalDeviceImageFormatInfo2({}, _s134->sType, _s134->pNext, _s134->format, _s134->type, _s134->tiling,
                                                       _s134->usage, _s134->flags);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceQueueFamilyProperties2(VkPhysicalDevice physicalDevice,
                                                                                uint32_t* pQueueFamilyPropertyCount,
                                                                                VkQueueFamilyProperties2* pQueueFamilyProperties,
                                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceMemoryProperties2(VkPhysicalDevice physicalDevice,
                                                                           VkPhysicalDeviceMemoryProperties2* pMemoryProperties,
                                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceSparseImageFormatProperties2(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount,
    VkSparseImageFormatProperties2* pProperties, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pFormatInfo != nullptr) {
        const auto _s135 = pFormatInfo;
        skip |= ValidatePhysicalDeviceSparseImageFormatInfo2({}, _s135->sType, _s135->pNext, _s135->format, _s135->type,
                                                             _s135->samples, _s135->usage, _s135->tiling);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateTrimCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags,
                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDeviceQueue2(VkDevice device, const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue,
                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pQueueInfo != nullptr) {
        const auto _s136 = pQueueInfo;
        skip |= ValidateDeviceQueueInfo2({}, _s136->sType, _s136->pNext, _s136->flags, _s136->queueFamilyIndex, _s136->queueIndex);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateSamplerYcbcrConversion(VkDevice device,
                                                                     const VkSamplerYcbcrConversionCreateInfo* pCreateInfo,
                                                                     const VkAllocationCallbacks* pAllocator,
                                                                     VkSamplerYcbcrConversion* pYcbcrConversion,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s137 = pCreateInfo;
        skip |= ValidateSamplerYcbcrConversionCreateInfo(
            {}, _s137->sType, _s137->pNext, _s137->format, _s137->ycbcrModel, _s137->ycbcrRange, _s137->components,
            _s137->xChromaOffset, _s137->yChromaOffset, _s137->chromaFilter, _s137->forceExplicitReconstruction);
    }
    if (pAllocator != nullptr) {
        const auto _s138 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s138->pUserData, _s138->pfnAllocation, _s138->pfnReallocation, _s138->pfnFree,
                                            _s138->pfnInternalAllocation, _s138->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroySamplerYcbcrConversion(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion,
                                                                      const VkAllocationCallbacks* pAllocator,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s139 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s139->pUserData, _s139->pfnAllocation, _s139->pfnReallocation, _s139->pfnFree,
                                            _s139->pfnInternalAllocation, _s139->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateDescriptorUpdateTemplate(VkDevice device,
                                                                       const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo,
                                                                       const VkAllocationCallbacks* pAllocator,
                                                                       VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate,
                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s140 = pCreateInfo;
        skip |= ValidateDescriptorUpdateTemplateCreateInfo(
            {}, _s140->sType, _s140->pNext, _s140->flags, _s140->descriptorUpdateEntryCount, _s140->pDescriptorUpdateEntries,
            _s140->templateType, _s140->descriptorSetLayout, _s140->pipelineBindPoint, _s140->pipelineLayout, _s140->set);
    }
    if (pAllocator != nullptr) {
        const auto _s141 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s141->pUserData, _s141->pfnAllocation, _s141->pfnReallocation, _s141->pfnFree,
                                            _s141->pfnInternalAllocation, _s141->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyDescriptorUpdateTemplate(VkDevice device,
                                                                        VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                                                        const VkAllocationCallbacks* pAllocator,
                                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s142 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s142->pUserData, _s142->pfnAllocation, _s142->pfnReallocation, _s142->pfnFree,
                                            _s142->pfnInternalAllocation, _s142->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateUpdateDescriptorSetWithTemplate(VkDevice device, VkDescriptorSet descriptorSet,
                                                                        VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                                                        const void* pData, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceExternalBufferProperties(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo,
    VkExternalBufferProperties* pExternalBufferProperties, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pExternalBufferInfo != nullptr) {
        const auto _s143 = pExternalBufferInfo;
        skip |=
            ValidatePhysicalDeviceExternalBufferInfo({}, _s143->sType, _s143->pNext, _s143->flags, _s143->usage, _s143->handleType);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceExternalFenceProperties(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo,
    VkExternalFenceProperties* pExternalFenceProperties, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pExternalFenceInfo != nullptr) {
        const auto _s144 = pExternalFenceInfo;
        skip |= ValidatePhysicalDeviceExternalFenceInfo({}, _s144->sType, _s144->pNext, _s144->handleType);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceExternalSemaphoreProperties(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo,
    VkExternalSemaphoreProperties* pExternalSemaphoreProperties, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pExternalSemaphoreInfo != nullptr) {
        const auto _s145 = pExternalSemaphoreInfo;
        skip |= ValidatePhysicalDeviceExternalSemaphoreInfo({}, _s145->sType, _s145->pNext, _s145->handleType);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDescriptorSetLayoutSupport(VkDevice device,
                                                                      const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
                                                                      VkDescriptorSetLayoutSupport* pSupport,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s146 = pCreateInfo;
        skip |= ValidateDescriptorSetLayoutCreateInfo({}, _s146->sType, _s146->pNext, _s146->flags, _s146->bindingCount,
                                                      _s146->pBindings);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDrawIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                             VkBuffer countBuffer, VkDeviceSize countBufferOffset,
                                                             uint32_t maxDrawCount, uint32_t stride,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDrawIndexedIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer,
                                                                    VkDeviceSize offset, VkBuffer countBuffer,
                                                                    VkDeviceSize countBufferOffset, uint32_t maxDrawCount,
                                                                    uint32_t stride, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateRenderPass2(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo,
                                                          const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s147 = pCreateInfo;
        skip |= ValidateRenderPassCreateInfo2({}, _s147->sType, _s147->pNext, _s147->flags, _s147->attachmentCount,
                                              _s147->pAttachments, _s147->subpassCount, _s147->pSubpasses, _s147->dependencyCount,
                                              _s147->pDependencies, _s147->correlatedViewMaskCount, _s147->pCorrelatedViewMasks);
    }
    if (pAllocator != nullptr) {
        const auto _s148 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s148->pUserData, _s148->pfnAllocation, _s148->pfnReallocation, _s148->pfnFree,
                                            _s148->pfnInternalAllocation, _s148->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBeginRenderPass2(VkCommandBuffer commandBuffer,
                                                            const VkRenderPassBeginInfo* pRenderPassBegin,
                                                            const VkSubpassBeginInfo* pSubpassBeginInfo,
                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pRenderPassBegin != nullptr) {
        const auto _s149 = pRenderPassBegin;
        skip |= ValidateRenderPassBeginInfo(_carryOverObjects, _s149->sType, _s149->pNext, _s149->renderPass, _s149->framebuffer,
                                            _s149->renderArea, _s149->clearValueCount, _s149->pClearValues);
    }
    if (pSubpassBeginInfo != nullptr) {
        const auto _s150 = pSubpassBeginInfo;
        skip |= ValidateSubpassBeginInfo(_carryOverObjects, _s150->sType, _s150->pNext, _s150->contents);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdNextSubpass2(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo* pSubpassBeginInfo,
                                                        const VkSubpassEndInfo* pSubpassEndInfo,
                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pSubpassBeginInfo != nullptr) {
        const auto _s151 = pSubpassBeginInfo;
        skip |= ValidateSubpassBeginInfo(_carryOverObjects, _s151->sType, _s151->pNext, _s151->contents);
    }
    if (pSubpassEndInfo != nullptr) {
        const auto _s152 = pSubpassEndInfo;
        skip |= ValidateSubpassEndInfo(_carryOverObjects, _s152->sType, _s152->pNext);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdEndRenderPass2(VkCommandBuffer commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pSubpassEndInfo != nullptr) {
        const auto _s153 = pSubpassEndInfo;
        skip |= ValidateSubpassEndInfo(_carryOverObjects, _s153->sType, _s153->pNext);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateResetQueryPool(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery,
                                                       uint32_t queryCount, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetSemaphoreCounterValue(VkDevice device, VkSemaphore semaphore, uint64_t* pValue,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateWaitSemaphores(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout,
                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pWaitInfo != nullptr) {
        const auto _s154 = pWaitInfo;
        skip |= ValidateSemaphoreWaitInfo({}, _s154->sType, _s154->pNext, _s154->flags, _s154->semaphoreCount, _s154->pSemaphores,
                                          _s154->pValues);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateSignalSemaphore(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo,
                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pSignalInfo != nullptr) {
        const auto _s155 = pSignalInfo;
        skip |= ValidateSemaphoreSignalInfo({}, _s155->sType, _s155->pNext, _s155->semaphore, _s155->value);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetBufferDeviceAddress(VkDevice device, const VkBufferDeviceAddressInfo* pInfo,
                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s156 = pInfo;
        skip |= ValidateBufferDeviceAddressInfo({}, _s156->sType, _s156->pNext, _s156->buffer);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetBufferOpaqueCaptureAddress(VkDevice device, const VkBufferDeviceAddressInfo* pInfo,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s157 = pInfo;
        skip |= ValidateBufferDeviceAddressInfo({}, _s157->sType, _s157->pNext, _s157->buffer);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDeviceMemoryOpaqueCaptureAddress(VkDevice device,
                                                                            const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo,
                                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s158 = pInfo;
        skip |= ValidateDeviceMemoryOpaqueCaptureAddressInfo({}, _s158->sType, _s158->pNext, _s158->memory);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceToolProperties(VkPhysicalDevice physicalDevice, uint32_t* pToolCount,
                                                                        VkPhysicalDeviceToolProperties* pToolProperties,
                                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCreatePrivateDataSlot(VkDevice device, const VkPrivateDataSlotCreateInfo* pCreateInfo,
                                                              const VkAllocationCallbacks* pAllocator,
                                                              VkPrivateDataSlot* pPrivateDataSlot,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s159 = pCreateInfo;
        skip |= ValidatePrivateDataSlotCreateInfo({}, _s159->sType, _s159->pNext, _s159->flags);
    }
    if (pAllocator != nullptr) {
        const auto _s160 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s160->pUserData, _s160->pfnAllocation, _s160->pfnReallocation, _s160->pfnFree,
                                            _s160->pfnInternalAllocation, _s160->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyPrivateDataSlot(VkDevice device, VkPrivateDataSlot privateDataSlot,
                                                               const VkAllocationCallbacks* pAllocator,
                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s161 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s161->pUserData, _s161->pfnAllocation, _s161->pfnReallocation, _s161->pfnFree,
                                            _s161->pfnInternalAllocation, _s161->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateSetPrivateData(VkDevice device, VkObjectType objectType, uint64_t objectHandle,
                                                       VkPrivateDataSlot privateDataSlot, uint64_t data,
                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPrivateData(VkDevice device, VkObjectType objectType, uint64_t objectHandle,
                                                       VkPrivateDataSlot privateDataSlot, uint64_t* pData,
                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetEvent2(VkCommandBuffer commandBuffer, VkEvent event,
                                                     const VkDependencyInfo* pDependencyInfo, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pDependencyInfo != nullptr) {
        const auto _s162 = pDependencyInfo;
        skip |= ValidateDependencyInfo(_carryOverObjects, _s162->sType, _s162->pNext, _s162->dependencyFlags,
                                       _s162->memoryBarrierCount, _s162->pMemoryBarriers, _s162->bufferMemoryBarrierCount,
                                       _s162->pBufferMemoryBarriers, _s162->imageMemoryBarrierCount, _s162->pImageMemoryBarriers);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdResetEvent2(VkCommandBuffer commandBuffer, VkEvent event,
                                                       VkPipelineStageFlags2 stageMask, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdWaitEvents2(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents,
                                                       const VkDependencyInfo* pDependencyInfos,
                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pDependencyInfos != nullptr) {
        for (uint32_t _i163 = 0; _i163 < eventCount; ++_i163) {
            const auto _s164 = &pDependencyInfos[_i163];
            skip |=
                ValidateDependencyInfo(_carryOverObjects, _s164->sType, _s164->pNext, _s164->dependencyFlags,
                                       _s164->memoryBarrierCount, _s164->pMemoryBarriers, _s164->bufferMemoryBarrierCount,
                                       _s164->pBufferMemoryBarriers, _s164->imageMemoryBarrierCount, _s164->pImageMemoryBarriers);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdPipelineBarrier2(VkCommandBuffer commandBuffer, const VkDependencyInfo* pDependencyInfo,
                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pDependencyInfo != nullptr) {
        const auto _s165 = pDependencyInfo;
        skip |= ValidateDependencyInfo(_carryOverObjects, _s165->sType, _s165->pNext, _s165->dependencyFlags,
                                       _s165->memoryBarrierCount, _s165->pMemoryBarriers, _s165->bufferMemoryBarrierCount,
                                       _s165->pBufferMemoryBarriers, _s165->imageMemoryBarrierCount, _s165->pImageMemoryBarriers);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdWriteTimestamp2(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage,
                                                           VkQueryPool queryPool, uint32_t query,
                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateQueueSubmit2(VkQueue queue, uint32_t submitCount, const VkSubmitInfo2* pSubmits,
                                                     VkFence fence, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pSubmits != nullptr) {
        for (uint32_t _i166 = 0; _i166 < submitCount; ++_i166) {
            const auto _s167 = &pSubmits[_i166];
            skip |= ValidateSubmitInfo2({}, _s167->sType, _s167->pNext, _s167->flags, _s167->waitSemaphoreInfoCount,
                                        _s167->pWaitSemaphoreInfos, _s167->commandBufferInfoCount, _s167->pCommandBufferInfos,
                                        _s167->signalSemaphoreInfoCount, _s167->pSignalSemaphoreInfos);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyBuffer2(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2* pCopyBufferInfo,
                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pCopyBufferInfo != nullptr) {
        const auto _s168 = pCopyBufferInfo;
        skip |= ValidateCopyBufferInfo2(_carryOverObjects, _s168->sType, _s168->pNext, _s168->srcBuffer, _s168->dstBuffer,
                                        _s168->regionCount, _s168->pRegions);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyImage2(VkCommandBuffer commandBuffer, const VkCopyImageInfo2* pCopyImageInfo,
                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pCopyImageInfo != nullptr) {
        const auto _s169 = pCopyImageInfo;
        skip |= ValidateCopyImageInfo2(_carryOverObjects, _s169->sType, _s169->pNext, _s169->srcImage, _s169->srcImageLayout,
                                       _s169->dstImage, _s169->dstImageLayout, _s169->regionCount, _s169->pRegions);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyBufferToImage2(VkCommandBuffer commandBuffer,
                                                              const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pCopyBufferToImageInfo != nullptr) {
        const auto _s170 = pCopyBufferToImageInfo;
        skip |= ValidateCopyBufferToImageInfo2(_carryOverObjects, _s170->sType, _s170->pNext, _s170->srcBuffer, _s170->dstImage,
                                               _s170->dstImageLayout, _s170->regionCount, _s170->pRegions);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyImageToBuffer2(VkCommandBuffer commandBuffer,
                                                              const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pCopyImageToBufferInfo != nullptr) {
        const auto _s171 = pCopyImageToBufferInfo;
        skip |= ValidateCopyImageToBufferInfo2(_carryOverObjects, _s171->sType, _s171->pNext, _s171->srcImage,
                                               _s171->srcImageLayout, _s171->dstBuffer, _s171->regionCount, _s171->pRegions);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBlitImage2(VkCommandBuffer commandBuffer, const VkBlitImageInfo2* pBlitImageInfo,
                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pBlitImageInfo != nullptr) {
        const auto _s172 = pBlitImageInfo;
        skip |= ValidateBlitImageInfo2(_carryOverObjects, _s172->sType, _s172->pNext, _s172->srcImage, _s172->srcImageLayout,
                                       _s172->dstImage, _s172->dstImageLayout, _s172->regionCount, _s172->pRegions, _s172->filter);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdResolveImage2(VkCommandBuffer commandBuffer,
                                                         const VkResolveImageInfo2* pResolveImageInfo,
                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pResolveImageInfo != nullptr) {
        const auto _s173 = pResolveImageInfo;
        skip |= ValidateResolveImageInfo2(_carryOverObjects, _s173->sType, _s173->pNext, _s173->srcImage, _s173->srcImageLayout,
                                          _s173->dstImage, _s173->dstImageLayout, _s173->regionCount, _s173->pRegions);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBeginRendering(VkCommandBuffer commandBuffer, const VkRenderingInfo* pRenderingInfo,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pRenderingInfo != nullptr) {
        const auto _s174 = pRenderingInfo;
        skip |= ValidateRenderingInfo(_carryOverObjects, _s174->sType, _s174->pNext, _s174->flags, _s174->renderArea,
                                      _s174->layerCount, _s174->viewMask, _s174->colorAttachmentCount, _s174->pColorAttachments,
                                      _s174->pDepthAttachment, _s174->pStencilAttachment);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdEndRendering(VkCommandBuffer commandBuffer, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetCullMode(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode,
                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetFrontFace(VkCommandBuffer commandBuffer, VkFrontFace frontFace,
                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetPrimitiveTopology(VkCommandBuffer commandBuffer,
                                                                VkPrimitiveTopology primitiveTopology,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetViewportWithCount(VkCommandBuffer commandBuffer, uint32_t viewportCount,
                                                                const VkViewport* pViewports, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pViewports != nullptr) {
        for (uint32_t _i175 = 0; _i175 < viewportCount; ++_i175) {
            const auto _s176 = &pViewports[_i175];
            skip |= ValidateViewport(_carryOverObjects, _s176->x, _s176->y, _s176->width, _s176->height, _s176->minDepth,
                                     _s176->maxDepth);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetScissorWithCount(VkCommandBuffer commandBuffer, uint32_t scissorCount,
                                                               const VkRect2D* pScissors, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pScissors != nullptr) {
        for (uint32_t _i177 = 0; _i177 < scissorCount; ++_i177) {
            const auto _s178 = &pScissors[_i177];
            skip |= ValidateRect2D(_carryOverObjects, _s178->offset, _s178->extent);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBindVertexBuffers2(VkCommandBuffer commandBuffer, uint32_t firstBinding,
                                                              uint32_t bindingCount, const VkBuffer* pBuffers,
                                                              const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes,
                                                              const VkDeviceSize* pStrides, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetDepthTestEnable(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetDepthWriteEnable(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable,
                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetDepthCompareOp(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetDepthBoundsTestEnable(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable,
                                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetStencilTestEnable(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetStencilOp(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask,
                                                        VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp,
                                                        VkCompareOp compareOp, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetRasterizerDiscardEnable(VkCommandBuffer commandBuffer,
                                                                      VkBool32 rasterizerDiscardEnable,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetDepthBiasEnable(VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetPrimitiveRestartEnable(VkCommandBuffer commandBuffer, VkBool32 primitiveRestartEnable,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDeviceBufferMemoryRequirements(VkDevice device,
                                                                          const VkDeviceBufferMemoryRequirements* pInfo,
                                                                          VkMemoryRequirements2* pMemoryRequirements,
                                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s179 = pInfo;
        skip |= ValidateDeviceBufferMemoryRequirements({}, _s179->sType, _s179->pNext, _s179->pCreateInfo);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDeviceImageMemoryRequirements(VkDevice device,
                                                                         const VkDeviceImageMemoryRequirements* pInfo,
                                                                         VkMemoryRequirements2* pMemoryRequirements,
                                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s180 = pInfo;
        skip |= ValidateDeviceImageMemoryRequirements({}, _s180->sType, _s180->pNext, _s180->pCreateInfo, _s180->planeAspect);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDeviceImageSparseMemoryRequirements(
    VkDevice device, const VkDeviceImageMemoryRequirements* pInfo, uint32_t* pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2* pSparseMemoryRequirements, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s181 = pInfo;
        skip |= ValidateDeviceImageMemoryRequirements({}, _s181->sType, _s181->pNext, _s181->pCreateInfo, _s181->planeAspect);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroySurfaceKHR(VkInstance instance, VkSurfaceKHR surface,
                                                          const VkAllocationCallbacks* pAllocator,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s182 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s182->pUserData, _s182->pfnAllocation, _s182->pfnReallocation, _s182->pfnFree,
                                            _s182->pfnInternalAllocation, _s182->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceSurfaceSupportKHR(VkPhysicalDevice physicalDevice,
                                                                           uint32_t queueFamilyIndex, VkSurfaceKHR surface,
                                                                           VkBool32* pSupported,
                                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceSurfaceCapabilitiesKHR(VkPhysicalDevice physicalDevice,
                                                                                VkSurfaceKHR surface,
                                                                                VkSurfaceCapabilitiesKHR* pSurfaceCapabilities,
                                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceSurfaceFormatsKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface,
                                                                           uint32_t* pSurfaceFormatCount,
                                                                           VkSurfaceFormatKHR* pSurfaceFormats,
                                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceSurfacePresentModesKHR(VkPhysicalDevice physicalDevice,
                                                                                VkSurfaceKHR surface, uint32_t* pPresentModeCount,
                                                                                VkPresentModeKHR* pPresentModes,
                                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateSwapchainKHR(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo,
                                                           const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain,
                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s183 = pCreateInfo;
        skip |= ValidateSwapchainCreateInfoKHR({}, _s183->sType, _s183->pNext, _s183->flags, _s183->surface, _s183->minImageCount,
                                               _s183->imageFormat, _s183->imageColorSpace, _s183->imageExtent,
                                               _s183->imageArrayLayers, _s183->imageUsage, _s183->imageSharingMode,
                                               _s183->queueFamilyIndexCount, _s183->pQueueFamilyIndices, _s183->preTransform,
                                               _s183->compositeAlpha, _s183->presentMode, _s183->clipped, _s183->oldSwapchain);
    }
    if (pAllocator != nullptr) {
        const auto _s184 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s184->pUserData, _s184->pfnAllocation, _s184->pfnReallocation, _s184->pfnFree,
                                            _s184->pfnInternalAllocation, _s184->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroySwapchainKHR(VkDevice device, VkSwapchainKHR swapchain,
                                                            const VkAllocationCallbacks* pAllocator,
                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s185 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s185->pUserData, _s185->pfnAllocation, _s185->pfnReallocation, _s185->pfnFree,
                                            _s185->pfnInternalAllocation, _s185->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetSwapchainImagesKHR(VkDevice device, VkSwapchainKHR swapchain,
                                                              uint32_t* pSwapchainImageCount, VkImage* pSwapchainImages,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateAcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout,
                                                            VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex,
                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateQueuePresentKHR(VkQueue queue, const VkPresentInfoKHR* pPresentInfo,
                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pPresentInfo != nullptr) {
        const auto _s186 = pPresentInfo;
        skip |= ValidatePresentInfoKHR({}, _s186->sType, _s186->pNext, _s186->waitSemaphoreCount, _s186->pWaitSemaphores,
                                       _s186->swapchainCount, _s186->pSwapchains, _s186->pImageIndices, _s186->pResults);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDeviceGroupPresentCapabilitiesKHR(
    VkDevice device, VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDeviceGroupSurfacePresentModesKHR(VkDevice device, VkSurfaceKHR surface,
                                                                             VkDeviceGroupPresentModeFlagsKHR* pModes,
                                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDevicePresentRectanglesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface,
                                                                              uint32_t* pRectCount, VkRect2D* pRects,
                                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pRects != nullptr) {
        for (uint32_t _i187 = 0; _i187 < *pRectCount; ++_i187) {
            const auto _s188 = &pRects[_i187];
            skip |= ValidateRect2D({}, _s188->offset, _s188->extent);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateAcquireNextImage2KHR(VkDevice device, const VkAcquireNextImageInfoKHR* pAcquireInfo,
                                                             uint32_t* pImageIndex, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAcquireInfo != nullptr) {
        const auto _s189 = pAcquireInfo;
        skip |= ValidateAcquireNextImageInfoKHR({}, _s189->sType, _s189->pNext, _s189->swapchain, _s189->timeout, _s189->semaphore,
                                                _s189->fence, _s189->deviceMask);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceDisplayPropertiesKHR(VkPhysicalDevice physicalDevice,
                                                                              uint32_t* pPropertyCount,
                                                                              VkDisplayPropertiesKHR* pProperties,
                                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceDisplayPlanePropertiesKHR(VkPhysicalDevice physicalDevice,
                                                                                   uint32_t* pPropertyCount,
                                                                                   VkDisplayPlanePropertiesKHR* pProperties,
                                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDisplayPlaneSupportedDisplaysKHR(VkPhysicalDevice physicalDevice, uint32_t planeIndex,
                                                                            uint32_t* pDisplayCount, VkDisplayKHR* pDisplays,
                                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDisplayModePropertiesKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display,
                                                                    uint32_t* pPropertyCount,
                                                                    VkDisplayModePropertiesKHR* pProperties,
                                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateDisplayModeKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display,
                                                             const VkDisplayModeCreateInfoKHR* pCreateInfo,
                                                             const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s190 = pCreateInfo;
        skip |= ValidateDisplayModeCreateInfoKHR({}, _s190->sType, _s190->pNext, _s190->flags, _s190->parameters);
    }
    if (pAllocator != nullptr) {
        const auto _s191 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s191->pUserData, _s191->pfnAllocation, _s191->pfnReallocation, _s191->pfnFree,
                                            _s191->pfnInternalAllocation, _s191->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDisplayPlaneCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode,
                                                                       uint32_t planeIndex,
                                                                       VkDisplayPlaneCapabilitiesKHR* pCapabilities,
                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateDisplayPlaneSurfaceKHR(VkInstance instance,
                                                                     const VkDisplaySurfaceCreateInfoKHR* pCreateInfo,
                                                                     const VkAllocationCallbacks* pAllocator,
                                                                     VkSurfaceKHR* pSurface, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s192 = pCreateInfo;
        skip |= ValidateDisplaySurfaceCreateInfoKHR({}, _s192->sType, _s192->pNext, _s192->flags, _s192->displayMode,
                                                    _s192->planeIndex, _s192->planeStackIndex, _s192->transform, _s192->globalAlpha,
                                                    _s192->alphaMode, _s192->imageExtent);
    }
    if (pAllocator != nullptr) {
        const auto _s193 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s193->pUserData, _s193->pfnAllocation, _s193->pfnReallocation, _s193->pfnFree,
                                            _s193->pfnInternalAllocation, _s193->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateSharedSwapchainsKHR(VkDevice device, uint32_t swapchainCount,
                                                                  const VkSwapchainCreateInfoKHR* pCreateInfos,
                                                                  const VkAllocationCallbacks* pAllocator,
                                                                  VkSwapchainKHR* pSwapchains,
                                                                  const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfos != nullptr) {
        for (uint32_t _i194 = 0; _i194 < swapchainCount; ++_i194) {
            const auto _s195 = &pCreateInfos[_i194];
            skip |= ValidateSwapchainCreateInfoKHR(
                {}, _s195->sType, _s195->pNext, _s195->flags, _s195->surface, _s195->minImageCount, _s195->imageFormat,
                _s195->imageColorSpace, _s195->imageExtent, _s195->imageArrayLayers, _s195->imageUsage, _s195->imageSharingMode,
                _s195->queueFamilyIndexCount, _s195->pQueueFamilyIndices, _s195->preTransform, _s195->compositeAlpha,
                _s195->presentMode, _s195->clipped, _s195->oldSwapchain);
        }
    }
    if (pAllocator != nullptr) {
        const auto _s196 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s196->pUserData, _s196->pfnAllocation, _s196->pfnReallocation, _s196->pfnFree,
                                            _s196->pfnInternalAllocation, _s196->pfnInternalFree);
    }
    return skip;
}
#ifdef VK_USE_PLATFORM_XLIB_KHR
bool ExplicitValidation::PreCallValidateCreateXlibSurfaceKHR(VkInstance instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo,
                                                             const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s197 = pCreateInfo;
        skip |= ValidateXlibSurfaceCreateInfoKHR({}, _s197->sType, _s197->pNext, _s197->flags, _s197->dpy, _s197->window);
    }
    if (pAllocator != nullptr) {
        const auto _s198 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s198->pUserData, _s198->pfnAllocation, _s198->pfnReallocation, _s198->pfnFree,
                                            _s198->pfnInternalAllocation, _s198->pfnInternalFree);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceXlibPresentationSupportKHR(VkPhysicalDevice physicalDevice,
                                                                                    uint32_t queueFamilyIndex, Display* dpy,
                                                                                    VisualID visualID,
                                                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
bool ExplicitValidation::PreCallValidateCreateXcbSurfaceKHR(VkInstance instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo,
                                                            const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface,
                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s199 = pCreateInfo;
        skip |= ValidateXcbSurfaceCreateInfoKHR({}, _s199->sType, _s199->pNext, _s199->flags, _s199->connection, _s199->window);
    }
    if (pAllocator != nullptr) {
        const auto _s200 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s200->pUserData, _s200->pfnAllocation, _s200->pfnReallocation, _s200->pfnFree,
                                            _s200->pfnInternalAllocation, _s200->pfnInternalFree);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceXcbPresentationSupportKHR(VkPhysicalDevice physicalDevice,
                                                                                   uint32_t queueFamilyIndex,
                                                                                   xcb_connection_t* connection,
                                                                                   xcb_visualid_t visual_id,
                                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
bool ExplicitValidation::PreCallValidateCreateWaylandSurfaceKHR(VkInstance instance,
                                                                const VkWaylandSurfaceCreateInfoKHR* pCreateInfo,
                                                                const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s201 = pCreateInfo;
        skip |= ValidateWaylandSurfaceCreateInfoKHR({}, _s201->sType, _s201->pNext, _s201->flags, _s201->display, _s201->surface);
    }
    if (pAllocator != nullptr) {
        const auto _s202 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s202->pUserData, _s202->pfnAllocation, _s202->pfnReallocation, _s202->pfnFree,
                                            _s202->pfnInternalAllocation, _s202->pfnInternalFree);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceWaylandPresentationSupportKHR(VkPhysicalDevice physicalDevice,
                                                                                       uint32_t queueFamilyIndex,
                                                                                       struct wl_display* display,
                                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool ExplicitValidation::PreCallValidateCreateAndroidSurfaceKHR(VkInstance instance,
                                                                const VkAndroidSurfaceCreateInfoKHR* pCreateInfo,
                                                                const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s203 = pCreateInfo;
        skip |= ValidateAndroidSurfaceCreateInfoKHR({}, _s203->sType, _s203->pNext, _s203->flags, _s203->window);
    }
    if (pAllocator != nullptr) {
        const auto _s204 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s204->pUserData, _s204->pfnAllocation, _s204->pfnReallocation, _s204->pfnFree,
                                            _s204->pfnInternalAllocation, _s204->pfnInternalFree);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateCreateWin32SurfaceKHR(VkInstance instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo,
                                                              const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s205 = pCreateInfo;
        skip |= ValidateWin32SurfaceCreateInfoKHR({}, _s205->sType, _s205->pNext, _s205->flags, _s205->hinstance, _s205->hwnd);
    }
    if (pAllocator != nullptr) {
        const auto _s206 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s206->pUserData, _s206->pfnAllocation, _s206->pfnReallocation, _s206->pfnFree,
                                            _s206->pfnInternalAllocation, _s206->pfnInternalFree);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceWin32PresentationSupportKHR(VkPhysicalDevice physicalDevice,
                                                                                     uint32_t queueFamilyIndex,
                                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceVideoCapabilitiesKHR(VkPhysicalDevice physicalDevice,
                                                                              const VkVideoProfileInfoKHR* pVideoProfile,
                                                                              VkVideoCapabilitiesKHR* pCapabilities,
                                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pVideoProfile != nullptr) {
        const auto _s207 = pVideoProfile;
        skip |= ValidateVideoProfileInfoKHR({}, _s207->sType, _s207->pNext, _s207->videoCodecOperation, _s207->chromaSubsampling,
                                            _s207->lumaBitDepth, _s207->chromaBitDepth);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceVideoFormatPropertiesKHR(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceVideoFormatInfoKHR* pVideoFormatInfo,
    uint32_t* pVideoFormatPropertyCount, VkVideoFormatPropertiesKHR* pVideoFormatProperties, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pVideoFormatInfo != nullptr) {
        const auto _s208 = pVideoFormatInfo;
        skip |= ValidatePhysicalDeviceVideoFormatInfoKHR({}, _s208->sType, _s208->pNext, _s208->imageUsage);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateVideoSessionKHR(VkDevice device, const VkVideoSessionCreateInfoKHR* pCreateInfo,
                                                              const VkAllocationCallbacks* pAllocator,
                                                              VkVideoSessionKHR* pVideoSession,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s209 = pCreateInfo;
        skip |= ValidateVideoSessionCreateInfoKHR({}, _s209->sType, _s209->pNext, _s209->queueFamilyIndex, _s209->flags,
                                                  _s209->pVideoProfile, _s209->pictureFormat, _s209->maxCodedExtent,
                                                  _s209->referencePictureFormat, _s209->maxDpbSlots,
                                                  _s209->maxActiveReferencePictures, _s209->pStdHeaderVersion);
    }
    if (pAllocator != nullptr) {
        const auto _s210 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s210->pUserData, _s210->pfnAllocation, _s210->pfnReallocation, _s210->pfnFree,
                                            _s210->pfnInternalAllocation, _s210->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyVideoSessionKHR(VkDevice device, VkVideoSessionKHR videoSession,
                                                               const VkAllocationCallbacks* pAllocator,
                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s211 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s211->pUserData, _s211->pfnAllocation, _s211->pfnReallocation, _s211->pfnFree,
                                            _s211->pfnInternalAllocation, _s211->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetVideoSessionMemoryRequirementsKHR(
    VkDevice device, VkVideoSessionKHR videoSession, uint32_t* pMemoryRequirementsCount,
    VkVideoSessionMemoryRequirementsKHR* pMemoryRequirements, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateBindVideoSessionMemoryKHR(VkDevice device, VkVideoSessionKHR videoSession,
                                                                  uint32_t bindSessionMemoryInfoCount,
                                                                  const VkBindVideoSessionMemoryInfoKHR* pBindSessionMemoryInfos,
                                                                  const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pBindSessionMemoryInfos != nullptr) {
        for (uint32_t _i212 = 0; _i212 < bindSessionMemoryInfoCount; ++_i212) {
            const auto _s213 = &pBindSessionMemoryInfos[_i212];
            skip |= ValidateBindVideoSessionMemoryInfoKHR({}, _s213->sType, _s213->pNext, _s213->memoryBindIndex, _s213->memory,
                                                          _s213->memoryOffset, _s213->memorySize);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateVideoSessionParametersKHR(VkDevice device,
                                                                        const VkVideoSessionParametersCreateInfoKHR* pCreateInfo,
                                                                        const VkAllocationCallbacks* pAllocator,
                                                                        VkVideoSessionParametersKHR* pVideoSessionParameters,
                                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s214 = pCreateInfo;
        skip |= ValidateVideoSessionParametersCreateInfoKHR({}, _s214->sType, _s214->pNext, _s214->flags,
                                                            _s214->videoSessionParametersTemplate, _s214->videoSession);
    }
    if (pAllocator != nullptr) {
        const auto _s215 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s215->pUserData, _s215->pfnAllocation, _s215->pfnReallocation, _s215->pfnFree,
                                            _s215->pfnInternalAllocation, _s215->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateUpdateVideoSessionParametersKHR(VkDevice device,
                                                                        VkVideoSessionParametersKHR videoSessionParameters,
                                                                        const VkVideoSessionParametersUpdateInfoKHR* pUpdateInfo,
                                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pUpdateInfo != nullptr) {
        const auto _s216 = pUpdateInfo;
        skip |= ValidateVideoSessionParametersUpdateInfoKHR({}, _s216->sType, _s216->pNext, _s216->updateSequenceCount);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyVideoSessionParametersKHR(VkDevice device,
                                                                         VkVideoSessionParametersKHR videoSessionParameters,
                                                                         const VkAllocationCallbacks* pAllocator,
                                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s217 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s217->pUserData, _s217->pfnAllocation, _s217->pfnReallocation, _s217->pfnFree,
                                            _s217->pfnInternalAllocation, _s217->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBeginVideoCodingKHR(VkCommandBuffer commandBuffer,
                                                               const VkVideoBeginCodingInfoKHR* pBeginInfo,
                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pBeginInfo != nullptr) {
        const auto _s218 = pBeginInfo;
        skip |= ValidateVideoBeginCodingInfoKHR(_carryOverObjects, _s218->sType, _s218->pNext, _s218->flags, _s218->videoSession,
                                                _s218->videoSessionParameters, _s218->referenceSlotCount, _s218->pReferenceSlots);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdEndVideoCodingKHR(VkCommandBuffer commandBuffer,
                                                             const VkVideoEndCodingInfoKHR* pEndCodingInfo,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pEndCodingInfo != nullptr) {
        const auto _s219 = pEndCodingInfo;
        skip |= ValidateVideoEndCodingInfoKHR(_carryOverObjects, _s219->sType, _s219->pNext, _s219->flags);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdControlVideoCodingKHR(VkCommandBuffer commandBuffer,
                                                                 const VkVideoCodingControlInfoKHR* pCodingControlInfo,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pCodingControlInfo != nullptr) {
        const auto _s220 = pCodingControlInfo;
        skip |= ValidateVideoCodingControlInfoKHR(_carryOverObjects, _s220->sType, _s220->pNext, _s220->flags);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDecodeVideoKHR(VkCommandBuffer commandBuffer, const VkVideoDecodeInfoKHR* pDecodeInfo,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pDecodeInfo != nullptr) {
        const auto _s221 = pDecodeInfo;
        skip |= ValidateVideoDecodeInfoKHR(_carryOverObjects, _s221->sType, _s221->pNext, _s221->flags, _s221->srcBuffer,
                                           _s221->srcBufferOffset, _s221->srcBufferRange, _s221->dstPictureResource,
                                           _s221->pSetupReferenceSlot, _s221->referenceSlotCount, _s221->pReferenceSlots);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBeginRenderingKHR(VkCommandBuffer commandBuffer, const VkRenderingInfo* pRenderingInfo,
                                                             const ErrorObject& _error_obj) const {
    return PreCallValidateCmdBeginRendering(commandBuffer, pRenderingInfo, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdEndRenderingKHR(VkCommandBuffer commandBuffer, const ErrorObject& _error_obj) const {
    return PreCallValidateCmdEndRendering(commandBuffer, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceFeatures2KHR(VkPhysicalDevice physicalDevice,
                                                                      VkPhysicalDeviceFeatures2* pFeatures,
                                                                      const ErrorObject& _error_obj) const {
    return PreCallValidateGetPhysicalDeviceFeatures2(physicalDevice, pFeatures, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceProperties2KHR(VkPhysicalDevice physicalDevice,
                                                                        VkPhysicalDeviceProperties2* pProperties,
                                                                        const ErrorObject& _error_obj) const {
    return PreCallValidateGetPhysicalDeviceProperties2(physicalDevice, pProperties, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceFormatProperties2KHR(VkPhysicalDevice physicalDevice, VkFormat format,
                                                                              VkFormatProperties2* pFormatProperties,
                                                                              const ErrorObject& _error_obj) const {
    return PreCallValidateGetPhysicalDeviceFormatProperties2(physicalDevice, format, pFormatProperties, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceImageFormatProperties2KHR(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo,
    VkImageFormatProperties2* pImageFormatProperties, const ErrorObject& _error_obj) const {
    return PreCallValidateGetPhysicalDeviceImageFormatProperties2(physicalDevice, pImageFormatInfo, pImageFormatProperties,
                                                                  _error_obj);
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceQueueFamilyProperties2KHR(VkPhysicalDevice physicalDevice,
                                                                                   uint32_t* pQueueFamilyPropertyCount,
                                                                                   VkQueueFamilyProperties2* pQueueFamilyProperties,
                                                                                   const ErrorObject& _error_obj) const {
    return PreCallValidateGetPhysicalDeviceQueueFamilyProperties2(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties,
                                                                  _error_obj);
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceMemoryProperties2KHR(VkPhysicalDevice physicalDevice,
                                                                              VkPhysicalDeviceMemoryProperties2* pMemoryProperties,
                                                                              const ErrorObject& _error_obj) const {
    return PreCallValidateGetPhysicalDeviceMemoryProperties2(physicalDevice, pMemoryProperties, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceSparseImageFormatProperties2KHR(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount,
    VkSparseImageFormatProperties2* pProperties, const ErrorObject& _error_obj) const {
    return PreCallValidateGetPhysicalDeviceSparseImageFormatProperties2(physicalDevice, pFormatInfo, pPropertyCount, pProperties,
                                                                        _error_obj);
}
bool ExplicitValidation::PreCallValidateGetDeviceGroupPeerMemoryFeaturesKHR(VkDevice device, uint32_t heapIndex,
                                                                            uint32_t localDeviceIndex, uint32_t remoteDeviceIndex,
                                                                            VkPeerMemoryFeatureFlags* pPeerMemoryFeatures,
                                                                            const ErrorObject& _error_obj) const {
    return PreCallValidateGetDeviceGroupPeerMemoryFeatures(device, heapIndex, localDeviceIndex, remoteDeviceIndex,
                                                           pPeerMemoryFeatures, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdSetDeviceMaskKHR(VkCommandBuffer commandBuffer, uint32_t deviceMask,
                                                            const ErrorObject& _error_obj) const {
    return PreCallValidateCmdSetDeviceMask(commandBuffer, deviceMask, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdDispatchBaseKHR(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY,
                                                           uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY,
                                                           uint32_t groupCountZ, const ErrorObject& _error_obj) const {
    return PreCallValidateCmdDispatchBase(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ,
                                          _error_obj);
}
bool ExplicitValidation::PreCallValidateTrimCommandPoolKHR(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags,
                                                           const ErrorObject& _error_obj) const {
    return PreCallValidateTrimCommandPool(device, commandPool, flags, _error_obj);
}
bool ExplicitValidation::PreCallValidateEnumeratePhysicalDeviceGroupsKHR(
    VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties,
    const ErrorObject& _error_obj) const {
    return PreCallValidateEnumeratePhysicalDeviceGroups(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties,
                                                        _error_obj);
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceExternalBufferPropertiesKHR(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo,
    VkExternalBufferProperties* pExternalBufferProperties, const ErrorObject& _error_obj) const {
    return PreCallValidateGetPhysicalDeviceExternalBufferProperties(physicalDevice, pExternalBufferInfo, pExternalBufferProperties,
                                                                    _error_obj);
}
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateGetMemoryWin32HandleKHR(VkDevice device,
                                                                const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo,
                                                                HANDLE* pHandle, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pGetWin32HandleInfo != nullptr) {
        const auto _s222 = pGetWin32HandleInfo;
        skip |= ValidateMemoryGetWin32HandleInfoKHR({}, _s222->sType, _s222->pNext, _s222->memory, _s222->handleType);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateGetMemoryWin32HandlePropertiesKHR(
    VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle,
    VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateGetMemoryFdKHR(VkDevice device, const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd,
                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pGetFdInfo != nullptr) {
        const auto _s223 = pGetFdInfo;
        skip |= ValidateMemoryGetFdInfoKHR({}, _s223->sType, _s223->pNext, _s223->memory, _s223->handleType);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetMemoryFdPropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType,
                                                                 int fd, VkMemoryFdPropertiesKHR* pMemoryFdProperties,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceExternalSemaphorePropertiesKHR(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo,
    VkExternalSemaphoreProperties* pExternalSemaphoreProperties, const ErrorObject& _error_obj) const {
    return PreCallValidateGetPhysicalDeviceExternalSemaphoreProperties(physicalDevice, pExternalSemaphoreInfo,
                                                                       pExternalSemaphoreProperties, _error_obj);
}
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateImportSemaphoreWin32HandleKHR(
    VkDevice device, const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pImportSemaphoreWin32HandleInfo != nullptr) {
        const auto _s224 = pImportSemaphoreWin32HandleInfo;
        skip |= ValidateImportSemaphoreWin32HandleInfoKHR({}, _s224->sType, _s224->pNext, _s224->semaphore, _s224->flags,
                                                          _s224->handleType, _s224->handle, _s224->name);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateGetSemaphoreWin32HandleKHR(VkDevice device,
                                                                   const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo,
                                                                   HANDLE* pHandle, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pGetWin32HandleInfo != nullptr) {
        const auto _s225 = pGetWin32HandleInfo;
        skip |= ValidateSemaphoreGetWin32HandleInfoKHR({}, _s225->sType, _s225->pNext, _s225->semaphore, _s225->handleType);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateImportSemaphoreFdKHR(VkDevice device,
                                                             const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pImportSemaphoreFdInfo != nullptr) {
        const auto _s226 = pImportSemaphoreFdInfo;
        skip |= ValidateImportSemaphoreFdInfoKHR({}, _s226->sType, _s226->pNext, _s226->semaphore, _s226->flags, _s226->handleType,
                                                 _s226->fd);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetSemaphoreFdKHR(VkDevice device, const VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pGetFdInfo != nullptr) {
        const auto _s227 = pGetFdInfo;
        skip |= ValidateSemaphoreGetFdInfoKHR({}, _s227->sType, _s227->pNext, _s227->semaphore, _s227->handleType);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdPushDescriptorSetKHR(VkCommandBuffer commandBuffer,
                                                                VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout,
                                                                uint32_t set, uint32_t descriptorWriteCount,
                                                                const VkWriteDescriptorSet* pDescriptorWrites,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pDescriptorWrites != nullptr) {
        for (uint32_t _i228 = 0; _i228 < descriptorWriteCount; ++_i228) {
            const auto _s229 = &pDescriptorWrites[_i228];
            skip |= ValidateWriteDescriptorSet(_carryOverObjects, _s229->sType, _s229->pNext, _s229->dstSet, _s229->dstBinding,
                                               _s229->dstArrayElement, _s229->descriptorCount, _s229->descriptorType,
                                               _s229->pImageInfo, _s229->pBufferInfo, _s229->pTexelBufferView);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdPushDescriptorSetWithTemplateKHR(VkCommandBuffer commandBuffer,
                                                                            VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                                                            VkPipelineLayout layout, uint32_t set,
                                                                            const void* pData,
                                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateDescriptorUpdateTemplateKHR(VkDevice device,
                                                                          const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo,
                                                                          const VkAllocationCallbacks* pAllocator,
                                                                          VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate,
                                                                          const ErrorObject& _error_obj) const {
    return PreCallValidateCreateDescriptorUpdateTemplate(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate, _error_obj);
}
bool ExplicitValidation::PreCallValidateDestroyDescriptorUpdateTemplateKHR(VkDevice device,
                                                                           VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                                                           const VkAllocationCallbacks* pAllocator,
                                                                           const ErrorObject& _error_obj) const {
    return PreCallValidateDestroyDescriptorUpdateTemplate(device, descriptorUpdateTemplate, pAllocator, _error_obj);
}
bool ExplicitValidation::PreCallValidateUpdateDescriptorSetWithTemplateKHR(VkDevice device, VkDescriptorSet descriptorSet,
                                                                           VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                                                           const void* pData, const ErrorObject& _error_obj) const {
    return PreCallValidateUpdateDescriptorSetWithTemplate(device, descriptorSet, descriptorUpdateTemplate, pData, _error_obj);
}
bool ExplicitValidation::PreCallValidateCreateRenderPass2KHR(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo,
                                                             const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass,
                                                             const ErrorObject& _error_obj) const {
    return PreCallValidateCreateRenderPass2(device, pCreateInfo, pAllocator, pRenderPass, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdBeginRenderPass2KHR(VkCommandBuffer commandBuffer,
                                                               const VkRenderPassBeginInfo* pRenderPassBegin,
                                                               const VkSubpassBeginInfo* pSubpassBeginInfo,
                                                               const ErrorObject& _error_obj) const {
    return PreCallValidateCmdBeginRenderPass2(commandBuffer, pRenderPassBegin, pSubpassBeginInfo, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdNextSubpass2KHR(VkCommandBuffer commandBuffer,
                                                           const VkSubpassBeginInfo* pSubpassBeginInfo,
                                                           const VkSubpassEndInfo* pSubpassEndInfo,
                                                           const ErrorObject& _error_obj) const {
    return PreCallValidateCmdNextSubpass2(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdEndRenderPass2KHR(VkCommandBuffer commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo,
                                                             const ErrorObject& _error_obj) const {
    return PreCallValidateCmdEndRenderPass2(commandBuffer, pSubpassEndInfo, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetSwapchainStatusKHR(VkDevice device, VkSwapchainKHR swapchain,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceExternalFencePropertiesKHR(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo,
    VkExternalFenceProperties* pExternalFenceProperties, const ErrorObject& _error_obj) const {
    return PreCallValidateGetPhysicalDeviceExternalFenceProperties(physicalDevice, pExternalFenceInfo, pExternalFenceProperties,
                                                                   _error_obj);
}
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateImportFenceWin32HandleKHR(
    VkDevice device, const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pImportFenceWin32HandleInfo != nullptr) {
        const auto _s230 = pImportFenceWin32HandleInfo;
        skip |= ValidateImportFenceWin32HandleInfoKHR({}, _s230->sType, _s230->pNext, _s230->fence, _s230->flags, _s230->handleType,
                                                      _s230->handle, _s230->name);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateGetFenceWin32HandleKHR(VkDevice device,
                                                               const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo,
                                                               HANDLE* pHandle, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pGetWin32HandleInfo != nullptr) {
        const auto _s231 = pGetWin32HandleInfo;
        skip |= ValidateFenceGetWin32HandleInfoKHR({}, _s231->sType, _s231->pNext, _s231->fence, _s231->handleType);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateImportFenceFdKHR(VkDevice device, const VkImportFenceFdInfoKHR* pImportFenceFdInfo,
                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pImportFenceFdInfo != nullptr) {
        const auto _s232 = pImportFenceFdInfo;
        skip |=
            ValidateImportFenceFdInfoKHR({}, _s232->sType, _s232->pNext, _s232->fence, _s232->flags, _s232->handleType, _s232->fd);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetFenceFdKHR(VkDevice device, const VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd,
                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pGetFdInfo != nullptr) {
        const auto _s233 = pGetFdInfo;
        skip |= ValidateFenceGetFdInfoKHR({}, _s233->sType, _s233->pNext, _s233->fence, _s233->handleType);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(
    VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t* pCounterCount, VkPerformanceCounterKHR* pCounters,
    VkPerformanceCounterDescriptionKHR* pCounterDescriptions, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(
    VkPhysicalDevice physicalDevice, const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo, uint32_t* pNumPasses,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pPerformanceQueryCreateInfo != nullptr) {
        const auto _s234 = pPerformanceQueryCreateInfo;
        skip |= ValidateQueryPoolPerformanceCreateInfoKHR({}, _s234->sType, _s234->pNext, _s234->queueFamilyIndex,
                                                          _s234->counterIndexCount, _s234->pCounterIndices);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateAcquireProfilingLockKHR(VkDevice device, const VkAcquireProfilingLockInfoKHR* pInfo,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s235 = pInfo;
        skip |= ValidateAcquireProfilingLockInfoKHR({}, _s235->sType, _s235->pNext, _s235->flags, _s235->timeout);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateReleaseProfilingLockKHR(VkDevice device, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceSurfaceCapabilities2KHR(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
    VkSurfaceCapabilities2KHR* pSurfaceCapabilities, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pSurfaceInfo != nullptr) {
        const auto _s236 = pSurfaceInfo;
        skip |= ValidatePhysicalDeviceSurfaceInfo2KHR({}, _s236->sType, _s236->pNext, _s236->surface);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceSurfaceFormats2KHR(VkPhysicalDevice physicalDevice,
                                                                            const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
                                                                            uint32_t* pSurfaceFormatCount,
                                                                            VkSurfaceFormat2KHR* pSurfaceFormats,
                                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pSurfaceInfo != nullptr) {
        const auto _s237 = pSurfaceInfo;
        skip |= ValidatePhysicalDeviceSurfaceInfo2KHR({}, _s237->sType, _s237->pNext, _s237->surface);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceDisplayProperties2KHR(VkPhysicalDevice physicalDevice,
                                                                               uint32_t* pPropertyCount,
                                                                               VkDisplayProperties2KHR* pProperties,
                                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceDisplayPlaneProperties2KHR(VkPhysicalDevice physicalDevice,
                                                                                    uint32_t* pPropertyCount,
                                                                                    VkDisplayPlaneProperties2KHR* pProperties,
                                                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDisplayModeProperties2KHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display,
                                                                     uint32_t* pPropertyCount,
                                                                     VkDisplayModeProperties2KHR* pProperties,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDisplayPlaneCapabilities2KHR(VkPhysicalDevice physicalDevice,
                                                                        const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo,
                                                                        VkDisplayPlaneCapabilities2KHR* pCapabilities,
                                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pDisplayPlaneInfo != nullptr) {
        const auto _s238 = pDisplayPlaneInfo;
        skip |= ValidateDisplayPlaneInfo2KHR({}, _s238->sType, _s238->pNext, _s238->mode, _s238->planeIndex);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetImageMemoryRequirements2KHR(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo,
                                                                       VkMemoryRequirements2* pMemoryRequirements,
                                                                       const ErrorObject& _error_obj) const {
    return PreCallValidateGetImageMemoryRequirements2(device, pInfo, pMemoryRequirements, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetBufferMemoryRequirements2KHR(VkDevice device,
                                                                        const VkBufferMemoryRequirementsInfo2* pInfo,
                                                                        VkMemoryRequirements2* pMemoryRequirements,
                                                                        const ErrorObject& _error_obj) const {
    return PreCallValidateGetBufferMemoryRequirements2(device, pInfo, pMemoryRequirements, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetImageSparseMemoryRequirements2KHR(
    VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2* pSparseMemoryRequirements, const ErrorObject& _error_obj) const {
    return PreCallValidateGetImageSparseMemoryRequirements2(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements,
                                                            _error_obj);
}
bool ExplicitValidation::PreCallValidateCreateSamplerYcbcrConversionKHR(VkDevice device,
                                                                        const VkSamplerYcbcrConversionCreateInfo* pCreateInfo,
                                                                        const VkAllocationCallbacks* pAllocator,
                                                                        VkSamplerYcbcrConversion* pYcbcrConversion,
                                                                        const ErrorObject& _error_obj) const {
    return PreCallValidateCreateSamplerYcbcrConversion(device, pCreateInfo, pAllocator, pYcbcrConversion, _error_obj);
}
bool ExplicitValidation::PreCallValidateDestroySamplerYcbcrConversionKHR(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion,
                                                                         const VkAllocationCallbacks* pAllocator,
                                                                         const ErrorObject& _error_obj) const {
    return PreCallValidateDestroySamplerYcbcrConversion(device, ycbcrConversion, pAllocator, _error_obj);
}
bool ExplicitValidation::PreCallValidateBindBufferMemory2KHR(VkDevice device, uint32_t bindInfoCount,
                                                             const VkBindBufferMemoryInfo* pBindInfos,
                                                             const ErrorObject& _error_obj) const {
    return PreCallValidateBindBufferMemory2(device, bindInfoCount, pBindInfos, _error_obj);
}
bool ExplicitValidation::PreCallValidateBindImageMemory2KHR(VkDevice device, uint32_t bindInfoCount,
                                                            const VkBindImageMemoryInfo* pBindInfos,
                                                            const ErrorObject& _error_obj) const {
    return PreCallValidateBindImageMemory2(device, bindInfoCount, pBindInfos, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetDescriptorSetLayoutSupportKHR(VkDevice device,
                                                                         const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
                                                                         VkDescriptorSetLayoutSupport* pSupport,
                                                                         const ErrorObject& _error_obj) const {
    return PreCallValidateGetDescriptorSetLayoutSupport(device, pCreateInfo, pSupport, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdDrawIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                                VkBuffer countBuffer, VkDeviceSize countBufferOffset,
                                                                uint32_t maxDrawCount, uint32_t stride,
                                                                const ErrorObject& _error_obj) const {
    return PreCallValidateCmdDrawIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride,
                                               _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdDrawIndexedIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer,
                                                                       VkDeviceSize offset, VkBuffer countBuffer,
                                                                       VkDeviceSize countBufferOffset, uint32_t maxDrawCount,
                                                                       uint32_t stride, const ErrorObject& _error_obj) const {
    return PreCallValidateCmdDrawIndexedIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount,
                                                      stride, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetSemaphoreCounterValueKHR(VkDevice device, VkSemaphore semaphore, uint64_t* pValue,
                                                                    const ErrorObject& _error_obj) const {
    return PreCallValidateGetSemaphoreCounterValue(device, semaphore, pValue, _error_obj);
}
bool ExplicitValidation::PreCallValidateWaitSemaphoresKHR(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout,
                                                          const ErrorObject& _error_obj) const {
    return PreCallValidateWaitSemaphores(device, pWaitInfo, timeout, _error_obj);
}
bool ExplicitValidation::PreCallValidateSignalSemaphoreKHR(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo,
                                                           const ErrorObject& _error_obj) const {
    return PreCallValidateSignalSemaphore(device, pSignalInfo, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceFragmentShadingRatesKHR(
    VkPhysicalDevice physicalDevice, uint32_t* pFragmentShadingRateCount,
    VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetFragmentShadingRateKHR(VkCommandBuffer commandBuffer, const VkExtent2D* pFragmentSize,
                                                                     const VkFragmentShadingRateCombinerOpKHR combinerOps[2],
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pFragmentSize != nullptr) {
        const auto _s239 = pFragmentSize;
        skip |= ValidateExtent2D(_carryOverObjects, _s239->width, _s239->height);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateWaitForPresentKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t presentId,
                                                          uint64_t timeout, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetBufferDeviceAddressKHR(VkDevice device, const VkBufferDeviceAddressInfo* pInfo,
                                                                  const ErrorObject& _error_obj) const {
    return PreCallValidateGetBufferDeviceAddress(device, pInfo, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetBufferOpaqueCaptureAddressKHR(VkDevice device, const VkBufferDeviceAddressInfo* pInfo,
                                                                         const ErrorObject& _error_obj) const {
    return PreCallValidateGetBufferOpaqueCaptureAddress(device, pInfo, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetDeviceMemoryOpaqueCaptureAddressKHR(VkDevice device,
                                                                               const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo,
                                                                               const ErrorObject& _error_obj) const {
    return PreCallValidateGetDeviceMemoryOpaqueCaptureAddress(device, pInfo, _error_obj);
}
bool ExplicitValidation::PreCallValidateCreateDeferredOperationKHR(VkDevice device, const VkAllocationCallbacks* pAllocator,
                                                                   VkDeferredOperationKHR* pDeferredOperation,
                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s240 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s240->pUserData, _s240->pfnAllocation, _s240->pfnReallocation, _s240->pfnFree,
                                            _s240->pfnInternalAllocation, _s240->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyDeferredOperationKHR(VkDevice device, VkDeferredOperationKHR operation,
                                                                    const VkAllocationCallbacks* pAllocator,
                                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s241 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s241->pUserData, _s241->pfnAllocation, _s241->pfnReallocation, _s241->pfnFree,
                                            _s241->pfnInternalAllocation, _s241->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDeferredOperationMaxConcurrencyKHR(VkDevice device, VkDeferredOperationKHR operation,
                                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDeferredOperationResultKHR(VkDevice device, VkDeferredOperationKHR operation,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateDeferredOperationJoinKHR(VkDevice device, VkDeferredOperationKHR operation,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPipelineExecutablePropertiesKHR(VkDevice device, const VkPipelineInfoKHR* pPipelineInfo,
                                                                           uint32_t* pExecutableCount,
                                                                           VkPipelineExecutablePropertiesKHR* pProperties,
                                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pPipelineInfo != nullptr) {
        const auto _s242 = pPipelineInfo;
        skip |= ValidatePipelineInfoKHR({}, _s242->sType, _s242->pNext, _s242->pipeline);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPipelineExecutableStatisticsKHR(VkDevice device,
                                                                           const VkPipelineExecutableInfoKHR* pExecutableInfo,
                                                                           uint32_t* pStatisticCount,
                                                                           VkPipelineExecutableStatisticKHR* pStatistics,
                                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pExecutableInfo != nullptr) {
        const auto _s243 = pExecutableInfo;
        skip |= ValidatePipelineExecutableInfoKHR({}, _s243->sType, _s243->pNext, _s243->pipeline, _s243->executableIndex);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPipelineExecutableInternalRepresentationsKHR(
    VkDevice device, const VkPipelineExecutableInfoKHR* pExecutableInfo, uint32_t* pInternalRepresentationCount,
    VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pExecutableInfo != nullptr) {
        const auto _s244 = pExecutableInfo;
        skip |= ValidatePipelineExecutableInfoKHR({}, _s244->sType, _s244->pNext, _s244->pipeline, _s244->executableIndex);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateMapMemory2KHR(VkDevice device, const VkMemoryMapInfoKHR* pMemoryMapInfo, void** ppData,
                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pMemoryMapInfo != nullptr) {
        const auto _s245 = pMemoryMapInfo;
        skip |= ValidateMemoryMapInfoKHR({}, _s245->sType, _s245->pNext, _s245->flags, _s245->memory, _s245->offset, _s245->size);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateUnmapMemory2KHR(VkDevice device, const VkMemoryUnmapInfoKHR* pMemoryUnmapInfo,
                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pMemoryUnmapInfo != nullptr) {
        const auto _s246 = pMemoryUnmapInfo;
        skip |= ValidateMemoryUnmapInfoKHR({}, _s246->sType, _s246->pNext, _s246->flags, _s246->memory);
    }
    return skip;
}
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR* pQualityLevelInfo,
    VkVideoEncodeQualityLevelPropertiesKHR* pQualityLevelProperties, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pQualityLevelInfo != nullptr) {
        const auto _s247 = pQualityLevelInfo;
        skip |= ValidatePhysicalDeviceVideoEncodeQualityLevelInfoKHR({}, _s247->sType, _s247->pNext, _s247->pVideoProfile,
                                                                     _s247->qualityLevel);
    }
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::PreCallValidateGetEncodedVideoSessionParametersKHR(
    VkDevice device, const VkVideoEncodeSessionParametersGetInfoKHR* pVideoSessionParametersInfo,
    VkVideoEncodeSessionParametersFeedbackInfoKHR* pFeedbackInfo, size_t* pDataSize, void* pData,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pVideoSessionParametersInfo != nullptr) {
        const auto _s248 = pVideoSessionParametersInfo;
        skip |= ValidateVideoEncodeSessionParametersGetInfoKHR({}, _s248->sType, _s248->pNext, _s248->videoSessionParameters);
    }
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::PreCallValidateCmdEncodeVideoKHR(VkCommandBuffer commandBuffer, const VkVideoEncodeInfoKHR* pEncodeInfo,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pEncodeInfo != nullptr) {
        const auto _s249 = pEncodeInfo;
        skip |= ValidateVideoEncodeInfoKHR(_carryOverObjects, _s249->sType, _s249->pNext, _s249->flags, _s249->dstBuffer,
                                           _s249->dstBufferOffset, _s249->dstBufferRange, _s249->srcPictureResource,
                                           _s249->pSetupReferenceSlot, _s249->referenceSlotCount, _s249->pReferenceSlots,
                                           _s249->precedingExternallyEncodedBytes);
    }
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::PreCallValidateCmdSetEvent2KHR(VkCommandBuffer commandBuffer, VkEvent event,
                                                        const VkDependencyInfo* pDependencyInfo,
                                                        const ErrorObject& _error_obj) const {
    return PreCallValidateCmdSetEvent2(commandBuffer, event, pDependencyInfo, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdResetEvent2KHR(VkCommandBuffer commandBuffer, VkEvent event,
                                                          VkPipelineStageFlags2 stageMask, const ErrorObject& _error_obj) const {
    return PreCallValidateCmdResetEvent2(commandBuffer, event, stageMask, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdWaitEvents2KHR(VkCommandBuffer commandBuffer, uint32_t eventCount,
                                                          const VkEvent* pEvents, const VkDependencyInfo* pDependencyInfos,
                                                          const ErrorObject& _error_obj) const {
    return PreCallValidateCmdWaitEvents2(commandBuffer, eventCount, pEvents, pDependencyInfos, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdPipelineBarrier2KHR(VkCommandBuffer commandBuffer,
                                                               const VkDependencyInfo* pDependencyInfo,
                                                               const ErrorObject& _error_obj) const {
    return PreCallValidateCmdPipelineBarrier2(commandBuffer, pDependencyInfo, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdWriteTimestamp2KHR(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage,
                                                              VkQueryPool queryPool, uint32_t query,
                                                              const ErrorObject& _error_obj) const {
    return PreCallValidateCmdWriteTimestamp2(commandBuffer, stage, queryPool, query, _error_obj);
}
bool ExplicitValidation::PreCallValidateQueueSubmit2KHR(VkQueue queue, uint32_t submitCount, const VkSubmitInfo2* pSubmits,
                                                        VkFence fence, const ErrorObject& _error_obj) const {
    return PreCallValidateQueueSubmit2(queue, submitCount, pSubmits, fence, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdWriteBufferMarker2AMD(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage,
                                                                 VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateGetQueueCheckpointData2NV(VkQueue queue, uint32_t* pCheckpointDataCount,
                                                                  VkCheckpointData2NV* pCheckpointData,
                                                                  const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyBuffer2KHR(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2* pCopyBufferInfo,
                                                          const ErrorObject& _error_obj) const {
    return PreCallValidateCmdCopyBuffer2(commandBuffer, pCopyBufferInfo, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdCopyImage2KHR(VkCommandBuffer commandBuffer, const VkCopyImageInfo2* pCopyImageInfo,
                                                         const ErrorObject& _error_obj) const {
    return PreCallValidateCmdCopyImage2(commandBuffer, pCopyImageInfo, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdCopyBufferToImage2KHR(VkCommandBuffer commandBuffer,
                                                                 const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo,
                                                                 const ErrorObject& _error_obj) const {
    return PreCallValidateCmdCopyBufferToImage2(commandBuffer, pCopyBufferToImageInfo, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdCopyImageToBuffer2KHR(VkCommandBuffer commandBuffer,
                                                                 const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo,
                                                                 const ErrorObject& _error_obj) const {
    return PreCallValidateCmdCopyImageToBuffer2(commandBuffer, pCopyImageToBufferInfo, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdBlitImage2KHR(VkCommandBuffer commandBuffer, const VkBlitImageInfo2* pBlitImageInfo,
                                                         const ErrorObject& _error_obj) const {
    return PreCallValidateCmdBlitImage2(commandBuffer, pBlitImageInfo, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdResolveImage2KHR(VkCommandBuffer commandBuffer,
                                                            const VkResolveImageInfo2* pResolveImageInfo,
                                                            const ErrorObject& _error_obj) const {
    return PreCallValidateCmdResolveImage2(commandBuffer, pResolveImageInfo, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdTraceRaysIndirect2KHR(VkCommandBuffer commandBuffer,
                                                                 VkDeviceAddress indirectDeviceAddress,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDeviceBufferMemoryRequirementsKHR(VkDevice device,
                                                                             const VkDeviceBufferMemoryRequirements* pInfo,
                                                                             VkMemoryRequirements2* pMemoryRequirements,
                                                                             const ErrorObject& _error_obj) const {
    return PreCallValidateGetDeviceBufferMemoryRequirements(device, pInfo, pMemoryRequirements, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetDeviceImageMemoryRequirementsKHR(VkDevice device,
                                                                            const VkDeviceImageMemoryRequirements* pInfo,
                                                                            VkMemoryRequirements2* pMemoryRequirements,
                                                                            const ErrorObject& _error_obj) const {
    return PreCallValidateGetDeviceImageMemoryRequirements(device, pInfo, pMemoryRequirements, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetDeviceImageSparseMemoryRequirementsKHR(
    VkDevice device, const VkDeviceImageMemoryRequirements* pInfo, uint32_t* pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2* pSparseMemoryRequirements, const ErrorObject& _error_obj) const {
    return PreCallValidateGetDeviceImageSparseMemoryRequirements(device, pInfo, pSparseMemoryRequirementCount,
                                                                 pSparseMemoryRequirements, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdBindIndexBuffer2KHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                               VkDeviceSize size, VkIndexType indexType,
                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateGetRenderingAreaGranularityKHR(VkDevice device,
                                                                       const VkRenderingAreaInfoKHR* pRenderingAreaInfo,
                                                                       VkExtent2D* pGranularity,
                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pRenderingAreaInfo != nullptr) {
        const auto _s250 = pRenderingAreaInfo;
        skip |= ValidateRenderingAreaInfoKHR({}, _s250->sType, _s250->pNext, _s250->viewMask, _s250->colorAttachmentCount,
                                             _s250->pColorAttachmentFormats, _s250->depthAttachmentFormat,
                                             _s250->stencilAttachmentFormat);
    }
    if (pGranularity != nullptr) {
        const auto _s251 = pGranularity;
        skip |= ValidateExtent2D({}, _s251->width, _s251->height);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDeviceImageSubresourceLayoutKHR(VkDevice device,
                                                                           const VkDeviceImageSubresourceInfoKHR* pInfo,
                                                                           VkSubresourceLayout2KHR* pLayout,
                                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s252 = pInfo;
        skip |= ValidateDeviceImageSubresourceInfoKHR({}, _s252->sType, _s252->pNext, _s252->pCreateInfo, _s252->pSubresource);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetImageSubresourceLayout2KHR(VkDevice device, VkImage image,
                                                                      const VkImageSubresource2KHR* pSubresource,
                                                                      VkSubresourceLayout2KHR* pLayout,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pSubresource != nullptr) {
        const auto _s253 = pSubresource;
        skip |= ValidateImageSubresource2KHR({}, _s253->sType, _s253->pNext, _s253->imageSubresource);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceCooperativeMatrixPropertiesKHR(
    VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesKHR* pProperties,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pProperties != nullptr) {
        for (uint32_t _i254 = 0; _i254 < *pPropertyCount; ++_i254) {
            const auto _s255 = &pProperties[_i254];
            skip |= ValidateCooperativeMatrixPropertiesKHR({}, _s255->sType, _s255->pNext, _s255->MSize, _s255->NSize, _s255->KSize,
                                                           _s255->AType, _s255->BType, _s255->CType, _s255->ResultType,
                                                           _s255->saturatingAccumulation, _s255->scope);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateDebugReportCallbackEXT(VkInstance instance,
                                                                     const VkDebugReportCallbackCreateInfoEXT* pCreateInfo,
                                                                     const VkAllocationCallbacks* pAllocator,
                                                                     VkDebugReportCallbackEXT* pCallback,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s256 = pCreateInfo;
        skip |= ValidateDebugReportCallbackCreateInfoEXT({}, _s256->sType, _s256->pNext, _s256->flags, _s256->pfnCallback,
                                                         _s256->pUserData);
    }
    if (pAllocator != nullptr) {
        const auto _s257 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s257->pUserData, _s257->pfnAllocation, _s257->pfnReallocation, _s257->pfnFree,
                                            _s257->pfnInternalAllocation, _s257->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback,
                                                                      const VkAllocationCallbacks* pAllocator,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s258 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s258->pUserData, _s258->pfnAllocation, _s258->pfnReallocation, _s258->pfnFree,
                                            _s258->pfnInternalAllocation, _s258->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDebugReportMessageEXT(VkInstance instance, VkDebugReportFlagsEXT flags,
                                                              VkDebugReportObjectTypeEXT objectType, uint64_t object,
                                                              size_t location, int32_t messageCode, const char* pLayerPrefix,
                                                              const char* pMessage, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateDebugMarkerSetObjectTagEXT(VkDevice device, const VkDebugMarkerObjectTagInfoEXT* pTagInfo,
                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pTagInfo != nullptr) {
        const auto _s259 = pTagInfo;
        skip |= ValidateDebugMarkerObjectTagInfoEXT({}, _s259->sType, _s259->pNext, _s259->objectType, _s259->object,
                                                    _s259->tagName, _s259->tagSize, _s259->pTag);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDebugMarkerSetObjectNameEXT(VkDevice device,
                                                                    const VkDebugMarkerObjectNameInfoEXT* pNameInfo,
                                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pNameInfo != nullptr) {
        const auto _s260 = pNameInfo;
        skip |= ValidateDebugMarkerObjectNameInfoEXT({}, _s260->sType, _s260->pNext, _s260->objectType, _s260->object,
                                                     _s260->pObjectName);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDebugMarkerBeginEXT(VkCommandBuffer commandBuffer,
                                                               const VkDebugMarkerMarkerInfoEXT* pMarkerInfo,
                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pMarkerInfo != nullptr) {
        const auto _s261 = pMarkerInfo;
        skip |= ValidateDebugMarkerMarkerInfoEXT(_carryOverObjects, _s261->sType, _s261->pNext, _s261->pMarkerName, _s261->color);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDebugMarkerEndEXT(VkCommandBuffer commandBuffer, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDebugMarkerInsertEXT(VkCommandBuffer commandBuffer,
                                                                const VkDebugMarkerMarkerInfoEXT* pMarkerInfo,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pMarkerInfo != nullptr) {
        const auto _s262 = pMarkerInfo;
        skip |= ValidateDebugMarkerMarkerInfoEXT(_carryOverObjects, _s262->sType, _s262->pNext, _s262->pMarkerName, _s262->color);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBindTransformFeedbackBuffersEXT(VkCommandBuffer commandBuffer, uint32_t firstBinding,
                                                                           uint32_t bindingCount, const VkBuffer* pBuffers,
                                                                           const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes,
                                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBeginTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer,
                                                                     uint32_t counterBufferCount, const VkBuffer* pCounterBuffers,
                                                                     const VkDeviceSize* pCounterBufferOffsets,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdEndTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer,
                                                                   uint32_t counterBufferCount, const VkBuffer* pCounterBuffers,
                                                                   const VkDeviceSize* pCounterBufferOffsets,
                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBeginQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool,
                                                                uint32_t query, VkQueryControlFlags flags, uint32_t index,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdEndQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query,
                                                              uint32_t index, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDrawIndirectByteCountEXT(VkCommandBuffer commandBuffer, uint32_t instanceCount,
                                                                    uint32_t firstInstance, VkBuffer counterBuffer,
                                                                    VkDeviceSize counterBufferOffset, uint32_t counterOffset,
                                                                    uint32_t vertexStride, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateCuModuleNVX(VkDevice device, const VkCuModuleCreateInfoNVX* pCreateInfo,
                                                          const VkAllocationCallbacks* pAllocator, VkCuModuleNVX* pModule,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s263 = pCreateInfo;
        skip |= ValidateCuModuleCreateInfoNVX({}, _s263->sType, _s263->pNext, _s263->dataSize, _s263->pData);
    }
    if (pAllocator != nullptr) {
        const auto _s264 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s264->pUserData, _s264->pfnAllocation, _s264->pfnReallocation, _s264->pfnFree,
                                            _s264->pfnInternalAllocation, _s264->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateCuFunctionNVX(VkDevice device, const VkCuFunctionCreateInfoNVX* pCreateInfo,
                                                            const VkAllocationCallbacks* pAllocator, VkCuFunctionNVX* pFunction,
                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s265 = pCreateInfo;
        skip |= ValidateCuFunctionCreateInfoNVX({}, _s265->sType, _s265->pNext, _s265->module, _s265->pName);
    }
    if (pAllocator != nullptr) {
        const auto _s266 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s266->pUserData, _s266->pfnAllocation, _s266->pfnReallocation, _s266->pfnFree,
                                            _s266->pfnInternalAllocation, _s266->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyCuModuleNVX(VkDevice device, VkCuModuleNVX module,
                                                           const VkAllocationCallbacks* pAllocator,
                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s267 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s267->pUserData, _s267->pfnAllocation, _s267->pfnReallocation, _s267->pfnFree,
                                            _s267->pfnInternalAllocation, _s267->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyCuFunctionNVX(VkDevice device, VkCuFunctionNVX function,
                                                             const VkAllocationCallbacks* pAllocator,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s268 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s268->pUserData, _s268->pfnAllocation, _s268->pfnReallocation, _s268->pfnFree,
                                            _s268->pfnInternalAllocation, _s268->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCuLaunchKernelNVX(VkCommandBuffer commandBuffer, const VkCuLaunchInfoNVX* pLaunchInfo,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pLaunchInfo != nullptr) {
        const auto _s269 = pLaunchInfo;
        skip |=
            ValidateCuLaunchInfoNVX(_carryOverObjects, _s269->sType, _s269->pNext, _s269->function, _s269->gridDimX,
                                    _s269->gridDimY, _s269->gridDimZ, _s269->blockDimX, _s269->blockDimY, _s269->blockDimZ,
                                    _s269->sharedMemBytes, _s269->paramCount, _s269->pParams, _s269->extraCount, _s269->pExtras);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetImageViewHandleNVX(VkDevice device, const VkImageViewHandleInfoNVX* pInfo,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s270 = pInfo;
        skip |=
            ValidateImageViewHandleInfoNVX({}, _s270->sType, _s270->pNext, _s270->imageView, _s270->descriptorType, _s270->sampler);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetImageViewAddressNVX(VkDevice device, VkImageView imageView,
                                                               VkImageViewAddressPropertiesNVX* pProperties,
                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDrawIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                                VkBuffer countBuffer, VkDeviceSize countBufferOffset,
                                                                uint32_t maxDrawCount, uint32_t stride,
                                                                const ErrorObject& _error_obj) const {
    return PreCallValidateCmdDrawIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride,
                                               _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdDrawIndexedIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer,
                                                                       VkDeviceSize offset, VkBuffer countBuffer,
                                                                       VkDeviceSize countBufferOffset, uint32_t maxDrawCount,
                                                                       uint32_t stride, const ErrorObject& _error_obj) const {
    return PreCallValidateCmdDrawIndexedIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount,
                                                      stride, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetShaderInfoAMD(VkDevice device, VkPipeline pipeline, VkShaderStageFlagBits shaderStage,
                                                         VkShaderInfoTypeAMD infoType, size_t* pInfoSize, void* pInfo,
                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#ifdef VK_USE_PLATFORM_GGP
bool ExplicitValidation::PreCallValidateCreateStreamDescriptorSurfaceGGP(VkInstance instance,
                                                                         const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo,
                                                                         const VkAllocationCallbacks* pAllocator,
                                                                         VkSurfaceKHR* pSurface,
                                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s271 = pCreateInfo;
        skip |= ValidateStreamDescriptorSurfaceCreateInfoGGP({}, _s271->sType, _s271->pNext, _s271->flags, _s271->streamDescriptor);
    }
    if (pAllocator != nullptr) {
        const auto _s272 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s272->pUserData, _s272->pfnAllocation, _s272->pfnReallocation, _s272->pfnFree,
                                            _s272->pfnInternalAllocation, _s272->pfnInternalFree);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_GGP
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceExternalImageFormatPropertiesNV(
    VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage,
    VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType,
    VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateGetMemoryWin32HandleNV(VkDevice device, VkDeviceMemory memory,
                                                               VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE* pHandle,
                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_VI_NN
bool ExplicitValidation::PreCallValidateCreateViSurfaceNN(VkInstance instance, const VkViSurfaceCreateInfoNN* pCreateInfo,
                                                          const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s273 = pCreateInfo;
        skip |= ValidateViSurfaceCreateInfoNN({}, _s273->sType, _s273->pNext, _s273->flags, _s273->window);
    }
    if (pAllocator != nullptr) {
        const auto _s274 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s274->pUserData, _s274->pfnAllocation, _s274->pfnReallocation, _s274->pfnFree,
                                            _s274->pfnInternalAllocation, _s274->pfnInternalFree);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_VI_NN
bool ExplicitValidation::PreCallValidateCmdBeginConditionalRenderingEXT(
    VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pConditionalRenderingBegin != nullptr) {
        const auto _s275 = pConditionalRenderingBegin;
        skip |= ValidateConditionalRenderingBeginInfoEXT(_carryOverObjects, _s275->sType, _s275->pNext, _s275->buffer,
                                                         _s275->offset, _s275->flags);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdEndConditionalRenderingEXT(VkCommandBuffer commandBuffer,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetViewportWScalingNV(VkCommandBuffer commandBuffer, uint32_t firstViewport,
                                                                 uint32_t viewportCount,
                                                                 const VkViewportWScalingNV* pViewportWScalings,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pViewportWScalings != nullptr) {
        for (uint32_t _i276 = 0; _i276 < viewportCount; ++_i276) {
            const auto _s277 = &pViewportWScalings[_i276];
            skip |= ValidateViewportWScalingNV(_carryOverObjects, _s277->xcoeff, _s277->ycoeff);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateReleaseDisplayEXT(VkPhysicalDevice physicalDevice, VkDisplayKHR display,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
bool ExplicitValidation::PreCallValidateAcquireXlibDisplayEXT(VkPhysicalDevice physicalDevice, Display* dpy, VkDisplayKHR display,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
bool ExplicitValidation::PreCallValidateGetRandROutputDisplayEXT(VkPhysicalDevice physicalDevice, Display* dpy, RROutput rrOutput,
                                                                 VkDisplayKHR* pDisplay, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceSurfaceCapabilities2EXT(VkPhysicalDevice physicalDevice,
                                                                                 VkSurfaceKHR surface,
                                                                                 VkSurfaceCapabilities2EXT* pSurfaceCapabilities,
                                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateDisplayPowerControlEXT(VkDevice device, VkDisplayKHR display,
                                                               const VkDisplayPowerInfoEXT* pDisplayPowerInfo,
                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pDisplayPowerInfo != nullptr) {
        const auto _s278 = pDisplayPowerInfo;
        skip |= ValidateDisplayPowerInfoEXT({}, _s278->sType, _s278->pNext, _s278->powerState);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateRegisterDeviceEventEXT(VkDevice device, const VkDeviceEventInfoEXT* pDeviceEventInfo,
                                                               const VkAllocationCallbacks* pAllocator, VkFence* pFence,
                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pDeviceEventInfo != nullptr) {
        const auto _s279 = pDeviceEventInfo;
        skip |= ValidateDeviceEventInfoEXT({}, _s279->sType, _s279->pNext, _s279->deviceEvent);
    }
    if (pAllocator != nullptr) {
        const auto _s280 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s280->pUserData, _s280->pfnAllocation, _s280->pfnReallocation, _s280->pfnFree,
                                            _s280->pfnInternalAllocation, _s280->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateRegisterDisplayEventEXT(VkDevice device, VkDisplayKHR display,
                                                                const VkDisplayEventInfoEXT* pDisplayEventInfo,
                                                                const VkAllocationCallbacks* pAllocator, VkFence* pFence,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pDisplayEventInfo != nullptr) {
        const auto _s281 = pDisplayEventInfo;
        skip |= ValidateDisplayEventInfoEXT({}, _s281->sType, _s281->pNext, _s281->displayEvent);
    }
    if (pAllocator != nullptr) {
        const auto _s282 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s282->pUserData, _s282->pfnAllocation, _s282->pfnReallocation, _s282->pfnFree,
                                            _s282->pfnInternalAllocation, _s282->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetSwapchainCounterEXT(VkDevice device, VkSwapchainKHR swapchain,
                                                               VkSurfaceCounterFlagBitsEXT counter, uint64_t* pCounterValue,
                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetRefreshCycleDurationGOOGLE(VkDevice device, VkSwapchainKHR swapchain,
                                                                      VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPastPresentationTimingGOOGLE(VkDevice device, VkSwapchainKHR swapchain,
                                                                        uint32_t* pPresentationTimingCount,
                                                                        VkPastPresentationTimingGOOGLE* pPresentationTimings,
                                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetDiscardRectangleEXT(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle,
                                                                  uint32_t discardRectangleCount,
                                                                  const VkRect2D* pDiscardRectangles,
                                                                  const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pDiscardRectangles != nullptr) {
        for (uint32_t _i283 = 0; _i283 < discardRectangleCount; ++_i283) {
            const auto _s284 = &pDiscardRectangles[_i283];
            skip |= ValidateRect2D(_carryOverObjects, _s284->offset, _s284->extent);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetDiscardRectangleEnableEXT(VkCommandBuffer commandBuffer,
                                                                        VkBool32 discardRectangleEnable,
                                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetDiscardRectangleModeEXT(VkCommandBuffer commandBuffer,
                                                                      VkDiscardRectangleModeEXT discardRectangleMode,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateSetHdrMetadataEXT(VkDevice device, uint32_t swapchainCount,
                                                          const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT* pMetadata,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pMetadata != nullptr) {
        for (uint32_t _i285 = 0; _i285 < swapchainCount; ++_i285) {
            const auto _s286 = &pMetadata[_i285];
            skip |= ValidateHdrMetadataEXT({}, _s286->sType, _s286->pNext, _s286->displayPrimaryRed, _s286->displayPrimaryGreen,
                                           _s286->displayPrimaryBlue, _s286->whitePoint, _s286->maxLuminance, _s286->minLuminance,
                                           _s286->maxContentLightLevel, _s286->maxFrameAverageLightLevel);
        }
    }
    return skip;
}
#ifdef VK_USE_PLATFORM_IOS_MVK
bool ExplicitValidation::PreCallValidateCreateIOSSurfaceMVK(VkInstance instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo,
                                                            const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface,
                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s287 = pCreateInfo;
        skip |= ValidateIOSSurfaceCreateInfoMVK({}, _s287->sType, _s287->pNext, _s287->flags, _s287->pView);
    }
    if (pAllocator != nullptr) {
        const auto _s288 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s288->pUserData, _s288->pfnAllocation, _s288->pfnReallocation, _s288->pfnFree,
                                            _s288->pfnInternalAllocation, _s288->pfnInternalFree);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
bool ExplicitValidation::PreCallValidateCreateMacOSSurfaceMVK(VkInstance instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo,
                                                              const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s289 = pCreateInfo;
        skip |= ValidateMacOSSurfaceCreateInfoMVK({}, _s289->sType, _s289->pNext, _s289->flags, _s289->pView);
    }
    if (pAllocator != nullptr) {
        const auto _s290 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s290->pUserData, _s290->pfnAllocation, _s290->pfnReallocation, _s290->pfnFree,
                                            _s290->pfnInternalAllocation, _s290->pfnInternalFree);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_MACOS_MVK
bool ExplicitValidation::PreCallValidateSetDebugUtilsObjectNameEXT(VkDevice device, const VkDebugUtilsObjectNameInfoEXT* pNameInfo,
                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pNameInfo != nullptr) {
        const auto _s291 = pNameInfo;
        skip |= ValidateDebugUtilsObjectNameInfoEXT({}, _s291->sType, _s291->pNext, _s291->objectType, _s291->objectHandle,
                                                    _s291->pObjectName);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateSetDebugUtilsObjectTagEXT(VkDevice device, const VkDebugUtilsObjectTagInfoEXT* pTagInfo,
                                                                  const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pTagInfo != nullptr) {
        const auto _s292 = pTagInfo;
        skip |= ValidateDebugUtilsObjectTagInfoEXT({}, _s292->sType, _s292->pNext, _s292->objectType, _s292->objectHandle,
                                                   _s292->tagName, _s292->tagSize, _s292->pTag);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateQueueBeginDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pLabelInfo != nullptr) {
        const auto _s293 = pLabelInfo;
        skip |= ValidateDebugUtilsLabelEXT({}, _s293->sType, _s293->pNext, _s293->pLabelName, _s293->color);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateQueueEndDebugUtilsLabelEXT(VkQueue queue, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateQueueInsertDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pLabelInfo != nullptr) {
        const auto _s294 = pLabelInfo;
        skip |= ValidateDebugUtilsLabelEXT({}, _s294->sType, _s294->pNext, _s294->pLabelName, _s294->color);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBeginDebugUtilsLabelEXT(VkCommandBuffer commandBuffer,
                                                                   const VkDebugUtilsLabelEXT* pLabelInfo,
                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pLabelInfo != nullptr) {
        const auto _s295 = pLabelInfo;
        skip |= ValidateDebugUtilsLabelEXT(_carryOverObjects, _s295->sType, _s295->pNext, _s295->pLabelName, _s295->color);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdEndDebugUtilsLabelEXT(VkCommandBuffer commandBuffer,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdInsertDebugUtilsLabelEXT(VkCommandBuffer commandBuffer,
                                                                    const VkDebugUtilsLabelEXT* pLabelInfo,
                                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pLabelInfo != nullptr) {
        const auto _s296 = pLabelInfo;
        skip |= ValidateDebugUtilsLabelEXT(_carryOverObjects, _s296->sType, _s296->pNext, _s296->pLabelName, _s296->color);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateDebugUtilsMessengerEXT(VkInstance instance,
                                                                     const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo,
                                                                     const VkAllocationCallbacks* pAllocator,
                                                                     VkDebugUtilsMessengerEXT* pMessenger,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s297 = pCreateInfo;
        skip |= ValidateDebugUtilsMessengerCreateInfoEXT({}, _s297->sType, _s297->pNext, _s297->flags, _s297->messageSeverity,
                                                         _s297->messageType, _s297->pfnUserCallback, _s297->pUserData);
    }
    if (pAllocator != nullptr) {
        const auto _s298 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s298->pUserData, _s298->pfnAllocation, _s298->pfnReallocation, _s298->pfnFree,
                                            _s298->pfnInternalAllocation, _s298->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyDebugUtilsMessengerEXT(VkInstance instance, VkDebugUtilsMessengerEXT messenger,
                                                                      const VkAllocationCallbacks* pAllocator,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s299 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s299->pUserData, _s299->pfnAllocation, _s299->pfnReallocation, _s299->pfnFree,
                                            _s299->pfnInternalAllocation, _s299->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateSubmitDebugUtilsMessageEXT(VkInstance instance,
                                                                   VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
                                                                   VkDebugUtilsMessageTypeFlagsEXT messageTypes,
                                                                   const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData,
                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCallbackData != nullptr) {
        const auto _s300 = pCallbackData;
        skip |= ValidateDebugUtilsMessengerCallbackDataEXT({}, _s300->sType, _s300->pNext, _s300->flags, _s300->pMessageIdName,
                                                           _s300->messageIdNumber, _s300->pMessage, _s300->queueLabelCount,
                                                           _s300->pQueueLabels, _s300->cmdBufLabelCount, _s300->pCmdBufLabels,
                                                           _s300->objectCount, _s300->pObjects);
    }
    return skip;
}
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool ExplicitValidation::PreCallValidateGetAndroidHardwareBufferPropertiesANDROID(
    VkDevice device, const struct AHardwareBuffer* buffer, VkAndroidHardwareBufferPropertiesANDROID* pProperties,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool ExplicitValidation::PreCallValidateGetMemoryAndroidHardwareBufferANDROID(
    VkDevice device, const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo, struct AHardwareBuffer** pBuffer,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s301 = pInfo;
        skip |= ValidateMemoryGetAndroidHardwareBufferInfoANDROID({}, _s301->sType, _s301->pNext, _s301->memory);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::PreCallValidateCreateExecutionGraphPipelinesAMDX(
    VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount,
    const VkExecutionGraphPipelineCreateInfoAMDX* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfos != nullptr) {
        for (uint32_t _i302 = 0; _i302 < createInfoCount; ++_i302) {
            const auto _s303 = &pCreateInfos[_i302];
            skip |= ValidateExecutionGraphPipelineCreateInfoAMDX({}, _s303->sType, _s303->pNext, _s303->flags, _s303->stageCount,
                                                                 _s303->pStages, _s303->pLibraryInfo, _s303->layout,
                                                                 _s303->basePipelineHandle, _s303->basePipelineIndex);
        }
    }
    if (pAllocator != nullptr) {
        const auto _s304 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s304->pUserData, _s304->pfnAllocation, _s304->pfnReallocation, _s304->pfnFree,
                                            _s304->pfnInternalAllocation, _s304->pfnInternalFree);
    }
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::PreCallValidateGetExecutionGraphPipelineScratchSizeAMDX(VkDevice device, VkPipeline executionGraph,
                                                                                 VkExecutionGraphPipelineScratchSizeAMDX* pSizeInfo,
                                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pSizeInfo != nullptr) {
        const auto _s305 = pSizeInfo;
        skip |= ValidateExecutionGraphPipelineScratchSizeAMDX({}, _s305->sType, _s305->pNext, _s305->size);
    }
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::PreCallValidateGetExecutionGraphPipelineNodeIndexAMDX(
    VkDevice device, VkPipeline executionGraph, const VkPipelineShaderStageNodeCreateInfoAMDX* pNodeInfo, uint32_t* pNodeIndex,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pNodeInfo != nullptr) {
        const auto _s306 = pNodeInfo;
        skip |= ValidatePipelineShaderStageNodeCreateInfoAMDX({}, _s306->sType, _s306->pNext, _s306->pName, _s306->index);
    }
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::PreCallValidateCmdInitializeGraphScratchMemoryAMDX(VkCommandBuffer commandBuffer, VkDeviceAddress scratch,
                                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::PreCallValidateCmdDispatchGraphAMDX(VkCommandBuffer commandBuffer, VkDeviceAddress scratch,
                                                             const VkDispatchGraphCountInfoAMDX* pCountInfo,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pCountInfo != nullptr) {
        const auto _s307 = pCountInfo;
        skip |= ValidateDispatchGraphCountInfoAMDX(_carryOverObjects, _s307->count, _s307->infos, _s307->stride);
    }
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::PreCallValidateCmdDispatchGraphIndirectAMDX(VkCommandBuffer commandBuffer, VkDeviceAddress scratch,
                                                                     const VkDispatchGraphCountInfoAMDX* pCountInfo,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pCountInfo != nullptr) {
        const auto _s308 = pCountInfo;
        skip |= ValidateDispatchGraphCountInfoAMDX(_carryOverObjects, _s308->count, _s308->infos, _s308->stride);
    }
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::PreCallValidateCmdDispatchGraphIndirectCountAMDX(VkCommandBuffer commandBuffer, VkDeviceAddress scratch,
                                                                          VkDeviceAddress countInfo,
                                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::PreCallValidateCmdSetSampleLocationsEXT(VkCommandBuffer commandBuffer,
                                                                 const VkSampleLocationsInfoEXT* pSampleLocationsInfo,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pSampleLocationsInfo != nullptr) {
        const auto _s309 = pSampleLocationsInfo;
        skip |= ValidateSampleLocationsInfoEXT(_carryOverObjects, _s309->sType, _s309->pNext, _s309->sampleLocationsPerPixel,
                                               _s309->sampleLocationGridSize, _s309->sampleLocationsCount, _s309->pSampleLocations);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceMultisamplePropertiesEXT(
    VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT* pMultisampleProperties,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetImageDrmFormatModifierPropertiesEXT(VkDevice device, VkImage image,
                                                                               VkImageDrmFormatModifierPropertiesEXT* pProperties,
                                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBindShadingRateImageNV(VkCommandBuffer commandBuffer, VkImageView imageView,
                                                                  VkImageLayout imageLayout, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetViewportShadingRatePaletteNV(VkCommandBuffer commandBuffer, uint32_t firstViewport,
                                                                           uint32_t viewportCount,
                                                                           const VkShadingRatePaletteNV* pShadingRatePalettes,
                                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pShadingRatePalettes != nullptr) {
        for (uint32_t _i310 = 0; _i310 < viewportCount; ++_i310) {
            const auto _s311 = &pShadingRatePalettes[_i310];
            skip |= ValidateShadingRatePaletteNV(_carryOverObjects, _s311->shadingRatePaletteEntryCount,
                                                 _s311->pShadingRatePaletteEntries);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetCoarseSampleOrderNV(VkCommandBuffer commandBuffer,
                                                                  VkCoarseSampleOrderTypeNV sampleOrderType,
                                                                  uint32_t customSampleOrderCount,
                                                                  const VkCoarseSampleOrderCustomNV* pCustomSampleOrders,
                                                                  const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pCustomSampleOrders != nullptr) {
        for (uint32_t _i312 = 0; _i312 < customSampleOrderCount; ++_i312) {
            const auto _s313 = &pCustomSampleOrders[_i312];
            skip |= ValidateCoarseSampleOrderCustomNV(_carryOverObjects, _s313->shadingRate, _s313->sampleCount,
                                                      _s313->sampleLocationCount, _s313->pSampleLocations);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateAccelerationStructureNV(VkDevice device,
                                                                      const VkAccelerationStructureCreateInfoNV* pCreateInfo,
                                                                      const VkAllocationCallbacks* pAllocator,
                                                                      VkAccelerationStructureNV* pAccelerationStructure,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s314 = pCreateInfo;
        skip |= ValidateAccelerationStructureCreateInfoNV({}, _s314->sType, _s314->pNext, _s314->compactedSize, _s314->info);
    }
    if (pAllocator != nullptr) {
        const auto _s315 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s315->pUserData, _s315->pfnAllocation, _s315->pfnReallocation, _s315->pfnFree,
                                            _s315->pfnInternalAllocation, _s315->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyAccelerationStructureNV(VkDevice device,
                                                                       VkAccelerationStructureNV accelerationStructure,
                                                                       const VkAllocationCallbacks* pAllocator,
                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s316 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s316->pUserData, _s316->pfnAllocation, _s316->pfnReallocation, _s316->pfnFree,
                                            _s316->pfnInternalAllocation, _s316->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetAccelerationStructureMemoryRequirementsNV(
    VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2KHR* pMemoryRequirements,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s317 = pInfo;
        skip |= ValidateAccelerationStructureMemoryRequirementsInfoNV({}, _s317->sType, _s317->pNext, _s317->type,
                                                                      _s317->accelerationStructure);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateBindAccelerationStructureMemoryNV(VkDevice device, uint32_t bindInfoCount,
                                                                          const VkBindAccelerationStructureMemoryInfoNV* pBindInfos,
                                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pBindInfos != nullptr) {
        for (uint32_t _i318 = 0; _i318 < bindInfoCount; ++_i318) {
            const auto _s319 = &pBindInfos[_i318];
            skip |= ValidateBindAccelerationStructureMemoryInfoNV({}, _s319->sType, _s319->pNext, _s319->accelerationStructure,
                                                                  _s319->memory, _s319->memoryOffset, _s319->deviceIndexCount,
                                                                  _s319->pDeviceIndices);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBuildAccelerationStructureNV(
    VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV* pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset,
    VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pInfo != nullptr) {
        const auto _s320 = pInfo;
        skip |= ValidateAccelerationStructureInfoNV(_carryOverObjects, _s320->sType, _s320->pNext, _s320->type, _s320->flags,
                                                    _s320->instanceCount, _s320->geometryCount, _s320->pGeometries);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyAccelerationStructureNV(VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst,
                                                                       VkAccelerationStructureNV src,
                                                                       VkCopyAccelerationStructureModeKHR mode,
                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdTraceRaysNV(
    VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset,
    VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride,
    VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride,
    VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride,
    uint32_t width, uint32_t height, uint32_t depth, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateRayTracingPipelinesNV(VkDevice device, VkPipelineCache pipelineCache,
                                                                    uint32_t createInfoCount,
                                                                    const VkRayTracingPipelineCreateInfoNV* pCreateInfos,
                                                                    const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines,
                                                                    const ErrorObject& _error_obj, void* validation_state) const {
    bool skip = ValidationStateTracker::PreCallValidateCreateRayTracingPipelinesNV(
        device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines, _error_obj, validation_state);
    if (pCreateInfos != nullptr) {
        for (uint32_t _i321 = 0; _i321 < createInfoCount; ++_i321) {
            const auto _s322 = &pCreateInfos[_i321];
            skip |= ValidateRayTracingPipelineCreateInfoNV(
                {}, _s322->sType, _s322->pNext, _s322->flags, _s322->stageCount, _s322->pStages, _s322->groupCount, _s322->pGroups,
                _s322->maxRecursionDepth, _s322->layout, _s322->basePipelineHandle, _s322->basePipelineIndex);
        }
    }
    if (pAllocator != nullptr) {
        const auto _s323 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s323->pUserData, _s323->pfnAllocation, _s323->pfnReallocation, _s323->pfnFree,
                                            _s323->pfnInternalAllocation, _s323->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetRayTracingShaderGroupHandlesKHR(VkDevice device, VkPipeline pipeline,
                                                                           uint32_t firstGroup, uint32_t groupCount,
                                                                           size_t dataSize, void* pData,
                                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetRayTracingShaderGroupHandlesNV(VkDevice device, VkPipeline pipeline, uint32_t firstGroup,
                                                                          uint32_t groupCount, size_t dataSize, void* pData,
                                                                          const ErrorObject& _error_obj) const {
    return PreCallValidateGetRayTracingShaderGroupHandlesKHR(device, pipeline, firstGroup, groupCount, dataSize, pData, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetAccelerationStructureHandleNV(VkDevice device,
                                                                         VkAccelerationStructureNV accelerationStructure,
                                                                         size_t dataSize, void* pData,
                                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdWriteAccelerationStructuresPropertiesNV(
    VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureNV* pAccelerationStructures,
    VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCompileDeferredNV(VkDevice device, VkPipeline pipeline, uint32_t shader,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetMemoryHostPointerPropertiesEXT(
    VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void* pHostPointer,
    VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdWriteBufferMarkerAMD(VkCommandBuffer commandBuffer,
                                                                VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer,
                                                                VkDeviceSize dstOffset, uint32_t marker,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceCalibrateableTimeDomainsEXT(VkPhysicalDevice physicalDevice,
                                                                                     uint32_t* pTimeDomainCount,
                                                                                     VkTimeDomainEXT* pTimeDomains,
                                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetCalibratedTimestampsEXT(VkDevice device, uint32_t timestampCount,
                                                                   const VkCalibratedTimestampInfoEXT* pTimestampInfos,
                                                                   uint64_t* pTimestamps, uint64_t* pMaxDeviation,
                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pTimestampInfos != nullptr) {
        for (uint32_t _i324 = 0; _i324 < timestampCount; ++_i324) {
            const auto _s325 = &pTimestampInfos[_i324];
            skip |= ValidateCalibratedTimestampInfoEXT({}, _s325->sType, _s325->pNext, _s325->timeDomain);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDrawMeshTasksNV(VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask,
                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDrawMeshTasksIndirectNV(VkCommandBuffer commandBuffer, VkBuffer buffer,
                                                                   VkDeviceSize offset, uint32_t drawCount, uint32_t stride,
                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDrawMeshTasksIndirectCountNV(VkCommandBuffer commandBuffer, VkBuffer buffer,
                                                                        VkDeviceSize offset, VkBuffer countBuffer,
                                                                        VkDeviceSize countBufferOffset, uint32_t maxDrawCount,
                                                                        uint32_t stride, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetExclusiveScissorEnableNV(VkCommandBuffer commandBuffer,
                                                                       uint32_t firstExclusiveScissor,
                                                                       uint32_t exclusiveScissorCount,
                                                                       const VkBool32* pExclusiveScissorEnables,
                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetExclusiveScissorNV(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor,
                                                                 uint32_t exclusiveScissorCount, const VkRect2D* pExclusiveScissors,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pExclusiveScissors != nullptr) {
        for (uint32_t _i326 = 0; _i326 < exclusiveScissorCount; ++_i326) {
            const auto _s327 = &pExclusiveScissors[_i326];
            skip |= ValidateRect2D(_carryOverObjects, _s327->offset, _s327->extent);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetCheckpointNV(VkCommandBuffer commandBuffer, const void* pCheckpointMarker,
                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateGetQueueCheckpointDataNV(VkQueue queue, uint32_t* pCheckpointDataCount,
                                                                 VkCheckpointDataNV* pCheckpointData,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateInitializePerformanceApiINTEL(VkDevice device,
                                                                      const VkInitializePerformanceApiInfoINTEL* pInitializeInfo,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInitializeInfo != nullptr) {
        const auto _s328 = pInitializeInfo;
        skip |= ValidateInitializePerformanceApiInfoINTEL({}, _s328->sType, _s328->pNext, _s328->pUserData);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateUninitializePerformanceApiINTEL(VkDevice device, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetPerformanceMarkerINTEL(VkCommandBuffer commandBuffer,
                                                                     const VkPerformanceMarkerInfoINTEL* pMarkerInfo,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pMarkerInfo != nullptr) {
        const auto _s329 = pMarkerInfo;
        skip |= ValidatePerformanceMarkerInfoINTEL(_carryOverObjects, _s329->sType, _s329->pNext, _s329->marker);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetPerformanceStreamMarkerINTEL(VkCommandBuffer commandBuffer,
                                                                           const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo,
                                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pMarkerInfo != nullptr) {
        const auto _s330 = pMarkerInfo;
        skip |= ValidatePerformanceStreamMarkerInfoINTEL(_carryOverObjects, _s330->sType, _s330->pNext, _s330->marker);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetPerformanceOverrideINTEL(VkCommandBuffer commandBuffer,
                                                                       const VkPerformanceOverrideInfoINTEL* pOverrideInfo,
                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pOverrideInfo != nullptr) {
        const auto _s331 = pOverrideInfo;
        skip |= ValidatePerformanceOverrideInfoINTEL(_carryOverObjects, _s331->sType, _s331->pNext, _s331->type, _s331->enable,
                                                     _s331->parameter);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateAcquirePerformanceConfigurationINTEL(
    VkDevice device, const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo,
    VkPerformanceConfigurationINTEL* pConfiguration, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAcquireInfo != nullptr) {
        const auto _s332 = pAcquireInfo;
        skip |= ValidatePerformanceConfigurationAcquireInfoINTEL({}, _s332->sType, _s332->pNext, _s332->type);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateReleasePerformanceConfigurationINTEL(VkDevice device,
                                                                             VkPerformanceConfigurationINTEL configuration,
                                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateQueueSetPerformanceConfigurationINTEL(VkQueue queue,
                                                                              VkPerformanceConfigurationINTEL configuration,
                                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPerformanceParameterINTEL(VkDevice device, VkPerformanceParameterTypeINTEL parameter,
                                                                     VkPerformanceValueINTEL* pValue,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pValue != nullptr) {
        const auto _s333 = pValue;
        skip |= ValidatePerformanceValueINTEL({}, _s333->type, _s333->data);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateSetLocalDimmingAMD(VkDevice device, VkSwapchainKHR swapChain, VkBool32 localDimmingEnable,
                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::PreCallValidateCreateImagePipeSurfaceFUCHSIA(VkInstance instance,
                                                                      const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo,
                                                                      const VkAllocationCallbacks* pAllocator,
                                                                      VkSurfaceKHR* pSurface, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s334 = pCreateInfo;
        skip |= ValidateImagePipeSurfaceCreateInfoFUCHSIA({}, _s334->sType, _s334->pNext, _s334->flags, _s334->imagePipeHandle);
    }
    if (pAllocator != nullptr) {
        const auto _s335 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s335->pUserData, _s335->pfnAllocation, _s335->pfnReallocation, _s335->pfnFree,
                                            _s335->pfnInternalAllocation, _s335->pfnInternalFree);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::PreCallValidateCreateMetalSurfaceEXT(VkInstance instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo,
                                                              const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s336 = pCreateInfo;
        skip |= ValidateMetalSurfaceCreateInfoEXT({}, _s336->sType, _s336->pNext, _s336->flags, _s336->pLayer);
    }
    if (pAllocator != nullptr) {
        const auto _s337 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s337->pUserData, _s337->pfnAllocation, _s337->pfnReallocation, _s337->pfnFree,
                                            _s337->pfnInternalAllocation, _s337->pfnInternalFree);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::PreCallValidateGetBufferDeviceAddressEXT(VkDevice device, const VkBufferDeviceAddressInfo* pInfo,
                                                                  const ErrorObject& _error_obj) const {
    return PreCallValidateGetBufferDeviceAddress(device, pInfo, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceToolPropertiesEXT(VkPhysicalDevice physicalDevice, uint32_t* pToolCount,
                                                                           VkPhysicalDeviceToolProperties* pToolProperties,
                                                                           const ErrorObject& _error_obj) const {
    return PreCallValidateGetPhysicalDeviceToolProperties(physicalDevice, pToolCount, pToolProperties, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceCooperativeMatrixPropertiesNV(VkPhysicalDevice physicalDevice,
                                                                                       uint32_t* pPropertyCount,
                                                                                       VkCooperativeMatrixPropertiesNV* pProperties,
                                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pProperties != nullptr) {
        for (uint32_t _i338 = 0; _i338 < *pPropertyCount; ++_i338) {
            const auto _s339 = &pProperties[_i338];
            skip |= ValidateCooperativeMatrixPropertiesNV({}, _s339->sType, _s339->pNext, _s339->MSize, _s339->NSize, _s339->KSize,
                                                          _s339->AType, _s339->BType, _s339->CType, _s339->DType, _s339->scope);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
    VkPhysicalDevice physicalDevice, uint32_t* pCombinationCount, VkFramebufferMixedSamplesCombinationNV* pCombinations,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceSurfacePresentModes2EXT(
    VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pPresentModeCount,
    VkPresentModeKHR* pPresentModes, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pSurfaceInfo != nullptr) {
        const auto _s340 = pSurfaceInfo;
        skip |= ValidatePhysicalDeviceSurfaceInfo2KHR({}, _s340->sType, _s340->pNext, _s340->surface);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateAcquireFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain,
                                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateReleaseFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain,
                                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateGetDeviceGroupSurfacePresentModes2EXT(VkDevice device,
                                                                              const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
                                                                              VkDeviceGroupPresentModeFlagsKHR* pModes,
                                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pSurfaceInfo != nullptr) {
        const auto _s341 = pSurfaceInfo;
        skip |= ValidatePhysicalDeviceSurfaceInfo2KHR({}, _s341->sType, _s341->pNext, _s341->surface);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateCreateHeadlessSurfaceEXT(VkInstance instance,
                                                                 const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo,
                                                                 const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s342 = pCreateInfo;
        skip |= ValidateHeadlessSurfaceCreateInfoEXT({}, _s342->sType, _s342->pNext, _s342->flags);
    }
    if (pAllocator != nullptr) {
        const auto _s343 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s343->pUserData, _s343->pfnAllocation, _s343->pfnReallocation, _s343->pfnFree,
                                            _s343->pfnInternalAllocation, _s343->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetLineStippleEXT(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor,
                                                             uint16_t lineStipplePattern, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateResetQueryPoolEXT(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery,
                                                          uint32_t queryCount, const ErrorObject& _error_obj) const {
    return PreCallValidateResetQueryPool(device, queryPool, firstQuery, queryCount, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdSetCullModeEXT(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode,
                                                          const ErrorObject& _error_obj) const {
    return PreCallValidateCmdSetCullMode(commandBuffer, cullMode, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdSetFrontFaceEXT(VkCommandBuffer commandBuffer, VkFrontFace frontFace,
                                                           const ErrorObject& _error_obj) const {
    return PreCallValidateCmdSetFrontFace(commandBuffer, frontFace, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdSetPrimitiveTopologyEXT(VkCommandBuffer commandBuffer,
                                                                   VkPrimitiveTopology primitiveTopology,
                                                                   const ErrorObject& _error_obj) const {
    return PreCallValidateCmdSetPrimitiveTopology(commandBuffer, primitiveTopology, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdSetViewportWithCountEXT(VkCommandBuffer commandBuffer, uint32_t viewportCount,
                                                                   const VkViewport* pViewports,
                                                                   const ErrorObject& _error_obj) const {
    return PreCallValidateCmdSetViewportWithCount(commandBuffer, viewportCount, pViewports, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdSetScissorWithCountEXT(VkCommandBuffer commandBuffer, uint32_t scissorCount,
                                                                  const VkRect2D* pScissors, const ErrorObject& _error_obj) const {
    return PreCallValidateCmdSetScissorWithCount(commandBuffer, scissorCount, pScissors, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdBindVertexBuffers2EXT(VkCommandBuffer commandBuffer, uint32_t firstBinding,
                                                                 uint32_t bindingCount, const VkBuffer* pBuffers,
                                                                 const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes,
                                                                 const VkDeviceSize* pStrides,
                                                                 const ErrorObject& _error_obj) const {
    return PreCallValidateCmdBindVertexBuffers2(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides,
                                                _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdSetDepthTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable,
                                                                 const ErrorObject& _error_obj) const {
    return PreCallValidateCmdSetDepthTestEnable(commandBuffer, depthTestEnable, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdSetDepthWriteEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable,
                                                                  const ErrorObject& _error_obj) const {
    return PreCallValidateCmdSetDepthWriteEnable(commandBuffer, depthWriteEnable, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdSetDepthCompareOpEXT(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp,
                                                                const ErrorObject& _error_obj) const {
    return PreCallValidateCmdSetDepthCompareOp(commandBuffer, depthCompareOp, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdSetDepthBoundsTestEnableEXT(VkCommandBuffer commandBuffer,
                                                                       VkBool32 depthBoundsTestEnable,
                                                                       const ErrorObject& _error_obj) const {
    return PreCallValidateCmdSetDepthBoundsTestEnable(commandBuffer, depthBoundsTestEnable, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdSetStencilTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable,
                                                                   const ErrorObject& _error_obj) const {
    return PreCallValidateCmdSetStencilTestEnable(commandBuffer, stencilTestEnable, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdSetStencilOpEXT(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask,
                                                           VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp,
                                                           VkCompareOp compareOp, const ErrorObject& _error_obj) const {
    return PreCallValidateCmdSetStencilOp(commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp, _error_obj);
}
bool ExplicitValidation::PreCallValidateCopyMemoryToImageEXT(VkDevice device,
                                                             const VkCopyMemoryToImageInfoEXT* pCopyMemoryToImageInfo,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCopyMemoryToImageInfo != nullptr) {
        const auto _s344 = pCopyMemoryToImageInfo;
        skip |= ValidateCopyMemoryToImageInfoEXT({}, _s344->sType, _s344->pNext, _s344->flags, _s344->dstImage,
                                                 _s344->dstImageLayout, _s344->regionCount, _s344->pRegions);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCopyImageToMemoryEXT(VkDevice device,
                                                             const VkCopyImageToMemoryInfoEXT* pCopyImageToMemoryInfo,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCopyImageToMemoryInfo != nullptr) {
        const auto _s345 = pCopyImageToMemoryInfo;
        skip |= ValidateCopyImageToMemoryInfoEXT({}, _s345->sType, _s345->pNext, _s345->flags, _s345->srcImage,
                                                 _s345->srcImageLayout, _s345->regionCount, _s345->pRegions);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCopyImageToImageEXT(VkDevice device, const VkCopyImageToImageInfoEXT* pCopyImageToImageInfo,
                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCopyImageToImageInfo != nullptr) {
        const auto _s346 = pCopyImageToImageInfo;
        skip |=
            ValidateCopyImageToImageInfoEXT({}, _s346->sType, _s346->pNext, _s346->flags, _s346->srcImage, _s346->srcImageLayout,
                                            _s346->dstImage, _s346->dstImageLayout, _s346->regionCount, _s346->pRegions);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateTransitionImageLayoutEXT(VkDevice device, uint32_t transitionCount,
                                                                 const VkHostImageLayoutTransitionInfoEXT* pTransitions,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pTransitions != nullptr) {
        for (uint32_t _i347 = 0; _i347 < transitionCount; ++_i347) {
            const auto _s348 = &pTransitions[_i347];
            skip |= ValidateHostImageLayoutTransitionInfoEXT({}, _s348->sType, _s348->pNext, _s348->image, _s348->oldLayout,
                                                             _s348->newLayout, _s348->subresourceRange);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetImageSubresourceLayout2EXT(VkDevice device, VkImage image,
                                                                      const VkImageSubresource2KHR* pSubresource,
                                                                      VkSubresourceLayout2KHR* pLayout,
                                                                      const ErrorObject& _error_obj) const {
    return PreCallValidateGetImageSubresourceLayout2KHR(device, image, pSubresource, pLayout, _error_obj);
}
bool ExplicitValidation::PreCallValidateReleaseSwapchainImagesEXT(VkDevice device,
                                                                  const VkReleaseSwapchainImagesInfoEXT* pReleaseInfo,
                                                                  const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pReleaseInfo != nullptr) {
        const auto _s349 = pReleaseInfo;
        skip |= ValidateReleaseSwapchainImagesInfoEXT({}, _s349->sType, _s349->pNext, _s349->swapchain, _s349->imageIndexCount,
                                                      _s349->pImageIndices);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetGeneratedCommandsMemoryRequirementsNV(
    VkDevice device, const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2* pMemoryRequirements,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s350 = pInfo;
        skip |= ValidateGeneratedCommandsMemoryRequirementsInfoNV({}, _s350->sType, _s350->pNext, _s350->pipelineBindPoint,
                                                                  _s350->pipeline, _s350->indirectCommandsLayout,
                                                                  _s350->maxSequencesCount);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdPreprocessGeneratedCommandsNV(VkCommandBuffer commandBuffer,
                                                                         const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo,
                                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pGeneratedCommandsInfo != nullptr) {
        const auto _s351 = pGeneratedCommandsInfo;
        skip |= ValidateGeneratedCommandsInfoNV(_carryOverObjects, _s351->sType, _s351->pNext, _s351->pipelineBindPoint,
                                                _s351->pipeline, _s351->indirectCommandsLayout, _s351->streamCount, _s351->pStreams,
                                                _s351->sequencesCount, _s351->preprocessBuffer, _s351->preprocessOffset,
                                                _s351->preprocessSize, _s351->sequencesCountBuffer, _s351->sequencesCountOffset,
                                                _s351->sequencesIndexBuffer, _s351->sequencesIndexOffset);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdExecuteGeneratedCommandsNV(VkCommandBuffer commandBuffer, VkBool32 isPreprocessed,
                                                                      const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pGeneratedCommandsInfo != nullptr) {
        const auto _s352 = pGeneratedCommandsInfo;
        skip |= ValidateGeneratedCommandsInfoNV(_carryOverObjects, _s352->sType, _s352->pNext, _s352->pipelineBindPoint,
                                                _s352->pipeline, _s352->indirectCommandsLayout, _s352->streamCount, _s352->pStreams,
                                                _s352->sequencesCount, _s352->preprocessBuffer, _s352->preprocessOffset,
                                                _s352->preprocessSize, _s352->sequencesCountBuffer, _s352->sequencesCountOffset,
                                                _s352->sequencesIndexBuffer, _s352->sequencesIndexOffset);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBindPipelineShaderGroupNV(VkCommandBuffer commandBuffer,
                                                                     VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline,
                                                                     uint32_t groupIndex, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateIndirectCommandsLayoutNV(VkDevice device,
                                                                       const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo,
                                                                       const VkAllocationCallbacks* pAllocator,
                                                                       VkIndirectCommandsLayoutNV* pIndirectCommandsLayout,
                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s353 = pCreateInfo;
        skip |= ValidateIndirectCommandsLayoutCreateInfoNV({}, _s353->sType, _s353->pNext, _s353->flags, _s353->pipelineBindPoint,
                                                           _s353->tokenCount, _s353->pTokens, _s353->streamCount,
                                                           _s353->pStreamStrides);
    }
    if (pAllocator != nullptr) {
        const auto _s354 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s354->pUserData, _s354->pfnAllocation, _s354->pfnReallocation, _s354->pfnFree,
                                            _s354->pfnInternalAllocation, _s354->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyIndirectCommandsLayoutNV(VkDevice device,
                                                                        VkIndirectCommandsLayoutNV indirectCommandsLayout,
                                                                        const VkAllocationCallbacks* pAllocator,
                                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s355 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s355->pUserData, _s355->pfnAllocation, _s355->pfnReallocation, _s355->pfnFree,
                                            _s355->pfnInternalAllocation, _s355->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetDepthBias2EXT(VkCommandBuffer commandBuffer, const VkDepthBiasInfoEXT* pDepthBiasInfo,
                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pDepthBiasInfo != nullptr) {
        const auto _s356 = pDepthBiasInfo;
        skip |= ValidateDepthBiasInfoEXT(_carryOverObjects, _s356->sType, _s356->pNext, _s356->depthBiasConstantFactor,
                                         _s356->depthBiasClamp, _s356->depthBiasSlopeFactor);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateAcquireDrmDisplayEXT(VkPhysicalDevice physicalDevice, int32_t drmFd, VkDisplayKHR display,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDrmDisplayEXT(VkPhysicalDevice physicalDevice, int32_t drmFd, uint32_t connectorId,
                                                         VkDisplayKHR* display, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCreatePrivateDataSlotEXT(VkDevice device, const VkPrivateDataSlotCreateInfo* pCreateInfo,
                                                                 const VkAllocationCallbacks* pAllocator,
                                                                 VkPrivateDataSlot* pPrivateDataSlot,
                                                                 const ErrorObject& _error_obj) const {
    return PreCallValidateCreatePrivateDataSlot(device, pCreateInfo, pAllocator, pPrivateDataSlot, _error_obj);
}
bool ExplicitValidation::PreCallValidateDestroyPrivateDataSlotEXT(VkDevice device, VkPrivateDataSlot privateDataSlot,
                                                                  const VkAllocationCallbacks* pAllocator,
                                                                  const ErrorObject& _error_obj) const {
    return PreCallValidateDestroyPrivateDataSlot(device, privateDataSlot, pAllocator, _error_obj);
}
bool ExplicitValidation::PreCallValidateSetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle,
                                                          VkPrivateDataSlot privateDataSlot, uint64_t data,
                                                          const ErrorObject& _error_obj) const {
    return PreCallValidateSetPrivateData(device, objectType, objectHandle, privateDataSlot, data, _error_obj);
}
bool ExplicitValidation::PreCallValidateGetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle,
                                                          VkPrivateDataSlot privateDataSlot, uint64_t* pData,
                                                          const ErrorObject& _error_obj) const {
    return PreCallValidateGetPrivateData(device, objectType, objectHandle, privateDataSlot, pData, _error_obj);
}
#ifdef VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::PreCallValidateExportMetalObjectsEXT(VkDevice device, VkExportMetalObjectsInfoEXT* pMetalObjectsInfo,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pMetalObjectsInfo != nullptr) {
        const auto _s357 = pMetalObjectsInfo;
        skip |= ValidateExportMetalObjectsInfoEXT({}, _s357->sType, _s357->pNext);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::PreCallValidateGetDescriptorSetLayoutSizeEXT(VkDevice device, VkDescriptorSetLayout layout,
                                                                      VkDeviceSize* pLayoutSizeInBytes,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDescriptorSetLayoutBindingOffsetEXT(VkDevice device, VkDescriptorSetLayout layout,
                                                                               uint32_t binding, VkDeviceSize* pOffset,
                                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDescriptorEXT(VkDevice device, const VkDescriptorGetInfoEXT* pDescriptorInfo,
                                                         size_t dataSize, void* pDescriptor, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pDescriptorInfo != nullptr) {
        const auto _s358 = pDescriptorInfo;
        skip |= ValidateDescriptorGetInfoEXT({}, _s358->sType, _s358->pNext, _s358->type, _s358->data);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBindDescriptorBuffersEXT(VkCommandBuffer commandBuffer, uint32_t bufferCount,
                                                                    const VkDescriptorBufferBindingInfoEXT* pBindingInfos,
                                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pBindingInfos != nullptr) {
        for (uint32_t _i359 = 0; _i359 < bufferCount; ++_i359) {
            const auto _s360 = &pBindingInfos[_i359];
            skip |=
                ValidateDescriptorBufferBindingInfoEXT(_carryOverObjects, _s360->sType, _s360->pNext, _s360->address, _s360->usage);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetDescriptorBufferOffsetsEXT(
    VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet,
    uint32_t setCount, const uint32_t* pBufferIndices, const VkDeviceSize* pOffsets, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBindDescriptorBufferEmbeddedSamplersEXT(VkCommandBuffer commandBuffer,
                                                                                   VkPipelineBindPoint pipelineBindPoint,
                                                                                   VkPipelineLayout layout, uint32_t set,
                                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateGetBufferOpaqueCaptureDescriptorDataEXT(VkDevice device,
                                                                                const VkBufferCaptureDescriptorDataInfoEXT* pInfo,
                                                                                void* pData, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s361 = pInfo;
        skip |= ValidateBufferCaptureDescriptorDataInfoEXT({}, _s361->sType, _s361->pNext, _s361->buffer);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetImageOpaqueCaptureDescriptorDataEXT(VkDevice device,
                                                                               const VkImageCaptureDescriptorDataInfoEXT* pInfo,
                                                                               void* pData, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s362 = pInfo;
        skip |= ValidateImageCaptureDescriptorDataInfoEXT({}, _s362->sType, _s362->pNext, _s362->image);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetImageViewOpaqueCaptureDescriptorDataEXT(
    VkDevice device, const VkImageViewCaptureDescriptorDataInfoEXT* pInfo, void* pData, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s363 = pInfo;
        skip |= ValidateImageViewCaptureDescriptorDataInfoEXT({}, _s363->sType, _s363->pNext, _s363->imageView);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetSamplerOpaqueCaptureDescriptorDataEXT(VkDevice device,
                                                                                 const VkSamplerCaptureDescriptorDataInfoEXT* pInfo,
                                                                                 void* pData, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s364 = pInfo;
        skip |= ValidateSamplerCaptureDescriptorDataInfoEXT({}, _s364->sType, _s364->pNext, _s364->sampler);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetAccelerationStructureOpaqueCaptureDescriptorDataEXT(
    VkDevice device, const VkAccelerationStructureCaptureDescriptorDataInfoEXT* pInfo, void* pData,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s365 = pInfo;
        skip |= ValidateAccelerationStructureCaptureDescriptorDataInfoEXT(
            {}, _s365->sType, _s365->pNext, _s365->accelerationStructure, _s365->accelerationStructureNV);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetFragmentShadingRateEnumNV(VkCommandBuffer commandBuffer,
                                                                        VkFragmentShadingRateNV shadingRate,
                                                                        const VkFragmentShadingRateCombinerOpKHR combinerOps[2],
                                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDeviceFaultInfoEXT(VkDevice device, VkDeviceFaultCountsEXT* pFaultCounts,
                                                              VkDeviceFaultInfoEXT* pFaultInfo,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pFaultCounts != nullptr) {
        const auto _s366 = pFaultCounts;
        skip |= ValidateDeviceFaultCountsEXT({}, _s366->sType, _s366->pNext, _s366->addressInfoCount, _s366->vendorInfoCount,
                                             _s366->vendorBinarySize);
    }
    if (pFaultInfo != nullptr) {
        const auto _s367 = pFaultInfo;
        skip |= ValidateDeviceFaultInfoEXT({}, _s367->sType, _s367->pNext, _s367->description, _s367->pAddressInfos,
                                           _s367->pVendorInfos, _s367->pVendorBinaryData);
    }
    return skip;
}
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateAcquireWinrtDisplayNV(VkPhysicalDevice physicalDevice, VkDisplayKHR display,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::PreCallValidateGetWinrtDisplayNV(VkPhysicalDevice physicalDevice, uint32_t deviceRelativeId,
                                                          VkDisplayKHR* pDisplay, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
bool ExplicitValidation::PreCallValidateCreateDirectFBSurfaceEXT(VkInstance instance,
                                                                 const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo,
                                                                 const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s368 = pCreateInfo;
        skip |= ValidateDirectFBSurfaceCreateInfoEXT({}, _s368->sType, _s368->pNext, _s368->flags, _s368->dfb, _s368->surface);
    }
    if (pAllocator != nullptr) {
        const auto _s369 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s369->pUserData, _s369->pfnAllocation, _s369->pfnReallocation, _s369->pfnFree,
                                            _s369->pfnInternalAllocation, _s369->pfnInternalFree);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceDirectFBPresentationSupportEXT(VkPhysicalDevice physicalDevice,
                                                                                        uint32_t queueFamilyIndex, IDirectFB* dfb,
                                                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
bool ExplicitValidation::PreCallValidateCmdSetVertexInputEXT(
    VkCommandBuffer commandBuffer, uint32_t vertexBindingDescriptionCount,
    const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions, uint32_t vertexAttributeDescriptionCount,
    const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pVertexBindingDescriptions != nullptr) {
        for (uint32_t _i370 = 0; _i370 < vertexBindingDescriptionCount; ++_i370) {
            const auto _s371 = &pVertexBindingDescriptions[_i370];
            skip |= ValidateVertexInputBindingDescription2EXT(_carryOverObjects, _s371->sType, _s371->pNext, _s371->binding,
                                                              _s371->stride, _s371->inputRate, _s371->divisor);
        }
    }
    if (pVertexAttributeDescriptions != nullptr) {
        for (uint32_t _i372 = 0; _i372 < vertexAttributeDescriptionCount; ++_i372) {
            const auto _s373 = &pVertexAttributeDescriptions[_i372];
            skip |= ValidateVertexInputAttributeDescription2EXT(_carryOverObjects, _s373->sType, _s373->pNext, _s373->location,
                                                                _s373->binding, _s373->format, _s373->offset);
        }
    }
    return skip;
}
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::PreCallValidateGetMemoryZirconHandleFUCHSIA(VkDevice device,
                                                                     const VkMemoryGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo,
                                                                     zx_handle_t* pZirconHandle,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pGetZirconHandleInfo != nullptr) {
        const auto _s374 = pGetZirconHandleInfo;
        skip |= ValidateMemoryGetZirconHandleInfoFUCHSIA({}, _s374->sType, _s374->pNext, _s374->memory, _s374->handleType);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::PreCallValidateGetMemoryZirconHandlePropertiesFUCHSIA(
    VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, zx_handle_t zirconHandle,
    VkMemoryZirconHandlePropertiesFUCHSIA* pMemoryZirconHandleProperties, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::PreCallValidateImportSemaphoreZirconHandleFUCHSIA(
    VkDevice device, const VkImportSemaphoreZirconHandleInfoFUCHSIA* pImportSemaphoreZirconHandleInfo,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pImportSemaphoreZirconHandleInfo != nullptr) {
        const auto _s375 = pImportSemaphoreZirconHandleInfo;
        skip |= ValidateImportSemaphoreZirconHandleInfoFUCHSIA({}, _s375->sType, _s375->pNext, _s375->semaphore, _s375->flags,
                                                               _s375->handleType, _s375->zirconHandle);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::PreCallValidateGetSemaphoreZirconHandleFUCHSIA(
    VkDevice device, const VkSemaphoreGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo, zx_handle_t* pZirconHandle,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pGetZirconHandleInfo != nullptr) {
        const auto _s376 = pGetZirconHandleInfo;
        skip |= ValidateSemaphoreGetZirconHandleInfoFUCHSIA({}, _s376->sType, _s376->pNext, _s376->semaphore, _s376->handleType);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::PreCallValidateCreateBufferCollectionFUCHSIA(VkDevice device,
                                                                      const VkBufferCollectionCreateInfoFUCHSIA* pCreateInfo,
                                                                      const VkAllocationCallbacks* pAllocator,
                                                                      VkBufferCollectionFUCHSIA* pCollection,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s377 = pCreateInfo;
        skip |= ValidateBufferCollectionCreateInfoFUCHSIA({}, _s377->sType, _s377->pNext, _s377->collectionToken);
    }
    if (pAllocator != nullptr) {
        const auto _s378 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s378->pUserData, _s378->pfnAllocation, _s378->pfnReallocation, _s378->pfnFree,
                                            _s378->pfnInternalAllocation, _s378->pfnInternalFree);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::PreCallValidateSetBufferCollectionImageConstraintsFUCHSIA(
    VkDevice device, VkBufferCollectionFUCHSIA collection, const VkImageConstraintsInfoFUCHSIA* pImageConstraintsInfo,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pImageConstraintsInfo != nullptr) {
        const auto _s379 = pImageConstraintsInfo;
        skip |= ValidateImageConstraintsInfoFUCHSIA({}, _s379->sType, _s379->pNext, _s379->formatConstraintsCount,
                                                    _s379->pFormatConstraints, _s379->bufferCollectionConstraints, _s379->flags);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::PreCallValidateSetBufferCollectionBufferConstraintsFUCHSIA(
    VkDevice device, VkBufferCollectionFUCHSIA collection, const VkBufferConstraintsInfoFUCHSIA* pBufferConstraintsInfo,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pBufferConstraintsInfo != nullptr) {
        const auto _s380 = pBufferConstraintsInfo;
        skip |= ValidateBufferConstraintsInfoFUCHSIA({}, _s380->sType, _s380->pNext, _s380->createInfo,
                                                     _s380->requiredFormatFeatures, _s380->bufferCollectionConstraints);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::PreCallValidateDestroyBufferCollectionFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection,
                                                                       const VkAllocationCallbacks* pAllocator,
                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s381 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s381->pUserData, _s381->pfnAllocation, _s381->pfnReallocation, _s381->pfnFree,
                                            _s381->pfnInternalAllocation, _s381->pfnInternalFree);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::PreCallValidateGetBufferCollectionPropertiesFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection,
                                                                             VkBufferCollectionPropertiesFUCHSIA* pProperties,
                                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pProperties != nullptr) {
        const auto _s382 = pProperties;
        skip |= ValidateBufferCollectionPropertiesFUCHSIA(
            {}, _s382->sType, _s382->pNext, _s382->memoryTypeBits, _s382->bufferCount, _s382->createInfoIndex,
            _s382->sysmemPixelFormat, _s382->formatFeatures, _s382->sysmemColorSpaceIndex, _s382->samplerYcbcrConversionComponents,
            _s382->suggestedYcbcrModel, _s382->suggestedYcbcrRange, _s382->suggestedXChromaOffset, _s382->suggestedYChromaOffset);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::PreCallValidateGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(VkDevice device, VkRenderPass renderpass,
                                                                                      VkExtent2D* pMaxWorkgroupSize,
                                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pMaxWorkgroupSize != nullptr) {
        const auto _s383 = pMaxWorkgroupSize;
        skip |= ValidateExtent2D({}, _s383->width, _s383->height);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSubpassShadingHUAWEI(VkCommandBuffer commandBuffer,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBindInvocationMaskHUAWEI(VkCommandBuffer commandBuffer, VkImageView imageView,
                                                                    VkImageLayout imageLayout,
                                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateGetMemoryRemoteAddressNV(VkDevice device,
                                                                 const VkMemoryGetRemoteAddressInfoNV* pMemoryGetRemoteAddressInfo,
                                                                 VkRemoteAddressNV* pAddress, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pMemoryGetRemoteAddressInfo != nullptr) {
        const auto _s384 = pMemoryGetRemoteAddressInfo;
        skip |= ValidateMemoryGetRemoteAddressInfoNV({}, _s384->sType, _s384->pNext, _s384->memory, _s384->handleType);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPipelinePropertiesEXT(VkDevice device, const VkPipelineInfoEXT* pPipelineInfo,
                                                                 VkBaseOutStructure* pPipelineProperties,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pPipelineProperties != nullptr) {
        const auto _s385 = pPipelineProperties;
        skip |= ValidateBaseOutStructure({}, _s385->sType, _s385->pNext);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetPatchControlPointsEXT(VkCommandBuffer commandBuffer, uint32_t patchControlPoints,
                                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetRasterizerDiscardEnableEXT(VkCommandBuffer commandBuffer,
                                                                         VkBool32 rasterizerDiscardEnable,
                                                                         const ErrorObject& _error_obj) const {
    return PreCallValidateCmdSetRasterizerDiscardEnable(commandBuffer, rasterizerDiscardEnable, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdSetDepthBiasEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable,
                                                                 const ErrorObject& _error_obj) const {
    return PreCallValidateCmdSetDepthBiasEnable(commandBuffer, depthBiasEnable, _error_obj);
}
bool ExplicitValidation::PreCallValidateCmdSetLogicOpEXT(VkCommandBuffer commandBuffer, VkLogicOp logicOp,
                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetPrimitiveRestartEnableEXT(VkCommandBuffer commandBuffer,
                                                                        VkBool32 primitiveRestartEnable,
                                                                        const ErrorObject& _error_obj) const {
    return PreCallValidateCmdSetPrimitiveRestartEnable(commandBuffer, primitiveRestartEnable, _error_obj);
}
#ifdef VK_USE_PLATFORM_SCREEN_QNX
bool ExplicitValidation::PreCallValidateCreateScreenSurfaceQNX(VkInstance instance, const VkScreenSurfaceCreateInfoQNX* pCreateInfo,
                                                               const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface,
                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s386 = pCreateInfo;
        skip |= ValidateScreenSurfaceCreateInfoQNX({}, _s386->sType, _s386->pNext, _s386->flags, _s386->context, _s386->window);
    }
    if (pAllocator != nullptr) {
        const auto _s387 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s387->pUserData, _s387->pfnAllocation, _s387->pfnReallocation, _s387->pfnFree,
                                            _s387->pfnInternalAllocation, _s387->pfnInternalFree);
    }
    return skip;
}
#endif  // VK_USE_PLATFORM_SCREEN_QNX
#ifdef VK_USE_PLATFORM_SCREEN_QNX
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceScreenPresentationSupportQNX(VkPhysicalDevice physicalDevice,
                                                                                      uint32_t queueFamilyIndex,
                                                                                      struct _screen_window* window,
                                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#endif  // VK_USE_PLATFORM_SCREEN_QNX
bool ExplicitValidation::PreCallValidateCmdSetColorWriteEnableEXT(VkCommandBuffer commandBuffer, uint32_t attachmentCount,
                                                                  const VkBool32* pColorWriteEnables,
                                                                  const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDrawMultiEXT(VkCommandBuffer commandBuffer, uint32_t drawCount,
                                                        const VkMultiDrawInfoEXT* pVertexInfo, uint32_t instanceCount,
                                                        uint32_t firstInstance, uint32_t stride,
                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pVertexInfo != nullptr) {
        for (uint32_t _i388 = 0; _i388 < drawCount; ++_i388) {
            const auto _s389 = &pVertexInfo[_i388];
            skip |= ValidateMultiDrawInfoEXT(_carryOverObjects, _s389->firstVertex, _s389->vertexCount);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDrawMultiIndexedEXT(VkCommandBuffer commandBuffer, uint32_t drawCount,
                                                               const VkMultiDrawIndexedInfoEXT* pIndexInfo, uint32_t instanceCount,
                                                               uint32_t firstInstance, uint32_t stride,
                                                               const int32_t* pVertexOffset, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pIndexInfo != nullptr) {
        for (uint32_t _i390 = 0; _i390 < drawCount; ++_i390) {
            const auto _s391 = &pIndexInfo[_i390];
            skip |= ValidateMultiDrawIndexedInfoEXT(_carryOverObjects, _s391->firstIndex, _s391->indexCount, _s391->vertexOffset);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateMicromapEXT(VkDevice device, const VkMicromapCreateInfoEXT* pCreateInfo,
                                                          const VkAllocationCallbacks* pAllocator, VkMicromapEXT* pMicromap,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s392 = pCreateInfo;
        skip |= ValidateMicromapCreateInfoEXT({}, _s392->sType, _s392->pNext, _s392->createFlags, _s392->buffer, _s392->offset,
                                              _s392->size, _s392->type, _s392->deviceAddress);
    }
    if (pAllocator != nullptr) {
        const auto _s393 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s393->pUserData, _s393->pfnAllocation, _s393->pfnReallocation, _s393->pfnFree,
                                            _s393->pfnInternalAllocation, _s393->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyMicromapEXT(VkDevice device, VkMicromapEXT micromap,
                                                           const VkAllocationCallbacks* pAllocator,
                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s394 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s394->pUserData, _s394->pfnAllocation, _s394->pfnReallocation, _s394->pfnFree,
                                            _s394->pfnInternalAllocation, _s394->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBuildMicromapsEXT(VkCommandBuffer commandBuffer, uint32_t infoCount,
                                                             const VkMicromapBuildInfoEXT* pInfos,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pInfos != nullptr) {
        for (uint32_t _i395 = 0; _i395 < infoCount; ++_i395) {
            const auto _s396 = &pInfos[_i395];
            skip |=
                ValidateMicromapBuildInfoEXT(_carryOverObjects, _s396->sType, _s396->pNext, _s396->type, _s396->flags, _s396->mode,
                                             _s396->dstMicromap, _s396->usageCountsCount, _s396->pUsageCounts, _s396->ppUsageCounts,
                                             _s396->data, _s396->scratchData, _s396->triangleArray, _s396->triangleArrayStride);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateBuildMicromapsEXT(VkDevice device, VkDeferredOperationKHR deferredOperation,
                                                          uint32_t infoCount, const VkMicromapBuildInfoEXT* pInfos,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfos != nullptr) {
        for (uint32_t _i397 = 0; _i397 < infoCount; ++_i397) {
            const auto _s398 = &pInfos[_i397];
            skip |=
                ValidateMicromapBuildInfoEXT({}, _s398->sType, _s398->pNext, _s398->type, _s398->flags, _s398->mode,
                                             _s398->dstMicromap, _s398->usageCountsCount, _s398->pUsageCounts, _s398->ppUsageCounts,
                                             _s398->data, _s398->scratchData, _s398->triangleArray, _s398->triangleArrayStride);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCopyMicromapEXT(VkDevice device, VkDeferredOperationKHR deferredOperation,
                                                        const VkCopyMicromapInfoEXT* pInfo, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s399 = pInfo;
        skip |= ValidateCopyMicromapInfoEXT({}, _s399->sType, _s399->pNext, _s399->src, _s399->dst, _s399->mode);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCopyMicromapToMemoryEXT(VkDevice device, VkDeferredOperationKHR deferredOperation,
                                                                const VkCopyMicromapToMemoryInfoEXT* pInfo,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s400 = pInfo;
        skip |= ValidateCopyMicromapToMemoryInfoEXT({}, _s400->sType, _s400->pNext, _s400->src, _s400->dst, _s400->mode);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCopyMemoryToMicromapEXT(VkDevice device, VkDeferredOperationKHR deferredOperation,
                                                                const VkCopyMemoryToMicromapInfoEXT* pInfo,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s401 = pInfo;
        skip |= ValidateCopyMemoryToMicromapInfoEXT({}, _s401->sType, _s401->pNext, _s401->src, _s401->dst, _s401->mode);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateWriteMicromapsPropertiesEXT(VkDevice device, uint32_t micromapCount,
                                                                    const VkMicromapEXT* pMicromaps, VkQueryType queryType,
                                                                    size_t dataSize, void* pData, size_t stride,
                                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyMicromapEXT(VkCommandBuffer commandBuffer, const VkCopyMicromapInfoEXT* pInfo,
                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pInfo != nullptr) {
        const auto _s402 = pInfo;
        skip |= ValidateCopyMicromapInfoEXT(_carryOverObjects, _s402->sType, _s402->pNext, _s402->src, _s402->dst, _s402->mode);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyMicromapToMemoryEXT(VkCommandBuffer commandBuffer,
                                                                   const VkCopyMicromapToMemoryInfoEXT* pInfo,
                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pInfo != nullptr) {
        const auto _s403 = pInfo;
        skip |=
            ValidateCopyMicromapToMemoryInfoEXT(_carryOverObjects, _s403->sType, _s403->pNext, _s403->src, _s403->dst, _s403->mode);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyMemoryToMicromapEXT(VkCommandBuffer commandBuffer,
                                                                   const VkCopyMemoryToMicromapInfoEXT* pInfo,
                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pInfo != nullptr) {
        const auto _s404 = pInfo;
        skip |=
            ValidateCopyMemoryToMicromapInfoEXT(_carryOverObjects, _s404->sType, _s404->pNext, _s404->src, _s404->dst, _s404->mode);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdWriteMicromapsPropertiesEXT(VkCommandBuffer commandBuffer, uint32_t micromapCount,
                                                                       const VkMicromapEXT* pMicromaps, VkQueryType queryType,
                                                                       VkQueryPool queryPool, uint32_t firstQuery,
                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDeviceMicromapCompatibilityEXT(VkDevice device,
                                                                          const VkMicromapVersionInfoEXT* pVersionInfo,
                                                                          VkAccelerationStructureCompatibilityKHR* pCompatibility,
                                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pVersionInfo != nullptr) {
        const auto _s405 = pVersionInfo;
        skip |= ValidateMicromapVersionInfoEXT({}, _s405->sType, _s405->pNext, _s405->pVersionData);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetMicromapBuildSizesEXT(VkDevice device, VkAccelerationStructureBuildTypeKHR buildType,
                                                                 const VkMicromapBuildInfoEXT* pBuildInfo,
                                                                 VkMicromapBuildSizesInfoEXT* pSizeInfo,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pBuildInfo != nullptr) {
        const auto _s406 = pBuildInfo;
        skip |= ValidateMicromapBuildInfoEXT({}, _s406->sType, _s406->pNext, _s406->type, _s406->flags, _s406->mode,
                                             _s406->dstMicromap, _s406->usageCountsCount, _s406->pUsageCounts, _s406->ppUsageCounts,
                                             _s406->data, _s406->scratchData, _s406->triangleArray, _s406->triangleArrayStride);
    }
    if (pSizeInfo != nullptr) {
        const auto _s407 = pSizeInfo;
        skip |= ValidateMicromapBuildSizesInfoEXT({}, _s407->sType, _s407->pNext, _s407->micromapSize, _s407->buildScratchSize,
                                                  _s407->discardable);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDrawClusterHUAWEI(VkCommandBuffer commandBuffer, uint32_t groupCountX,
                                                             uint32_t groupCountY, uint32_t groupCountZ,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDrawClusterIndirectHUAWEI(VkCommandBuffer commandBuffer, VkBuffer buffer,
                                                                     VkDeviceSize offset, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateSetDeviceMemoryPriorityEXT(VkDevice device, VkDeviceMemory memory, float priority,
                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDescriptorSetLayoutHostMappingInfoVALVE(
    VkDevice device, const VkDescriptorSetBindingReferenceVALVE* pBindingReference,
    VkDescriptorSetLayoutHostMappingInfoVALVE* pHostMapping, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pBindingReference != nullptr) {
        const auto _s408 = pBindingReference;
        skip |=
            ValidateDescriptorSetBindingReferenceVALVE({}, _s408->sType, _s408->pNext, _s408->descriptorSetLayout, _s408->binding);
    }
    if (pHostMapping != nullptr) {
        const auto _s409 = pHostMapping;
        skip |= ValidateDescriptorSetLayoutHostMappingInfoVALVE({}, _s409->sType, _s409->pNext, _s409->descriptorOffset,
                                                                _s409->descriptorSize);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDescriptorSetHostMappingVALVE(VkDevice device, VkDescriptorSet descriptorSet,
                                                                         void** ppData, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyMemoryIndirectNV(VkCommandBuffer commandBuffer, VkDeviceAddress copyBufferAddress,
                                                                uint32_t copyCount, uint32_t stride,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyMemoryToImageIndirectNV(
    VkCommandBuffer commandBuffer, VkDeviceAddress copyBufferAddress, uint32_t copyCount, uint32_t stride, VkImage dstImage,
    VkImageLayout dstImageLayout, const VkImageSubresourceLayers* pImageSubresources, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pImageSubresources != nullptr) {
        for (uint32_t _i410 = 0; _i410 < copyCount; ++_i410) {
            const auto _s411 = &pImageSubresources[_i410];
            skip |= ValidateImageSubresourceLayers(_carryOverObjects, _s411->aspectMask, _s411->mipLevel, _s411->baseArrayLayer,
                                                   _s411->layerCount);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDecompressMemoryNV(VkCommandBuffer commandBuffer, uint32_t decompressRegionCount,
                                                              const VkDecompressMemoryRegionNV* pDecompressMemoryRegions,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pDecompressMemoryRegions != nullptr) {
        for (uint32_t _i412 = 0; _i412 < decompressRegionCount; ++_i412) {
            const auto _s413 = &pDecompressMemoryRegions[_i412];
            skip |= ValidateDecompressMemoryRegionNV(_carryOverObjects, _s413->srcAddress, _s413->dstAddress, _s413->compressedSize,
                                                     _s413->decompressedSize, _s413->decompressionMethod);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDecompressMemoryIndirectCountNV(VkCommandBuffer commandBuffer,
                                                                           VkDeviceAddress indirectCommandsAddress,
                                                                           VkDeviceAddress indirectCommandsCountAddress,
                                                                           uint32_t stride, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPipelineIndirectMemoryRequirementsNV(VkDevice device,
                                                                                const VkComputePipelineCreateInfo* pCreateInfo,
                                                                                VkMemoryRequirements2* pMemoryRequirements,
                                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s414 = pCreateInfo;
        skip |= ValidateComputePipelineCreateInfo({}, _s414->sType, _s414->pNext, _s414->flags, _s414->stage, _s414->layout,
                                                  _s414->basePipelineHandle, _s414->basePipelineIndex);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdUpdatePipelineIndirectBufferNV(VkCommandBuffer commandBuffer,
                                                                          VkPipelineBindPoint pipelineBindPoint,
                                                                          VkPipeline pipeline,
                                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPipelineIndirectDeviceAddressNV(VkDevice device,
                                                                           const VkPipelineIndirectDeviceAddressInfoNV* pInfo,
                                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s415 = pInfo;
        skip |=
            ValidatePipelineIndirectDeviceAddressInfoNV({}, _s415->sType, _s415->pNext, _s415->pipelineBindPoint, _s415->pipeline);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetTessellationDomainOriginEXT(VkCommandBuffer commandBuffer,
                                                                          VkTessellationDomainOrigin domainOrigin,
                                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetDepthClampEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthClampEnable,
                                                                  const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetPolygonModeEXT(VkCommandBuffer commandBuffer, VkPolygonMode polygonMode,
                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetRasterizationSamplesEXT(VkCommandBuffer commandBuffer,
                                                                      VkSampleCountFlagBits rasterizationSamples,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetSampleMaskEXT(VkCommandBuffer commandBuffer, VkSampleCountFlagBits samples,
                                                            const VkSampleMask* pSampleMask, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetAlphaToCoverageEnableEXT(VkCommandBuffer commandBuffer,
                                                                       VkBool32 alphaToCoverageEnable,
                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetAlphaToOneEnableEXT(VkCommandBuffer commandBuffer, VkBool32 alphaToOneEnable,
                                                                  const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetLogicOpEnableEXT(VkCommandBuffer commandBuffer, VkBool32 logicOpEnable,
                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetColorBlendEnableEXT(VkCommandBuffer commandBuffer, uint32_t firstAttachment,
                                                                  uint32_t attachmentCount, const VkBool32* pColorBlendEnables,
                                                                  const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetColorBlendEquationEXT(VkCommandBuffer commandBuffer, uint32_t firstAttachment,
                                                                    uint32_t attachmentCount,
                                                                    const VkColorBlendEquationEXT* pColorBlendEquations,
                                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pColorBlendEquations != nullptr) {
        for (uint32_t _i416 = 0; _i416 < attachmentCount; ++_i416) {
            const auto _s417 = &pColorBlendEquations[_i416];
            skip |= ValidateColorBlendEquationEXT(_carryOverObjects, _s417->srcColorBlendFactor, _s417->dstColorBlendFactor,
                                                  _s417->colorBlendOp, _s417->srcAlphaBlendFactor, _s417->dstAlphaBlendFactor,
                                                  _s417->alphaBlendOp);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetColorWriteMaskEXT(VkCommandBuffer commandBuffer, uint32_t firstAttachment,
                                                                uint32_t attachmentCount,
                                                                const VkColorComponentFlags* pColorWriteMasks,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetRasterizationStreamEXT(VkCommandBuffer commandBuffer, uint32_t rasterizationStream,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetConservativeRasterizationModeEXT(
    VkCommandBuffer commandBuffer, VkConservativeRasterizationModeEXT conservativeRasterizationMode,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetExtraPrimitiveOverestimationSizeEXT(VkCommandBuffer commandBuffer,
                                                                                  float extraPrimitiveOverestimationSize,
                                                                                  const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetDepthClipEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthClipEnable,
                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetSampleLocationsEnableEXT(VkCommandBuffer commandBuffer,
                                                                       VkBool32 sampleLocationsEnable,
                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetColorBlendAdvancedEXT(VkCommandBuffer commandBuffer, uint32_t firstAttachment,
                                                                    uint32_t attachmentCount,
                                                                    const VkColorBlendAdvancedEXT* pColorBlendAdvanced,
                                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pColorBlendAdvanced != nullptr) {
        for (uint32_t _i418 = 0; _i418 < attachmentCount; ++_i418) {
            const auto _s419 = &pColorBlendAdvanced[_i418];
            skip |= ValidateColorBlendAdvancedEXT(_carryOverObjects, _s419->advancedBlendOp, _s419->srcPremultiplied,
                                                  _s419->dstPremultiplied, _s419->blendOverlap, _s419->clampResults);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetProvokingVertexModeEXT(VkCommandBuffer commandBuffer,
                                                                     VkProvokingVertexModeEXT provokingVertexMode,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetLineRasterizationModeEXT(VkCommandBuffer commandBuffer,
                                                                       VkLineRasterizationModeEXT lineRasterizationMode,
                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetLineStippleEnableEXT(VkCommandBuffer commandBuffer, VkBool32 stippledLineEnable,
                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetDepthClipNegativeOneToOneEXT(VkCommandBuffer commandBuffer, VkBool32 negativeOneToOne,
                                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetViewportWScalingEnableNV(VkCommandBuffer commandBuffer,
                                                                       VkBool32 viewportWScalingEnable,
                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetViewportSwizzleNV(VkCommandBuffer commandBuffer, uint32_t firstViewport,
                                                                uint32_t viewportCount,
                                                                const VkViewportSwizzleNV* pViewportSwizzles,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pViewportSwizzles != nullptr) {
        for (uint32_t _i420 = 0; _i420 < viewportCount; ++_i420) {
            const auto _s421 = &pViewportSwizzles[_i420];
            skip |= ValidateViewportSwizzleNV(_carryOverObjects, _s421->x, _s421->y, _s421->z, _s421->w);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetCoverageToColorEnableNV(VkCommandBuffer commandBuffer, VkBool32 coverageToColorEnable,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetCoverageToColorLocationNV(VkCommandBuffer commandBuffer,
                                                                        uint32_t coverageToColorLocation,
                                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetCoverageModulationModeNV(VkCommandBuffer commandBuffer,
                                                                       VkCoverageModulationModeNV coverageModulationMode,
                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetCoverageModulationTableEnableNV(VkCommandBuffer commandBuffer,
                                                                              VkBool32 coverageModulationTableEnable,
                                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetCoverageModulationTableNV(VkCommandBuffer commandBuffer,
                                                                        uint32_t coverageModulationTableCount,
                                                                        const float* pCoverageModulationTable,
                                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetShadingRateImageEnableNV(VkCommandBuffer commandBuffer,
                                                                       VkBool32 shadingRateImageEnable,
                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetRepresentativeFragmentTestEnableNV(VkCommandBuffer commandBuffer,
                                                                                 VkBool32 representativeFragmentTestEnable,
                                                                                 const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetCoverageReductionModeNV(VkCommandBuffer commandBuffer,
                                                                      VkCoverageReductionModeNV coverageReductionMode,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateGetShaderModuleIdentifierEXT(VkDevice device, VkShaderModule shaderModule,
                                                                     VkShaderModuleIdentifierEXT* pIdentifier,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateGetShaderModuleCreateInfoIdentifierEXT(VkDevice device,
                                                                               const VkShaderModuleCreateInfo* pCreateInfo,
                                                                               VkShaderModuleIdentifierEXT* pIdentifier,
                                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s422 = pCreateInfo;
        skip |= ValidateShaderModuleCreateInfo({}, _s422->sType, _s422->pNext, _s422->flags, _s422->codeSize, _s422->pCode);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetPhysicalDeviceOpticalFlowImageFormatsNV(
    VkPhysicalDevice physicalDevice, const VkOpticalFlowImageFormatInfoNV* pOpticalFlowImageFormatInfo, uint32_t* pFormatCount,
    VkOpticalFlowImageFormatPropertiesNV* pImageFormatProperties, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pOpticalFlowImageFormatInfo != nullptr) {
        const auto _s423 = pOpticalFlowImageFormatInfo;
        skip |= ValidateOpticalFlowImageFormatInfoNV({}, _s423->sType, _s423->pNext, _s423->usage);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateOpticalFlowSessionNV(VkDevice device,
                                                                   const VkOpticalFlowSessionCreateInfoNV* pCreateInfo,
                                                                   const VkAllocationCallbacks* pAllocator,
                                                                   VkOpticalFlowSessionNV* pSession,
                                                                   const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s424 = pCreateInfo;
        skip |= ValidateOpticalFlowSessionCreateInfoNV(
            {}, _s424->sType, _s424->pNext, _s424->width, _s424->height, _s424->imageFormat, _s424->flowVectorFormat,
            _s424->costFormat, _s424->outputGridSize, _s424->hintGridSize, _s424->performanceLevel, _s424->flags);
    }
    if (pAllocator != nullptr) {
        const auto _s425 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s425->pUserData, _s425->pfnAllocation, _s425->pfnReallocation, _s425->pfnFree,
                                            _s425->pfnInternalAllocation, _s425->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyOpticalFlowSessionNV(VkDevice device, VkOpticalFlowSessionNV session,
                                                                    const VkAllocationCallbacks* pAllocator,
                                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s426 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s426->pUserData, _s426->pfnAllocation, _s426->pfnReallocation, _s426->pfnFree,
                                            _s426->pfnInternalAllocation, _s426->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateBindOpticalFlowSessionImageNV(VkDevice device, VkOpticalFlowSessionNV session,
                                                                      VkOpticalFlowSessionBindingPointNV bindingPoint,
                                                                      VkImageView view, VkImageLayout layout,
                                                                      const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdOpticalFlowExecuteNV(VkCommandBuffer commandBuffer, VkOpticalFlowSessionNV session,
                                                                const VkOpticalFlowExecuteInfoNV* pExecuteInfo,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pExecuteInfo != nullptr) {
        const auto _s427 = pExecuteInfo;
        skip |= ValidateOpticalFlowExecuteInfoNV(_carryOverObjects, _s427->sType, _s427->pNext, _s427->flags, _s427->regionCount,
                                                 _s427->pRegions);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateShadersEXT(VkDevice device, uint32_t createInfoCount,
                                                         const VkShaderCreateInfoEXT* pCreateInfos,
                                                         const VkAllocationCallbacks* pAllocator, VkShaderEXT* pShaders,
                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfos != nullptr) {
        for (uint32_t _i428 = 0; _i428 < createInfoCount; ++_i428) {
            const auto _s429 = &pCreateInfos[_i428];
            skip |= ValidateShaderCreateInfoEXT({}, _s429->sType, _s429->pNext, _s429->flags, _s429->stage, _s429->nextStage,
                                                _s429->codeType, _s429->codeSize, _s429->pCode, _s429->pName, _s429->setLayoutCount,
                                                _s429->pSetLayouts, _s429->pushConstantRangeCount, _s429->pPushConstantRanges,
                                                _s429->pSpecializationInfo);
        }
    }
    if (pAllocator != nullptr) {
        const auto _s430 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s430->pUserData, _s430->pfnAllocation, _s430->pfnReallocation, _s430->pfnFree,
                                            _s430->pfnInternalAllocation, _s430->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyShaderEXT(VkDevice device, VkShaderEXT shader,
                                                         const VkAllocationCallbacks* pAllocator,
                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s431 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s431->pUserData, _s431->pfnAllocation, _s431->pfnReallocation, _s431->pfnFree,
                                            _s431->pfnInternalAllocation, _s431->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetShaderBinaryDataEXT(VkDevice device, VkShaderEXT shader, size_t* pDataSize, void* pData,
                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBindShadersEXT(VkCommandBuffer commandBuffer, uint32_t stageCount,
                                                          const VkShaderStageFlagBits* pStages, const VkShaderEXT* pShaders,
                                                          const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateGetFramebufferTilePropertiesQCOM(VkDevice device, VkFramebuffer framebuffer,
                                                                         uint32_t* pPropertiesCount,
                                                                         VkTilePropertiesQCOM* pProperties,
                                                                         const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pProperties != nullptr) {
        for (uint32_t _i432 = 0; _i432 < *pPropertiesCount; ++_i432) {
            const auto _s433 = &pProperties[_i432];
            skip |= ValidateTilePropertiesQCOM({}, _s433->sType, _s433->pNext, _s433->tileSize, _s433->apronSize, _s433->origin);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDynamicRenderingTilePropertiesQCOM(VkDevice device,
                                                                              const VkRenderingInfo* pRenderingInfo,
                                                                              VkTilePropertiesQCOM* pProperties,
                                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pRenderingInfo != nullptr) {
        const auto _s434 = pRenderingInfo;
        skip |= ValidateRenderingInfo({}, _s434->sType, _s434->pNext, _s434->flags, _s434->renderArea, _s434->layerCount,
                                      _s434->viewMask, _s434->colorAttachmentCount, _s434->pColorAttachments,
                                      _s434->pDepthAttachment, _s434->pStencilAttachment);
    }
    if (pProperties != nullptr) {
        const auto _s435 = pProperties;
        skip |= ValidateTilePropertiesQCOM({}, _s435->sType, _s435->pNext, _s435->tileSize, _s435->apronSize, _s435->origin);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateSetLatencySleepModeNV(VkDevice device, VkSwapchainKHR swapchain,
                                                              const VkLatencySleepModeInfoNV* pSleepModeInfo,
                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pSleepModeInfo != nullptr) {
        const auto _s436 = pSleepModeInfo;
        skip |= ValidateLatencySleepModeInfoNV({}, _s436->sType, _s436->pNext, _s436->lowLatencyMode, _s436->lowLatencyBoost,
                                               _s436->minimumIntervalUs);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateLatencySleepNV(VkDevice device, VkSwapchainKHR swapchain,
                                                       const VkLatencySleepInfoNV* pSleepInfo,
                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pSleepInfo != nullptr) {
        const auto _s437 = pSleepInfo;
        skip |= ValidateLatencySleepInfoNV({}, _s437->sType, _s437->pNext, _s437->signalSemaphore, _s437->value);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateSetLatencyMarkerNV(VkDevice device, VkSwapchainKHR swapchain,
                                                           const VkSetLatencyMarkerInfoNV* pLatencyMarkerInfo,
                                                           const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pLatencyMarkerInfo != nullptr) {
        const auto _s438 = pLatencyMarkerInfo;
        skip |= ValidateSetLatencyMarkerInfoNV({}, _s438->sType, _s438->pNext, _s438->presentID, _s438->marker);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetLatencyTimingsNV(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pTimingCount,
                                                            VkGetLatencyMarkerInfoNV* pLatencyMarkerInfo,
                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pLatencyMarkerInfo != nullptr) {
        const auto _s439 = pLatencyMarkerInfo;
        skip |= ValidateGetLatencyMarkerInfoNV({}, _s439->sType, _s439->pNext, _s439->pTimings);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateQueueNotifyOutOfBandNV(VkQueue queue, const VkOutOfBandQueueTypeInfoNV* pQueueTypeInfo,
                                                               const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pQueueTypeInfo != nullptr) {
        const auto _s440 = pQueueTypeInfo;
        skip |= ValidateOutOfBandQueueTypeInfoNV({}, _s440->sType, _s440->pNext, _s440->queueType);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetAttachmentFeedbackLoopEnableEXT(VkCommandBuffer commandBuffer,
                                                                              VkImageAspectFlags aspectMask,
                                                                              const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
#ifdef VK_USE_PLATFORM_SCREEN_QNX
bool ExplicitValidation::PreCallValidateGetScreenBufferPropertiesQNX(VkDevice device, const struct _screen_buffer* buffer,
                                                                     VkScreenBufferPropertiesQNX* pProperties,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
#endif  // VK_USE_PLATFORM_SCREEN_QNX
bool ExplicitValidation::PreCallValidateCreateAccelerationStructureKHR(VkDevice device,
                                                                       const VkAccelerationStructureCreateInfoKHR* pCreateInfo,
                                                                       const VkAllocationCallbacks* pAllocator,
                                                                       VkAccelerationStructureKHR* pAccelerationStructure,
                                                                       const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s441 = pCreateInfo;
        skip |= ValidateAccelerationStructureCreateInfoKHR({}, _s441->sType, _s441->pNext, _s441->createFlags, _s441->buffer,
                                                           _s441->offset, _s441->size, _s441->type, _s441->deviceAddress);
    }
    if (pAllocator != nullptr) {
        const auto _s442 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s442->pUserData, _s442->pfnAllocation, _s442->pfnReallocation, _s442->pfnFree,
                                            _s442->pfnInternalAllocation, _s442->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateDestroyAccelerationStructureKHR(VkDevice device,
                                                                        VkAccelerationStructureKHR accelerationStructure,
                                                                        const VkAllocationCallbacks* pAllocator,
                                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pAllocator != nullptr) {
        const auto _s443 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s443->pUserData, _s443->pfnAllocation, _s443->pfnReallocation, _s443->pfnFree,
                                            _s443->pfnInternalAllocation, _s443->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBuildAccelerationStructuresKHR(
    VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
    const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pInfos != nullptr) {
        for (uint32_t _i444 = 0; _i444 < infoCount; ++_i444) {
            const auto _s445 = &pInfos[_i444];
            skip |= ValidateAccelerationStructureBuildGeometryInfoKHR(_carryOverObjects, _s445->sType, _s445->pNext, _s445->type,
                                                                      _s445->flags, _s445->mode, _s445->srcAccelerationStructure,
                                                                      _s445->dstAccelerationStructure, _s445->geometryCount,
                                                                      _s445->pGeometries, _s445->ppGeometries, _s445->scratchData);
        }
    }
    if (ppBuildRangeInfos != nullptr) {
        for (uint32_t _i446 = 0; _i446 < infoCount; ++_i446) {
            const auto _s447 = ppBuildRangeInfos[_i446];
            skip |= ValidateAccelerationStructureBuildRangeInfoKHR(_carryOverObjects, _s447->primitiveCount, _s447->primitiveOffset,
                                                                   _s447->firstVertex, _s447->transformOffset);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdBuildAccelerationStructuresIndirectKHR(
    VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
    const VkDeviceAddress* pIndirectDeviceAddresses, const uint32_t* pIndirectStrides, const uint32_t* const* ppMaxPrimitiveCounts,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pInfos != nullptr) {
        for (uint32_t _i448 = 0; _i448 < infoCount; ++_i448) {
            const auto _s449 = &pInfos[_i448];
            skip |= ValidateAccelerationStructureBuildGeometryInfoKHR(_carryOverObjects, _s449->sType, _s449->pNext, _s449->type,
                                                                      _s449->flags, _s449->mode, _s449->srcAccelerationStructure,
                                                                      _s449->dstAccelerationStructure, _s449->geometryCount,
                                                                      _s449->pGeometries, _s449->ppGeometries, _s449->scratchData);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateBuildAccelerationStructuresKHR(
    VkDevice device, VkDeferredOperationKHR deferredOperation, uint32_t infoCount,
    const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
    const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfos != nullptr) {
        for (uint32_t _i450 = 0; _i450 < infoCount; ++_i450) {
            const auto _s451 = &pInfos[_i450];
            skip |= ValidateAccelerationStructureBuildGeometryInfoKHR(
                {}, _s451->sType, _s451->pNext, _s451->type, _s451->flags, _s451->mode, _s451->srcAccelerationStructure,
                _s451->dstAccelerationStructure, _s451->geometryCount, _s451->pGeometries, _s451->ppGeometries, _s451->scratchData);
        }
    }
    if (ppBuildRangeInfos != nullptr) {
        for (uint32_t _i452 = 0; _i452 < infoCount; ++_i452) {
            const auto _s453 = ppBuildRangeInfos[_i452];
            skip |= ValidateAccelerationStructureBuildRangeInfoKHR({}, _s453->primitiveCount, _s453->primitiveOffset,
                                                                   _s453->firstVertex, _s453->transformOffset);
        }
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCopyAccelerationStructureKHR(VkDevice device, VkDeferredOperationKHR deferredOperation,
                                                                     const VkCopyAccelerationStructureInfoKHR* pInfo,
                                                                     const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s454 = pInfo;
        skip |= ValidateCopyAccelerationStructureInfoKHR({}, _s454->sType, _s454->pNext, _s454->src, _s454->dst, _s454->mode);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCopyAccelerationStructureToMemoryKHR(
    VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s455 = pInfo;
        skip |=
            ValidateCopyAccelerationStructureToMemoryInfoKHR({}, _s455->sType, _s455->pNext, _s455->src, _s455->dst, _s455->mode);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCopyMemoryToAccelerationStructureKHR(
    VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo,
    const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s456 = pInfo;
        skip |=
            ValidateCopyMemoryToAccelerationStructureInfoKHR({}, _s456->sType, _s456->pNext, _s456->src, _s456->dst, _s456->mode);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateWriteAccelerationStructuresPropertiesKHR(
    VkDevice device, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures,
    VkQueryType queryType, size_t dataSize, void* pData, size_t stride, const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyAccelerationStructureKHR(VkCommandBuffer commandBuffer,
                                                                        const VkCopyAccelerationStructureInfoKHR* pInfo,
                                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pInfo != nullptr) {
        const auto _s457 = pInfo;
        skip |= ValidateCopyAccelerationStructureInfoKHR(_carryOverObjects, _s457->sType, _s457->pNext, _s457->src, _s457->dst,
                                                         _s457->mode);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyAccelerationStructureToMemoryKHR(
    VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pInfo != nullptr) {
        const auto _s458 = pInfo;
        skip |= ValidateCopyAccelerationStructureToMemoryInfoKHR(_carryOverObjects, _s458->sType, _s458->pNext, _s458->src,
                                                                 _s458->dst, _s458->mode);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdCopyMemoryToAccelerationStructureKHR(
    VkCommandBuffer commandBuffer, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pInfo != nullptr) {
        const auto _s459 = pInfo;
        skip |= ValidateCopyMemoryToAccelerationStructureInfoKHR(_carryOverObjects, _s459->sType, _s459->pNext, _s459->src,
                                                                 _s459->dst, _s459->mode);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetAccelerationStructureDeviceAddressKHR(
    VkDevice device, const VkAccelerationStructureDeviceAddressInfoKHR* pInfo, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pInfo != nullptr) {
        const auto _s460 = pInfo;
        skip |= ValidateAccelerationStructureDeviceAddressInfoKHR({}, _s460->sType, _s460->pNext, _s460->accelerationStructure);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdWriteAccelerationStructuresPropertiesKHR(
    VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures,
    VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateGetDeviceAccelerationStructureCompatibilityKHR(
    VkDevice device, const VkAccelerationStructureVersionInfoKHR* pVersionInfo,
    VkAccelerationStructureCompatibilityKHR* pCompatibility, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pVersionInfo != nullptr) {
        const auto _s461 = pVersionInfo;
        skip |= ValidateAccelerationStructureVersionInfoKHR({}, _s461->sType, _s461->pNext, _s461->pVersionData);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetAccelerationStructureBuildSizesKHR(
    VkDevice device, VkAccelerationStructureBuildTypeKHR buildType, const VkAccelerationStructureBuildGeometryInfoKHR* pBuildInfo,
    const uint32_t* pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR* pSizeInfo, const ErrorObject& _error_obj) const {
    bool skip = false;
    if (pBuildInfo != nullptr) {
        const auto _s462 = pBuildInfo;
        skip |= ValidateAccelerationStructureBuildGeometryInfoKHR(
            {}, _s462->sType, _s462->pNext, _s462->type, _s462->flags, _s462->mode, _s462->srcAccelerationStructure,
            _s462->dstAccelerationStructure, _s462->geometryCount, _s462->pGeometries, _s462->ppGeometries, _s462->scratchData);
    }
    if (pSizeInfo != nullptr) {
        const auto _s463 = pSizeInfo;
        skip |= ValidateAccelerationStructureBuildSizesInfoKHR({}, _s463->sType, _s463->pNext, _s463->accelerationStructureSize,
                                                               _s463->updateScratchSize, _s463->buildScratchSize);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdTraceRaysKHR(VkCommandBuffer commandBuffer,
                                                        const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable,
                                                        const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable,
                                                        const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable,
                                                        const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable,
                                                        uint32_t width, uint32_t height, uint32_t depth,
                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pRaygenShaderBindingTable != nullptr) {
        const auto _s464 = pRaygenShaderBindingTable;
        skip |= ValidateStridedDeviceAddressRegionKHR(_carryOverObjects, _s464->deviceAddress, _s464->stride, _s464->size);
    }
    if (pMissShaderBindingTable != nullptr) {
        const auto _s465 = pMissShaderBindingTable;
        skip |= ValidateStridedDeviceAddressRegionKHR(_carryOverObjects, _s465->deviceAddress, _s465->stride, _s465->size);
    }
    if (pHitShaderBindingTable != nullptr) {
        const auto _s466 = pHitShaderBindingTable;
        skip |= ValidateStridedDeviceAddressRegionKHR(_carryOverObjects, _s466->deviceAddress, _s466->stride, _s466->size);
    }
    if (pCallableShaderBindingTable != nullptr) {
        const auto _s467 = pCallableShaderBindingTable;
        skip |= ValidateStridedDeviceAddressRegionKHR(_carryOverObjects, _s467->deviceAddress, _s467->stride, _s467->size);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateCreateRayTracingPipelinesKHR(VkDevice device, VkDeferredOperationKHR deferredOperation,
                                                                     VkPipelineCache pipelineCache, uint32_t createInfoCount,
                                                                     const VkRayTracingPipelineCreateInfoKHR* pCreateInfos,
                                                                     const VkAllocationCallbacks* pAllocator,
                                                                     VkPipeline* pPipelines, const ErrorObject& _error_obj,
                                                                     void* validation_state) const {
    bool skip = ValidationStateTracker::PreCallValidateCreateRayTracingPipelinesKHR(device, deferredOperation, pipelineCache,
                                                                                    createInfoCount, pCreateInfos, pAllocator,
                                                                                    pPipelines, _error_obj, validation_state);
    if (pCreateInfos != nullptr) {
        for (uint32_t _i468 = 0; _i468 < createInfoCount; ++_i468) {
            const auto _s469 = &pCreateInfos[_i468];
            skip |= ValidateRayTracingPipelineCreateInfoKHR(
                {}, _s469->sType, _s469->pNext, _s469->flags, _s469->stageCount, _s469->pStages, _s469->groupCount, _s469->pGroups,
                _s469->maxPipelineRayRecursionDepth, _s469->pLibraryInfo, _s469->pLibraryInterface, _s469->pDynamicState,
                _s469->layout, _s469->basePipelineHandle, _s469->basePipelineIndex);
        }
    }
    if (pAllocator != nullptr) {
        const auto _s470 = pAllocator;
        skip |= ValidateAllocationCallbacks({}, _s470->pUserData, _s470->pfnAllocation, _s470->pfnReallocation, _s470->pfnFree,
                                            _s470->pfnInternalAllocation, _s470->pfnInternalFree);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetRayTracingCaptureReplayShaderGroupHandlesKHR(VkDevice device, VkPipeline pipeline,
                                                                                        uint32_t firstGroup, uint32_t groupCount,
                                                                                        size_t dataSize, void* pData,
                                                                                        const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdTraceRaysIndirectKHR(VkCommandBuffer commandBuffer,
                                                                const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable,
                                                                const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable,
                                                                const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable,
                                                                const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable,
                                                                VkDeviceAddress indirectDeviceAddress,
                                                                const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    if (pRaygenShaderBindingTable != nullptr) {
        const auto _s471 = pRaygenShaderBindingTable;
        skip |= ValidateStridedDeviceAddressRegionKHR(_carryOverObjects, _s471->deviceAddress, _s471->stride, _s471->size);
    }
    if (pMissShaderBindingTable != nullptr) {
        const auto _s472 = pMissShaderBindingTable;
        skip |= ValidateStridedDeviceAddressRegionKHR(_carryOverObjects, _s472->deviceAddress, _s472->stride, _s472->size);
    }
    if (pHitShaderBindingTable != nullptr) {
        const auto _s473 = pHitShaderBindingTable;
        skip |= ValidateStridedDeviceAddressRegionKHR(_carryOverObjects, _s473->deviceAddress, _s473->stride, _s473->size);
    }
    if (pCallableShaderBindingTable != nullptr) {
        const auto _s474 = pCallableShaderBindingTable;
        skip |= ValidateStridedDeviceAddressRegionKHR(_carryOverObjects, _s474->deviceAddress, _s474->stride, _s474->size);
    }
    return skip;
}
bool ExplicitValidation::PreCallValidateGetRayTracingShaderGroupStackSizeKHR(VkDevice device, VkPipeline pipeline, uint32_t group,
                                                                             VkShaderGroupShaderKHR groupShader,
                                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdSetRayTracingPipelineStackSizeKHR(VkCommandBuffer commandBuffer,
                                                                             uint32_t pipelineStackSize,
                                                                             const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDrawMeshTasksEXT(VkCommandBuffer commandBuffer, uint32_t groupCountX,
                                                            uint32_t groupCountY, uint32_t groupCountZ,
                                                            const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDrawMeshTasksIndirectEXT(VkCommandBuffer commandBuffer, VkBuffer buffer,
                                                                    VkDeviceSize offset, uint32_t drawCount, uint32_t stride,
                                                                    const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}
bool ExplicitValidation::PreCallValidateCmdDrawMeshTasksIndirectCountEXT(VkCommandBuffer commandBuffer, VkBuffer buffer,
                                                                         VkDeviceSize offset, VkBuffer countBuffer,
                                                                         VkDeviceSize countBufferOffset, uint32_t maxDrawCount,
                                                                         uint32_t stride, const ErrorObject& _error_obj) const {
    bool skip = false;
    LogObjectList _carryOverObjects;
    _carryOverObjects.add(commandBuffer);
    return skip;
}

// NOLINTEND
