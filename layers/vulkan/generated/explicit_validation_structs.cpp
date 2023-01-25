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

bool ExplicitValidation::ValidateExtent2D(const LogObjectList &_parentObjects, const uint32_t width, const uint32_t height) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateExtent3D(const LogObjectList &_parentObjects, const uint32_t width, const uint32_t height,
                                          const uint32_t depth) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateOffset2D(const LogObjectList &_parentObjects, const int32_t x, const int32_t y) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateOffset3D(const LogObjectList &_parentObjects, const int32_t x, const int32_t y,
                                          const int32_t z) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateRect2D(const LogObjectList &_parentObjects, const VkOffset2D offset,
                                        const VkExtent2D extent) const {
    bool skip = false;
    const auto _s1 = &offset;
    skip |= ValidateOffset2D(_parentObjects, _s1->x, _s1->y);
    const auto _s2 = &extent;
    skip |= ValidateExtent2D(_parentObjects, _s2->width, _s2->height);
    return skip;
}
bool ExplicitValidation::ValidateBaseInStructure(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                 const struct VkBaseInStructure *pNext) const {
    bool skip = false;
    if (pNext != nullptr) {
        const auto _s3 = pNext;
        skip |= ValidateBaseInStructure(_parentObjects, _s3->sType, _s3->pNext);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBaseOutStructure(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                  const struct VkBaseOutStructure *pNext) const {
    bool skip = false;
    if (pNext != nullptr) {
        const auto _s4 = pNext;
        skip |= ValidateBaseOutStructure(_parentObjects, _s4->sType, _s4->pNext);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBufferMemoryBarrier(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                     const void *pNext, const VkAccessFlags srcAccessMask,
                                                     const VkAccessFlags dstAccessMask, const uint32_t srcQueueFamilyIndex,
                                                     const uint32_t dstQueueFamilyIndex, const VkBuffer buffer,
                                                     const VkDeviceSize offset, const VkDeviceSize size) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDispatchIndirectCommand(const LogObjectList &_parentObjects, const uint32_t x, const uint32_t y,
                                                         const uint32_t z) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateDrawIndexedIndirectCommand(const LogObjectList &_parentObjects, const uint32_t indexCount,
                                                            const uint32_t instanceCount, const uint32_t firstIndex,
                                                            const int32_t vertexOffset, const uint32_t firstInstance) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateDrawIndirectCommand(const LogObjectList &_parentObjects, const uint32_t vertexCount,
                                                     const uint32_t instanceCount, const uint32_t firstVertex,
                                                     const uint32_t firstInstance) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateImageSubresourceRange(const LogObjectList &_parentObjects, const VkImageAspectFlags aspectMask,
                                                       const uint32_t baseMipLevel, const uint32_t levelCount,
                                                       const uint32_t baseArrayLayer, const uint32_t layerCount) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateImageMemoryBarrier(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                    const void *pNext, const VkAccessFlags srcAccessMask,
                                                    const VkAccessFlags dstAccessMask, const VkImageLayout oldLayout,
                                                    const VkImageLayout newLayout, const uint32_t srcQueueFamilyIndex,
                                                    const uint32_t dstQueueFamilyIndex, const VkImage image,
                                                    const VkImageSubresourceRange subresourceRange) const {
    bool skip = false;
    const auto _s5 = &subresourceRange;
    skip |= ValidateImageSubresourceRange(_parentObjects, _s5->aspectMask, _s5->baseMipLevel, _s5->levelCount, _s5->baseArrayLayer,
                                          _s5->layerCount);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMemoryBarrier(const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
                                               const VkAccessFlags srcAccessMask, const VkAccessFlags dstAccessMask) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineCacheHeaderVersionOne(const LogObjectList &_parentObjects, const uint32_t headerSize,
                                                               const VkPipelineCacheHeaderVersion headerVersion,
                                                               const uint32_t vendorID, const uint32_t deviceID,
                                                               const uint8_t pipelineCacheUUID[VK_UUID_SIZE]) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateAllocationCallbacks(const LogObjectList &_parentObjects, const void *pUserData,
                                                     const PFN_vkAllocationFunction pfnAllocation,
                                                     const PFN_vkReallocationFunction pfnReallocation,
                                                     const PFN_vkFreeFunction pfnFree,
                                                     const PFN_vkInternalAllocationNotification pfnInternalAllocation,
                                                     const PFN_vkInternalFreeNotification pfnInternalFree) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateApplicationInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                 const void *pNext, const char *pApplicationName, const uint32_t applicationVersion,
                                                 const char *pEngineName, const uint32_t engineVersion,
                                                 const uint32_t apiVersion) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateFormatProperties(const LogObjectList &_parentObjects,
                                                  const VkFormatFeatureFlags linearTilingFeatures,
                                                  const VkFormatFeatureFlags optimalTilingFeatures,
                                                  const VkFormatFeatureFlags bufferFeatures) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateImageFormatProperties(const LogObjectList &_parentObjects, const VkExtent3D maxExtent,
                                                       const uint32_t maxMipLevels, const uint32_t maxArrayLayers,
                                                       const VkSampleCountFlags sampleCounts,
                                                       const VkDeviceSize maxResourceSize) const {
    bool skip = false;
    const auto _s6 = &maxExtent;
    skip |= ValidateExtent3D(_parentObjects, _s6->width, _s6->height, _s6->depth);
    return skip;
}
bool ExplicitValidation::ValidateInstanceCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                    const void *pNext, const VkInstanceCreateFlags flags,
                                                    const VkApplicationInfo *pApplicationInfo, const uint32_t enabledLayerCount,
                                                    const char *const *ppEnabledLayerNames, const uint32_t enabledExtensionCount,
                                                    const char *const *ppEnabledExtensionNames) const {
    bool skip = false;
    if (pApplicationInfo != nullptr) {
        const auto _s7 = pApplicationInfo;
        skip |= ValidateApplicationInfo(_parentObjects, _s7->sType, _s7->pNext, _s7->pApplicationName, _s7->applicationVersion,
                                        _s7->pEngineName, _s7->engineVersion, _s7->apiVersion);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMemoryHeap(const LogObjectList &_parentObjects, const VkDeviceSize size,
                                            const VkMemoryHeapFlags flags) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateMemoryType(const LogObjectList &_parentObjects, const VkMemoryPropertyFlags propertyFlags,
                                            const uint32_t heapIndex) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceFeatures(
    const LogObjectList &_parentObjects, const VkBool32 robustBufferAccess, const VkBool32 fullDrawIndexUint32,
    const VkBool32 imageCubeArray, const VkBool32 independentBlend, const VkBool32 geometryShader,
    const VkBool32 tessellationShader, const VkBool32 sampleRateShading, const VkBool32 dualSrcBlend, const VkBool32 logicOp,
    const VkBool32 multiDrawIndirect, const VkBool32 drawIndirectFirstInstance, const VkBool32 depthClamp,
    const VkBool32 depthBiasClamp, const VkBool32 fillModeNonSolid, const VkBool32 depthBounds, const VkBool32 wideLines,
    const VkBool32 largePoints, const VkBool32 alphaToOne, const VkBool32 multiViewport, const VkBool32 samplerAnisotropy,
    const VkBool32 textureCompressionETC2, const VkBool32 textureCompressionASTC_LDR, const VkBool32 textureCompressionBC,
    const VkBool32 occlusionQueryPrecise, const VkBool32 pipelineStatisticsQuery, const VkBool32 vertexPipelineStoresAndAtomics,
    const VkBool32 fragmentStoresAndAtomics, const VkBool32 shaderTessellationAndGeometryPointSize,
    const VkBool32 shaderImageGatherExtended, const VkBool32 shaderStorageImageExtendedFormats,
    const VkBool32 shaderStorageImageMultisample, const VkBool32 shaderStorageImageReadWithoutFormat,
    const VkBool32 shaderStorageImageWriteWithoutFormat, const VkBool32 shaderUniformBufferArrayDynamicIndexing,
    const VkBool32 shaderSampledImageArrayDynamicIndexing, const VkBool32 shaderStorageBufferArrayDynamicIndexing,
    const VkBool32 shaderStorageImageArrayDynamicIndexing, const VkBool32 shaderClipDistance, const VkBool32 shaderCullDistance,
    const VkBool32 shaderFloat64, const VkBool32 shaderInt64, const VkBool32 shaderInt16, const VkBool32 shaderResourceResidency,
    const VkBool32 shaderResourceMinLod, const VkBool32 sparseBinding, const VkBool32 sparseResidencyBuffer,
    const VkBool32 sparseResidencyImage2D, const VkBool32 sparseResidencyImage3D, const VkBool32 sparseResidency2Samples,
    const VkBool32 sparseResidency4Samples, const VkBool32 sparseResidency8Samples, const VkBool32 sparseResidency16Samples,
    const VkBool32 sparseResidencyAliased, const VkBool32 variableMultisampleRate, const VkBool32 inheritedQueries) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceLimits(
    const LogObjectList &_parentObjects, const uint32_t maxImageDimension1D, const uint32_t maxImageDimension2D,
    const uint32_t maxImageDimension3D, const uint32_t maxImageDimensionCube, const uint32_t maxImageArrayLayers,
    const uint32_t maxTexelBufferElements, const uint32_t maxUniformBufferRange, const uint32_t maxStorageBufferRange,
    const uint32_t maxPushConstantsSize, const uint32_t maxMemoryAllocationCount, const uint32_t maxSamplerAllocationCount,
    const VkDeviceSize bufferImageGranularity, const VkDeviceSize sparseAddressSpaceSize, const uint32_t maxBoundDescriptorSets,
    const uint32_t maxPerStageDescriptorSamplers, const uint32_t maxPerStageDescriptorUniformBuffers,
    const uint32_t maxPerStageDescriptorStorageBuffers, const uint32_t maxPerStageDescriptorSampledImages,
    const uint32_t maxPerStageDescriptorStorageImages, const uint32_t maxPerStageDescriptorInputAttachments,
    const uint32_t maxPerStageResources, const uint32_t maxDescriptorSetSamplers, const uint32_t maxDescriptorSetUniformBuffers,
    const uint32_t maxDescriptorSetUniformBuffersDynamic, const uint32_t maxDescriptorSetStorageBuffers,
    const uint32_t maxDescriptorSetStorageBuffersDynamic, const uint32_t maxDescriptorSetSampledImages,
    const uint32_t maxDescriptorSetStorageImages, const uint32_t maxDescriptorSetInputAttachments,
    const uint32_t maxVertexInputAttributes, const uint32_t maxVertexInputBindings, const uint32_t maxVertexInputAttributeOffset,
    const uint32_t maxVertexInputBindingStride, const uint32_t maxVertexOutputComponents,
    const uint32_t maxTessellationGenerationLevel, const uint32_t maxTessellationPatchSize,
    const uint32_t maxTessellationControlPerVertexInputComponents, const uint32_t maxTessellationControlPerVertexOutputComponents,
    const uint32_t maxTessellationControlPerPatchOutputComponents, const uint32_t maxTessellationControlTotalOutputComponents,
    const uint32_t maxTessellationEvaluationInputComponents, const uint32_t maxTessellationEvaluationOutputComponents,
    const uint32_t maxGeometryShaderInvocations, const uint32_t maxGeometryInputComponents,
    const uint32_t maxGeometryOutputComponents, const uint32_t maxGeometryOutputVertices,
    const uint32_t maxGeometryTotalOutputComponents, const uint32_t maxFragmentInputComponents,
    const uint32_t maxFragmentOutputAttachments, const uint32_t maxFragmentDualSrcAttachments,
    const uint32_t maxFragmentCombinedOutputResources, const uint32_t maxComputeSharedMemorySize,
    const uint32_t maxComputeWorkGroupCount[3], const uint32_t maxComputeWorkGroupInvocations,
    const uint32_t maxComputeWorkGroupSize[3], const uint32_t subPixelPrecisionBits, const uint32_t subTexelPrecisionBits,
    const uint32_t mipmapPrecisionBits, const uint32_t maxDrawIndexedIndexValue, const uint32_t maxDrawIndirectCount,
    const float maxSamplerLodBias, const float maxSamplerAnisotropy, const uint32_t maxViewports,
    const uint32_t maxViewportDimensions[2], const float viewportBoundsRange[2], const uint32_t viewportSubPixelBits,
    const size_t minMemoryMapAlignment, const VkDeviceSize minTexelBufferOffsetAlignment,
    const VkDeviceSize minUniformBufferOffsetAlignment, const VkDeviceSize minStorageBufferOffsetAlignment,
    const int32_t minTexelOffset, const uint32_t maxTexelOffset, const int32_t minTexelGatherOffset,
    const uint32_t maxTexelGatherOffset, const float minInterpolationOffset, const float maxInterpolationOffset,
    const uint32_t subPixelInterpolationOffsetBits, const uint32_t maxFramebufferWidth, const uint32_t maxFramebufferHeight,
    const uint32_t maxFramebufferLayers, const VkSampleCountFlags framebufferColorSampleCounts,
    const VkSampleCountFlags framebufferDepthSampleCounts, const VkSampleCountFlags framebufferStencilSampleCounts,
    const VkSampleCountFlags framebufferNoAttachmentsSampleCounts, const uint32_t maxColorAttachments,
    const VkSampleCountFlags sampledImageColorSampleCounts, const VkSampleCountFlags sampledImageIntegerSampleCounts,
    const VkSampleCountFlags sampledImageDepthSampleCounts, const VkSampleCountFlags sampledImageStencilSampleCounts,
    const VkSampleCountFlags storageImageSampleCounts, const uint32_t maxSampleMaskWords,
    const VkBool32 timestampComputeAndGraphics, const float timestampPeriod, const uint32_t maxClipDistances,
    const uint32_t maxCullDistances, const uint32_t maxCombinedClipAndCullDistances, const uint32_t discreteQueuePriorities,
    const float pointSizeRange[2], const float lineWidthRange[2], const float pointSizeGranularity,
    const float lineWidthGranularity, const VkBool32 strictLines, const VkBool32 standardSampleLocations,
    const VkDeviceSize optimalBufferCopyOffsetAlignment, const VkDeviceSize optimalBufferCopyRowPitchAlignment,
    const VkDeviceSize nonCoherentAtomSize) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMemoryProperties(const LogObjectList &_parentObjects, const uint32_t memoryTypeCount,
                                                                const VkMemoryType memoryTypes[VK_MAX_MEMORY_TYPES],
                                                                const uint32_t memoryHeapCount,
                                                                const VkMemoryHeap memoryHeaps[VK_MAX_MEMORY_HEAPS]) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceSparseProperties(const LogObjectList &_parentObjects,
                                                                const VkBool32 residencyStandard2DBlockShape,
                                                                const VkBool32 residencyStandard2DMultisampleBlockShape,
                                                                const VkBool32 residencyStandard3DBlockShape,
                                                                const VkBool32 residencyAlignedMipSize,
                                                                const VkBool32 residencyNonResidentStrict) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceProperties(const LogObjectList &_parentObjects, const uint32_t apiVersion,
                                                          const uint32_t driverVersion, const uint32_t vendorID,
                                                          const uint32_t deviceID, const VkPhysicalDeviceType deviceType,
                                                          const char deviceName[VK_MAX_PHYSICAL_DEVICE_NAME_SIZE],
                                                          const uint8_t pipelineCacheUUID[VK_UUID_SIZE],
                                                          const VkPhysicalDeviceLimits limits,
                                                          const VkPhysicalDeviceSparseProperties sparseProperties) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateQueueFamilyProperties(const LogObjectList &_parentObjects, const VkQueueFlags queueFlags,
                                                       const uint32_t queueCount, const uint32_t timestampValidBits,
                                                       const VkExtent3D minImageTransferGranularity) const {
    bool skip = false;
    const auto _s8 = &minImageTransferGranularity;
    skip |= ValidateExtent3D(_parentObjects, _s8->width, _s8->height, _s8->depth);
    return skip;
}
bool ExplicitValidation::ValidateDeviceQueueCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const VkDeviceQueueCreateFlags flags,
                                                       const uint32_t queueFamilyIndex, const uint32_t queueCount,
                                                       const float *pQueuePriorities) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                  const void *pNext, const VkDeviceCreateFlags flags,
                                                  const uint32_t queueCreateInfoCount,
                                                  const VkDeviceQueueCreateInfo *pQueueCreateInfos,
                                                  const uint32_t enabledLayerCount, const char *const *ppEnabledLayerNames,
                                                  const uint32_t enabledExtensionCount, const char *const *ppEnabledExtensionNames,
                                                  const VkPhysicalDeviceFeatures *pEnabledFeatures) const {
    bool skip = false;
    if (pQueueCreateInfos != nullptr) {
        for (uint32_t _i9 = 0; _i9 < queueCreateInfoCount; ++_i9) {
            const auto _s10 = &pQueueCreateInfos[_i9];
            skip |= ValidateDeviceQueueCreateInfo(_parentObjects, _s10->sType, _s10->pNext, _s10->flags, _s10->queueFamilyIndex,
                                                  _s10->queueCount, _s10->pQueuePriorities);
        }
    }
    if (pEnabledFeatures != nullptr) {
        const auto _s11 = pEnabledFeatures;
        skip |= ValidatePhysicalDeviceFeatures(
            _parentObjects, _s11->robustBufferAccess, _s11->fullDrawIndexUint32, _s11->imageCubeArray, _s11->independentBlend,
            _s11->geometryShader, _s11->tessellationShader, _s11->sampleRateShading, _s11->dualSrcBlend, _s11->logicOp,
            _s11->multiDrawIndirect, _s11->drawIndirectFirstInstance, _s11->depthClamp, _s11->depthBiasClamp,
            _s11->fillModeNonSolid, _s11->depthBounds, _s11->wideLines, _s11->largePoints, _s11->alphaToOne, _s11->multiViewport,
            _s11->samplerAnisotropy, _s11->textureCompressionETC2, _s11->textureCompressionASTC_LDR, _s11->textureCompressionBC,
            _s11->occlusionQueryPrecise, _s11->pipelineStatisticsQuery, _s11->vertexPipelineStoresAndAtomics,
            _s11->fragmentStoresAndAtomics, _s11->shaderTessellationAndGeometryPointSize, _s11->shaderImageGatherExtended,
            _s11->shaderStorageImageExtendedFormats, _s11->shaderStorageImageMultisample, _s11->shaderStorageImageReadWithoutFormat,
            _s11->shaderStorageImageWriteWithoutFormat, _s11->shaderUniformBufferArrayDynamicIndexing,
            _s11->shaderSampledImageArrayDynamicIndexing, _s11->shaderStorageBufferArrayDynamicIndexing,
            _s11->shaderStorageImageArrayDynamicIndexing, _s11->shaderClipDistance, _s11->shaderCullDistance, _s11->shaderFloat64,
            _s11->shaderInt64, _s11->shaderInt16, _s11->shaderResourceResidency, _s11->shaderResourceMinLod, _s11->sparseBinding,
            _s11->sparseResidencyBuffer, _s11->sparseResidencyImage2D, _s11->sparseResidencyImage3D, _s11->sparseResidency2Samples,
            _s11->sparseResidency4Samples, _s11->sparseResidency8Samples, _s11->sparseResidency16Samples,
            _s11->sparseResidencyAliased, _s11->variableMultisampleRate, _s11->inheritedQueries);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateExtensionProperties(const LogObjectList &_parentObjects,
                                                     const char extensionName[VK_MAX_EXTENSION_NAME_SIZE],
                                                     const uint32_t specVersion) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateLayerProperties(const LogObjectList &_parentObjects,
                                                 const char layerName[VK_MAX_EXTENSION_NAME_SIZE], const uint32_t specVersion,
                                                 const uint32_t implementationVersion,
                                                 const char description[VK_MAX_DESCRIPTION_SIZE]) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateSubmitInfo(const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
                                            const uint32_t waitSemaphoreCount, const VkSemaphore *pWaitSemaphores,
                                            const VkPipelineStageFlags *pWaitDstStageMask, const uint32_t commandBufferCount,
                                            const VkCommandBuffer *pCommandBuffers, const uint32_t signalSemaphoreCount,
                                            const VkSemaphore *pSignalSemaphores) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMappedMemoryRange(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                   const void *pNext, const VkDeviceMemory memory, const VkDeviceSize offset,
                                                   const VkDeviceSize size) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMemoryAllocateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                    const void *pNext, const VkDeviceSize allocationSize,
                                                    const uint32_t memoryTypeIndex) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMemoryRequirements(const LogObjectList &_parentObjects, const VkDeviceSize size,
                                                    const VkDeviceSize alignment, const uint32_t memoryTypeBits) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateSparseMemoryBind(const LogObjectList &_parentObjects, const VkDeviceSize resourceOffset,
                                                  const VkDeviceSize size, const VkDeviceMemory memory,
                                                  const VkDeviceSize memoryOffset, const VkSparseMemoryBindFlags flags) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateSparseBufferMemoryBindInfo(const LogObjectList &_parentObjects, const VkBuffer buffer,
                                                            const uint32_t bindCount, const VkSparseMemoryBind *pBinds) const {
    bool skip = false;
    if (pBinds != nullptr) {
        for (uint32_t _i12 = 0; _i12 < bindCount; ++_i12) {
            const auto _s13 = &pBinds[_i12];
            skip |= ValidateSparseMemoryBind(_parentObjects, _s13->resourceOffset, _s13->size, _s13->memory, _s13->memoryOffset,
                                             _s13->flags);
        }
    }
    return skip;
}
bool ExplicitValidation::ValidateSparseImageOpaqueMemoryBindInfo(const LogObjectList &_parentObjects, const VkImage image,
                                                                 const uint32_t bindCount, const VkSparseMemoryBind *pBinds) const {
    bool skip = false;
    if (pBinds != nullptr) {
        for (uint32_t _i14 = 0; _i14 < bindCount; ++_i14) {
            const auto _s15 = &pBinds[_i14];
            skip |= ValidateSparseMemoryBind(_parentObjects, _s15->resourceOffset, _s15->size, _s15->memory, _s15->memoryOffset,
                                             _s15->flags);
        }
    }
    return skip;
}
bool ExplicitValidation::ValidateImageSubresource(const LogObjectList &_parentObjects, const VkImageAspectFlags aspectMask,
                                                  const uint32_t mipLevel, const uint32_t arrayLayer) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateSparseImageMemoryBind(const LogObjectList &_parentObjects, const VkImageSubresource subresource,
                                                       const VkOffset3D offset, const VkExtent3D extent,
                                                       const VkDeviceMemory memory, const VkDeviceSize memoryOffset,
                                                       const VkSparseMemoryBindFlags flags) const {
    bool skip = false;
    const auto _s16 = &subresource;
    skip |= ValidateImageSubresource(_parentObjects, _s16->aspectMask, _s16->mipLevel, _s16->arrayLayer);
    const auto _s17 = &offset;
    skip |= ValidateOffset3D(_parentObjects, _s17->x, _s17->y, _s17->z);
    const auto _s18 = &extent;
    skip |= ValidateExtent3D(_parentObjects, _s18->width, _s18->height, _s18->depth);
    return skip;
}
bool ExplicitValidation::ValidateSparseImageMemoryBindInfo(const LogObjectList &_parentObjects, const VkImage image,
                                                           const uint32_t bindCount, const VkSparseImageMemoryBind *pBinds) const {
    bool skip = false;
    if (pBinds != nullptr) {
        for (uint32_t _i19 = 0; _i19 < bindCount; ++_i19) {
            const auto _s20 = &pBinds[_i19];
            skip |= ValidateSparseImageMemoryBind(_parentObjects, _s20->subresource, _s20->offset, _s20->extent, _s20->memory,
                                                  _s20->memoryOffset, _s20->flags);
        }
    }
    return skip;
}
bool ExplicitValidation::ValidateBindSparseInfo(const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
                                                const uint32_t waitSemaphoreCount, const VkSemaphore *pWaitSemaphores,
                                                const uint32_t bufferBindCount, const VkSparseBufferMemoryBindInfo *pBufferBinds,
                                                const uint32_t imageOpaqueBindCount,
                                                const VkSparseImageOpaqueMemoryBindInfo *pImageOpaqueBinds,
                                                const uint32_t imageBindCount, const VkSparseImageMemoryBindInfo *pImageBinds,
                                                const uint32_t signalSemaphoreCount, const VkSemaphore *pSignalSemaphores) const {
    bool skip = false;
    if (pBufferBinds != nullptr) {
        for (uint32_t _i21 = 0; _i21 < bufferBindCount; ++_i21) {
            const auto _s22 = &pBufferBinds[_i21];
            skip |= ValidateSparseBufferMemoryBindInfo(_parentObjects, _s22->buffer, _s22->bindCount, _s22->pBinds);
        }
    }
    if (pImageOpaqueBinds != nullptr) {
        for (uint32_t _i23 = 0; _i23 < imageOpaqueBindCount; ++_i23) {
            const auto _s24 = &pImageOpaqueBinds[_i23];
            skip |= ValidateSparseImageOpaqueMemoryBindInfo(_parentObjects, _s24->image, _s24->bindCount, _s24->pBinds);
        }
    }
    if (pImageBinds != nullptr) {
        for (uint32_t _i25 = 0; _i25 < imageBindCount; ++_i25) {
            const auto _s26 = &pImageBinds[_i25];
            skip |= ValidateSparseImageMemoryBindInfo(_parentObjects, _s26->image, _s26->bindCount, _s26->pBinds);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSparseImageFormatProperties(const LogObjectList &_parentObjects,
                                                             const VkImageAspectFlags aspectMask, const VkExtent3D imageGranularity,
                                                             const VkSparseImageFormatFlags flags) const {
    bool skip = false;
    const auto _s27 = &imageGranularity;
    skip |= ValidateExtent3D(_parentObjects, _s27->width, _s27->height, _s27->depth);
    return skip;
}
bool ExplicitValidation::ValidateSparseImageMemoryRequirements(
    const LogObjectList &_parentObjects, const VkSparseImageFormatProperties formatProperties, const uint32_t imageMipTailFirstLod,
    const VkDeviceSize imageMipTailSize, const VkDeviceSize imageMipTailOffset, const VkDeviceSize imageMipTailStride) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateFenceCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                 const void *pNext, const VkFenceCreateFlags flags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSemaphoreCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                     const void *pNext, const VkSemaphoreCreateFlags flags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateEventCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                 const void *pNext, const VkEventCreateFlags flags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateQueryPoolCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                     const void *pNext, const VkQueryPoolCreateFlags flags,
                                                     const VkQueryType queryType, const uint32_t queryCount,
                                                     const VkQueryPipelineStatisticFlags pipelineStatistics) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBufferCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                  const void *pNext, const VkBufferCreateFlags flags, const VkDeviceSize size,
                                                  const VkBufferUsageFlags usage, const VkSharingMode sharingMode,
                                                  const uint32_t queueFamilyIndexCount, const uint32_t *pQueueFamilyIndices) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBufferViewCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                      const void *pNext, const VkBufferViewCreateFlags flags, const VkBuffer buffer,
                                                      const VkFormat format, const VkDeviceSize offset,
                                                      const VkDeviceSize range) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                 const void *pNext, const VkImageCreateFlags flags, const VkImageType imageType,
                                                 const VkFormat format, const VkExtent3D extent, const uint32_t mipLevels,
                                                 const uint32_t arrayLayers, const VkSampleCountFlagBits samples,
                                                 const VkImageTiling tiling, const VkImageUsageFlags usage,
                                                 const VkSharingMode sharingMode, const uint32_t queueFamilyIndexCount,
                                                 const uint32_t *pQueueFamilyIndices, const VkImageLayout initialLayout) const {
    bool skip = false;
    const auto _s28 = &extent;
    skip |= ValidateExtent3D(_parentObjects, _s28->width, _s28->height, _s28->depth);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSubresourceLayout(const LogObjectList &_parentObjects, const VkDeviceSize offset,
                                                   const VkDeviceSize size, const VkDeviceSize rowPitch,
                                                   const VkDeviceSize arrayPitch, const VkDeviceSize depthPitch) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateComponentMapping(const LogObjectList &_parentObjects, const VkComponentSwizzle r,
                                                  const VkComponentSwizzle g, const VkComponentSwizzle b,
                                                  const VkComponentSwizzle a) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateImageViewCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                     const void *pNext, const VkImageViewCreateFlags flags, const VkImage image,
                                                     const VkImageViewType viewType, const VkFormat format,
                                                     const VkComponentMapping components,
                                                     const VkImageSubresourceRange subresourceRange) const {
    bool skip = false;
    const auto _s29 = &components;
    skip |= ValidateComponentMapping(_parentObjects, _s29->r, _s29->g, _s29->b, _s29->a);
    const auto _s30 = &subresourceRange;
    skip |= ValidateImageSubresourceRange(_parentObjects, _s30->aspectMask, _s30->baseMipLevel, _s30->levelCount,
                                          _s30->baseArrayLayer, _s30->layerCount);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateShaderModuleCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                        const void *pNext, const VkShaderModuleCreateFlags flags,
                                                        const size_t codeSize, const uint32_t *pCode) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineCacheCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext, const VkPipelineCacheCreateFlags flags,
                                                         const size_t initialDataSize, const void *pInitialData) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSpecializationMapEntry(const LogObjectList &_parentObjects, uint32_t constantID,
                                                        const uint32_t offset, const size_t size) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateSpecializationInfo(const LogObjectList &_parentObjects, const uint32_t mapEntryCount,
                                                    const VkSpecializationMapEntry *pMapEntries, const size_t dataSize,
                                                    const void *pData) const {
    bool skip = false;
    if (pMapEntries != nullptr) {
        for (uint32_t _i31 = 0; _i31 < mapEntryCount; ++_i31) {
            const auto _s32 = &pMapEntries[_i31];
            skip |= ValidateSpecializationMapEntry(_parentObjects, _s32->constantID, _s32->offset, _s32->size);
        }
    }
    return skip;
}
bool ExplicitValidation::ValidatePipelineShaderStageCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const VkPipelineShaderStageCreateFlags flags,
                                                               const VkShaderStageFlagBits stage, const VkShaderModule module,
                                                               const char *pName,
                                                               const VkSpecializationInfo *pSpecializationInfo) const {
    bool skip = false;
    if (pSpecializationInfo != nullptr) {
        const auto _s33 = pSpecializationInfo;
        skip |= ValidateSpecializationInfo(_parentObjects, _s33->mapEntryCount, _s33->pMapEntries, _s33->dataSize, _s33->pData);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateComputePipelineCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const VkPipelineCreateFlags flags,
                                                           const VkPipelineShaderStageCreateInfo stage,
                                                           const VkPipelineLayout layout, const VkPipeline basePipelineHandle,
                                                           const int32_t basePipelineIndex) const {
    bool skip = false;
    const auto _s34 = &stage;
    skip |= ValidatePipelineShaderStageCreateInfo(_parentObjects, _s34->sType, _s34->pNext, _s34->flags, _s34->stage, _s34->module,
                                                  _s34->pName, _s34->pSpecializationInfo);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVertexInputBindingDescription(const LogObjectList &_parentObjects, const uint32_t binding,
                                                               const uint32_t stride, const VkVertexInputRate inputRate) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateVertexInputAttributeDescription(const LogObjectList &_parentObjects, const uint32_t location,
                                                                 const uint32_t binding, const VkFormat format,
                                                                 const uint32_t offset) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePipelineVertexInputStateCreateInfo(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkPipelineVertexInputStateCreateFlags flags, const uint32_t vertexBindingDescriptionCount,
    const VkVertexInputBindingDescription *pVertexBindingDescriptions, const uint32_t vertexAttributeDescriptionCount,
    const VkVertexInputAttributeDescription *pVertexAttributeDescriptions) const {
    bool skip = false;
    if (pVertexBindingDescriptions != nullptr) {
        for (uint32_t _i35 = 0; _i35 < vertexBindingDescriptionCount; ++_i35) {
            const auto _s36 = &pVertexBindingDescriptions[_i35];
            skip |= ValidateVertexInputBindingDescription(_parentObjects, _s36->binding, _s36->stride, _s36->inputRate);
        }
    }
    if (pVertexAttributeDescriptions != nullptr) {
        for (uint32_t _i37 = 0; _i37 < vertexAttributeDescriptionCount; ++_i37) {
            const auto _s38 = &pVertexAttributeDescriptions[_i37];
            skip |=
                ValidateVertexInputAttributeDescription(_parentObjects, _s38->location, _s38->binding, _s38->format, _s38->offset);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineInputAssemblyStateCreateInfo(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const VkPipelineInputAssemblyStateCreateFlags flags,
                                                                      const VkPrimitiveTopology topology,
                                                                      const VkBool32 primitiveRestartEnable) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineTessellationStateCreateInfo(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const VkPipelineTessellationStateCreateFlags flags,
                                                                     const uint32_t patchControlPoints) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateViewport(const LogObjectList &_parentObjects, const float x, const float y, const float width,
                                          const float height, const float minDepth, const float maxDepth) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePipelineViewportStateCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                 const void *pNext, const VkPipelineViewportStateCreateFlags flags,
                                                                 const uint32_t viewportCount, const VkViewport *pViewports,
                                                                 const uint32_t scissorCount, const VkRect2D *pScissors) const {
    bool skip = false;
    if (pViewports != nullptr) {
        for (uint32_t _i39 = 0; _i39 < viewportCount; ++_i39) {
            const auto _s40 = &pViewports[_i39];
            skip |= ValidateViewport(_parentObjects, _s40->x, _s40->y, _s40->width, _s40->height, _s40->minDepth, _s40->maxDepth);
        }
    }
    if (pScissors != nullptr) {
        for (uint32_t _i41 = 0; _i41 < scissorCount; ++_i41) {
            const auto _s42 = &pScissors[_i41];
            skip |= ValidateRect2D(_parentObjects, _s42->offset, _s42->extent);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineRasterizationStateCreateInfo(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkPipelineRasterizationStateCreateFlags flags, const VkBool32 depthClampEnable, const VkBool32 rasterizerDiscardEnable,
    const VkPolygonMode polygonMode, const VkCullModeFlags cullMode, const VkFrontFace frontFace, const VkBool32 depthBiasEnable,
    const float depthBiasConstantFactor, const float depthBiasClamp, const float depthBiasSlopeFactor,
    const float lineWidth) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineMultisampleStateCreateInfo(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkPipelineMultisampleStateCreateFlags flags, const VkSampleCountFlagBits rasterizationSamples,
    const VkBool32 sampleShadingEnable, const float minSampleShading, const VkSampleMask *pSampleMask,
    const VkBool32 alphaToCoverageEnable, const VkBool32 alphaToOneEnable) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateStencilOpState(const LogObjectList &_parentObjects, const VkStencilOp failOp,
                                                const VkStencilOp passOp, const VkStencilOp depthFailOp,
                                                const VkCompareOp compareOp, const uint32_t compareMask, const uint32_t writeMask,
                                                const uint32_t reference) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePipelineDepthStencilStateCreateInfo(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkPipelineDepthStencilStateCreateFlags flags, const VkBool32 depthTestEnable, const VkBool32 depthWriteEnable,
    const VkCompareOp depthCompareOp, const VkBool32 depthBoundsTestEnable, const VkBool32 stencilTestEnable,
    const VkStencilOpState front, const VkStencilOpState back, const float minDepthBounds, const float maxDepthBounds) const {
    bool skip = false;
    const auto _s43 = &front;
    skip |= ValidateStencilOpState(_parentObjects, _s43->failOp, _s43->passOp, _s43->depthFailOp, _s43->compareOp,
                                   _s43->compareMask, _s43->writeMask, _s43->reference);
    const auto _s44 = &back;
    skip |= ValidateStencilOpState(_parentObjects, _s44->failOp, _s44->passOp, _s44->depthFailOp, _s44->compareOp,
                                   _s44->compareMask, _s44->writeMask, _s44->reference);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineColorBlendAttachmentState(
    const LogObjectList &_parentObjects, const VkBool32 blendEnable, const VkBlendFactor srcColorBlendFactor,
    const VkBlendFactor dstColorBlendFactor, const VkBlendOp colorBlendOp, const VkBlendFactor srcAlphaBlendFactor,
    const VkBlendFactor dstAlphaBlendFactor, const VkBlendOp alphaBlendOp, const VkColorComponentFlags colorWriteMask) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePipelineColorBlendStateCreateInfo(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkPipelineColorBlendStateCreateFlags flags, const VkBool32 logicOpEnable, const VkLogicOp logicOp,
    const uint32_t attachmentCount, const VkPipelineColorBlendAttachmentState *pAttachments, const float blendConstants[4]) const {
    bool skip = false;
    if (pAttachments != nullptr) {
        for (uint32_t _i45 = 0; _i45 < attachmentCount; ++_i45) {
            const auto _s46 = &pAttachments[_i45];
            skip |= ValidatePipelineColorBlendAttachmentState(
                _parentObjects, _s46->blendEnable, _s46->srcColorBlendFactor, _s46->dstColorBlendFactor, _s46->colorBlendOp,
                _s46->srcAlphaBlendFactor, _s46->dstAlphaBlendFactor, _s46->alphaBlendOp, _s46->colorWriteMask);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineDynamicStateCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const VkPipelineDynamicStateCreateFlags flags,
                                                                const uint32_t dynamicStateCount,
                                                                const VkDynamicState *pDynamicStates) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateGraphicsPipelineCreateInfo(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkPipelineCreateFlags flags,
    const uint32_t stageCount, const VkPipelineShaderStageCreateInfo *pStages,
    const VkPipelineVertexInputStateCreateInfo *pVertexInputState,
    const VkPipelineInputAssemblyStateCreateInfo *pInputAssemblyState,
    const VkPipelineTessellationStateCreateInfo *pTessellationState, const VkPipelineViewportStateCreateInfo *pViewportState,
    const VkPipelineRasterizationStateCreateInfo *pRasterizationState,
    const VkPipelineMultisampleStateCreateInfo *pMultisampleState, const VkPipelineDepthStencilStateCreateInfo *pDepthStencilState,
    const VkPipelineColorBlendStateCreateInfo *pColorBlendState, const VkPipelineDynamicStateCreateInfo *pDynamicState,
    const VkPipelineLayout layout, const VkRenderPass renderPass, const uint32_t subpass, const VkPipeline basePipelineHandle,
    const int32_t basePipelineIndex) const {
    bool skip = false;
    if (pStages != nullptr) {
        for (uint32_t _i47 = 0; _i47 < stageCount; ++_i47) {
            const auto _s48 = &pStages[_i47];
            skip |= ValidatePipelineShaderStageCreateInfo(_parentObjects, _s48->sType, _s48->pNext, _s48->flags, _s48->stage,
                                                          _s48->module, _s48->pName, _s48->pSpecializationInfo);
        }
    }
    if (pVertexInputState != nullptr) {
        const auto _s49 = pVertexInputState;
        skip |= ValidatePipelineVertexInputStateCreateInfo(
            _parentObjects, _s49->sType, _s49->pNext, _s49->flags, _s49->vertexBindingDescriptionCount,
            _s49->pVertexBindingDescriptions, _s49->vertexAttributeDescriptionCount, _s49->pVertexAttributeDescriptions);
    }
    if (pInputAssemblyState != nullptr) {
        const auto _s50 = pInputAssemblyState;
        skip |= ValidatePipelineInputAssemblyStateCreateInfo(_parentObjects, _s50->sType, _s50->pNext, _s50->flags, _s50->topology,
                                                             _s50->primitiveRestartEnable);
    }
    if (!shouldIgnore_VkGraphicsPipelineCreateInfo_pTessellationState(
            sType, pNext, flags, stageCount, pStages, pVertexInputState, pInputAssemblyState, pTessellationState, pViewportState,
            pRasterizationState, pMultisampleState, pDepthStencilState, pColorBlendState, pDynamicState, layout, renderPass,
            subpass, basePipelineHandle, basePipelineIndex)) {
        const auto _s51 = pTessellationState;
        skip |= ValidatePipelineTessellationStateCreateInfo(_parentObjects, _s51->sType, _s51->pNext, _s51->flags,
                                                            _s51->patchControlPoints);
    }
    if (pViewportState != nullptr) {
        const auto _s52 = pViewportState;
        skip |= ValidatePipelineViewportStateCreateInfo(_parentObjects, _s52->sType, _s52->pNext, _s52->flags, _s52->viewportCount,
                                                        _s52->pViewports, _s52->scissorCount, _s52->pScissors);
    }
    if (pRasterizationState != nullptr) {
        const auto _s53 = pRasterizationState;
        skip |= ValidatePipelineRasterizationStateCreateInfo(
            _parentObjects, _s53->sType, _s53->pNext, _s53->flags, _s53->depthClampEnable, _s53->rasterizerDiscardEnable,
            _s53->polygonMode, _s53->cullMode, _s53->frontFace, _s53->depthBiasEnable, _s53->depthBiasConstantFactor,
            _s53->depthBiasClamp, _s53->depthBiasSlopeFactor, _s53->lineWidth);
    }
    if (pMultisampleState != nullptr) {
        const auto _s54 = pMultisampleState;
        skip |= ValidatePipelineMultisampleStateCreateInfo(
            _parentObjects, _s54->sType, _s54->pNext, _s54->flags, _s54->rasterizationSamples, _s54->sampleShadingEnable,
            _s54->minSampleShading, _s54->pSampleMask, _s54->alphaToCoverageEnable, _s54->alphaToOneEnable);
    }
    if (pDepthStencilState != nullptr) {
        const auto _s55 = pDepthStencilState;
        skip |= ValidatePipelineDepthStencilStateCreateInfo(_parentObjects, _s55->sType, _s55->pNext, _s55->flags,
                                                            _s55->depthTestEnable, _s55->depthWriteEnable, _s55->depthCompareOp,
                                                            _s55->depthBoundsTestEnable, _s55->stencilTestEnable, _s55->front,
                                                            _s55->back, _s55->minDepthBounds, _s55->maxDepthBounds);
    }
    if (pColorBlendState != nullptr) {
        const auto _s56 = pColorBlendState;
        skip |= ValidatePipelineColorBlendStateCreateInfo(_parentObjects, _s56->sType, _s56->pNext, _s56->flags,
                                                          _s56->logicOpEnable, _s56->logicOp, _s56->attachmentCount,
                                                          _s56->pAttachments, _s56->blendConstants);
    }
    if (pDynamicState != nullptr) {
        const auto _s57 = pDynamicState;
        skip |= ValidatePipelineDynamicStateCreateInfo(_parentObjects, _s57->sType, _s57->pNext, _s57->flags,
                                                       _s57->dynamicStateCount, _s57->pDynamicStates);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePushConstantRange(const LogObjectList &_parentObjects, const VkShaderStageFlags stageFlags,
                                                   const uint32_t offset, const uint32_t size) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePipelineLayoutCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const VkPipelineLayoutCreateFlags flags,
                                                          const uint32_t setLayoutCount, const VkDescriptorSetLayout *pSetLayouts,
                                                          const uint32_t pushConstantRangeCount,
                                                          const VkPushConstantRange *pPushConstantRanges) const {
    bool skip = false;
    if (pPushConstantRanges != nullptr) {
        for (uint32_t _i58 = 0; _i58 < pushConstantRangeCount; ++_i58) {
            const auto _s59 = &pPushConstantRanges[_i58];
            skip |= ValidatePushConstantRange(_parentObjects, _s59->stageFlags, _s59->offset, _s59->size);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSamplerCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                   const void *pNext, const VkSamplerCreateFlags flags, const VkFilter magFilter,
                                                   const VkFilter minFilter, const VkSamplerMipmapMode mipmapMode,
                                                   const VkSamplerAddressMode addressModeU, const VkSamplerAddressMode addressModeV,
                                                   const VkSamplerAddressMode addressModeW, const float mipLodBias,
                                                   const VkBool32 anisotropyEnable, const float maxAnisotropy,
                                                   const VkBool32 compareEnable, const VkCompareOp compareOp, const float minLod,
                                                   const float maxLod, const VkBorderColor borderColor,
                                                   const VkBool32 unnormalizedCoordinates) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCopyDescriptorSet(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                   const void *pNext, const VkDescriptorSet srcSet, const uint32_t srcBinding,
                                                   const uint32_t srcArrayElement, const VkDescriptorSet dstSet,
                                                   const uint32_t dstBinding, const uint32_t dstArrayElement,
                                                   const uint32_t descriptorCount) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDescriptorBufferInfo(const LogObjectList &_parentObjects, const VkBuffer buffer,
                                                      const VkDeviceSize offset, const VkDeviceSize range) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateDescriptorImageInfo(const LogObjectList &_parentObjects, const VkSampler sampler,
                                                     const VkImageView imageView, const VkImageLayout imageLayout) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateDescriptorPoolSize(const LogObjectList &_parentObjects, const VkDescriptorType type,
                                                    const uint32_t descriptorCount) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateDescriptorPoolCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const VkDescriptorPoolCreateFlags flags,
                                                          const uint32_t maxSets, const uint32_t poolSizeCount,
                                                          const VkDescriptorPoolSize *pPoolSizes) const {
    bool skip = false;
    if (pPoolSizes != nullptr) {
        for (uint32_t _i60 = 0; _i60 < poolSizeCount; ++_i60) {
            const auto _s61 = &pPoolSizes[_i60];
            skip |= ValidateDescriptorPoolSize(_parentObjects, _s61->type, _s61->descriptorCount);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDescriptorSetAllocateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const VkDescriptorPool descriptorPool,
                                                           const uint32_t descriptorSetCount,
                                                           const VkDescriptorSetLayout *pSetLayouts) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDescriptorSetLayoutBinding(const LogObjectList &_parentObjects, const uint32_t binding,
                                                            const VkDescriptorType descriptorType, const uint32_t descriptorCount,
                                                            const VkShaderStageFlags stageFlags,
                                                            const VkSampler *pImmutableSamplers) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateDescriptorSetLayoutCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const VkDescriptorSetLayoutCreateFlags flags,
                                                               const uint32_t bindingCount,
                                                               const VkDescriptorSetLayoutBinding *pBindings) const {
    bool skip = false;
    if (pBindings != nullptr) {
        for (uint32_t _i62 = 0; _i62 < bindingCount; ++_i62) {
            const auto _s63 = &pBindings[_i62];
            skip |= ValidateDescriptorSetLayoutBinding(_parentObjects, _s63->binding, _s63->descriptorType, _s63->descriptorCount,
                                                       _s63->stageFlags, _s63->pImmutableSamplers);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateWriteDescriptorSet(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                    const void *pNext, const VkDescriptorSet dstSet, const uint32_t dstBinding,
                                                    const uint32_t dstArrayElement, const uint32_t descriptorCount,
                                                    const VkDescriptorType descriptorType, const VkDescriptorImageInfo *pImageInfo,
                                                    const VkDescriptorBufferInfo *pBufferInfo,
                                                    const VkBufferView *pTexelBufferView) const {
    bool skip = false;
    if (pImageInfo != nullptr) {
        for (uint32_t _i64 = 0; _i64 < descriptorCount; ++_i64) {
            const auto _s65 = &pImageInfo[_i64];
            skip |= ValidateDescriptorImageInfo(_parentObjects, _s65->sampler, _s65->imageView, _s65->imageLayout);
        }
    }
    if (pBufferInfo != nullptr) {
        for (uint32_t _i66 = 0; _i66 < descriptorCount; ++_i66) {
            const auto _s67 = &pBufferInfo[_i66];
            skip |= ValidateDescriptorBufferInfo(_parentObjects, _s67->buffer, _s67->offset, _s67->range);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAttachmentDescription(const LogObjectList &_parentObjects,
                                                       const VkAttachmentDescriptionFlags flags, const VkFormat format,
                                                       const VkSampleCountFlagBits samples, const VkAttachmentLoadOp loadOp,
                                                       const VkAttachmentStoreOp storeOp, const VkAttachmentLoadOp stencilLoadOp,
                                                       const VkAttachmentStoreOp stencilStoreOp, const VkImageLayout initialLayout,
                                                       const VkImageLayout finalLayout) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateAttachmentReference(const LogObjectList &_parentObjects, const uint32_t attachment,
                                                     const VkImageLayout layout) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateFramebufferCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const VkFramebufferCreateFlags flags,
                                                       const VkRenderPass renderPass, const uint32_t attachmentCount,
                                                       const VkImageView *pAttachments, const uint32_t width, const uint32_t height,
                                                       const uint32_t layers) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSubpassDescription(
    const LogObjectList &_parentObjects, const VkSubpassDescriptionFlags flags, const VkPipelineBindPoint pipelineBindPoint,
    const uint32_t inputAttachmentCount, const VkAttachmentReference *pInputAttachments, const uint32_t colorAttachmentCount,
    const VkAttachmentReference *pColorAttachments, const VkAttachmentReference *pResolveAttachments,
    const VkAttachmentReference *pDepthStencilAttachment, const uint32_t preserveAttachmentCount,
    const uint32_t *pPreserveAttachments) const {
    bool skip = false;
    if (pInputAttachments != nullptr) {
        for (uint32_t _i68 = 0; _i68 < inputAttachmentCount; ++_i68) {
            const auto _s69 = &pInputAttachments[_i68];
            skip |= ValidateAttachmentReference(_parentObjects, _s69->attachment, _s69->layout);
        }
    }
    if (pColorAttachments != nullptr) {
        for (uint32_t _i70 = 0; _i70 < colorAttachmentCount; ++_i70) {
            const auto _s71 = &pColorAttachments[_i70];
            skip |= ValidateAttachmentReference(_parentObjects, _s71->attachment, _s71->layout);
        }
    }
    if (pResolveAttachments != nullptr) {
        for (uint32_t _i72 = 0; _i72 < colorAttachmentCount; ++_i72) {
            const auto _s73 = &pResolveAttachments[_i72];
            skip |= ValidateAttachmentReference(_parentObjects, _s73->attachment, _s73->layout);
        }
    }
    if (pDepthStencilAttachment != nullptr) {
        const auto _s74 = pDepthStencilAttachment;
        skip |= ValidateAttachmentReference(_parentObjects, _s74->attachment, _s74->layout);
    }
    return skip;
}
bool ExplicitValidation::ValidateSubpassDependency(const LogObjectList &_parentObjects, const uint32_t srcSubpass,
                                                   const uint32_t dstSubpass, const VkPipelineStageFlags srcStageMask,
                                                   const VkPipelineStageFlags dstStageMask, const VkAccessFlags srcAccessMask,
                                                   const VkAccessFlags dstAccessMask,
                                                   const VkDependencyFlags dependencyFlags) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateRenderPassCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                      const void *pNext, const VkRenderPassCreateFlags flags,
                                                      const uint32_t attachmentCount, const VkAttachmentDescription *pAttachments,
                                                      const uint32_t subpassCount, const VkSubpassDescription *pSubpasses,
                                                      const uint32_t dependencyCount,
                                                      const VkSubpassDependency *pDependencies) const {
    bool skip = false;
    if (pAttachments != nullptr) {
        for (uint32_t _i75 = 0; _i75 < attachmentCount; ++_i75) {
            const auto _s76 = &pAttachments[_i75];
            skip |=
                ValidateAttachmentDescription(_parentObjects, _s76->flags, _s76->format, _s76->samples, _s76->loadOp, _s76->storeOp,
                                              _s76->stencilLoadOp, _s76->stencilStoreOp, _s76->initialLayout, _s76->finalLayout);
        }
    }
    if (pSubpasses != nullptr) {
        for (uint32_t _i77 = 0; _i77 < subpassCount; ++_i77) {
            const auto _s78 = &pSubpasses[_i77];
            skip |= ValidateSubpassDescription(_parentObjects, _s78->flags, _s78->pipelineBindPoint, _s78->inputAttachmentCount,
                                               _s78->pInputAttachments, _s78->colorAttachmentCount, _s78->pColorAttachments,
                                               _s78->pResolveAttachments, _s78->pDepthStencilAttachment,
                                               _s78->preserveAttachmentCount, _s78->pPreserveAttachments);
        }
    }
    if (pDependencies != nullptr) {
        for (uint32_t _i79 = 0; _i79 < dependencyCount; ++_i79) {
            const auto _s80 = &pDependencies[_i79];
            skip |= ValidateSubpassDependency(_parentObjects, _s80->srcSubpass, _s80->dstSubpass, _s80->srcStageMask,
                                              _s80->dstStageMask, _s80->srcAccessMask, _s80->dstAccessMask, _s80->dependencyFlags);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCommandPoolCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const VkCommandPoolCreateFlags flags,
                                                       const uint32_t queueFamilyIndex) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCommandBufferAllocateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const VkCommandPool commandPool,
                                                           const VkCommandBufferLevel level,
                                                           const uint32_t commandBufferCount) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCommandBufferInheritanceInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const VkRenderPass renderPass,
                                                              const uint32_t subpass, const VkFramebuffer framebuffer,
                                                              const VkBool32 occlusionQueryEnable,
                                                              const VkQueryControlFlags queryFlags,
                                                              const VkQueryPipelineStatisticFlags pipelineStatistics) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCommandBufferBeginInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                        const void *pNext, const VkCommandBufferUsageFlags flags,
                                                        const VkCommandBufferInheritanceInfo *pInheritanceInfo) const {
    bool skip = false;
    if (pInheritanceInfo != nullptr) {
        const auto _s81 = pInheritanceInfo;
        skip |= ValidateCommandBufferInheritanceInfo(_parentObjects, _s81->sType, _s81->pNext, _s81->renderPass, _s81->subpass,
                                                     _s81->framebuffer, _s81->occlusionQueryEnable, _s81->queryFlags,
                                                     _s81->pipelineStatistics);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBufferCopy(const LogObjectList &_parentObjects, const VkDeviceSize srcOffset,
                                            const VkDeviceSize dstOffset, const VkDeviceSize size) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateImageSubresourceLayers(const LogObjectList &_parentObjects, const VkImageAspectFlags aspectMask,
                                                        const uint32_t mipLevel, const uint32_t baseArrayLayer,
                                                        const uint32_t layerCount) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateBufferImageCopy(const LogObjectList &_parentObjects, const VkDeviceSize bufferOffset,
                                                 const uint32_t bufferRowLength, const uint32_t bufferImageHeight,
                                                 const VkImageSubresourceLayers imageSubresource, const VkOffset3D imageOffset,
                                                 const VkExtent3D imageExtent) const {
    bool skip = false;
    const auto _s82 = &imageSubresource;
    skip |=
        ValidateImageSubresourceLayers(_parentObjects, _s82->aspectMask, _s82->mipLevel, _s82->baseArrayLayer, _s82->layerCount);
    const auto _s83 = &imageOffset;
    skip |= ValidateOffset3D(_parentObjects, _s83->x, _s83->y, _s83->z);
    const auto _s84 = &imageExtent;
    skip |= ValidateExtent3D(_parentObjects, _s84->width, _s84->height, _s84->depth);
    return skip;
}
bool ExplicitValidation::ValidateClearColorValue(const LogObjectList &_parentObjects, const float float32[4],
                                                 const int32_t int32[4], const uint32_t uint32[4]) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateClearDepthStencilValue(const LogObjectList &_parentObjects, const float depth,
                                                        const uint32_t stencil) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateClearValue(const LogObjectList &_parentObjects, const VkClearColorValue color,
                                            const VkClearDepthStencilValue depthStencil) const {
    bool skip = false;
    const auto _s85 = &color;
    skip |= ValidateClearColorValue(_parentObjects, _s85->float32, _s85->int32, _s85->uint32);
    const auto _s86 = &depthStencil;
    skip |= ValidateClearDepthStencilValue(_parentObjects, _s86->depth, _s86->stencil);
    return skip;
}
bool ExplicitValidation::ValidateClearAttachment(const LogObjectList &_parentObjects, const VkImageAspectFlags aspectMask,
                                                 const uint32_t colorAttachment, const VkClearValue clearValue) const {
    bool skip = false;
    const auto _s87 = &clearValue;
    skip |= ValidateClearValue(_parentObjects, _s87->color, _s87->depthStencil);
    return skip;
}
bool ExplicitValidation::ValidateClearRect(const LogObjectList &_parentObjects, const VkRect2D rect, const uint32_t baseArrayLayer,
                                           const uint32_t layerCount) const {
    bool skip = false;
    const auto _s88 = &rect;
    skip |= ValidateRect2D(_parentObjects, _s88->offset, _s88->extent);
    return skip;
}
bool ExplicitValidation::ValidateImageBlit(const LogObjectList &_parentObjects, const VkImageSubresourceLayers srcSubresource,
                                           const VkOffset3D srcOffsets[2], const VkImageSubresourceLayers dstSubresource,
                                           const VkOffset3D dstOffsets[2]) const {
    bool skip = false;
    const auto _s89 = &srcSubresource;
    skip |=
        ValidateImageSubresourceLayers(_parentObjects, _s89->aspectMask, _s89->mipLevel, _s89->baseArrayLayer, _s89->layerCount);
    if (srcOffsets != nullptr) {
        for (uint32_t _i90 = 0; _i90 < 2; ++_i90) {
            const auto _s91 = &srcOffsets[_i90];
            skip |= ValidateOffset3D(_parentObjects, _s91->x, _s91->y, _s91->z);
        }
    }
    const auto _s92 = &dstSubresource;
    skip |=
        ValidateImageSubresourceLayers(_parentObjects, _s92->aspectMask, _s92->mipLevel, _s92->baseArrayLayer, _s92->layerCount);
    if (dstOffsets != nullptr) {
        for (uint32_t _i93 = 0; _i93 < 2; ++_i93) {
            const auto _s94 = &dstOffsets[_i93];
            skip |= ValidateOffset3D(_parentObjects, _s94->x, _s94->y, _s94->z);
        }
    }
    return skip;
}
bool ExplicitValidation::ValidateImageCopy(const LogObjectList &_parentObjects, const VkImageSubresourceLayers srcSubresource,
                                           const VkOffset3D srcOffset, const VkImageSubresourceLayers dstSubresource,
                                           const VkOffset3D dstOffset, const VkExtent3D extent) const {
    bool skip = false;
    const auto _s95 = &srcSubresource;
    skip |=
        ValidateImageSubresourceLayers(_parentObjects, _s95->aspectMask, _s95->mipLevel, _s95->baseArrayLayer, _s95->layerCount);
    const auto _s96 = &srcOffset;
    skip |= ValidateOffset3D(_parentObjects, _s96->x, _s96->y, _s96->z);
    const auto _s97 = &dstSubresource;
    skip |=
        ValidateImageSubresourceLayers(_parentObjects, _s97->aspectMask, _s97->mipLevel, _s97->baseArrayLayer, _s97->layerCount);
    const auto _s98 = &dstOffset;
    skip |= ValidateOffset3D(_parentObjects, _s98->x, _s98->y, _s98->z);
    const auto _s99 = &extent;
    skip |= ValidateExtent3D(_parentObjects, _s99->width, _s99->height, _s99->depth);
    return skip;
}
bool ExplicitValidation::ValidateImageResolve(const LogObjectList &_parentObjects, const VkImageSubresourceLayers srcSubresource,
                                              const VkOffset3D srcOffset, const VkImageSubresourceLayers dstSubresource,
                                              const VkOffset3D dstOffset, const VkExtent3D extent) const {
    bool skip = false;
    const auto _s100 = &srcSubresource;
    skip |= ValidateImageSubresourceLayers(_parentObjects, _s100->aspectMask, _s100->mipLevel, _s100->baseArrayLayer,
                                           _s100->layerCount);
    const auto _s101 = &srcOffset;
    skip |= ValidateOffset3D(_parentObjects, _s101->x, _s101->y, _s101->z);
    const auto _s102 = &dstSubresource;
    skip |= ValidateImageSubresourceLayers(_parentObjects, _s102->aspectMask, _s102->mipLevel, _s102->baseArrayLayer,
                                           _s102->layerCount);
    const auto _s103 = &dstOffset;
    skip |= ValidateOffset3D(_parentObjects, _s103->x, _s103->y, _s103->z);
    const auto _s104 = &extent;
    skip |= ValidateExtent3D(_parentObjects, _s104->width, _s104->height, _s104->depth);
    return skip;
}
bool ExplicitValidation::ValidateRenderPassBeginInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                     const void *pNext, const VkRenderPass renderPass,
                                                     const VkFramebuffer framebuffer, const VkRect2D renderArea,
                                                     const uint32_t clearValueCount, const VkClearValue *pClearValues) const {
    bool skip = false;
    const auto _s105 = &renderArea;
    skip |= ValidateRect2D(_parentObjects, _s105->offset, _s105->extent);
    if (pClearValues != nullptr) {
        for (uint32_t _i106 = 0; _i106 < clearValueCount; ++_i106) {
            const auto _s107 = &pClearValues[_i106];
            skip |= ValidateClearValue(_parentObjects, _s107->color, _s107->depthStencil);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceSubgroupProperties(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                  const void *pNext, const uint32_t subgroupSize,
                                                                  const VkShaderStageFlags supportedStages,
                                                                  const VkSubgroupFeatureFlags supportedOperations,
                                                                  const VkBool32 quadOperationsInAllStages) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBindBufferMemoryInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                      const void *pNext, const VkBuffer buffer, const VkDeviceMemory memory,
                                                      const VkDeviceSize memoryOffset) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBindImageMemoryInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                     const void *pNext, const VkImage image, const VkDeviceMemory memory,
                                                     const VkDeviceSize memoryOffset) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevice16BitStorageFeatures(const LogObjectList &_parentObjects,
                                                                    const VkStructureType sType, const void *pNext,
                                                                    const VkBool32 storageBuffer16BitAccess,
                                                                    const VkBool32 uniformAndStorageBuffer16BitAccess,
                                                                    const VkBool32 storagePushConstant16,
                                                                    const VkBool32 storageInputOutput16) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMemoryDedicatedRequirements(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const VkBool32 prefersDedicatedAllocation,
                                                             const VkBool32 requiresDedicatedAllocation) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMemoryDedicatedAllocateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const VkImage image, const VkBuffer buffer) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMemoryAllocateFlagsInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext, const VkMemoryAllocateFlags flags,
                                                         const uint32_t deviceMask) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceGroupRenderPassBeginInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const uint32_t deviceMask,
                                                                const uint32_t deviceRenderAreaCount,
                                                                const VkRect2D *pDeviceRenderAreas) const {
    bool skip = false;
    if (pDeviceRenderAreas != nullptr) {
        for (uint32_t _i108 = 0; _i108 < deviceRenderAreaCount; ++_i108) {
            const auto _s109 = &pDeviceRenderAreas[_i108];
            skip |= ValidateRect2D(_parentObjects, _s109->offset, _s109->extent);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceGroupCommandBufferBeginInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const uint32_t deviceMask) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceGroupSubmitInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const uint32_t waitSemaphoreCount,
                                                       const uint32_t *pWaitSemaphoreDeviceIndices,
                                                       const uint32_t commandBufferCount, const uint32_t *pCommandBufferDeviceMasks,
                                                       const uint32_t signalSemaphoreCount,
                                                       const uint32_t *pSignalSemaphoreDeviceIndices) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceGroupBindSparseInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const uint32_t resourceDeviceIndex,
                                                           const uint32_t memoryDeviceIndex) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBindBufferMemoryDeviceGroupInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                 const void *pNext, const uint32_t deviceIndexCount,
                                                                 const uint32_t *pDeviceIndices) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBindImageMemoryDeviceGroupInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const uint32_t deviceIndexCount,
                                                                const uint32_t *pDeviceIndices,
                                                                const uint32_t splitInstanceBindRegionCount,
                                                                const VkRect2D *pSplitInstanceBindRegions) const {
    bool skip = false;
    if (pSplitInstanceBindRegions != nullptr) {
        for (uint32_t _i110 = 0; _i110 < splitInstanceBindRegionCount; ++_i110) {
            const auto _s111 = &pSplitInstanceBindRegions[_i110];
            skip |= ValidateRect2D(_parentObjects, _s111->offset, _s111->extent);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceGroupProperties(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const uint32_t physicalDeviceCount,
                                                               const VkPhysicalDevice physicalDevices[VK_MAX_DEVICE_GROUP_SIZE],
                                                               const VkBool32 subsetAllocation) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceGroupDeviceCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const uint32_t physicalDeviceCount,
                                                             const VkPhysicalDevice *pPhysicalDevices) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBufferMemoryRequirementsInfo2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const VkBuffer buffer) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageMemoryRequirementsInfo2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const VkImage image) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageSparseMemoryRequirementsInfo2(const LogObjectList &_parentObjects,
                                                                    const VkStructureType sType, const void *pNext,
                                                                    const VkImage image) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMemoryRequirements2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                     const void *pNext, const VkMemoryRequirements memoryRequirements) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSparseImageMemoryRequirements2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext,
                                                                const VkSparseImageMemoryRequirements memoryRequirements) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceFeatures2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext, const VkPhysicalDeviceFeatures features) const {
    bool skip = false;
    const auto _s112 = &features;
    skip |= ValidatePhysicalDeviceFeatures(
        _parentObjects, _s112->robustBufferAccess, _s112->fullDrawIndexUint32, _s112->imageCubeArray, _s112->independentBlend,
        _s112->geometryShader, _s112->tessellationShader, _s112->sampleRateShading, _s112->dualSrcBlend, _s112->logicOp,
        _s112->multiDrawIndirect, _s112->drawIndirectFirstInstance, _s112->depthClamp, _s112->depthBiasClamp,
        _s112->fillModeNonSolid, _s112->depthBounds, _s112->wideLines, _s112->largePoints, _s112->alphaToOne, _s112->multiViewport,
        _s112->samplerAnisotropy, _s112->textureCompressionETC2, _s112->textureCompressionASTC_LDR, _s112->textureCompressionBC,
        _s112->occlusionQueryPrecise, _s112->pipelineStatisticsQuery, _s112->vertexPipelineStoresAndAtomics,
        _s112->fragmentStoresAndAtomics, _s112->shaderTessellationAndGeometryPointSize, _s112->shaderImageGatherExtended,
        _s112->shaderStorageImageExtendedFormats, _s112->shaderStorageImageMultisample, _s112->shaderStorageImageReadWithoutFormat,
        _s112->shaderStorageImageWriteWithoutFormat, _s112->shaderUniformBufferArrayDynamicIndexing,
        _s112->shaderSampledImageArrayDynamicIndexing, _s112->shaderStorageBufferArrayDynamicIndexing,
        _s112->shaderStorageImageArrayDynamicIndexing, _s112->shaderClipDistance, _s112->shaderCullDistance, _s112->shaderFloat64,
        _s112->shaderInt64, _s112->shaderInt16, _s112->shaderResourceResidency, _s112->shaderResourceMinLod, _s112->sparseBinding,
        _s112->sparseResidencyBuffer, _s112->sparseResidencyImage2D, _s112->sparseResidencyImage3D, _s112->sparseResidency2Samples,
        _s112->sparseResidency4Samples, _s112->sparseResidency8Samples, _s112->sparseResidency16Samples,
        _s112->sparseResidencyAliased, _s112->variableMultisampleRate, _s112->inheritedQueries);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceProperties2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const VkPhysicalDeviceProperties properties) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateFormatProperties2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                   const void *pNext, const VkFormatProperties formatProperties) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageFormatProperties2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                        const void *pNext,
                                                        const VkImageFormatProperties imageFormatProperties) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceImageFormatInfo2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const VkFormat format, const VkImageType type,
                                                                const VkImageTiling tiling, const VkImageUsageFlags usage,
                                                                const VkImageCreateFlags flags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateQueueFamilyProperties2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                        const void *pNext,
                                                        const VkQueueFamilyProperties queueFamilyProperties) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMemoryProperties2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                 const void *pNext,
                                                                 const VkPhysicalDeviceMemoryProperties memoryProperties) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSparseImageFormatProperties2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext,
                                                              const VkSparseImageFormatProperties properties) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceSparseImageFormatInfo2(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkFormat format,
    const VkImageType type, const VkSampleCountFlagBits samples, const VkImageUsageFlags usage, const VkImageTiling tiling) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePointClippingProperties(const LogObjectList &_parentObjects,
                                                                       const VkStructureType sType, const void *pNext,
                                                                       const VkPointClippingBehavior pointClippingBehavior) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateInputAttachmentAspectReference(const LogObjectList &_parentObjects, const uint32_t subpass,
                                                                const uint32_t inputAttachmentIndex,
                                                                const VkImageAspectFlags aspectMask) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateRenderPassInputAttachmentAspectCreateInfo(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t aspectReferenceCount,
    const VkInputAttachmentAspectReference *pAspectReferences) const {
    bool skip = false;
    if (pAspectReferences != nullptr) {
        for (uint32_t _i113 = 0; _i113 < aspectReferenceCount; ++_i113) {
            const auto _s114 = &pAspectReferences[_i113];
            skip |= ValidateInputAttachmentAspectReference(_parentObjects, _s114->subpass, _s114->inputAttachmentIndex,
                                                           _s114->aspectMask);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageViewUsageCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const VkImageUsageFlags usage) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineTessellationDomainOriginStateCreateInfo(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkTessellationDomainOrigin domainOrigin) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRenderPassMultiviewCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const uint32_t subpassCount,
                                                               const uint32_t *pViewMasks, const uint32_t dependencyCount,
                                                               const int32_t *pViewOffsets, const uint32_t correlationMaskCount,
                                                               const uint32_t *pCorrelationMasks) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMultiviewFeatures(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                 const void *pNext, const VkBool32 multiview,
                                                                 const VkBool32 multiviewGeometryShader,
                                                                 const VkBool32 multiviewTessellationShader) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMultiviewProperties(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const uint32_t maxMultiviewViewCount,
                                                                   const uint32_t maxMultiviewInstanceIndex) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceVariablePointersFeatures(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkBool32 variablePointersStorageBuffer,
                                                                        const VkBool32 variablePointers) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceProtectedMemoryFeatures(const LogObjectList &_parentObjects,
                                                                       const VkStructureType sType, const void *pNext,
                                                                       const VkBool32 protectedMemory) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceProtectedMemoryProperties(const LogObjectList &_parentObjects,
                                                                         const VkStructureType sType, const void *pNext,
                                                                         const VkBool32 protectedNoFault) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceQueueInfo2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                  const void *pNext, const VkDeviceQueueCreateFlags flags,
                                                  const uint32_t queueFamilyIndex, const uint32_t queueIndex) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateProtectedSubmitInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                     const void *pNext, const VkBool32 protectedSubmit) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSamplerYcbcrConversionCreateInfo(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkFormat format,
    const VkSamplerYcbcrModelConversion ycbcrModel, const VkSamplerYcbcrRange ycbcrRange, const VkComponentMapping components,
    const VkChromaLocation xChromaOffset, const VkChromaLocation yChromaOffset, const VkFilter chromaFilter,
    VkBool32 forceExplicitReconstruction) const {
    bool skip = false;
    const auto _s115 = &components;
    skip |= ValidateComponentMapping(_parentObjects, _s115->r, _s115->g, _s115->b, _s115->a);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSamplerYcbcrConversionInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                            const void *pNext, const VkSamplerYcbcrConversion conversion) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBindImagePlaneMemoryInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const VkImageAspectFlagBits planeAspect) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImagePlaneMemoryRequirementsInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                  const void *pNext,
                                                                  const VkImageAspectFlagBits planeAspect) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceSamplerYcbcrConversionFeatures(const LogObjectList &_parentObjects,
                                                                              const VkStructureType sType, const void *pNext,
                                                                              const VkBool32 samplerYcbcrConversion) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSamplerYcbcrConversionImageFormatProperties(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const uint32_t combinedImageSamplerDescriptorCount) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDescriptorUpdateTemplateEntry(const LogObjectList &_parentObjects, const uint32_t dstBinding,
                                                               const uint32_t dstArrayElement, const uint32_t descriptorCount,
                                                               const VkDescriptorType descriptorType, const size_t offset,
                                                               const size_t stride) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateDescriptorUpdateTemplateCreateInfo(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkDescriptorUpdateTemplateCreateFlags flags, const uint32_t descriptorUpdateEntryCount,
    const VkDescriptorUpdateTemplateEntry *pDescriptorUpdateEntries, const VkDescriptorUpdateTemplateType templateType,
    const VkDescriptorSetLayout descriptorSetLayout, const VkPipelineBindPoint pipelineBindPoint,
    const VkPipelineLayout pipelineLayout, const uint32_t set) const {
    bool skip = false;
    if (pDescriptorUpdateEntries != nullptr) {
        for (uint32_t _i116 = 0; _i116 < descriptorUpdateEntryCount; ++_i116) {
            const auto _s117 = &pDescriptorUpdateEntries[_i116];
            skip |=
                ValidateDescriptorUpdateTemplateEntry(_parentObjects, _s117->dstBinding, _s117->dstArrayElement,
                                                      _s117->descriptorCount, _s117->descriptorType, _s117->offset, _s117->stride);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateExternalMemoryProperties(const LogObjectList &_parentObjects,
                                                          const VkExternalMemoryFeatureFlags externalMemoryFeatures,
                                                          const VkExternalMemoryHandleTypeFlags exportFromImportedHandleTypes,
                                                          const VkExternalMemoryHandleTypeFlags compatibleHandleTypes) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceExternalImageFormatInfo(const LogObjectList &_parentObjects,
                                                                       const VkStructureType sType, const void *pNext,
                                                                       const VkExternalMemoryHandleTypeFlagBits handleType) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateExternalImageFormatProperties(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext,
                                                               const VkExternalMemoryProperties externalMemoryProperties) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceExternalBufferInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                  const void *pNext, const VkBufferCreateFlags flags,
                                                                  const VkBufferUsageFlags usage,
                                                                  const VkExternalMemoryHandleTypeFlagBits handleType) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateExternalBufferProperties(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext,
                                                          const VkExternalMemoryProperties externalMemoryProperties) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceIDProperties(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                            const void *pNext, const uint8_t deviceUUID[VK_UUID_SIZE],
                                                            const uint8_t driverUUID[VK_UUID_SIZE],
                                                            const uint8_t deviceLUID[VK_LUID_SIZE], const uint32_t deviceNodeMask,
                                                            const VkBool32 deviceLUIDValid) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateExternalMemoryImageCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext,
                                                               const VkExternalMemoryHandleTypeFlags handleTypes) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateExternalMemoryBufferCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext,
                                                                const VkExternalMemoryHandleTypeFlags handleTypes) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateExportMemoryAllocateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext,
                                                          const VkExternalMemoryHandleTypeFlags handleTypes) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceExternalFenceInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                 const void *pNext,
                                                                 const VkExternalFenceHandleTypeFlagBits handleType) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateExternalFenceProperties(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext,
                                                         const VkExternalFenceHandleTypeFlags exportFromImportedHandleTypes,
                                                         const VkExternalFenceHandleTypeFlags compatibleHandleTypes,
                                                         const VkExternalFenceFeatureFlags externalFenceFeatures) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateExportFenceCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const VkExternalFenceHandleTypeFlags handleTypes) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateExportSemaphoreCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext,
                                                           const VkExternalSemaphoreHandleTypeFlags handleTypes) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceExternalSemaphoreInfo(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const VkExternalSemaphoreHandleTypeFlagBits handleType) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateExternalSemaphoreProperties(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkExternalSemaphoreHandleTypeFlags exportFromImportedHandleTypes,
    const VkExternalSemaphoreHandleTypeFlags compatibleHandleTypes,
    const VkExternalSemaphoreFeatureFlags externalSemaphoreFeatures) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMaintenance3Properties(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const uint32_t maxPerSetDescriptors,
                                                                      const VkDeviceSize maxMemoryAllocationSize) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDescriptorSetLayoutSupport(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                            const void *pNext, const VkBool32 supported) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderDrawParametersFeatures(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const VkBool32 shaderDrawParameters) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceVulkan11Features(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 storageBuffer16BitAccess,
    const VkBool32 uniformAndStorageBuffer16BitAccess, const VkBool32 storagePushConstant16, const VkBool32 storageInputOutput16,
    const VkBool32 multiview, const VkBool32 multiviewGeometryShader, const VkBool32 multiviewTessellationShader,
    const VkBool32 variablePointersStorageBuffer, const VkBool32 variablePointers, const VkBool32 protectedMemory,
    const VkBool32 samplerYcbcrConversion, const VkBool32 shaderDrawParameters) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceVulkan11Properties(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint8_t deviceUUID[VK_UUID_SIZE],
    const uint8_t driverUUID[VK_UUID_SIZE], const uint8_t deviceLUID[VK_LUID_SIZE], const uint32_t deviceNodeMask,
    const VkBool32 deviceLUIDValid, const uint32_t subgroupSize, const VkShaderStageFlags subgroupSupportedStages,
    const VkSubgroupFeatureFlags subgroupSupportedOperations, const VkBool32 subgroupQuadOperationsInAllStages,
    const VkPointClippingBehavior pointClippingBehavior, const uint32_t maxMultiviewViewCount,
    const uint32_t maxMultiviewInstanceIndex, const VkBool32 protectedNoFault, const uint32_t maxPerSetDescriptors,
    const VkDeviceSize maxMemoryAllocationSize) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceVulkan12Features(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 samplerMirrorClampToEdge,
    const VkBool32 drawIndirectCount, const VkBool32 storageBuffer8BitAccess, const VkBool32 uniformAndStorageBuffer8BitAccess,
    const VkBool32 storagePushConstant8, const VkBool32 shaderBufferInt64Atomics, const VkBool32 shaderSharedInt64Atomics,
    const VkBool32 shaderFloat16, const VkBool32 shaderInt8, const VkBool32 descriptorIndexing,
    const VkBool32 shaderInputAttachmentArrayDynamicIndexing, const VkBool32 shaderUniformTexelBufferArrayDynamicIndexing,
    const VkBool32 shaderStorageTexelBufferArrayDynamicIndexing, const VkBool32 shaderUniformBufferArrayNonUniformIndexing,
    const VkBool32 shaderSampledImageArrayNonUniformIndexing, const VkBool32 shaderStorageBufferArrayNonUniformIndexing,
    const VkBool32 shaderStorageImageArrayNonUniformIndexing, const VkBool32 shaderInputAttachmentArrayNonUniformIndexing,
    const VkBool32 shaderUniformTexelBufferArrayNonUniformIndexing, const VkBool32 shaderStorageTexelBufferArrayNonUniformIndexing,
    const VkBool32 descriptorBindingUniformBufferUpdateAfterBind, const VkBool32 descriptorBindingSampledImageUpdateAfterBind,
    const VkBool32 descriptorBindingStorageImageUpdateAfterBind, const VkBool32 descriptorBindingStorageBufferUpdateAfterBind,
    const VkBool32 descriptorBindingUniformTexelBufferUpdateAfterBind,
    const VkBool32 descriptorBindingStorageTexelBufferUpdateAfterBind, const VkBool32 descriptorBindingUpdateUnusedWhilePending,
    const VkBool32 descriptorBindingPartiallyBound, const VkBool32 descriptorBindingVariableDescriptorCount,
    const VkBool32 runtimeDescriptorArray, const VkBool32 samplerFilterMinmax, const VkBool32 scalarBlockLayout,
    const VkBool32 imagelessFramebuffer, const VkBool32 uniformBufferStandardLayout, const VkBool32 shaderSubgroupExtendedTypes,
    const VkBool32 separateDepthStencilLayouts, const VkBool32 hostQueryReset, const VkBool32 timelineSemaphore,
    const VkBool32 bufferDeviceAddress, const VkBool32 bufferDeviceAddressCaptureReplay,
    const VkBool32 bufferDeviceAddressMultiDevice, const VkBool32 vulkanMemoryModel, const VkBool32 vulkanMemoryModelDeviceScope,
    const VkBool32 vulkanMemoryModelAvailabilityVisibilityChains, const VkBool32 shaderOutputViewportIndex,
    const VkBool32 shaderOutputLayer, const VkBool32 subgroupBroadcastDynamicId) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateConformanceVersion(const LogObjectList &_parentObjects, const uint8_t major, const uint8_t minor,
                                                    const uint8_t subminor, const uint8_t patch) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceVulkan12Properties(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkDriverId driverID,
    const char driverName[VK_MAX_DRIVER_NAME_SIZE], const char driverInfo[VK_MAX_DRIVER_INFO_SIZE],
    const VkConformanceVersion conformanceVersion, const VkShaderFloatControlsIndependence denormBehaviorIndependence,
    const VkShaderFloatControlsIndependence roundingModeIndependence, const VkBool32 shaderSignedZeroInfNanPreserveFloat16,
    const VkBool32 shaderSignedZeroInfNanPreserveFloat32, const VkBool32 shaderSignedZeroInfNanPreserveFloat64,
    const VkBool32 shaderDenormPreserveFloat16, const VkBool32 shaderDenormPreserveFloat32,
    const VkBool32 shaderDenormPreserveFloat64, const VkBool32 shaderDenormFlushToZeroFloat16,
    const VkBool32 shaderDenormFlushToZeroFloat32, const VkBool32 shaderDenormFlushToZeroFloat64,
    const VkBool32 shaderRoundingModeRTEFloat16, const VkBool32 shaderRoundingModeRTEFloat32,
    const VkBool32 shaderRoundingModeRTEFloat64, const VkBool32 shaderRoundingModeRTZFloat16,
    const VkBool32 shaderRoundingModeRTZFloat32, const VkBool32 shaderRoundingModeRTZFloat64,
    const uint32_t maxUpdateAfterBindDescriptorsInAllPools, const VkBool32 shaderUniformBufferArrayNonUniformIndexingNative,
    const VkBool32 shaderSampledImageArrayNonUniformIndexingNative, const VkBool32 shaderStorageBufferArrayNonUniformIndexingNative,
    const VkBool32 shaderStorageImageArrayNonUniformIndexingNative,
    const VkBool32 shaderInputAttachmentArrayNonUniformIndexingNative, const VkBool32 robustBufferAccessUpdateAfterBind,
    const VkBool32 quadDivergentImplicitLod, const uint32_t maxPerStageDescriptorUpdateAfterBindSamplers,
    const uint32_t maxPerStageDescriptorUpdateAfterBindUniformBuffers,
    const uint32_t maxPerStageDescriptorUpdateAfterBindStorageBuffers,
    const uint32_t maxPerStageDescriptorUpdateAfterBindSampledImages,
    const uint32_t maxPerStageDescriptorUpdateAfterBindStorageImages,
    const uint32_t maxPerStageDescriptorUpdateAfterBindInputAttachments, const uint32_t maxPerStageUpdateAfterBindResources,
    const uint32_t maxDescriptorSetUpdateAfterBindSamplers, const uint32_t maxDescriptorSetUpdateAfterBindUniformBuffers,
    const uint32_t maxDescriptorSetUpdateAfterBindUniformBuffersDynamic,
    const uint32_t maxDescriptorSetUpdateAfterBindStorageBuffers,
    const uint32_t maxDescriptorSetUpdateAfterBindStorageBuffersDynamic,
    const uint32_t maxDescriptorSetUpdateAfterBindSampledImages, const uint32_t maxDescriptorSetUpdateAfterBindStorageImages,
    const uint32_t maxDescriptorSetUpdateAfterBindInputAttachments, const VkResolveModeFlags supportedDepthResolveModes,
    const VkResolveModeFlags supportedStencilResolveModes, const VkBool32 independentResolveNone, const VkBool32 independentResolve,
    const VkBool32 filterMinmaxSingleComponentFormats, const VkBool32 filterMinmaxImageComponentMapping,
    const uint64_t maxTimelineSemaphoreValueDifference, const VkSampleCountFlags framebufferIntegerColorSampleCounts) const {
    bool skip = false;
    const auto _s118 = &conformanceVersion;
    skip |= ValidateConformanceVersion(_parentObjects, _s118->major, _s118->minor, _s118->subminor, _s118->patch);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageFormatListCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const uint32_t viewFormatCount,
                                                           const VkFormat *pViewFormats) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAttachmentDescription2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                        const void *pNext, const VkAttachmentDescriptionFlags flags,
                                                        const VkFormat format, const VkSampleCountFlagBits samples,
                                                        const VkAttachmentLoadOp loadOp, const VkAttachmentStoreOp storeOp,
                                                        const VkAttachmentLoadOp stencilLoadOp,
                                                        const VkAttachmentStoreOp stencilStoreOp, const VkImageLayout initialLayout,
                                                        const VkImageLayout finalLayout) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAttachmentReference2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                      const void *pNext, const uint32_t attachment, const VkImageLayout layout,
                                                      const VkImageAspectFlags aspectMask) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSubpassDescription2(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkSubpassDescriptionFlags flags,
    const VkPipelineBindPoint pipelineBindPoint, const uint32_t viewMask, const uint32_t inputAttachmentCount,
    const VkAttachmentReference2 *pInputAttachments, const uint32_t colorAttachmentCount,
    const VkAttachmentReference2 *pColorAttachments, const VkAttachmentReference2 *pResolveAttachments,
    const VkAttachmentReference2 *pDepthStencilAttachment, const uint32_t preserveAttachmentCount,
    const uint32_t *pPreserveAttachments) const {
    bool skip = false;
    if (pInputAttachments != nullptr) {
        for (uint32_t _i119 = 0; _i119 < inputAttachmentCount; ++_i119) {
            const auto _s120 = &pInputAttachments[_i119];
            skip |= ValidateAttachmentReference2(_parentObjects, _s120->sType, _s120->pNext, _s120->attachment, _s120->layout,
                                                 _s120->aspectMask);
        }
    }
    if (pColorAttachments != nullptr) {
        for (uint32_t _i121 = 0; _i121 < colorAttachmentCount; ++_i121) {
            const auto _s122 = &pColorAttachments[_i121];
            skip |= ValidateAttachmentReference2(_parentObjects, _s122->sType, _s122->pNext, _s122->attachment, _s122->layout,
                                                 _s122->aspectMask);
        }
    }
    if (pResolveAttachments != nullptr) {
        for (uint32_t _i123 = 0; _i123 < colorAttachmentCount; ++_i123) {
            const auto _s124 = &pResolveAttachments[_i123];
            skip |= ValidateAttachmentReference2(_parentObjects, _s124->sType, _s124->pNext, _s124->attachment, _s124->layout,
                                                 _s124->aspectMask);
        }
    }
    if (pDepthStencilAttachment != nullptr) {
        const auto _s125 = pDepthStencilAttachment;
        skip |= ValidateAttachmentReference2(_parentObjects, _s125->sType, _s125->pNext, _s125->attachment, _s125->layout,
                                             _s125->aspectMask);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSubpassDependency2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                    const void *pNext, const uint32_t srcSubpass, const uint32_t dstSubpass,
                                                    const VkPipelineStageFlags srcStageMask,
                                                    const VkPipelineStageFlags dstStageMask, const VkAccessFlags srcAccessMask,
                                                    const VkAccessFlags dstAccessMask, const VkDependencyFlags dependencyFlags,
                                                    const int32_t viewOffset) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRenderPassCreateInfo2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const VkRenderPassCreateFlags flags,
                                                       const uint32_t attachmentCount, const VkAttachmentDescription2 *pAttachments,
                                                       const uint32_t subpassCount, const VkSubpassDescription2 *pSubpasses,
                                                       const uint32_t dependencyCount, const VkSubpassDependency2 *pDependencies,
                                                       const uint32_t correlatedViewMaskCount,
                                                       const uint32_t *pCorrelatedViewMasks) const {
    bool skip = false;
    if (pAttachments != nullptr) {
        for (uint32_t _i126 = 0; _i126 < attachmentCount; ++_i126) {
            const auto _s127 = &pAttachments[_i126];
            skip |= ValidateAttachmentDescription2(_parentObjects, _s127->sType, _s127->pNext, _s127->flags, _s127->format,
                                                   _s127->samples, _s127->loadOp, _s127->storeOp, _s127->stencilLoadOp,
                                                   _s127->stencilStoreOp, _s127->initialLayout, _s127->finalLayout);
        }
    }
    if (pSubpasses != nullptr) {
        for (uint32_t _i128 = 0; _i128 < subpassCount; ++_i128) {
            const auto _s129 = &pSubpasses[_i128];
            skip |= ValidateSubpassDescription2(_parentObjects, _s129->sType, _s129->pNext, _s129->flags, _s129->pipelineBindPoint,
                                                _s129->viewMask, _s129->inputAttachmentCount, _s129->pInputAttachments,
                                                _s129->colorAttachmentCount, _s129->pColorAttachments, _s129->pResolveAttachments,
                                                _s129->pDepthStencilAttachment, _s129->preserveAttachmentCount,
                                                _s129->pPreserveAttachments);
        }
    }
    if (pDependencies != nullptr) {
        for (uint32_t _i130 = 0; _i130 < dependencyCount; ++_i130) {
            const auto _s131 = &pDependencies[_i130];
            skip |= ValidateSubpassDependency2(_parentObjects, _s131->sType, _s131->pNext, _s131->srcSubpass, _s131->dstSubpass,
                                               _s131->srcStageMask, _s131->dstStageMask, _s131->srcAccessMask, _s131->dstAccessMask,
                                               _s131->dependencyFlags, _s131->viewOffset);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSubpassBeginInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                  const void *pNext, const VkSubpassContents contents) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSubpassEndInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                const void *pNext) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevice8BitStorageFeatures(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const VkBool32 storageBuffer8BitAccess,
                                                                   const VkBool32 uniformAndStorageBuffer8BitAccess,
                                                                   const VkBool32 storagePushConstant8) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDriverProperties(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const VkDriverId driverID,
                                                                const char driverName[VK_MAX_DRIVER_NAME_SIZE],
                                                                const char driverInfo[VK_MAX_DRIVER_INFO_SIZE],
                                                                const VkConformanceVersion conformanceVersion) const {
    bool skip = false;
    const auto _s132 = &conformanceVersion;
    skip |= ValidateConformanceVersion(_parentObjects, _s132->major, _s132->minor, _s132->subminor, _s132->patch);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderAtomicInt64Features(const LogObjectList &_parentObjects,
                                                                         const VkStructureType sType, const void *pNext,
                                                                         const VkBool32 shaderBufferInt64Atomics,
                                                                         const VkBool32 shaderSharedInt64Atomics) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderFloat16Int8Features(const LogObjectList &_parentObjects,
                                                                         const VkStructureType sType, const void *pNext,
                                                                         const VkBool32 shaderFloat16,
                                                                         const VkBool32 shaderInt8) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceFloatControlsProperties(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkShaderFloatControlsIndependence denormBehaviorIndependence,
    const VkShaderFloatControlsIndependence roundingModeIndependence, const VkBool32 shaderSignedZeroInfNanPreserveFloat16,
    const VkBool32 shaderSignedZeroInfNanPreserveFloat32, const VkBool32 shaderSignedZeroInfNanPreserveFloat64,
    const VkBool32 shaderDenormPreserveFloat16, const VkBool32 shaderDenormPreserveFloat32,
    const VkBool32 shaderDenormPreserveFloat64, const VkBool32 shaderDenormFlushToZeroFloat16,
    const VkBool32 shaderDenormFlushToZeroFloat32, const VkBool32 shaderDenormFlushToZeroFloat64,
    const VkBool32 shaderRoundingModeRTEFloat16, const VkBool32 shaderRoundingModeRTEFloat32,
    const VkBool32 shaderRoundingModeRTEFloat64, const VkBool32 shaderRoundingModeRTZFloat16,
    const VkBool32 shaderRoundingModeRTZFloat32, const VkBool32 shaderRoundingModeRTZFloat64) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDescriptorSetLayoutBindingFlagsCreateInfo(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const uint32_t bindingCount,
                                                                           const VkDescriptorBindingFlags *pBindingFlags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDescriptorIndexingFeatures(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 shaderInputAttachmentArrayDynamicIndexing, const VkBool32 shaderUniformTexelBufferArrayDynamicIndexing,
    const VkBool32 shaderStorageTexelBufferArrayDynamicIndexing, const VkBool32 shaderUniformBufferArrayNonUniformIndexing,
    const VkBool32 shaderSampledImageArrayNonUniformIndexing, const VkBool32 shaderStorageBufferArrayNonUniformIndexing,
    const VkBool32 shaderStorageImageArrayNonUniformIndexing, const VkBool32 shaderInputAttachmentArrayNonUniformIndexing,
    const VkBool32 shaderUniformTexelBufferArrayNonUniformIndexing, const VkBool32 shaderStorageTexelBufferArrayNonUniformIndexing,
    const VkBool32 descriptorBindingUniformBufferUpdateAfterBind, const VkBool32 descriptorBindingSampledImageUpdateAfterBind,
    const VkBool32 descriptorBindingStorageImageUpdateAfterBind, const VkBool32 descriptorBindingStorageBufferUpdateAfterBind,
    const VkBool32 descriptorBindingUniformTexelBufferUpdateAfterBind,
    const VkBool32 descriptorBindingStorageTexelBufferUpdateAfterBind, const VkBool32 descriptorBindingUpdateUnusedWhilePending,
    const VkBool32 descriptorBindingPartiallyBound, const VkBool32 descriptorBindingVariableDescriptorCount,
    const VkBool32 runtimeDescriptorArray) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDescriptorIndexingProperties(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const uint32_t maxUpdateAfterBindDescriptorsInAllPools, const VkBool32 shaderUniformBufferArrayNonUniformIndexingNative,
    const VkBool32 shaderSampledImageArrayNonUniformIndexingNative, const VkBool32 shaderStorageBufferArrayNonUniformIndexingNative,
    const VkBool32 shaderStorageImageArrayNonUniformIndexingNative,
    const VkBool32 shaderInputAttachmentArrayNonUniformIndexingNative, const VkBool32 robustBufferAccessUpdateAfterBind,
    const VkBool32 quadDivergentImplicitLod, const uint32_t maxPerStageDescriptorUpdateAfterBindSamplers,
    const uint32_t maxPerStageDescriptorUpdateAfterBindUniformBuffers,
    const uint32_t maxPerStageDescriptorUpdateAfterBindStorageBuffers,
    const uint32_t maxPerStageDescriptorUpdateAfterBindSampledImages,
    const uint32_t maxPerStageDescriptorUpdateAfterBindStorageImages,
    const uint32_t maxPerStageDescriptorUpdateAfterBindInputAttachments, const uint32_t maxPerStageUpdateAfterBindResources,
    const uint32_t maxDescriptorSetUpdateAfterBindSamplers, const uint32_t maxDescriptorSetUpdateAfterBindUniformBuffers,
    const uint32_t maxDescriptorSetUpdateAfterBindUniformBuffersDynamic,
    const uint32_t maxDescriptorSetUpdateAfterBindStorageBuffers,
    const uint32_t maxDescriptorSetUpdateAfterBindStorageBuffersDynamic,
    const uint32_t maxDescriptorSetUpdateAfterBindSampledImages, const uint32_t maxDescriptorSetUpdateAfterBindStorageImages,
    const uint32_t maxDescriptorSetUpdateAfterBindInputAttachments) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDescriptorSetVariableDescriptorCountAllocateInfo(const LogObjectList &_parentObjects,
                                                                                  const VkStructureType sType, const void *pNext,
                                                                                  const uint32_t descriptorSetCount,
                                                                                  const uint32_t *pDescriptorCounts) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDescriptorSetVariableDescriptorCountLayoutSupport(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const uint32_t maxVariableDescriptorCount) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSubpassDescriptionDepthStencilResolve(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkResolveModeFlagBits depthResolveMode, const VkResolveModeFlagBits stencilResolveMode,
    const VkAttachmentReference2 *pDepthStencilResolveAttachment) const {
    bool skip = false;
    if (pDepthStencilResolveAttachment != nullptr) {
        const auto _s133 = pDepthStencilResolveAttachment;
        skip |= ValidateAttachmentReference2(_parentObjects, _s133->sType, _s133->pNext, _s133->attachment, _s133->layout,
                                             _s133->aspectMask);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDepthStencilResolveProperties(const LogObjectList &_parentObjects,
                                                                             const VkStructureType sType, const void *pNext,
                                                                             const VkResolveModeFlags supportedDepthResolveModes,
                                                                             const VkResolveModeFlags supportedStencilResolveModes,
                                                                             const VkBool32 independentResolveNone,
                                                                             const VkBool32 independentResolve) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceScalarBlockLayoutFeatures(const LogObjectList &_parentObjects,
                                                                         const VkStructureType sType, const void *pNext,
                                                                         const VkBool32 scalarBlockLayout) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageStencilUsageCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const VkImageUsageFlags stencilUsage) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSamplerReductionModeCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext,
                                                                const VkSamplerReductionMode reductionMode) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceSamplerFilterMinmaxProperties(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 filterMinmaxSingleComponentFormats, const VkBool32 filterMinmaxImageComponentMapping) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceVulkanMemoryModelFeatures(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 vulkanMemoryModel,
    const VkBool32 vulkanMemoryModelDeviceScope, const VkBool32 vulkanMemoryModelAvailabilityVisibilityChains) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceImagelessFramebufferFeatures(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const VkBool32 imagelessFramebuffer) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateFramebufferAttachmentImageInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const VkImageCreateFlags flags,
                                                                const VkImageUsageFlags usage, const uint32_t width,
                                                                const uint32_t height, const uint32_t layerCount,
                                                                const uint32_t viewFormatCount,
                                                                const VkFormat *pViewFormats) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateFramebufferAttachmentsCreateInfo(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t attachmentImageInfoCount,
    const VkFramebufferAttachmentImageInfo *pAttachmentImageInfos) const {
    bool skip = false;
    if (pAttachmentImageInfos != nullptr) {
        for (uint32_t _i134 = 0; _i134 < attachmentImageInfoCount; ++_i134) {
            const auto _s135 = &pAttachmentImageInfos[_i134];
            skip |= ValidateFramebufferAttachmentImageInfo(_parentObjects, _s135->sType, _s135->pNext, _s135->flags, _s135->usage,
                                                           _s135->width, _s135->height, _s135->layerCount, _s135->viewFormatCount,
                                                           _s135->pViewFormats);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRenderPassAttachmentBeginInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const uint32_t attachmentCount,
                                                               const VkImageView *pAttachments) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceUniformBufferStandardLayoutFeatures(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 uniformBufferStandardLayout) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderSubgroupExtendedTypesFeatures(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 shaderSubgroupExtendedTypes) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceSeparateDepthStencilLayoutsFeatures(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 separateDepthStencilLayouts) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAttachmentReferenceStencilLayout(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                  const void *pNext, const VkImageLayout stencilLayout) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAttachmentDescriptionStencilLayout(const LogObjectList &_parentObjects,
                                                                    const VkStructureType sType, const void *pNext,
                                                                    const VkImageLayout stencilInitialLayout,
                                                                    const VkImageLayout stencilFinalLayout) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceHostQueryResetFeatures(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const VkBool32 hostQueryReset) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceTimelineSemaphoreFeatures(const LogObjectList &_parentObjects,
                                                                         const VkStructureType sType, const void *pNext,
                                                                         const VkBool32 timelineSemaphore) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceTimelineSemaphoreProperties(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const uint64_t maxTimelineSemaphoreValueDifference) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSemaphoreTypeCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext, const VkSemaphoreType semaphoreType,
                                                         const uint64_t initialValue) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateTimelineSemaphoreSubmitInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const uint32_t waitSemaphoreValueCount,
                                                             const uint64_t *pWaitSemaphoreValues,
                                                             const uint32_t signalSemaphoreValueCount,
                                                             const uint64_t *pSignalSemaphoreValues) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSemaphoreWaitInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                   const void *pNext, const VkSemaphoreWaitFlags flags,
                                                   const uint32_t semaphoreCount, const VkSemaphore *pSemaphores,
                                                   const uint64_t *pValues) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSemaphoreSignalInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                     const void *pNext, const VkSemaphore semaphore, const uint64_t value) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceBufferDeviceAddressFeatures(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const VkBool32 bufferDeviceAddress,
                                                                           const VkBool32 bufferDeviceAddressCaptureReplay,
                                                                           const VkBool32 bufferDeviceAddressMultiDevice) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBufferDeviceAddressInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext, const VkBuffer buffer) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBufferOpaqueCaptureAddressCreateInfo(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const uint64_t opaqueCaptureAddress) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMemoryOpaqueCaptureAddressAllocateInfo(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const uint64_t opaqueCaptureAddress) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceMemoryOpaqueCaptureAddressInfo(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const VkDeviceMemory memory) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceVulkan13Features(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 robustImageAccess,
    const VkBool32 inlineUniformBlock, const VkBool32 descriptorBindingInlineUniformBlockUpdateAfterBind,
    const VkBool32 pipelineCreationCacheControl, const VkBool32 privateData, const VkBool32 shaderDemoteToHelperInvocation,
    const VkBool32 shaderTerminateInvocation, const VkBool32 subgroupSizeControl, const VkBool32 computeFullSubgroups,
    const VkBool32 synchronization2, const VkBool32 textureCompressionASTC_HDR, const VkBool32 shaderZeroInitializeWorkgroupMemory,
    const VkBool32 dynamicRendering, const VkBool32 shaderIntegerDotProduct, const VkBool32 maintenance4) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceVulkan13Properties(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t minSubgroupSize,
    const uint32_t maxSubgroupSize, const uint32_t maxComputeWorkgroupSubgroups,
    const VkShaderStageFlags requiredSubgroupSizeStages, const uint32_t maxInlineUniformBlockSize,
    const uint32_t maxPerStageDescriptorInlineUniformBlocks, const uint32_t maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks,
    const uint32_t maxDescriptorSetInlineUniformBlocks, const uint32_t maxDescriptorSetUpdateAfterBindInlineUniformBlocks,
    const uint32_t maxInlineUniformTotalSize, const VkBool32 integerDotProduct8BitUnsignedAccelerated,
    const VkBool32 integerDotProduct8BitSignedAccelerated, const VkBool32 integerDotProduct8BitMixedSignednessAccelerated,
    const VkBool32 integerDotProduct4x8BitPackedUnsignedAccelerated, const VkBool32 integerDotProduct4x8BitPackedSignedAccelerated,
    const VkBool32 integerDotProduct4x8BitPackedMixedSignednessAccelerated,
    const VkBool32 integerDotProduct16BitUnsignedAccelerated, const VkBool32 integerDotProduct16BitSignedAccelerated,
    const VkBool32 integerDotProduct16BitMixedSignednessAccelerated, const VkBool32 integerDotProduct32BitUnsignedAccelerated,
    const VkBool32 integerDotProduct32BitSignedAccelerated, const VkBool32 integerDotProduct32BitMixedSignednessAccelerated,
    const VkBool32 integerDotProduct64BitUnsignedAccelerated, const VkBool32 integerDotProduct64BitSignedAccelerated,
    const VkBool32 integerDotProduct64BitMixedSignednessAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating8BitUnsignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating8BitSignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating16BitUnsignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating16BitSignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating32BitUnsignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating32BitSignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating64BitUnsignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating64BitSignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated,
    const VkDeviceSize storageTexelBufferOffsetAlignmentBytes, const VkBool32 storageTexelBufferOffsetSingleTexelAlignment,
    const VkDeviceSize uniformTexelBufferOffsetAlignmentBytes, const VkBool32 uniformTexelBufferOffsetSingleTexelAlignment,
    const VkDeviceSize maxBufferSize) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineCreationFeedback(const LogObjectList &_parentObjects,
                                                          const VkPipelineCreationFeedbackFlags flags,
                                                          const uint64_t duration) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePipelineCreationFeedbackCreateInfo(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkPipelineCreationFeedback *pPipelineCreationFeedback, const uint32_t pipelineStageCreationFeedbackCount,
    const VkPipelineCreationFeedback *pPipelineStageCreationFeedbacks) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderTerminateInvocationFeatures(const LogObjectList &_parentObjects,
                                                                                 const VkStructureType sType, const void *pNext,
                                                                                 const VkBool32 shaderTerminateInvocation) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceToolProperties(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const char name[VK_MAX_EXTENSION_NAME_SIZE],
                                                              const char version[VK_MAX_EXTENSION_NAME_SIZE],
                                                              const VkToolPurposeFlags purposes,
                                                              const char description[VK_MAX_DESCRIPTION_SIZE],
                                                              const char layer[VK_MAX_EXTENSION_NAME_SIZE]) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderDemoteToHelperInvocationFeatures(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 shaderDemoteToHelperInvocation) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePrivateDataFeatures(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const VkBool32 privateData) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDevicePrivateDataCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const uint32_t privateDataSlotRequestCount) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePrivateDataSlotCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const VkPrivateDataSlotCreateFlags flags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePipelineCreationCacheControlFeatures(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 pipelineCreationCacheControl) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMemoryBarrier2(const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
                                                const VkPipelineStageFlags2 srcStageMask, const VkAccessFlags2 srcAccessMask,
                                                const VkPipelineStageFlags2 dstStageMask,
                                                const VkAccessFlags2 dstAccessMask) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBufferMemoryBarrier2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                      const void *pNext, const VkPipelineStageFlags2 srcStageMask,
                                                      const VkAccessFlags2 srcAccessMask, const VkPipelineStageFlags2 dstStageMask,
                                                      const VkAccessFlags2 dstAccessMask, const uint32_t srcQueueFamilyIndex,
                                                      const uint32_t dstQueueFamilyIndex, const VkBuffer buffer,
                                                      const VkDeviceSize offset, const VkDeviceSize size) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageMemoryBarrier2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                     const void *pNext, const VkPipelineStageFlags2 srcStageMask,
                                                     const VkAccessFlags2 srcAccessMask, const VkPipelineStageFlags2 dstStageMask,
                                                     const VkAccessFlags2 dstAccessMask, const VkImageLayout oldLayout,
                                                     const VkImageLayout newLayout, const uint32_t srcQueueFamilyIndex,
                                                     const uint32_t dstQueueFamilyIndex, const VkImage image,
                                                     const VkImageSubresourceRange subresourceRange) const {
    bool skip = false;
    const auto _s136 = &subresourceRange;
    skip |= ValidateImageSubresourceRange(_parentObjects, _s136->aspectMask, _s136->baseMipLevel, _s136->levelCount,
                                          _s136->baseArrayLayer, _s136->layerCount);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDependencyInfo(const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
                                                const VkDependencyFlags dependencyFlags, const uint32_t memoryBarrierCount,
                                                const VkMemoryBarrier2 *pMemoryBarriers, const uint32_t bufferMemoryBarrierCount,
                                                const VkBufferMemoryBarrier2 *pBufferMemoryBarriers,
                                                const uint32_t imageMemoryBarrierCount,
                                                const VkImageMemoryBarrier2 *pImageMemoryBarriers) const {
    bool skip = false;
    if (pMemoryBarriers != nullptr) {
        for (uint32_t _i137 = 0; _i137 < memoryBarrierCount; ++_i137) {
            const auto _s138 = &pMemoryBarriers[_i137];
            skip |= ValidateMemoryBarrier2(_parentObjects, _s138->sType, _s138->pNext, _s138->srcStageMask, _s138->srcAccessMask,
                                           _s138->dstStageMask, _s138->dstAccessMask);
        }
    }
    if (pBufferMemoryBarriers != nullptr) {
        for (uint32_t _i139 = 0; _i139 < bufferMemoryBarrierCount; ++_i139) {
            const auto _s140 = &pBufferMemoryBarriers[_i139];
            skip |=
                ValidateBufferMemoryBarrier2(_parentObjects, _s140->sType, _s140->pNext, _s140->srcStageMask, _s140->srcAccessMask,
                                             _s140->dstStageMask, _s140->dstAccessMask, _s140->srcQueueFamilyIndex,
                                             _s140->dstQueueFamilyIndex, _s140->buffer, _s140->offset, _s140->size);
        }
    }
    if (pImageMemoryBarriers != nullptr) {
        for (uint32_t _i141 = 0; _i141 < imageMemoryBarrierCount; ++_i141) {
            const auto _s142 = &pImageMemoryBarriers[_i141];
            skip |= ValidateImageMemoryBarrier2(_parentObjects, _s142->sType, _s142->pNext, _s142->srcStageMask,
                                                _s142->srcAccessMask, _s142->dstStageMask, _s142->dstAccessMask, _s142->oldLayout,
                                                _s142->newLayout, _s142->srcQueueFamilyIndex, _s142->dstQueueFamilyIndex,
                                                _s142->image, _s142->subresourceRange);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSemaphoreSubmitInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                     const void *pNext, const VkSemaphore semaphore, const uint64_t value,
                                                     const VkPipelineStageFlags2 stageMask, const uint32_t deviceIndex) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCommandBufferSubmitInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext, const VkCommandBuffer commandBuffer,
                                                         const uint32_t deviceMask) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSubmitInfo2(const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
                                             const VkSubmitFlags flags, const uint32_t waitSemaphoreInfoCount,
                                             const VkSemaphoreSubmitInfo *pWaitSemaphoreInfos,
                                             const uint32_t commandBufferInfoCount,
                                             const VkCommandBufferSubmitInfo *pCommandBufferInfos,
                                             const uint32_t signalSemaphoreInfoCount,
                                             const VkSemaphoreSubmitInfo *pSignalSemaphoreInfos) const {
    bool skip = false;
    if (pWaitSemaphoreInfos != nullptr) {
        for (uint32_t _i143 = 0; _i143 < waitSemaphoreInfoCount; ++_i143) {
            const auto _s144 = &pWaitSemaphoreInfos[_i143];
            skip |= ValidateSemaphoreSubmitInfo(_parentObjects, _s144->sType, _s144->pNext, _s144->semaphore, _s144->value,
                                                _s144->stageMask, _s144->deviceIndex);
        }
    }
    if (pCommandBufferInfos != nullptr) {
        for (uint32_t _i145 = 0; _i145 < commandBufferInfoCount; ++_i145) {
            const auto _s146 = &pCommandBufferInfos[_i145];
            skip |= ValidateCommandBufferSubmitInfo(_parentObjects, _s146->sType, _s146->pNext, _s146->commandBuffer,
                                                    _s146->deviceMask);
        }
    }
    if (pSignalSemaphoreInfos != nullptr) {
        for (uint32_t _i147 = 0; _i147 < signalSemaphoreInfoCount; ++_i147) {
            const auto _s148 = &pSignalSemaphoreInfos[_i147];
            skip |= ValidateSemaphoreSubmitInfo(_parentObjects, _s148->sType, _s148->pNext, _s148->semaphore, _s148->value,
                                                _s148->stageMask, _s148->deviceIndex);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceSynchronization2Features(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkBool32 synchronization2) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 shaderZeroInitializeWorkgroupMemory) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceImageRobustnessFeatures(const LogObjectList &_parentObjects,
                                                                       const VkStructureType sType, const void *pNext,
                                                                       const VkBool32 robustImageAccess) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBufferCopy2(const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
                                             const VkDeviceSize srcOffset, const VkDeviceSize dstOffset,
                                             const VkDeviceSize size) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCopyBufferInfo2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                 const void *pNext, const VkBuffer srcBuffer, const VkBuffer dstBuffer,
                                                 const uint32_t regionCount, const VkBufferCopy2 *pRegions) const {
    bool skip = false;
    if (pRegions != nullptr) {
        for (uint32_t _i149 = 0; _i149 < regionCount; ++_i149) {
            const auto _s150 = &pRegions[_i149];
            skip |=
                ValidateBufferCopy2(_parentObjects, _s150->sType, _s150->pNext, _s150->srcOffset, _s150->dstOffset, _s150->size);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageCopy2(const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
                                            const VkImageSubresourceLayers srcSubresource, const VkOffset3D srcOffset,
                                            const VkImageSubresourceLayers dstSubresource, const VkOffset3D dstOffset,
                                            const VkExtent3D extent) const {
    bool skip = false;
    const auto _s151 = &srcSubresource;
    skip |= ValidateImageSubresourceLayers(_parentObjects, _s151->aspectMask, _s151->mipLevel, _s151->baseArrayLayer,
                                           _s151->layerCount);
    const auto _s152 = &srcOffset;
    skip |= ValidateOffset3D(_parentObjects, _s152->x, _s152->y, _s152->z);
    const auto _s153 = &dstSubresource;
    skip |= ValidateImageSubresourceLayers(_parentObjects, _s153->aspectMask, _s153->mipLevel, _s153->baseArrayLayer,
                                           _s153->layerCount);
    const auto _s154 = &dstOffset;
    skip |= ValidateOffset3D(_parentObjects, _s154->x, _s154->y, _s154->z);
    const auto _s155 = &extent;
    skip |= ValidateExtent3D(_parentObjects, _s155->width, _s155->height, _s155->depth);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCopyImageInfo2(const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
                                                const VkImage srcImage, const VkImageLayout srcImageLayout, const VkImage dstImage,
                                                const VkImageLayout dstImageLayout, const uint32_t regionCount,
                                                const VkImageCopy2 *pRegions) const {
    bool skip = false;
    if (pRegions != nullptr) {
        for (uint32_t _i156 = 0; _i156 < regionCount; ++_i156) {
            const auto _s157 = &pRegions[_i156];
            skip |= ValidateImageCopy2(_parentObjects, _s157->sType, _s157->pNext, _s157->srcSubresource, _s157->srcOffset,
                                       _s157->dstSubresource, _s157->dstOffset, _s157->extent);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBufferImageCopy2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                  const void *pNext, const VkDeviceSize bufferOffset,
                                                  const uint32_t bufferRowLength, const uint32_t bufferImageHeight,
                                                  const VkImageSubresourceLayers imageSubresource, const VkOffset3D imageOffset,
                                                  const VkExtent3D imageExtent) const {
    bool skip = false;
    const auto _s158 = &imageSubresource;
    skip |= ValidateImageSubresourceLayers(_parentObjects, _s158->aspectMask, _s158->mipLevel, _s158->baseArrayLayer,
                                           _s158->layerCount);
    const auto _s159 = &imageOffset;
    skip |= ValidateOffset3D(_parentObjects, _s159->x, _s159->y, _s159->z);
    const auto _s160 = &imageExtent;
    skip |= ValidateExtent3D(_parentObjects, _s160->width, _s160->height, _s160->depth);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCopyBufferToImageInfo2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                        const void *pNext, const VkBuffer srcBuffer, const VkImage dstImage,
                                                        const VkImageLayout dstImageLayout, const uint32_t regionCount,
                                                        const VkBufferImageCopy2 *pRegions) const {
    bool skip = false;
    if (pRegions != nullptr) {
        for (uint32_t _i161 = 0; _i161 < regionCount; ++_i161) {
            const auto _s162 = &pRegions[_i161];
            skip |=
                ValidateBufferImageCopy2(_parentObjects, _s162->sType, _s162->pNext, _s162->bufferOffset, _s162->bufferRowLength,
                                         _s162->bufferImageHeight, _s162->imageSubresource, _s162->imageOffset, _s162->imageExtent);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCopyImageToBufferInfo2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                        const void *pNext, const VkImage srcImage,
                                                        const VkImageLayout srcImageLayout, const VkBuffer dstBuffer,
                                                        const uint32_t regionCount, const VkBufferImageCopy2 *pRegions) const {
    bool skip = false;
    if (pRegions != nullptr) {
        for (uint32_t _i163 = 0; _i163 < regionCount; ++_i163) {
            const auto _s164 = &pRegions[_i163];
            skip |=
                ValidateBufferImageCopy2(_parentObjects, _s164->sType, _s164->pNext, _s164->bufferOffset, _s164->bufferRowLength,
                                         _s164->bufferImageHeight, _s164->imageSubresource, _s164->imageOffset, _s164->imageExtent);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageBlit2(const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
                                            const VkImageSubresourceLayers srcSubresource, const VkOffset3D srcOffsets[2],
                                            const VkImageSubresourceLayers dstSubresource, const VkOffset3D dstOffsets[2]) const {
    bool skip = false;
    const auto _s165 = &srcSubresource;
    skip |= ValidateImageSubresourceLayers(_parentObjects, _s165->aspectMask, _s165->mipLevel, _s165->baseArrayLayer,
                                           _s165->layerCount);
    if (srcOffsets != nullptr) {
        for (uint32_t _i166 = 0; _i166 < 2; ++_i166) {
            const auto _s167 = &srcOffsets[_i166];
            skip |= ValidateOffset3D(_parentObjects, _s167->x, _s167->y, _s167->z);
        }
    }
    const auto _s168 = &dstSubresource;
    skip |= ValidateImageSubresourceLayers(_parentObjects, _s168->aspectMask, _s168->mipLevel, _s168->baseArrayLayer,
                                           _s168->layerCount);
    if (dstOffsets != nullptr) {
        for (uint32_t _i169 = 0; _i169 < 2; ++_i169) {
            const auto _s170 = &dstOffsets[_i169];
            skip |= ValidateOffset3D(_parentObjects, _s170->x, _s170->y, _s170->z);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBlitImageInfo2(const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
                                                const VkImage srcImage, const VkImageLayout srcImageLayout, const VkImage dstImage,
                                                const VkImageLayout dstImageLayout, const uint32_t regionCount,
                                                const VkImageBlit2 *pRegions, const VkFilter filter) const {
    bool skip = false;
    if (pRegions != nullptr) {
        for (uint32_t _i171 = 0; _i171 < regionCount; ++_i171) {
            const auto _s172 = &pRegions[_i171];
            skip |= ValidateImageBlit2(_parentObjects, _s172->sType, _s172->pNext, _s172->srcSubresource, _s172->srcOffsets,
                                       _s172->dstSubresource, _s172->dstOffsets);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageResolve2(const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
                                               const VkImageSubresourceLayers srcSubresource, const VkOffset3D srcOffset,
                                               const VkImageSubresourceLayers dstSubresource, const VkOffset3D dstOffset,
                                               const VkExtent3D extent) const {
    bool skip = false;
    const auto _s173 = &srcSubresource;
    skip |= ValidateImageSubresourceLayers(_parentObjects, _s173->aspectMask, _s173->mipLevel, _s173->baseArrayLayer,
                                           _s173->layerCount);
    const auto _s174 = &srcOffset;
    skip |= ValidateOffset3D(_parentObjects, _s174->x, _s174->y, _s174->z);
    const auto _s175 = &dstSubresource;
    skip |= ValidateImageSubresourceLayers(_parentObjects, _s175->aspectMask, _s175->mipLevel, _s175->baseArrayLayer,
                                           _s175->layerCount);
    const auto _s176 = &dstOffset;
    skip |= ValidateOffset3D(_parentObjects, _s176->x, _s176->y, _s176->z);
    const auto _s177 = &extent;
    skip |= ValidateExtent3D(_parentObjects, _s177->width, _s177->height, _s177->depth);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateResolveImageInfo2(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                   const void *pNext, const VkImage srcImage, const VkImageLayout srcImageLayout,
                                                   const VkImage dstImage, const VkImageLayout dstImageLayout,
                                                   const uint32_t regionCount, const VkImageResolve2 *pRegions) const {
    bool skip = false;
    if (pRegions != nullptr) {
        for (uint32_t _i178 = 0; _i178 < regionCount; ++_i178) {
            const auto _s179 = &pRegions[_i178];
            skip |= ValidateImageResolve2(_parentObjects, _s179->sType, _s179->pNext, _s179->srcSubresource, _s179->srcOffset,
                                          _s179->dstSubresource, _s179->dstOffset, _s179->extent);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceSubgroupSizeControlFeatures(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const VkBool32 subgroupSizeControl,
                                                                           const VkBool32 computeFullSubgroups) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceSubgroupSizeControlProperties(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t minSubgroupSize,
    const uint32_t maxSubgroupSize, const uint32_t maxComputeWorkgroupSubgroups,
    const VkShaderStageFlags requiredSubgroupSizeStages) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineShaderStageRequiredSubgroupSizeCreateInfo(const LogObjectList &_parentObjects,
                                                                                   const VkStructureType sType, const void *pNext,
                                                                                   const uint32_t requiredSubgroupSize) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceInlineUniformBlockFeatures(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 inlineUniformBlock,
    const VkBool32 descriptorBindingInlineUniformBlockUpdateAfterBind) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceInlineUniformBlockProperties(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t maxInlineUniformBlockSize,
    const uint32_t maxPerStageDescriptorInlineUniformBlocks, const uint32_t maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks,
    const uint32_t maxDescriptorSetInlineUniformBlocks, const uint32_t maxDescriptorSetUpdateAfterBindInlineUniformBlocks) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateWriteDescriptorSetInlineUniformBlock(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const uint32_t dataSize, const void *pData) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDescriptorPoolInlineUniformBlockCreateInfo(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const uint32_t maxInlineUniformBlockBindings) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceTextureCompressionASTCHDRFeatures(const LogObjectList &_parentObjects,
                                                                                 const VkStructureType sType, const void *pNext,
                                                                                 const VkBool32 textureCompressionASTC_HDR) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRenderingAttachmentInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext, const VkImageView imageView,
                                                         const VkImageLayout imageLayout, const VkResolveModeFlagBits resolveMode,
                                                         const VkImageView resolveImageView, const VkImageLayout resolveImageLayout,
                                                         const VkAttachmentLoadOp loadOp, const VkAttachmentStoreOp storeOp,
                                                         const VkClearValue clearValue) const {
    bool skip = false;
    const auto _s180 = &clearValue;
    skip |= ValidateClearValue(_parentObjects, _s180->color, _s180->depthStencil);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRenderingInfo(const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
                                               const VkRenderingFlags flags, const VkRect2D renderArea, const uint32_t layerCount,
                                               const uint32_t viewMask, const uint32_t colorAttachmentCount,
                                               const VkRenderingAttachmentInfo *pColorAttachments,
                                               const VkRenderingAttachmentInfo *pDepthAttachment,
                                               const VkRenderingAttachmentInfo *pStencilAttachment) const {
    bool skip = false;
    const auto _s181 = &renderArea;
    skip |= ValidateRect2D(_parentObjects, _s181->offset, _s181->extent);
    if (pColorAttachments != nullptr) {
        for (uint32_t _i182 = 0; _i182 < colorAttachmentCount; ++_i182) {
            const auto _s183 = &pColorAttachments[_i182];
            skip |= ValidateRenderingAttachmentInfo(_parentObjects, _s183->sType, _s183->pNext, _s183->imageView,
                                                    _s183->imageLayout, _s183->resolveMode, _s183->resolveImageView,
                                                    _s183->resolveImageLayout, _s183->loadOp, _s183->storeOp, _s183->clearValue);
        }
    }
    if (pDepthAttachment != nullptr) {
        const auto _s184 = pDepthAttachment;
        skip |= ValidateRenderingAttachmentInfo(_parentObjects, _s184->sType, _s184->pNext, _s184->imageView, _s184->imageLayout,
                                                _s184->resolveMode, _s184->resolveImageView, _s184->resolveImageLayout,
                                                _s184->loadOp, _s184->storeOp, _s184->clearValue);
    }
    if (pStencilAttachment != nullptr) {
        const auto _s185 = pStencilAttachment;
        skip |= ValidateRenderingAttachmentInfo(_parentObjects, _s185->sType, _s185->pNext, _s185->imageView, _s185->imageLayout,
                                                _s185->resolveMode, _s185->resolveImageView, _s185->resolveImageLayout,
                                                _s185->loadOp, _s185->storeOp, _s185->clearValue);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineRenderingCreateInfo(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const uint32_t viewMask,
                                                             const uint32_t colorAttachmentCount,
                                                             const VkFormat *pColorAttachmentFormats,
                                                             const VkFormat depthAttachmentFormat,
                                                             const VkFormat stencilAttachmentFormat) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDynamicRenderingFeatures(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkBool32 dynamicRendering) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCommandBufferInheritanceRenderingInfo(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkRenderingFlags flags,
    const uint32_t viewMask, const uint32_t colorAttachmentCount, const VkFormat *pColorAttachmentFormats,
    const VkFormat depthAttachmentFormat, const VkFormat stencilAttachmentFormat,
    const VkSampleCountFlagBits rasterizationSamples) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderIntegerDotProductFeatures(const LogObjectList &_parentObjects,
                                                                               const VkStructureType sType, const void *pNext,
                                                                               const VkBool32 shaderIntegerDotProduct) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderIntegerDotProductProperties(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 integerDotProduct8BitUnsignedAccelerated, const VkBool32 integerDotProduct8BitSignedAccelerated,
    const VkBool32 integerDotProduct8BitMixedSignednessAccelerated, const VkBool32 integerDotProduct4x8BitPackedUnsignedAccelerated,
    const VkBool32 integerDotProduct4x8BitPackedSignedAccelerated,
    const VkBool32 integerDotProduct4x8BitPackedMixedSignednessAccelerated,
    const VkBool32 integerDotProduct16BitUnsignedAccelerated, const VkBool32 integerDotProduct16BitSignedAccelerated,
    const VkBool32 integerDotProduct16BitMixedSignednessAccelerated, const VkBool32 integerDotProduct32BitUnsignedAccelerated,
    const VkBool32 integerDotProduct32BitSignedAccelerated, const VkBool32 integerDotProduct32BitMixedSignednessAccelerated,
    const VkBool32 integerDotProduct64BitUnsignedAccelerated, const VkBool32 integerDotProduct64BitSignedAccelerated,
    const VkBool32 integerDotProduct64BitMixedSignednessAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating8BitUnsignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating8BitSignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating16BitUnsignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating16BitSignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating32BitUnsignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating32BitSignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating64BitUnsignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating64BitSignedAccelerated,
    const VkBool32 integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceTexelBufferAlignmentProperties(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkDeviceSize storageTexelBufferOffsetAlignmentBytes, const VkBool32 storageTexelBufferOffsetSingleTexelAlignment,
    const VkDeviceSize uniformTexelBufferOffsetAlignmentBytes, const VkBool32 uniformTexelBufferOffsetSingleTexelAlignment) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateFormatProperties3(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                   const void *pNext, const VkFormatFeatureFlags2 linearTilingFeatures,
                                                   const VkFormatFeatureFlags2 optimalTilingFeatures,
                                                   const VkFormatFeatureFlags2 bufferFeatures) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMaintenance4Features(const LogObjectList &_parentObjects,
                                                                    const VkStructureType sType, const void *pNext,
                                                                    const VkBool32 maintenance4) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMaintenance4Properties(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const VkDeviceSize maxBufferSize) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceBufferMemoryRequirements(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const VkBufferCreateInfo *pCreateInfo) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s186 = pCreateInfo;
        skip |= ValidateBufferCreateInfo(_parentObjects, _s186->sType, _s186->pNext, _s186->flags, _s186->size, _s186->usage,
                                         _s186->sharingMode, _s186->queueFamilyIndexCount, _s186->pQueueFamilyIndices);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceImageMemoryRequirements(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const VkImageCreateInfo *pCreateInfo,
                                                               const VkImageAspectFlagBits planeAspect) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s187 = pCreateInfo;
        skip |= ValidateImageCreateInfo(_parentObjects, _s187->sType, _s187->pNext, _s187->flags, _s187->imageType, _s187->format,
                                        _s187->extent, _s187->mipLevels, _s187->arrayLayers, _s187->samples, _s187->tiling,
                                        _s187->usage, _s187->sharingMode, _s187->queueFamilyIndexCount, _s187->pQueueFamilyIndices,
                                        _s187->initialLayout);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSurfaceCapabilitiesKHR(
    const LogObjectList &_parentObjects, const uint32_t minImageCount, const uint32_t maxImageCount, const VkExtent2D currentExtent,
    const VkExtent2D minImageExtent, const VkExtent2D maxImageExtent, const uint32_t maxImageArrayLayers,
    const VkSurfaceTransformFlagsKHR supportedTransforms, const VkSurfaceTransformFlagBitsKHR currentTransform,
    const VkCompositeAlphaFlagsKHR supportedCompositeAlpha, const VkImageUsageFlags supportedUsageFlags) const {
    bool skip = false;
    const auto _s188 = &currentExtent;
    skip |= ValidateExtent2D(_parentObjects, _s188->width, _s188->height);
    const auto _s189 = &minImageExtent;
    skip |= ValidateExtent2D(_parentObjects, _s189->width, _s189->height);
    const auto _s190 = &maxImageExtent;
    skip |= ValidateExtent2D(_parentObjects, _s190->width, _s190->height);
    return skip;
}
bool ExplicitValidation::ValidateSurfaceFormatKHR(const LogObjectList &_parentObjects, const VkFormat format,
                                                  const VkColorSpaceKHR colorSpace) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateSwapchainCreateInfoKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkSwapchainCreateFlagsKHR flags,
    const VkSurfaceKHR surface, const uint32_t minImageCount, const VkFormat imageFormat, const VkColorSpaceKHR imageColorSpace,
    const VkExtent2D imageExtent, const uint32_t imageArrayLayers, const VkImageUsageFlags imageUsage,
    const VkSharingMode imageSharingMode, const uint32_t queueFamilyIndexCount, const uint32_t *pQueueFamilyIndices,
    const VkSurfaceTransformFlagBitsKHR preTransform, const VkCompositeAlphaFlagBitsKHR compositeAlpha,
    const VkPresentModeKHR presentMode, const VkBool32 clipped, const VkSwapchainKHR oldSwapchain) const {
    bool skip = false;
    const auto _s191 = &imageExtent;
    skip |= ValidateExtent2D(_parentObjects, _s191->width, _s191->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePresentInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
                                                const uint32_t waitSemaphoreCount, const VkSemaphore *pWaitSemaphores,
                                                const uint32_t swapchainCount, const VkSwapchainKHR *pSwapchains,
                                                const uint32_t *pImageIndices, const VkResult *pResults) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageSwapchainCreateInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const VkSwapchainKHR swapchain) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBindImageMemorySwapchainInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                 const void *pNext, const VkSwapchainKHR swapchain,
                                                                 const uint32_t imageIndex) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAcquireNextImageInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext, const VkSwapchainKHR swapchain, const uint64_t timeout,
                                                         const VkSemaphore semaphore, const VkFence fence,
                                                         const uint32_t deviceMask) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceGroupPresentCapabilitiesKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext,
                                                                   const uint32_t presentMask[VK_MAX_DEVICE_GROUP_SIZE],
                                                                   const VkDeviceGroupPresentModeFlagsKHR modes) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceGroupPresentInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const uint32_t swapchainCount,
                                                           const uint32_t *pDeviceMasks,
                                                           const VkDeviceGroupPresentModeFlagBitsKHR mode) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceGroupSwapchainCreateInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext,
                                                                   const VkDeviceGroupPresentModeFlagsKHR modes) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDisplayModeParametersKHR(const LogObjectList &_parentObjects, const VkExtent2D visibleRegion,
                                                          const uint32_t refreshRate) const {
    bool skip = false;
    const auto _s192 = &visibleRegion;
    skip |= ValidateExtent2D(_parentObjects, _s192->width, _s192->height);
    return skip;
}
bool ExplicitValidation::ValidateDisplayModeCreateInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const VkDisplayModeCreateFlagsKHR flags,
                                                          const VkDisplayModeParametersKHR parameters) const {
    bool skip = false;
    const auto _s193 = &parameters;
    skip |= ValidateDisplayModeParametersKHR(_parentObjects, _s193->visibleRegion, _s193->refreshRate);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDisplayModePropertiesKHR(const LogObjectList &_parentObjects, const VkDisplayModeKHR displayMode,
                                                          const VkDisplayModeParametersKHR parameters) const {
    bool skip = false;
    const auto _s194 = &parameters;
    skip |= ValidateDisplayModeParametersKHR(_parentObjects, _s194->visibleRegion, _s194->refreshRate);
    return skip;
}
bool ExplicitValidation::ValidateDisplayPlaneCapabilitiesKHR(const LogObjectList &_parentObjects,
                                                             const VkDisplayPlaneAlphaFlagsKHR supportedAlpha,
                                                             const VkOffset2D minSrcPosition, const VkOffset2D maxSrcPosition,
                                                             const VkExtent2D minSrcExtent, const VkExtent2D maxSrcExtent,
                                                             const VkOffset2D minDstPosition, const VkOffset2D maxDstPosition,
                                                             const VkExtent2D minDstExtent, const VkExtent2D maxDstExtent) const {
    bool skip = false;
    const auto _s195 = &minSrcPosition;
    skip |= ValidateOffset2D(_parentObjects, _s195->x, _s195->y);
    const auto _s196 = &maxSrcPosition;
    skip |= ValidateOffset2D(_parentObjects, _s196->x, _s196->y);
    const auto _s197 = &minSrcExtent;
    skip |= ValidateExtent2D(_parentObjects, _s197->width, _s197->height);
    const auto _s198 = &maxSrcExtent;
    skip |= ValidateExtent2D(_parentObjects, _s198->width, _s198->height);
    const auto _s199 = &minDstPosition;
    skip |= ValidateOffset2D(_parentObjects, _s199->x, _s199->y);
    const auto _s200 = &maxDstPosition;
    skip |= ValidateOffset2D(_parentObjects, _s200->x, _s200->y);
    const auto _s201 = &minDstExtent;
    skip |= ValidateExtent2D(_parentObjects, _s201->width, _s201->height);
    const auto _s202 = &maxDstExtent;
    skip |= ValidateExtent2D(_parentObjects, _s202->width, _s202->height);
    return skip;
}
bool ExplicitValidation::ValidateDisplayPlanePropertiesKHR(const LogObjectList &_parentObjects, const VkDisplayKHR currentDisplay,
                                                           const uint32_t currentStackIndex) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateDisplayPropertiesKHR(const LogObjectList &_parentObjects, const VkDisplayKHR display,
                                                      const char *displayName, const VkExtent2D physicalDimensions,
                                                      const VkExtent2D physicalResolution,
                                                      const VkSurfaceTransformFlagsKHR supportedTransforms,
                                                      const VkBool32 planeReorderPossible, const VkBool32 persistentContent) const {
    bool skip = false;
    const auto _s203 = &physicalDimensions;
    skip |= ValidateExtent2D(_parentObjects, _s203->width, _s203->height);
    const auto _s204 = &physicalResolution;
    skip |= ValidateExtent2D(_parentObjects, _s204->width, _s204->height);
    return skip;
}
bool ExplicitValidation::ValidateDisplaySurfaceCreateInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const VkDisplaySurfaceCreateFlagsKHR flags,
                                                             const VkDisplayModeKHR displayMode, const uint32_t planeIndex,
                                                             const uint32_t planeStackIndex,
                                                             const VkSurfaceTransformFlagBitsKHR transform, const float globalAlpha,
                                                             const VkDisplayPlaneAlphaFlagBitsKHR alphaMode,
                                                             const VkExtent2D imageExtent) const {
    bool skip = false;
    const auto _s205 = &imageExtent;
    skip |= ValidateExtent2D(_parentObjects, _s205->width, _s205->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDisplayPresentInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const VkRect2D srcRect, const VkRect2D dstRect,
                                                       const VkBool32 persistent) const {
    bool skip = false;
    const auto _s206 = &srcRect;
    skip |= ValidateRect2D(_parentObjects, _s206->offset, _s206->extent);
    const auto _s207 = &dstRect;
    skip |= ValidateRect2D(_parentObjects, _s207->offset, _s207->extent);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_USE_PLATFORM_XLIB_KHR
bool ExplicitValidation::ValidateXlibSurfaceCreateInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const VkXlibSurfaceCreateFlagsKHR flags,
                                                          const Display *dpy, const Window window) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
bool ExplicitValidation::ValidateXcbSurfaceCreateInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext, const VkXcbSurfaceCreateFlagsKHR flags,
                                                         const xcb_connection_t *connection, const xcb_window_t window) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
bool ExplicitValidation::ValidateWaylandSurfaceCreateInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const VkWaylandSurfaceCreateFlagsKHR flags,
                                                             const struct wl_display *display,
                                                             const struct wl_surface *surface) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool ExplicitValidation::ValidateAndroidSurfaceCreateInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const VkAndroidSurfaceCreateFlagsKHR flags,
                                                             const struct ANativeWindow *window) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateWin32SurfaceCreateInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const VkWin32SurfaceCreateFlagsKHR flags,
                                                           const HINSTANCE hinstance, const HWND hwnd) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateQueueFamilyQueryResultStatusPropertiesKHR(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const VkBool32 queryResultStatusSupport) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateQueueFamilyVideoPropertiesKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext,
                                                               const VkVideoCodecOperationFlagsKHR videoCodecOperations) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoProfileInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                     const void *pNext, const VkVideoCodecOperationFlagBitsKHR videoCodecOperation,
                                                     const VkVideoChromaSubsamplingFlagsKHR chromaSubsampling,
                                                     const VkVideoComponentBitDepthFlagsKHR lumaBitDepth,
                                                     const VkVideoComponentBitDepthFlagsKHR chromaBitDepth) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoProfileListInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext, const uint32_t profileCount,
                                                         const VkVideoProfileInfoKHR *pProfiles) const {
    bool skip = false;
    if (pProfiles != nullptr) {
        for (uint32_t _i208 = 0; _i208 < profileCount; ++_i208) {
            const auto _s209 = &pProfiles[_i208];
            skip |= ValidateVideoProfileInfoKHR(_parentObjects, _s209->sType, _s209->pNext, _s209->videoCodecOperation,
                                                _s209->chromaSubsampling, _s209->lumaBitDepth, _s209->chromaBitDepth);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoCapabilitiesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkVideoCapabilityFlagsKHR flags,
    const VkDeviceSize minBitstreamBufferOffsetAlignment, const VkDeviceSize minBitstreamBufferSizeAlignment,
    const VkExtent2D pictureAccessGranularity, const VkExtent2D minCodedExtent, const VkExtent2D maxCodedExtent,
    const uint32_t maxDpbSlots, const uint32_t maxActiveReferencePictures, const VkExtensionProperties stdHeaderVersion) const {
    bool skip = false;
    const auto _s210 = &pictureAccessGranularity;
    skip |= ValidateExtent2D(_parentObjects, _s210->width, _s210->height);
    const auto _s211 = &minCodedExtent;
    skip |= ValidateExtent2D(_parentObjects, _s211->width, _s211->height);
    const auto _s212 = &maxCodedExtent;
    skip |= ValidateExtent2D(_parentObjects, _s212->width, _s212->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceVideoFormatInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                  const void *pNext, const VkImageUsageFlags imageUsage) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoFormatPropertiesKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const VkFormat format,
                                                          const VkComponentMapping componentMapping,
                                                          const VkImageCreateFlags imageCreateFlags, const VkImageType imageType,
                                                          const VkImageTiling imageTiling,
                                                          const VkImageUsageFlags imageUsageFlags) const {
    bool skip = false;
    const auto _s213 = &componentMapping;
    skip |= ValidateComponentMapping(_parentObjects, _s213->r, _s213->g, _s213->b, _s213->a);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoPictureResourceInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const VkOffset2D codedOffset,
                                                             const VkExtent2D codedExtent, const uint32_t baseArrayLayer,
                                                             const VkImageView imageViewBinding) const {
    bool skip = false;
    const auto _s214 = &codedOffset;
    skip |= ValidateOffset2D(_parentObjects, _s214->x, _s214->y);
    const auto _s215 = &codedExtent;
    skip |= ValidateExtent2D(_parentObjects, _s215->width, _s215->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoReferenceSlotInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const int32_t slotIndex,
                                                           const VkVideoPictureResourceInfoKHR *pPictureResource) const {
    bool skip = false;
    if (pPictureResource != nullptr) {
        const auto _s216 = pPictureResource;
        skip |= ValidateVideoPictureResourceInfoKHR(_parentObjects, _s216->sType, _s216->pNext, _s216->codedOffset,
                                                    _s216->codedExtent, _s216->baseArrayLayer, _s216->imageViewBinding);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoSessionMemoryRequirementsKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const uint32_t memoryBindIndex,
                                                                   const VkMemoryRequirements memoryRequirements) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBindVideoSessionMemoryInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const uint32_t memoryBindIndex,
                                                               const VkDeviceMemory memory, const VkDeviceSize memoryOffset,
                                                               const VkDeviceSize memorySize) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoSessionCreateInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const uint32_t queueFamilyIndex,
                                                           const VkVideoSessionCreateFlagsKHR flags,
                                                           const VkVideoProfileInfoKHR *pVideoProfile, const VkFormat pictureFormat,
                                                           const VkExtent2D maxCodedExtent, const VkFormat referencePictureFormat,
                                                           const uint32_t maxDpbSlots, const uint32_t maxActiveReferencePictures,
                                                           const VkExtensionProperties *pStdHeaderVersion) const {
    bool skip = false;
    if (pVideoProfile != nullptr) {
        const auto _s217 = pVideoProfile;
        skip |= ValidateVideoProfileInfoKHR(_parentObjects, _s217->sType, _s217->pNext, _s217->videoCodecOperation,
                                            _s217->chromaSubsampling, _s217->lumaBitDepth, _s217->chromaBitDepth);
    }
    const auto _s218 = &maxCodedExtent;
    skip |= ValidateExtent2D(_parentObjects, _s218->width, _s218->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoSessionParametersCreateInfoKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkVideoSessionParametersCreateFlagsKHR flags, const VkVideoSessionParametersKHR videoSessionParametersTemplate,
    const VkVideoSessionKHR videoSession) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoSessionParametersUpdateInfoKHR(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const uint32_t updateSequenceCount) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoBeginCodingInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext, const VkVideoBeginCodingFlagsKHR flags,
                                                         const VkVideoSessionKHR videoSession,
                                                         const VkVideoSessionParametersKHR videoSessionParameters,
                                                         const uint32_t referenceSlotCount,
                                                         const VkVideoReferenceSlotInfoKHR *pReferenceSlots) const {
    bool skip = false;
    if (pReferenceSlots != nullptr) {
        for (uint32_t _i219 = 0; _i219 < referenceSlotCount; ++_i219) {
            const auto _s220 = &pReferenceSlots[_i219];
            skip |= ValidateVideoReferenceSlotInfoKHR(_parentObjects, _s220->sType, _s220->pNext, _s220->slotIndex,
                                                      _s220->pPictureResource);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoEndCodingInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const VkVideoEndCodingFlagsKHR flags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoCodingControlInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const VkVideoCodingControlFlagsKHR flags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoDecodeCapabilitiesKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                            const void *pNext, const VkVideoDecodeCapabilityFlagsKHR flags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoDecodeUsageInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext,
                                                         const VkVideoDecodeUsageFlagsKHR videoUsageHints) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoDecodeInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                    const void *pNext, const VkVideoDecodeFlagsKHR flags, const VkBuffer srcBuffer,
                                                    const VkDeviceSize srcBufferOffset, const VkDeviceSize srcBufferRange,
                                                    const VkVideoPictureResourceInfoKHR dstPictureResource,
                                                    const VkVideoReferenceSlotInfoKHR *pSetupReferenceSlot,
                                                    const uint32_t referenceSlotCount,
                                                    const VkVideoReferenceSlotInfoKHR *pReferenceSlots) const {
    bool skip = false;
    const auto _s221 = &dstPictureResource;
    skip |= ValidateVideoPictureResourceInfoKHR(_parentObjects, _s221->sType, _s221->pNext, _s221->codedOffset, _s221->codedExtent,
                                                _s221->baseArrayLayer, _s221->imageViewBinding);
    if (pSetupReferenceSlot != nullptr) {
        const auto _s222 = pSetupReferenceSlot;
        skip |= ValidateVideoReferenceSlotInfoKHR(_parentObjects, _s222->sType, _s222->pNext, _s222->slotIndex,
                                                  _s222->pPictureResource);
    }
    if (pReferenceSlots != nullptr) {
        for (uint32_t _i223 = 0; _i223 < referenceSlotCount; ++_i223) {
            const auto _s224 = &pReferenceSlots[_i223];
            skip |= ValidateVideoReferenceSlotInfoKHR(_parentObjects, _s224->sType, _s224->pNext, _s224->slotIndex,
                                                      _s224->pPictureResource);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoDecodeH264ProfileInfoKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const StdVideoH264ProfileIdc stdProfileIdc,
    const VkVideoDecodeH264PictureLayoutFlagBitsKHR pictureLayout) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoDecodeH264CapabilitiesKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const StdVideoH264LevelIdc maxLevelIdc,
                                                                const VkOffset2D fieldOffsetGranularity) const {
    bool skip = false;
    const auto _s225 = &fieldOffsetGranularity;
    skip |= ValidateOffset2D(_parentObjects, _s225->x, _s225->y);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoDecodeH264SessionParametersAddInfoKHR(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const uint32_t stdSPSCount,
                                                                            const StdVideoH264SequenceParameterSet *pStdSPSs,
                                                                            const uint32_t stdPPSCount,
                                                                            const StdVideoH264PictureParameterSet *pStdPPSs) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoDecodeH264SessionParametersCreateInfoKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t maxStdSPSCount,
    const uint32_t maxStdPPSCount, const VkVideoDecodeH264SessionParametersAddInfoKHR *pParametersAddInfo) const {
    bool skip = false;
    if (pParametersAddInfo != nullptr) {
        const auto _s226 = pParametersAddInfo;
        skip |= ValidateVideoDecodeH264SessionParametersAddInfoKHR(_parentObjects, _s226->sType, _s226->pNext, _s226->stdSPSCount,
                                                                   _s226->pStdSPSs, _s226->stdPPSCount, _s226->pStdPPSs);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoDecodeH264PictureInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext,
                                                               const StdVideoDecodeH264PictureInfo *pStdPictureInfo,
                                                               const uint32_t sliceCount, const uint32_t *pSliceOffsets) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoDecodeH264DpbSlotInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext,
                                                               const StdVideoDecodeH264ReferenceInfo *pStdReferenceInfo) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRenderingFragmentShadingRateAttachmentInfoKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkImageView imageView,
    const VkImageLayout imageLayout, const VkExtent2D shadingRateAttachmentTexelSize) const {
    bool skip = false;
    const auto _s227 = &shadingRateAttachmentTexelSize;
    skip |= ValidateExtent2D(_parentObjects, _s227->width, _s227->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRenderingFragmentDensityMapAttachmentInfoEXT(const LogObjectList &_parentObjects,
                                                                              const VkStructureType sType, const void *pNext,
                                                                              const VkImageView imageView,
                                                                              const VkImageLayout imageLayout) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAttachmentSampleCountInfoAMD(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const uint32_t colorAttachmentCount,
                                                              const VkSampleCountFlagBits *pColorAttachmentSamples,
                                                              const VkSampleCountFlagBits depthStencilAttachmentSamples) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMultiviewPerViewAttributesInfoNVX(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const VkBool32 perViewAttributes,
                                                                   const VkBool32 perViewAttributesPositionXOnly) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateImportMemoryWin32HandleInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext,
                                                                const VkExternalMemoryHandleTypeFlagBits handleType,
                                                                const HANDLE handle, const LPCWSTR name) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateExportMemoryWin32HandleInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const SECURITY_ATTRIBUTES *pAttributes,
                                                                const DWORD dwAccess, const LPCWSTR name) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateMemoryWin32HandlePropertiesKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const uint32_t memoryTypeBits) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateMemoryGetWin32HandleInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const VkDeviceMemory memory,
                                                             const VkExternalMemoryHandleTypeFlagBits handleType) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateImportMemoryFdInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const VkExternalMemoryHandleTypeFlagBits handleType,
                                                       const int fd) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMemoryFdPropertiesKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const uint32_t memoryTypeBits) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMemoryGetFdInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                    const void *pNext, const VkDeviceMemory memory,
                                                    const VkExternalMemoryHandleTypeFlagBits handleType) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateWin32KeyedMutexAcquireReleaseInfoKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t acquireCount,
    const VkDeviceMemory *pAcquireSyncs, const uint64_t *pAcquireKeys, const uint32_t *pAcquireTimeouts,
    const uint32_t releaseCount, const VkDeviceMemory *pReleaseSyncs, const uint64_t *pReleaseKeys) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateImportSemaphoreWin32HandleInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const VkSemaphore semaphore,
                                                                   const VkSemaphoreImportFlags flags,
                                                                   const VkExternalSemaphoreHandleTypeFlagBits handleType,
                                                                   const HANDLE handle, const LPCWSTR name) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateExportSemaphoreWin32HandleInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const SECURITY_ATTRIBUTES *pAttributes,
                                                                   const DWORD dwAccess, const LPCWSTR name) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateD3D12FenceSubmitInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext, const uint32_t waitSemaphoreValuesCount,
                                                         const uint64_t *pWaitSemaphoreValues,
                                                         const uint32_t signalSemaphoreValuesCount,
                                                         const uint64_t *pSignalSemaphoreValues) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateSemaphoreGetWin32HandleInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const VkSemaphore semaphore,
                                                                const VkExternalSemaphoreHandleTypeFlagBits handleType) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateImportSemaphoreFdInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const VkSemaphore semaphore,
                                                          const VkSemaphoreImportFlags flags,
                                                          const VkExternalSemaphoreHandleTypeFlagBits handleType,
                                                          const int fd) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSemaphoreGetFdInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const VkSemaphore semaphore,
                                                       const VkExternalSemaphoreHandleTypeFlagBits handleType) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePushDescriptorPropertiesKHR(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const uint32_t maxPushDescriptors) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRectLayerKHR(const LogObjectList &_parentObjects, const VkOffset2D offset, const VkExtent2D extent,
                                              const uint32_t layer) const {
    bool skip = false;
    const auto _s228 = &offset;
    skip |= ValidateOffset2D(_parentObjects, _s228->x, _s228->y);
    const auto _s229 = &extent;
    skip |= ValidateExtent2D(_parentObjects, _s229->width, _s229->height);
    return skip;
}
bool ExplicitValidation::ValidatePresentRegionKHR(const LogObjectList &_parentObjects, const uint32_t rectangleCount,
                                                  const VkRectLayerKHR *pRectangles) const {
    bool skip = false;
    if (pRectangles != nullptr) {
        for (uint32_t _i230 = 0; _i230 < rectangleCount; ++_i230) {
            const auto _s231 = &pRectangles[_i230];
            skip |= ValidateRectLayerKHR(_parentObjects, _s231->offset, _s231->extent, _s231->layer);
        }
    }
    return skip;
}
bool ExplicitValidation::ValidatePresentRegionsKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                   const void *pNext, const uint32_t swapchainCount,
                                                   const VkPresentRegionKHR *pRegions) const {
    bool skip = false;
    if (pRegions != nullptr) {
        for (uint32_t _i232 = 0; _i232 < swapchainCount; ++_i232) {
            const auto _s233 = &pRegions[_i232];
            skip |= ValidatePresentRegionKHR(_parentObjects, _s233->rectangleCount, _s233->pRectangles);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSharedPresentSurfaceCapabilitiesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkImageUsageFlags sharedPresentSupportedUsageFlags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateImportFenceWin32HandleInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const VkFence fence,
                                                               const VkFenceImportFlags flags,
                                                               const VkExternalFenceHandleTypeFlagBits handleType,
                                                               const HANDLE handle, const LPCWSTR name) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateExportFenceWin32HandleInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const SECURITY_ATTRIBUTES *pAttributes,
                                                               const DWORD dwAccess, const LPCWSTR name) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateFenceGetWin32HandleInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                            const void *pNext, const VkFence fence,
                                                            const VkExternalFenceHandleTypeFlagBits handleType) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateImportFenceFdInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                      const void *pNext, const VkFence fence, const VkFenceImportFlags flags,
                                                      const VkExternalFenceHandleTypeFlagBits handleType, const int fd) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateFenceGetFdInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                   const void *pNext, const VkFence fence,
                                                   const VkExternalFenceHandleTypeFlagBits handleType) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePerformanceQueryFeaturesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 performanceCounterQueryPools, const VkBool32 performanceCounterMultipleQueryPools) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePerformanceQueryPropertiesKHR(const LogObjectList &_parentObjects,
                                                                             const VkStructureType sType, const void *pNext,
                                                                             const VkBool32 allowCommandBufferQueryCopies) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePerformanceCounterKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const VkPerformanceCounterUnitKHR unit,
                                                       const VkPerformanceCounterScopeKHR scope,
                                                       const VkPerformanceCounterStorageKHR storage,
                                                       const uint8_t uuid[VK_UUID_SIZE]) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePerformanceCounterDescriptionKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                  const void *pNext,
                                                                  const VkPerformanceCounterDescriptionFlagsKHR flags,
                                                                  const char name[VK_MAX_DESCRIPTION_SIZE],
                                                                  const char category[VK_MAX_DESCRIPTION_SIZE],
                                                                  const char description[VK_MAX_DESCRIPTION_SIZE]) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateQueryPoolPerformanceCreateInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const uint32_t queueFamilyIndex,
                                                                   const uint32_t counterIndexCount,
                                                                   const uint32_t *pCounterIndices) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePerformanceCounterResultKHR(const LogObjectList &_parentObjects, const int32_t int32,
                                                             const int64_t int64, const uint32_t uint32, const uint64_t uint64,
                                                             const float float32, const double float64) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateAcquireProfilingLockInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const VkAcquireProfilingLockFlagsKHR flags,
                                                             const uint64_t timeout) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePerformanceQuerySubmitInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const uint32_t counterPassIndex) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceSurfaceInfo2KHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const VkSurfaceKHR surface) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSurfaceCapabilities2KHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext,
                                                         const VkSurfaceCapabilitiesKHR surfaceCapabilities) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSurfaceFormat2KHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                   const void *pNext, const VkSurfaceFormatKHR surfaceFormat) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDisplayProperties2KHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const VkDisplayPropertiesKHR displayProperties) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDisplayPlaneProperties2KHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                            const void *pNext,
                                                            const VkDisplayPlanePropertiesKHR displayPlaneProperties) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDisplayModeProperties2KHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext,
                                                           const VkDisplayModePropertiesKHR displayModeProperties) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDisplayPlaneInfo2KHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                      const void *pNext, const VkDisplayModeKHR mode,
                                                      const uint32_t planeIndex) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDisplayPlaneCapabilities2KHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext,
                                                              const VkDisplayPlaneCapabilitiesKHR capabilities) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidatePhysicalDevicePortabilitySubsetFeaturesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, VkBool32 constantAlphaColorBlendFactors,
    const VkBool32 events, const VkBool32 imageViewFormatReinterpretation, const VkBool32 imageViewFormatSwizzle,
    const VkBool32 imageView2DOn3DImage, const VkBool32 multisampleArrayImage, const VkBool32 mutableComparisonSamplers,
    const VkBool32 pointPolygons, const VkBool32 samplerMipLodBias, const VkBool32 separateStencilMaskRef,
    const VkBool32 shaderSampleRateInterpolationFunctions, const VkBool32 tessellationIsolines,
    const VkBool32 tessellationPointMode, const VkBool32 triangleFans, const VkBool32 vertexAttributeAccessBeyondStride) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidatePhysicalDevicePortabilitySubsetPropertiesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const uint32_t minVertexInputBindingStrideAlignment) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidatePhysicalDeviceShaderClockFeaturesKHR(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const VkBool32 shaderSubgroupClock,
                                                                      const VkBool32 shaderDeviceClock) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoDecodeH265ProfileInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext,
                                                               const StdVideoH265ProfileIdc stdProfileIdc) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoDecodeH265CapabilitiesKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const StdVideoH265LevelIdc maxLevelIdc) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoDecodeH265SessionParametersAddInfoKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t stdVPSCount,
    const StdVideoH265VideoParameterSet *pStdVPSs, const uint32_t stdSPSCount, const StdVideoH265SequenceParameterSet *pStdSPSs,
    const uint32_t stdPPSCount, const StdVideoH265PictureParameterSet *pStdPPSs) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoDecodeH265SessionParametersCreateInfoKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t maxStdVPSCount,
    const uint32_t maxStdSPSCount, const uint32_t maxStdPPSCount,
    const VkVideoDecodeH265SessionParametersAddInfoKHR *pParametersAddInfo) const {
    bool skip = false;
    if (pParametersAddInfo != nullptr) {
        const auto _s234 = pParametersAddInfo;
        skip |= ValidateVideoDecodeH265SessionParametersAddInfoKHR(_parentObjects, _s234->sType, _s234->pNext, _s234->stdVPSCount,
                                                                   _s234->pStdVPSs, _s234->stdSPSCount, _s234->pStdSPSs,
                                                                   _s234->stdPPSCount, _s234->pStdPPSs);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoDecodeH265PictureInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext,
                                                               const StdVideoDecodeH265PictureInfo *pStdPictureInfo,
                                                               const uint32_t sliceSegmentCount,
                                                               const uint32_t *pSliceSegmentOffsets) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVideoDecodeH265DpbSlotInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext,
                                                               const StdVideoDecodeH265ReferenceInfo *pStdReferenceInfo) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceQueueGlobalPriorityCreateInfoKHR(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkQueueGlobalPriorityKHR globalPriority) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceGlobalPriorityQueryFeaturesKHR(const LogObjectList &_parentObjects,
                                                                              const VkStructureType sType, const void *pNext,
                                                                              const VkBool32 globalPriorityQuery) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateQueueFamilyGlobalPriorityPropertiesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t priorityCount,
    const VkQueueGlobalPriorityKHR priorities[VK_MAX_GLOBAL_PRIORITY_SIZE_KHR]) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateFragmentShadingRateAttachmentInfoKHR(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const VkAttachmentReference2 *pFragmentShadingRateAttachment,
                                                                      const VkExtent2D shadingRateAttachmentTexelSize) const {
    bool skip = false;
    if (pFragmentShadingRateAttachment != nullptr) {
        const auto _s235 = pFragmentShadingRateAttachment;
        skip |= ValidateAttachmentReference2(_parentObjects, _s235->sType, _s235->pNext, _s235->attachment, _s235->layout,
                                             _s235->aspectMask);
    }
    const auto _s236 = &shadingRateAttachmentTexelSize;
    skip |= ValidateExtent2D(_parentObjects, _s236->width, _s236->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineFragmentShadingRateStateCreateInfoKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkExtent2D fragmentSize,
    const VkFragmentShadingRateCombinerOpKHR combinerOps[2]) const {
    bool skip = false;
    const auto _s237 = &fragmentSize;
    skip |= ValidateExtent2D(_parentObjects, _s237->width, _s237->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceFragmentShadingRateFeaturesKHR(const LogObjectList &_parentObjects,
                                                                              const VkStructureType sType, const void *pNext,
                                                                              const VkBool32 pipelineFragmentShadingRate,
                                                                              const VkBool32 primitiveFragmentShadingRate,
                                                                              const VkBool32 attachmentFragmentShadingRate) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceFragmentShadingRatePropertiesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkExtent2D minFragmentShadingRateAttachmentTexelSize, const VkExtent2D maxFragmentShadingRateAttachmentTexelSize,
    const uint32_t maxFragmentShadingRateAttachmentTexelSizeAspectRatio,
    const VkBool32 primitiveFragmentShadingRateWithMultipleViewports, const VkBool32 layeredShadingRateAttachments,
    const VkBool32 fragmentShadingRateNonTrivialCombinerOps, const VkExtent2D maxFragmentSize,
    const uint32_t maxFragmentSizeAspectRatio, const uint32_t maxFragmentShadingRateCoverageSamples,
    const VkSampleCountFlagBits maxFragmentShadingRateRasterizationSamples,
    const VkBool32 fragmentShadingRateWithShaderDepthStencilWrites, const VkBool32 fragmentShadingRateWithSampleMask,
    const VkBool32 fragmentShadingRateWithShaderSampleMask, const VkBool32 fragmentShadingRateWithConservativeRasterization,
    const VkBool32 fragmentShadingRateWithFragmentShaderInterlock, const VkBool32 fragmentShadingRateWithCustomSampleLocations,
    const VkBool32 fragmentShadingRateStrictMultiplyCombiner) const {
    bool skip = false;
    const auto _s238 = &minFragmentShadingRateAttachmentTexelSize;
    skip |= ValidateExtent2D(_parentObjects, _s238->width, _s238->height);
    const auto _s239 = &maxFragmentShadingRateAttachmentTexelSize;
    skip |= ValidateExtent2D(_parentObjects, _s239->width, _s239->height);
    const auto _s240 = &maxFragmentSize;
    skip |= ValidateExtent2D(_parentObjects, _s240->width, _s240->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceFragmentShadingRateKHR(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const VkSampleCountFlags sampleCounts,
                                                                      const VkExtent2D fragmentSize) const {
    bool skip = false;
    const auto _s241 = &fragmentSize;
    skip |= ValidateExtent2D(_parentObjects, _s241->width, _s241->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSurfaceProtectedCapabilitiesKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                 const void *pNext, const VkBool32 supportsProtected) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePresentWaitFeaturesKHR(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const VkBool32 presentWait) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePipelineExecutablePropertiesFeaturesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 pipelineExecutableInfo) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                 const void *pNext, const VkPipeline pipeline) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineExecutablePropertiesKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                 const void *pNext, const VkShaderStageFlags stages,
                                                                 const char name[VK_MAX_DESCRIPTION_SIZE],
                                                                 const char description[VK_MAX_DESCRIPTION_SIZE],
                                                                 const uint32_t subgroupSize) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineExecutableInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const VkPipeline pipeline,
                                                           const uint32_t executableIndex) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineExecutableStatisticValueKHR(const LogObjectList &_parentObjects, const VkBool32 b32,
                                                                     const int64_t i64, const uint64_t u64,
                                                                     const double f64) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePipelineExecutableStatisticKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const char name[VK_MAX_DESCRIPTION_SIZE],
                                                                const char description[VK_MAX_DESCRIPTION_SIZE],
                                                                const VkPipelineExecutableStatisticFormatKHR format,
                                                                const VkPipelineExecutableStatisticValueKHR value) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineExecutableInternalRepresentationKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const char name[VK_MAX_DESCRIPTION_SIZE],
    const char description[VK_MAX_DESCRIPTION_SIZE], const VkBool32 isText, const size_t dataSize, const void *pData) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMemoryMapInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                  const void *pNext, const VkMemoryMapFlags flags, const VkDeviceMemory memory,
                                                  const VkDeviceSize offset, const VkDeviceSize size) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMemoryUnmapInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                    const void *pNext, const VkMemoryUnmapFlagsKHR flags,
                                                    const VkDeviceMemory memory) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineLibraryCreateInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const uint32_t libraryCount,
                                                              const VkPipeline *pLibraries) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePresentIdKHR(const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
                                              const uint32_t swapchainCount, const uint64_t *pPresentIds) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePresentIdFeaturesKHR(const LogObjectList &_parentObjects,
                                                                    const VkStructureType sType, const void *pNext,
                                                                    const VkBool32 presentId) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                    const void *pNext, const VkVideoEncodeFlagsKHR flags, const VkBuffer dstBuffer,
                                                    const VkDeviceSize dstBufferOffset, const VkDeviceSize dstBufferRange,
                                                    const VkVideoPictureResourceInfoKHR srcPictureResource,
                                                    const VkVideoReferenceSlotInfoKHR *pSetupReferenceSlot,
                                                    const uint32_t referenceSlotCount,
                                                    const VkVideoReferenceSlotInfoKHR *pReferenceSlots,
                                                    const uint32_t precedingExternallyEncodedBytes) const {
    bool skip = false;
    const auto _s242 = &srcPictureResource;
    skip |= ValidateVideoPictureResourceInfoKHR(_parentObjects, _s242->sType, _s242->pNext, _s242->codedOffset, _s242->codedExtent,
                                                _s242->baseArrayLayer, _s242->imageViewBinding);
    if (pSetupReferenceSlot != nullptr) {
        const auto _s243 = pSetupReferenceSlot;
        skip |= ValidateVideoReferenceSlotInfoKHR(_parentObjects, _s243->sType, _s243->pNext, _s243->slotIndex,
                                                  _s243->pPictureResource);
    }
    if (pReferenceSlots != nullptr) {
        for (uint32_t _i244 = 0; _i244 < referenceSlotCount; ++_i244) {
            const auto _s245 = &pReferenceSlots[_i244];
            skip |= ValidateVideoReferenceSlotInfoKHR(_parentObjects, _s245->sType, _s245->pNext, _s245->slotIndex,
                                                      _s245->pPictureResource);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeCapabilitiesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkVideoEncodeCapabilityFlagsKHR flags, const VkVideoEncodeRateControlModeFlagsKHR rateControlModes,
    const uint32_t maxRateControlLayers, const uint64_t maxBitrate, const uint32_t maxQualityLevels,
    const VkExtent2D encodeInputPictureGranularity, const VkVideoEncodeFeedbackFlagsKHR supportedEncodeFeedbackFlags) const {
    bool skip = false;
    const auto _s246 = &encodeInputPictureGranularity;
    skip |= ValidateExtent2D(_parentObjects, _s246->width, _s246->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateQueryPoolVideoEncodeFeedbackCreateInfoKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkVideoEncodeFeedbackFlagsKHR encodeFeedbackFlags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeUsageInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext, const VkVideoEncodeUsageFlagsKHR videoUsageHints,
                                                         const VkVideoEncodeContentFlagsKHR videoContentHints,
                                                         const VkVideoEncodeTuningModeKHR tuningMode) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeRateControlLayerInfoKHR(const LogObjectList &_parentObjects,
                                                                    const VkStructureType sType, const void *pNext,
                                                                    const uint64_t averageBitrate, const uint64_t maxBitrate,
                                                                    const uint32_t frameRateNumerator,
                                                                    const uint32_t frameRateDenominator) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeRateControlInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const VkVideoEncodeRateControlFlagsKHR flags,
                                                               const VkVideoEncodeRateControlModeFlagBitsKHR rateControlMode,
                                                               const uint32_t layerCount,
                                                               const VkVideoEncodeRateControlLayerInfoKHR *pLayers,
                                                               const uint32_t virtualBufferSizeInMs,
                                                               const uint32_t initialVirtualBufferSizeInMs) const {
    bool skip = false;
    if (pLayers != nullptr) {
        for (uint32_t _i247 = 0; _i247 < layerCount; ++_i247) {
            const auto _s248 = &pLayers[_i247];
            skip |= ValidateVideoEncodeRateControlLayerInfoKHR(_parentObjects, _s248->sType, _s248->pNext, _s248->averageBitrate,
                                                               _s248->maxBitrate, _s248->frameRateNumerator,
                                                               _s248->frameRateDenominator);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidatePhysicalDeviceVideoEncodeQualityLevelInfoKHR(const LogObjectList &_parentObjects,
                                                                              const VkStructureType sType, const void *pNext,
                                                                              const VkVideoProfileInfoKHR *pVideoProfile,
                                                                              const uint32_t qualityLevel) const {
    bool skip = false;
    if (pVideoProfile != nullptr) {
        const auto _s249 = pVideoProfile;
        skip |= ValidateVideoProfileInfoKHR(_parentObjects, _s249->sType, _s249->pNext, _s249->videoCodecOperation,
                                            _s249->chromaSubsampling, _s249->lumaBitDepth, _s249->chromaBitDepth);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeQualityLevelPropertiesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkVideoEncodeRateControlModeFlagBitsKHR preferredRateControlMode, const uint32_t preferredRateControlLayerCount) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeQualityLevelInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const uint32_t qualityLevel) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeSessionParametersGetInfoKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkVideoSessionParametersKHR videoSessionParameters) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeSessionParametersFeedbackInfoKHR(const LogObjectList &_parentObjects,
                                                                             const VkStructureType sType, const void *pNext,
                                                                             const VkBool32 hasOverrides) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateQueueFamilyCheckpointProperties2NV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkPipelineStageFlags2 checkpointExecutionStageMask) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCheckpointData2NV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                   const void *pNext, const VkPipelineStageFlags2 stage,
                                                   const void *pCheckpointMarker) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceFragmentShaderBarycentricFeaturesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 fragmentShaderBarycentric) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceFragmentShaderBarycentricPropertiesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 triStripVertexOrderIndependentOfProvokingVertex) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 shaderSubgroupUniformControlFlow) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 workgroupMemoryExplicitLayout, const VkBool32 workgroupMemoryExplicitLayoutScalarBlockLayout,
    const VkBool32 workgroupMemoryExplicitLayout8BitAccess, const VkBool32 workgroupMemoryExplicitLayout16BitAccess) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceRayTracingMaintenance1FeaturesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 rayTracingMaintenance1,
    const VkBool32 rayTracingPipelineTraceRaysIndirect2) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateTraceRaysIndirectCommand2KHR(
    const LogObjectList &_parentObjects, const VkDeviceAddress raygenShaderRecordAddress, const VkDeviceSize raygenShaderRecordSize,
    const VkDeviceAddress missShaderBindingTableAddress, const VkDeviceSize missShaderBindingTableSize,
    const VkDeviceSize missShaderBindingTableStride, const VkDeviceAddress hitShaderBindingTableAddress,
    const VkDeviceSize hitShaderBindingTableSize, const VkDeviceSize hitShaderBindingTableStride,
    const VkDeviceAddress callableShaderBindingTableAddress, const VkDeviceSize callableShaderBindingTableSize,
    const VkDeviceSize callableShaderBindingTableStride, const uint32_t width, const uint32_t height, const uint32_t depth) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMaintenance5FeaturesKHR(const LogObjectList &_parentObjects,
                                                                       const VkStructureType sType, const void *pNext,
                                                                       const VkBool32 maintenance5) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMaintenance5PropertiesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 earlyFragmentMultisampleCoverageAfterSampleCounting,
    const VkBool32 earlyFragmentSampleMaskTestBeforeSampleCounting, const VkBool32 depthStencilSwizzleOneSupport,
    const VkBool32 polygonModePointSize, const VkBool32 nonStrictSinglePixelWideLinesUseParallelogram,
    const VkBool32 nonStrictWideLinesUseParallelogram) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRenderingAreaInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                      const void *pNext, const uint32_t viewMask,
                                                      const uint32_t colorAttachmentCount, const VkFormat *pColorAttachmentFormats,
                                                      const VkFormat depthAttachmentFormat,
                                                      const VkFormat stencilAttachmentFormat) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageSubresource2KHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                      const void *pNext, const VkImageSubresource imageSubresource) const {
    bool skip = false;
    const auto _s250 = &imageSubresource;
    skip |= ValidateImageSubresource(_parentObjects, _s250->aspectMask, _s250->mipLevel, _s250->arrayLayer);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceImageSubresourceInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const VkImageCreateInfo *pCreateInfo,
                                                               const VkImageSubresource2KHR *pSubresource) const {
    bool skip = false;
    if (pCreateInfo != nullptr) {
        const auto _s251 = pCreateInfo;
        skip |= ValidateImageCreateInfo(_parentObjects, _s251->sType, _s251->pNext, _s251->flags, _s251->imageType, _s251->format,
                                        _s251->extent, _s251->mipLevels, _s251->arrayLayers, _s251->samples, _s251->tiling,
                                        _s251->usage, _s251->sharingMode, _s251->queueFamilyIndexCount, _s251->pQueueFamilyIndices,
                                        _s251->initialLayout);
    }
    if (pSubresource != nullptr) {
        const auto _s252 = pSubresource;
        skip |= ValidateImageSubresource2KHR(_parentObjects, _s252->sType, _s252->pNext, _s252->imageSubresource);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSubresourceLayout2KHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const VkSubresourceLayout subresourceLayout) const {
    bool skip = false;
    const auto _s253 = &subresourceLayout;
    skip |= ValidateSubresourceLayout(_parentObjects, _s253->offset, _s253->size, _s253->rowPitch, _s253->arrayPitch,
                                      _s253->depthPitch);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineCreateFlags2CreateInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const VkPipelineCreateFlags2KHR flags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBufferUsageFlags2CreateInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const VkBufferUsageFlags2KHR usage) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceRayTracingPositionFetchFeaturesKHR(const LogObjectList &_parentObjects,
                                                                                  const VkStructureType sType, const void *pNext,
                                                                                  const VkBool32 rayTracingPositionFetch) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCooperativeMatrixPropertiesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t MSize, const uint32_t NSize,
    const uint32_t KSize, const VkComponentTypeKHR AType, const VkComponentTypeKHR BType, const VkComponentTypeKHR CType,
    const VkComponentTypeKHR ResultType, const VkBool32 saturatingAccumulation, const VkScopeKHR scope) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceCooperativeMatrixFeaturesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 cooperativeMatrix,
    const VkBool32 cooperativeMatrixRobustBufferAccess) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceCooperativeMatrixPropertiesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkShaderStageFlags cooperativeMatrixSupportedStages) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDebugReportCallbackCreateInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                  const void *pNext, const VkDebugReportFlagsEXT flags,
                                                                  const PFN_vkDebugReportCallbackEXT pfnCallback,
                                                                  const void *pUserData) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineRasterizationStateRasterizationOrderAMD(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkRasterizationOrderAMD rasterizationOrder) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDebugMarkerObjectNameInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const VkDebugReportObjectTypeEXT objectType,
                                                              const uint64_t object, const char *pObjectName) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDebugMarkerObjectTagInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const VkDebugReportObjectTypeEXT objectType,
                                                             const uint64_t object, const uint64_t tagName, const size_t tagSize,
                                                             const void *pTag) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDebugMarkerMarkerInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const char *pMarkerName, const float color[4]) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDedicatedAllocationImageCreateInfoNV(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const VkBool32 dedicatedAllocation) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDedicatedAllocationBufferCreateInfoNV(const LogObjectList &_parentObjects,
                                                                       const VkStructureType sType, const void *pNext,
                                                                       const VkBool32 dedicatedAllocation) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDedicatedAllocationMemoryAllocateInfoNV(const LogObjectList &_parentObjects,
                                                                         const VkStructureType sType, const void *pNext,
                                                                         const VkImage image, const VkBuffer buffer) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceTransformFeedbackFeaturesEXT(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const VkBool32 transformFeedback,
                                                                            const VkBool32 geometryStreams) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceTransformFeedbackPropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t maxTransformFeedbackStreams,
    const uint32_t maxTransformFeedbackBuffers, const VkDeviceSize maxTransformFeedbackBufferSize,
    const uint32_t maxTransformFeedbackStreamDataSize, const uint32_t maxTransformFeedbackBufferDataSize,
    const uint32_t maxTransformFeedbackBufferDataStride, const VkBool32 transformFeedbackQueries,
    const VkBool32 transformFeedbackStreamsLinesTriangles, const VkBool32 transformFeedbackRasterizationStreamSelect,
    const VkBool32 transformFeedbackDraw) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineRasterizationStateStreamCreateInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkPipelineRasterizationStateStreamCreateFlagsEXT flags, const uint32_t rasterizationStream) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCuModuleCreateInfoNVX(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const size_t dataSize, const void *pData) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCuFunctionCreateInfoNVX(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext, const VkCuModuleNVX module, const char *pName) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCuLaunchInfoNVX(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                 const void *pNext, const VkCuFunctionNVX function, const uint32_t gridDimX,
                                                 const uint32_t gridDimY, const uint32_t gridDimZ, const uint32_t blockDimX,
                                                 const uint32_t blockDimY, const uint32_t blockDimZ, const uint32_t sharedMemBytes,
                                                 const size_t paramCount, const void *const *pParams, const size_t extraCount,
                                                 const void *const *pExtras) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageViewHandleInfoNVX(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                        const void *pNext, const VkImageView imageView,
                                                        const VkDescriptorType descriptorType, const VkSampler sampler) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageViewAddressPropertiesNVX(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const VkDeviceAddress deviceAddress,
                                                               const VkDeviceSize size) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH264CapabilitiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkVideoEncodeH264CapabilityFlagsEXT flags, const StdVideoH264LevelIdc maxLevelIdc, const uint32_t maxSliceCount,
    const uint32_t maxPPictureL0ReferenceCount, const uint32_t maxBPictureL0ReferenceCount, const uint32_t maxL1ReferenceCount,
    const uint32_t maxTemporalLayerCount, const VkBool32 expectDyadicTemporalLayerPattern, const int32_t minQp, const int32_t maxQp,
    const VkBool32 prefersGopRemainingFrames, const VkBool32 requiresGopRemainingFrames,
    const VkVideoEncodeH264StdFlagsEXT stdSyntaxFlags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH264QpEXT(const LogObjectList &_parentObjects, const int32_t qpI, const int32_t qpP,
                                                      const int32_t qpB) const {
    bool skip = false;
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH264QualityLevelPropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkVideoEncodeH264RateControlFlagsEXT preferredRateControlFlags, const uint32_t preferredGopFrameCount,
    const uint32_t preferredIdrPeriod, const uint32_t preferredConsecutiveBFrameCount, const uint32_t preferredTemporalLayerCount,
    const VkVideoEncodeH264QpEXT preferredConstantQp, const uint32_t preferredMaxL0ReferenceCount,
    const uint32_t preferredMaxL1ReferenceCount, const VkBool32 preferredStdEntropyCodingModeFlag) const {
    bool skip = false;
    const auto _s254 = &preferredConstantQp;
    skip |= ValidateVideoEncodeH264QpEXT(_parentObjects, _s254->qpI, _s254->qpP, _s254->qpB);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH264SessionCreateInfoEXT(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const VkBool32 useMaxLevelIdc,
                                                                     const StdVideoH264LevelIdc maxLevelIdc) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH264SessionParametersAddInfoEXT(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const uint32_t stdSPSCount,
                                                                            const StdVideoH264SequenceParameterSet *pStdSPSs,
                                                                            const uint32_t stdPPSCount,
                                                                            const StdVideoH264PictureParameterSet *pStdPPSs) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH264SessionParametersCreateInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t maxStdSPSCount,
    const uint32_t maxStdPPSCount, const VkVideoEncodeH264SessionParametersAddInfoEXT *pParametersAddInfo) const {
    bool skip = false;
    if (pParametersAddInfo != nullptr) {
        const auto _s255 = pParametersAddInfo;
        skip |= ValidateVideoEncodeH264SessionParametersAddInfoEXT(_parentObjects, _s255->sType, _s255->pNext, _s255->stdSPSCount,
                                                                   _s255->pStdSPSs, _s255->stdPPSCount, _s255->pStdPPSs);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH264SessionParametersGetInfoEXT(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const VkBool32 writeStdSPS, const VkBool32 writeStdPPS,
                                                                            const uint32_t stdSPSId,
                                                                            const uint32_t stdPPSId) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH264SessionParametersFeedbackInfoEXT(const LogObjectList &_parentObjects,
                                                                                 const VkStructureType sType, const void *pNext,
                                                                                 const VkBool32 hasStdSPSOverrides,
                                                                                 const VkBool32 hasStdPPSOverrides) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH264NaluSliceInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                 const void *pNext, int32_t constantQp,
                                                                 const StdVideoEncodeH264SliceHeader *pStdSliceHeader) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH264PictureInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const uint32_t naluSliceEntryCount,
                                                               const VkVideoEncodeH264NaluSliceInfoEXT *pNaluSliceEntries,
                                                               const StdVideoEncodeH264PictureInfo *pStdPictureInfo,
                                                               const VkBool32 generatePrefixNalu) const {
    bool skip = false;
    if (pNaluSliceEntries != nullptr) {
        for (uint32_t _i256 = 0; _i256 < naluSliceEntryCount; ++_i256) {
            const auto _s257 = &pNaluSliceEntries[_i256];
            skip |= ValidateVideoEncodeH264NaluSliceInfoEXT(_parentObjects, _s257->sType, _s257->pNext, _s257->constantQp,
                                                            _s257->pStdSliceHeader);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH264DpbSlotInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext,
                                                               const StdVideoEncodeH264ReferenceInfo *pStdReferenceInfo) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH264ProfileInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext,
                                                               const StdVideoH264ProfileIdc stdProfileIdc) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH264RateControlInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext,
                                                                   const VkVideoEncodeH264RateControlFlagsEXT flags,
                                                                   const uint32_t gopFrameCount, const uint32_t idrPeriod,
                                                                   const uint32_t consecutiveBFrameCount,
                                                                   const uint32_t temporalLayerCount) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH264FrameSizeEXT(const LogObjectList &_parentObjects, const uint32_t frameISize,
                                                             const uint32_t framePSize, const uint32_t frameBSize) const {
    bool skip = false;
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH264RateControlLayerInfoEXT(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkBool32 useMinQp, const VkVideoEncodeH264QpEXT minQp,
                                                                        const VkBool32 useMaxQp, const VkVideoEncodeH264QpEXT maxQp,
                                                                        const VkBool32 useMaxFrameSize,
                                                                        const VkVideoEncodeH264FrameSizeEXT maxFrameSize) const {
    bool skip = false;
    const auto _s258 = &minQp;
    skip |= ValidateVideoEncodeH264QpEXT(_parentObjects, _s258->qpI, _s258->qpP, _s258->qpB);
    const auto _s259 = &maxQp;
    skip |= ValidateVideoEncodeH264QpEXT(_parentObjects, _s259->qpI, _s259->qpP, _s259->qpB);
    const auto _s260 = &maxFrameSize;
    skip |= ValidateVideoEncodeH264FrameSizeEXT(_parentObjects, _s260->frameISize, _s260->framePSize, _s260->frameBSize);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH264GopRemainingFrameInfoEXT(const LogObjectList &_parentObjects,
                                                                         const VkStructureType sType, const void *pNext,
                                                                         const VkBool32 useGopRemainingFrames,
                                                                         const uint32_t gopRemainingI, const uint32_t gopRemainingP,
                                                                         const uint32_t gopRemainingB) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH265CapabilitiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkVideoEncodeH265CapabilityFlagsEXT flags, const StdVideoH265LevelIdc maxLevelIdc, const uint32_t maxSliceSegmentCount,
    const VkExtent2D maxTiles, const VkVideoEncodeH265CtbSizeFlagsEXT ctbSizes,
    const VkVideoEncodeH265TransformBlockSizeFlagsEXT transformBlockSizes, const uint32_t maxPPictureL0ReferenceCount,
    const uint32_t maxBPictureL0ReferenceCount, const uint32_t maxL1ReferenceCount, const uint32_t maxSubLayerCount,
    const VkBool32 expectDyadicTemporalSubLayerPattern, const int32_t minQp, const int32_t maxQp,
    const VkBool32 prefersGopRemainingFrames, const VkBool32 requiresGopRemainingFrames,
    const VkVideoEncodeH265StdFlagsEXT stdSyntaxFlags) const {
    bool skip = false;
    const auto _s261 = &maxTiles;
    skip |= ValidateExtent2D(_parentObjects, _s261->width, _s261->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH265SessionCreateInfoEXT(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const VkBool32 useMaxLevelIdc,
                                                                     const StdVideoH265LevelIdc maxLevelIdc) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH265QpEXT(const LogObjectList &_parentObjects, const int32_t qpI, const int32_t qpP,
                                                      const int32_t qpB) const {
    bool skip = false;
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH265QualityLevelPropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkVideoEncodeH265RateControlFlagsEXT preferredRateControlFlags, const uint32_t preferredGopFrameCount,
    const uint32_t preferredIdrPeriod, const uint32_t preferredConsecutiveBFrameCount, const uint32_t preferredSubLayerCount,
    const VkVideoEncodeH265QpEXT preferredConstantQp, const uint32_t preferredMaxL0ReferenceCount,
    const uint32_t preferredMaxL1ReferenceCount) const {
    bool skip = false;
    const auto _s262 = &preferredConstantQp;
    skip |= ValidateVideoEncodeH265QpEXT(_parentObjects, _s262->qpI, _s262->qpP, _s262->qpB);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH265SessionParametersAddInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t stdVPSCount,
    const StdVideoH265VideoParameterSet *pStdVPSs, const uint32_t stdSPSCount, const StdVideoH265SequenceParameterSet *pStdSPSs,
    const uint32_t stdPPSCount, const StdVideoH265PictureParameterSet *pStdPPSs) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH265SessionParametersCreateInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t maxStdVPSCount,
    const uint32_t maxStdSPSCount, const uint32_t maxStdPPSCount,
    const VkVideoEncodeH265SessionParametersAddInfoEXT *pParametersAddInfo) const {
    bool skip = false;
    if (pParametersAddInfo != nullptr) {
        const auto _s263 = pParametersAddInfo;
        skip |= ValidateVideoEncodeH265SessionParametersAddInfoEXT(_parentObjects, _s263->sType, _s263->pNext, _s263->stdVPSCount,
                                                                   _s263->pStdVPSs, _s263->stdSPSCount, _s263->pStdSPSs,
                                                                   _s263->stdPPSCount, _s263->pStdPPSs);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH265SessionParametersGetInfoEXT(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const VkBool32 writeStdVPS, const VkBool32 writeStdSPS,
                                                                            const VkBool32 writeStdPPS, const uint32_t stdVPSId,
                                                                            const uint32_t stdSPSId,
                                                                            const uint32_t stdPPSId) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH265SessionParametersFeedbackInfoEXT(const LogObjectList &_parentObjects,
                                                                                 const VkStructureType sType, const void *pNext,
                                                                                 const VkBool32 hasStdVPSOverrides,
                                                                                 const VkBool32 hasStdSPSOverrides,
                                                                                 const VkBool32 hasStdPPSOverrides) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH265NaluSliceSegmentInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, int32_t constantQp,
    const StdVideoEncodeH265SliceSegmentHeader *pStdSliceSegmentHeader) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH265PictureInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t naluSliceSegmentEntryCount,
    const VkVideoEncodeH265NaluSliceSegmentInfoEXT *pNaluSliceSegmentEntries,
    const StdVideoEncodeH265PictureInfo *pStdPictureInfo) const {
    bool skip = false;
    if (pNaluSliceSegmentEntries != nullptr) {
        for (uint32_t _i264 = 0; _i264 < naluSliceSegmentEntryCount; ++_i264) {
            const auto _s265 = &pNaluSliceSegmentEntries[_i264];
            skip |= ValidateVideoEncodeH265NaluSliceSegmentInfoEXT(_parentObjects, _s265->sType, _s265->pNext, _s265->constantQp,
                                                                   _s265->pStdSliceSegmentHeader);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH265DpbSlotInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext,
                                                               const StdVideoEncodeH265ReferenceInfo *pStdReferenceInfo) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH265ProfileInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext,
                                                               const StdVideoH265ProfileIdc stdProfileIdc) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH265RateControlInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext,
                                                                   const VkVideoEncodeH265RateControlFlagsEXT flags,
                                                                   const uint32_t gopFrameCount, const uint32_t idrPeriod,
                                                                   const uint32_t consecutiveBFrameCount,
                                                                   const uint32_t subLayerCount) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH265FrameSizeEXT(const LogObjectList &_parentObjects, const uint32_t frameISize,
                                                             const uint32_t framePSize, const uint32_t frameBSize) const {
    bool skip = false;
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH265RateControlLayerInfoEXT(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkBool32 useMinQp, const VkVideoEncodeH265QpEXT minQp,
                                                                        const VkBool32 useMaxQp, const VkVideoEncodeH265QpEXT maxQp,
                                                                        const VkBool32 useMaxFrameSize,
                                                                        const VkVideoEncodeH265FrameSizeEXT maxFrameSize) const {
    bool skip = false;
    const auto _s266 = &minQp;
    skip |= ValidateVideoEncodeH265QpEXT(_parentObjects, _s266->qpI, _s266->qpP, _s266->qpB);
    const auto _s267 = &maxQp;
    skip |= ValidateVideoEncodeH265QpEXT(_parentObjects, _s267->qpI, _s267->qpP, _s267->qpB);
    const auto _s268 = &maxFrameSize;
    skip |= ValidateVideoEncodeH265FrameSizeEXT(_parentObjects, _s268->frameISize, _s268->framePSize, _s268->frameBSize);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateVideoEncodeH265GopRemainingFrameInfoEXT(const LogObjectList &_parentObjects,
                                                                         const VkStructureType sType, const void *pNext,
                                                                         const VkBool32 useGopRemainingFrames,
                                                                         const uint32_t gopRemainingI, const uint32_t gopRemainingP,
                                                                         const uint32_t gopRemainingB) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateTextureLODGatherFormatPropertiesAMD(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const VkBool32 supportsTextureGatherLODBiasAMD) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateShaderResourceUsageAMD(const LogObjectList &_parentObjects, const uint32_t numUsedVgprs,
                                                        const uint32_t numUsedSgprs, const uint32_t ldsSizePerLocalWorkGroup,
                                                        const size_t ldsUsageSizeInBytes,
                                                        const size_t scratchMemUsageInBytes) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateShaderStatisticsInfoAMD(const LogObjectList &_parentObjects,
                                                         const VkShaderStageFlags shaderStageMask,
                                                         const VkShaderResourceUsageAMD resourceUsage,
                                                         const uint32_t numPhysicalVgprs, const uint32_t numPhysicalSgprs,
                                                         const uint32_t numAvailableVgprs, const uint32_t numAvailableSgprs,
                                                         const uint32_t computeWorkGroupSize[3]) const {
    bool skip = false;
    return skip;
}
#ifdef VK_USE_PLATFORM_GGP
bool ExplicitValidation::ValidateStreamDescriptorSurfaceCreateInfoGGP(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const VkStreamDescriptorSurfaceCreateFlagsGGP flags,
                                                                      const GgpStreamDescriptor streamDescriptor) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_GGP
bool ExplicitValidation::ValidatePhysicalDeviceCornerSampledImageFeaturesNV(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const VkBool32 cornerSampledImage) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateExternalImageFormatPropertiesNV(
    const LogObjectList &_parentObjects, const VkImageFormatProperties imageFormatProperties,
    const VkExternalMemoryFeatureFlagsNV externalMemoryFeatures,
    const VkExternalMemoryHandleTypeFlagsNV exportFromImportedHandleTypes,
    const VkExternalMemoryHandleTypeFlagsNV compatibleHandleTypes) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateExternalMemoryImageCreateInfoNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                 const void *pNext,
                                                                 const VkExternalMemoryHandleTypeFlagsNV handleTypes) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateExportMemoryAllocateInfoNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                            const void *pNext,
                                                            const VkExternalMemoryHandleTypeFlagsNV handleTypes) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateImportMemoryWin32HandleInfoNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext,
                                                               const VkExternalMemoryHandleTypeFlagsNV handleType,
                                                               const HANDLE handle) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateExportMemoryWin32HandleInfoNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const SECURITY_ATTRIBUTES *pAttributes,
                                                               const DWORD dwAccess) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateWin32KeyedMutexAcquireReleaseInfoNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t acquireCount,
    const VkDeviceMemory *pAcquireSyncs, const uint64_t *pAcquireKeys, const uint32_t *pAcquireTimeoutMilliseconds,
    const uint32_t releaseCount, const VkDeviceMemory *pReleaseSyncs, const uint64_t *pReleaseKeys) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateValidationFlagsEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                    const void *pNext, const uint32_t disabledValidationCheckCount,
                                                    const VkValidationCheckEXT *pDisabledValidationChecks) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_USE_PLATFORM_VI_NN
bool ExplicitValidation::ValidateViSurfaceCreateInfoNN(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const VkViSurfaceCreateFlagsNN flags,
                                                       const void *window) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_VI_NN
bool ExplicitValidation::ValidateImageViewASTCDecodeModeEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                            const void *pNext, const VkFormat decodeMode) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceASTCDecodeFeaturesEXT(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const VkBool32 decodeModeSharedExponent) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePipelineRobustnessFeaturesEXT(const LogObjectList &_parentObjects,
                                                                             const VkStructureType sType, const void *pNext,
                                                                             const VkBool32 pipelineRobustness) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePipelineRobustnessPropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkPipelineRobustnessBufferBehaviorEXT defaultRobustnessStorageBuffers,
    const VkPipelineRobustnessBufferBehaviorEXT defaultRobustnessUniformBuffers,
    const VkPipelineRobustnessBufferBehaviorEXT defaultRobustnessVertexInputs,
    const VkPipelineRobustnessImageBehaviorEXT defaultRobustnessImages) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineRobustnessCreateInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                 const void *pNext,
                                                                 const VkPipelineRobustnessBufferBehaviorEXT storageBuffers,
                                                                 const VkPipelineRobustnessBufferBehaviorEXT uniformBuffers,
                                                                 const VkPipelineRobustnessBufferBehaviorEXT vertexInputs,
                                                                 const VkPipelineRobustnessImageBehaviorEXT images) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateConditionalRenderingBeginInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                  const void *pNext, const VkBuffer buffer,
                                                                  const VkDeviceSize offset,
                                                                  const VkConditionalRenderingFlagsEXT flags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceConditionalRenderingFeaturesEXT(const LogObjectList &_parentObjects,
                                                                               const VkStructureType sType, const void *pNext,
                                                                               const VkBool32 conditionalRendering,
                                                                               const VkBool32 inheritedConditionalRendering) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCommandBufferInheritanceConditionalRenderingInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 conditionalRenderingEnable) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateViewportWScalingNV(const LogObjectList &_parentObjects, const float xcoeff,
                                                    const float ycoeff) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePipelineViewportWScalingStateCreateInfoNV(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const VkBool32 viewportWScalingEnable,
                                                                           const uint32_t viewportCount,
                                                                           const VkViewportWScalingNV *pViewportWScalings) const {
    bool skip = false;
    if (pViewportWScalings != nullptr) {
        for (uint32_t _i269 = 0; _i269 < viewportCount; ++_i269) {
            const auto _s270 = &pViewportWScalings[_i269];
            skip |= ValidateViewportWScalingNV(_parentObjects, _s270->xcoeff, _s270->ycoeff);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSurfaceCapabilities2EXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t minImageCount,
    const uint32_t maxImageCount, const VkExtent2D currentExtent, const VkExtent2D minImageExtent, const VkExtent2D maxImageExtent,
    const uint32_t maxImageArrayLayers, const VkSurfaceTransformFlagsKHR supportedTransforms,
    const VkSurfaceTransformFlagBitsKHR currentTransform, const VkCompositeAlphaFlagsKHR supportedCompositeAlpha,
    const VkImageUsageFlags supportedUsageFlags, const VkSurfaceCounterFlagsEXT supportedSurfaceCounters) const {
    bool skip = false;
    const auto _s271 = &currentExtent;
    skip |= ValidateExtent2D(_parentObjects, _s271->width, _s271->height);
    const auto _s272 = &minImageExtent;
    skip |= ValidateExtent2D(_parentObjects, _s272->width, _s272->height);
    const auto _s273 = &maxImageExtent;
    skip |= ValidateExtent2D(_parentObjects, _s273->width, _s273->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDisplayPowerInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                     const void *pNext, const VkDisplayPowerStateEXT powerState) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceEventInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                    const void *pNext, const VkDeviceEventTypeEXT deviceEvent) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDisplayEventInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                     const void *pNext, const VkDisplayEventTypeEXT displayEvent) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSwapchainCounterCreateInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext,
                                                               const VkSurfaceCounterFlagsEXT surfaceCounters) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRefreshCycleDurationGOOGLE(const LogObjectList &_parentObjects,
                                                            const uint64_t refreshDuration) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePastPresentationTimingGOOGLE(const LogObjectList &_parentObjects, const uint32_t presentID,
                                                              const uint64_t desiredPresentTime, const uint64_t actualPresentTime,
                                                              const uint64_t earliestPresentTime,
                                                              const uint64_t presentMargin) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePresentTimeGOOGLE(const LogObjectList &_parentObjects, const uint32_t presentID,
                                                   const uint64_t desiredPresentTime) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePresentTimesInfoGOOGLE(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                        const void *pNext, const uint32_t swapchainCount,
                                                        const VkPresentTimeGOOGLE *pTimes) const {
    bool skip = false;
    if (pTimes != nullptr) {
        for (uint32_t _i274 = 0; _i274 < swapchainCount; ++_i274) {
            const auto _s275 = &pTimes[_i274];
            skip |= ValidatePresentTimeGOOGLE(_parentObjects, _s275->presentID, _s275->desiredPresentTime);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 perViewPositionAllComponents) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateViewportSwizzleNV(const LogObjectList &_parentObjects, const VkViewportCoordinateSwizzleNV x,
                                                   const VkViewportCoordinateSwizzleNV y, const VkViewportCoordinateSwizzleNV z,
                                                   const VkViewportCoordinateSwizzleNV w) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePipelineViewportSwizzleStateCreateInfoNV(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkPipelineViewportSwizzleStateCreateFlagsNV flags,
                                                                          const uint32_t viewportCount,
                                                                          const VkViewportSwizzleNV *pViewportSwizzles) const {
    bool skip = false;
    if (pViewportSwizzles != nullptr) {
        for (uint32_t _i276 = 0; _i276 < viewportCount; ++_i276) {
            const auto _s277 = &pViewportSwizzles[_i276];
            skip |= ValidateViewportSwizzleNV(_parentObjects, _s277->x, _s277->y, _s277->z, _s277->w);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDiscardRectanglePropertiesEXT(const LogObjectList &_parentObjects,
                                                                             const VkStructureType sType, const void *pNext,
                                                                             const uint32_t maxDiscardRectangles) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineDiscardRectangleStateCreateInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkPipelineDiscardRectangleStateCreateFlagsEXT flags, const VkDiscardRectangleModeEXT discardRectangleMode,
    const uint32_t discardRectangleCount, const VkRect2D *pDiscardRectangles) const {
    bool skip = false;
    if (pDiscardRectangles != nullptr) {
        for (uint32_t _i278 = 0; _i278 < discardRectangleCount; ++_i278) {
            const auto _s279 = &pDiscardRectangles[_i278];
            skip |= ValidateRect2D(_parentObjects, _s279->offset, _s279->extent);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceConservativeRasterizationPropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const float primitiveOverestimationSize,
    const float maxExtraPrimitiveOverestimationSize, const float extraPrimitiveOverestimationSizeGranularity,
    const VkBool32 primitiveUnderestimation, const VkBool32 conservativePointAndLineRasterization,
    const VkBool32 degenerateTrianglesRasterized, const VkBool32 degenerateLinesRasterized,
    const VkBool32 fullyCoveredFragmentShaderInputVariable, const VkBool32 conservativeRasterizationPostDepthCoverage) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineRasterizationConservativeStateCreateInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkPipelineRasterizationConservativeStateCreateFlagsEXT flags,
    const VkConservativeRasterizationModeEXT conservativeRasterizationMode, const float extraPrimitiveOverestimationSize) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDepthClipEnableFeaturesEXT(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkBool32 depthClipEnable) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineRasterizationDepthClipStateCreateInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkPipelineRasterizationDepthClipStateCreateFlagsEXT flags, const VkBool32 depthClipEnable) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateXYColorEXT(const LogObjectList &_parentObjects, const float x, const float y) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateHdrMetadataEXT(const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
                                                const VkXYColorEXT displayPrimaryRed, const VkXYColorEXT displayPrimaryGreen,
                                                const VkXYColorEXT displayPrimaryBlue, const VkXYColorEXT whitePoint,
                                                const float maxLuminance, const float minLuminance,
                                                const float maxContentLightLevel, const float maxFrameAverageLightLevel) const {
    bool skip = false;
    const auto _s280 = &displayPrimaryRed;
    skip |= ValidateXYColorEXT(_parentObjects, _s280->x, _s280->y);
    const auto _s281 = &displayPrimaryGreen;
    skip |= ValidateXYColorEXT(_parentObjects, _s281->x, _s281->y);
    const auto _s282 = &displayPrimaryBlue;
    skip |= ValidateXYColorEXT(_parentObjects, _s282->x, _s282->y);
    const auto _s283 = &whitePoint;
    skip |= ValidateXYColorEXT(_parentObjects, _s283->x, _s283->y);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_USE_PLATFORM_IOS_MVK
bool ExplicitValidation::ValidateIOSSurfaceCreateInfoMVK(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext, const VkIOSSurfaceCreateFlagsMVK flags,
                                                         const void *pView) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
bool ExplicitValidation::ValidateMacOSSurfaceCreateInfoMVK(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const VkMacOSSurfaceCreateFlagsMVK flags,
                                                           const void *pView) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_MACOS_MVK
bool ExplicitValidation::ValidateDebugUtilsLabelEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                    const void *pNext, const char *pLabelName, const float color[4]) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDebugUtilsObjectNameInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const VkObjectType objectType,
                                                             const uint64_t objectHandle, const char *pObjectName) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDebugUtilsMessengerCallbackDataEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkDebugUtilsMessengerCallbackDataFlagsEXT flags, const char *pMessageIdName, const int32_t messageIdNumber,
    const char *pMessage, const uint32_t queueLabelCount, const VkDebugUtilsLabelEXT *pQueueLabels, const uint32_t cmdBufLabelCount,
    const VkDebugUtilsLabelEXT *pCmdBufLabels, const uint32_t objectCount, const VkDebugUtilsObjectNameInfoEXT *pObjects) const {
    bool skip = false;
    if (pQueueLabels != nullptr) {
        for (uint32_t _i284 = 0; _i284 < queueLabelCount; ++_i284) {
            const auto _s285 = &pQueueLabels[_i284];
            skip |= ValidateDebugUtilsLabelEXT(_parentObjects, _s285->sType, _s285->pNext, _s285->pLabelName, _s285->color);
        }
    }
    if (pCmdBufLabels != nullptr) {
        for (uint32_t _i286 = 0; _i286 < cmdBufLabelCount; ++_i286) {
            const auto _s287 = &pCmdBufLabels[_i286];
            skip |= ValidateDebugUtilsLabelEXT(_parentObjects, _s287->sType, _s287->pNext, _s287->pLabelName, _s287->color);
        }
    }
    if (pObjects != nullptr) {
        for (uint32_t _i288 = 0; _i288 < objectCount; ++_i288) {
            const auto _s289 = &pObjects[_i288];
            skip |= ValidateDebugUtilsObjectNameInfoEXT(_parentObjects, _s289->sType, _s289->pNext, _s289->objectType,
                                                        _s289->objectHandle, _s289->pObjectName);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDebugUtilsMessengerCreateInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                  const void *pNext,
                                                                  const VkDebugUtilsMessengerCreateFlagsEXT flags,
                                                                  const VkDebugUtilsMessageSeverityFlagsEXT messageSeverity,
                                                                  const VkDebugUtilsMessageTypeFlagsEXT messageType,
                                                                  const PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback,
                                                                  const void *pUserData) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDebugUtilsObjectTagInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                            const void *pNext, const VkObjectType objectType,
                                                            const uint64_t objectHandle, const uint64_t tagName,
                                                            const size_t tagSize, const void *pTag) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool ExplicitValidation::ValidateAndroidHardwareBufferUsageANDROID(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext,
                                                                   const uint64_t androidHardwareBufferUsage) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool ExplicitValidation::ValidateAndroidHardwareBufferPropertiesANDROID(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkDeviceSize allocationSize,
                                                                        const uint32_t memoryTypeBits) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool ExplicitValidation::ValidateAndroidHardwareBufferFormatPropertiesANDROID(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkFormat format,
    const uint64_t externalFormat, const VkFormatFeatureFlags formatFeatures,
    const VkComponentMapping samplerYcbcrConversionComponents, const VkSamplerYcbcrModelConversion suggestedYcbcrModel,
    const VkSamplerYcbcrRange suggestedYcbcrRange, const VkChromaLocation suggestedXChromaOffset,
    const VkChromaLocation suggestedYChromaOffset) const {
    bool skip = false;
    const auto _s290 = &samplerYcbcrConversionComponents;
    skip |= ValidateComponentMapping(_parentObjects, _s290->r, _s290->g, _s290->b, _s290->a);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool ExplicitValidation::ValidateImportAndroidHardwareBufferInfoANDROID(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const struct AHardwareBuffer *buffer) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool ExplicitValidation::ValidateMemoryGetAndroidHardwareBufferInfoANDROID(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const VkDeviceMemory memory) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool ExplicitValidation::ValidateExternalFormatANDROID(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const uint64_t externalFormat) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool ExplicitValidation::ValidateAndroidHardwareBufferFormatProperties2ANDROID(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkFormat format,
    const uint64_t externalFormat, const VkFormatFeatureFlags2 formatFeatures,
    const VkComponentMapping samplerYcbcrConversionComponents, const VkSamplerYcbcrModelConversion suggestedYcbcrModel,
    const VkSamplerYcbcrRange suggestedYcbcrRange, const VkChromaLocation suggestedXChromaOffset,
    const VkChromaLocation suggestedYChromaOffset) const {
    bool skip = false;
    const auto _s291 = &samplerYcbcrConversionComponents;
    skip |= ValidateComponentMapping(_parentObjects, _s291->r, _s291->g, _s291->b, _s291->a);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidatePhysicalDeviceShaderEnqueueFeaturesAMDX(const LogObjectList &_parentObjects,
                                                                         const VkStructureType sType, const void *pNext,
                                                                         const VkBool32 shaderEnqueue) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidatePhysicalDeviceShaderEnqueuePropertiesAMDX(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t maxExecutionGraphDepth,
    const uint32_t maxExecutionGraphShaderOutputNodes, const uint32_t maxExecutionGraphShaderPayloadSize,
    const uint32_t maxExecutionGraphShaderPayloadCount, const uint32_t executionGraphDispatchAddressAlignment) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateExecutionGraphPipelineScratchSizeAMDX(const LogObjectList &_parentObjects,
                                                                       const VkStructureType sType, const void *pNext,
                                                                       const VkDeviceSize size) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateExecutionGraphPipelineCreateInfoAMDX(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkPipelineCreateFlags flags,
    const uint32_t stageCount, const VkPipelineShaderStageCreateInfo *pStages, const VkPipelineLibraryCreateInfoKHR *pLibraryInfo,
    const VkPipelineLayout layout, const VkPipeline basePipelineHandle, const int32_t basePipelineIndex) const {
    bool skip = false;
    if (pStages != nullptr) {
        for (uint32_t _i292 = 0; _i292 < stageCount; ++_i292) {
            const auto _s293 = &pStages[_i292];
            skip |= ValidatePipelineShaderStageCreateInfo(_parentObjects, _s293->sType, _s293->pNext, _s293->flags, _s293->stage,
                                                          _s293->module, _s293->pName, _s293->pSpecializationInfo);
        }
    }
    if (pLibraryInfo != nullptr) {
        const auto _s294 = pLibraryInfo;
        skip |= ValidatePipelineLibraryCreateInfoKHR(_parentObjects, _s294->sType, _s294->pNext, _s294->libraryCount,
                                                     _s294->pLibraries);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateDeviceOrHostAddressConstAMDX(const LogObjectList &_parentObjects,
                                                              const VkDeviceAddress deviceAddress, const void *hostAddress) const {
    bool skip = false;
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateDispatchGraphInfoAMDX(const LogObjectList &_parentObjects, const uint32_t nodeIndex,
                                                       const uint32_t payloadCount, const VkDeviceOrHostAddressConstAMDX payloads,
                                                       const uint64_t payloadStride) const {
    bool skip = false;
    const auto _s295 = &payloads;
    skip |= ValidateDeviceOrHostAddressConstAMDX(_parentObjects, _s295->deviceAddress, _s295->hostAddress);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateDispatchGraphCountInfoAMDX(const LogObjectList &_parentObjects, const uint32_t count,
                                                            const VkDeviceOrHostAddressConstAMDX infos,
                                                            const uint64_t stride) const {
    bool skip = false;
    const auto _s296 = &infos;
    skip |= ValidateDeviceOrHostAddressConstAMDX(_parentObjects, _s296->deviceAddress, _s296->hostAddress);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidatePipelineShaderStageNodeCreateInfoAMDX(const LogObjectList &_parentObjects,
                                                                       const VkStructureType sType, const void *pNext,
                                                                       const char *pName, const uint32_t index) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateSampleLocationEXT(const LogObjectList &_parentObjects, const float x, const float y) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateSampleLocationsInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                        const void *pNext, const VkSampleCountFlagBits sampleLocationsPerPixel,
                                                        const VkExtent2D sampleLocationGridSize,
                                                        const uint32_t sampleLocationsCount,
                                                        const VkSampleLocationEXT *pSampleLocations) const {
    bool skip = false;
    const auto _s297 = &sampleLocationGridSize;
    skip |= ValidateExtent2D(_parentObjects, _s297->width, _s297->height);
    if (pSampleLocations != nullptr) {
        for (uint32_t _i298 = 0; _i298 < sampleLocationsCount; ++_i298) {
            const auto _s299 = &pSampleLocations[_i298];
            skip |= ValidateSampleLocationEXT(_parentObjects, _s299->x, _s299->y);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAttachmentSampleLocationsEXT(const LogObjectList &_parentObjects, const uint32_t attachmentIndex,
                                                              const VkSampleLocationsInfoEXT sampleLocationsInfo) const {
    bool skip = false;
    const auto _s300 = &sampleLocationsInfo;
    skip |= ValidateSampleLocationsInfoEXT(_parentObjects, _s300->sType, _s300->pNext, _s300->sampleLocationsPerPixel,
                                           _s300->sampleLocationGridSize, _s300->sampleLocationsCount, _s300->pSampleLocations);
    return skip;
}
bool ExplicitValidation::ValidateSubpassSampleLocationsEXT(const LogObjectList &_parentObjects, const uint32_t subpassIndex,
                                                           const VkSampleLocationsInfoEXT sampleLocationsInfo) const {
    bool skip = false;
    const auto _s301 = &sampleLocationsInfo;
    skip |= ValidateSampleLocationsInfoEXT(_parentObjects, _s301->sType, _s301->pNext, _s301->sampleLocationsPerPixel,
                                           _s301->sampleLocationGridSize, _s301->sampleLocationsCount, _s301->pSampleLocations);
    return skip;
}
bool ExplicitValidation::ValidateRenderPassSampleLocationsBeginInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const uint32_t attachmentInitialSampleLocationsCount, const VkAttachmentSampleLocationsEXT *pAttachmentInitialSampleLocations,
    const uint32_t postSubpassSampleLocationsCount, const VkSubpassSampleLocationsEXT *pPostSubpassSampleLocations) const {
    bool skip = false;
    if (pAttachmentInitialSampleLocations != nullptr) {
        for (uint32_t _i302 = 0; _i302 < attachmentInitialSampleLocationsCount; ++_i302) {
            const auto _s303 = &pAttachmentInitialSampleLocations[_i302];
            skip |= ValidateAttachmentSampleLocationsEXT(_parentObjects, _s303->attachmentIndex, _s303->sampleLocationsInfo);
        }
    }
    if (pPostSubpassSampleLocations != nullptr) {
        for (uint32_t _i304 = 0; _i304 < postSubpassSampleLocationsCount; ++_i304) {
            const auto _s305 = &pPostSubpassSampleLocations[_i304];
            skip |= ValidateSubpassSampleLocationsEXT(_parentObjects, _s305->subpassIndex, _s305->sampleLocationsInfo);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineSampleLocationsStateCreateInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 sampleLocationsEnable,
    const VkSampleLocationsInfoEXT sampleLocationsInfo) const {
    bool skip = false;
    const auto _s306 = &sampleLocationsInfo;
    skip |= ValidateSampleLocationsInfoEXT(_parentObjects, _s306->sType, _s306->pNext, _s306->sampleLocationsPerPixel,
                                           _s306->sampleLocationGridSize, _s306->sampleLocationsCount, _s306->pSampleLocations);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceSampleLocationsPropertiesEXT(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const VkSampleCountFlags sampleLocationSampleCounts,
                                                                            const VkExtent2D maxSampleLocationGridSize,
                                                                            const float sampleLocationCoordinateRange[2],
                                                                            const uint32_t sampleLocationSubPixelBits,
                                                                            const VkBool32 variableSampleLocations) const {
    bool skip = false;
    const auto _s307 = &maxSampleLocationGridSize;
    skip |= ValidateExtent2D(_parentObjects, _s307->width, _s307->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMultisamplePropertiesEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const VkExtent2D maxSampleLocationGridSize) const {
    bool skip = false;
    const auto _s308 = &maxSampleLocationGridSize;
    skip |= ValidateExtent2D(_parentObjects, _s308->width, _s308->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceBlendOperationAdvancedFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 advancedBlendCoherentOperations) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceBlendOperationAdvancedPropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const uint32_t advancedBlendMaxColorAttachments, const VkBool32 advancedBlendIndependentBlend,
    const VkBool32 advancedBlendNonPremultipliedSrcColor, const VkBool32 advancedBlendNonPremultipliedDstColor,
    const VkBool32 advancedBlendCorrelatedOverlap, const VkBool32 advancedBlendAllOperations) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineColorBlendAdvancedStateCreateInfoEXT(const LogObjectList &_parentObjects,
                                                                              const VkStructureType sType, const void *pNext,
                                                                              const VkBool32 srcPremultiplied,
                                                                              const VkBool32 dstPremultiplied,
                                                                              const VkBlendOverlapEXT blendOverlap) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineCoverageToColorStateCreateInfoNV(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkPipelineCoverageToColorStateCreateFlagsNV flags,
                                                                          const VkBool32 coverageToColorEnable,
                                                                          const uint32_t coverageToColorLocation) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineCoverageModulationStateCreateInfoNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkPipelineCoverageModulationStateCreateFlagsNV flags, const VkCoverageModulationModeNV coverageModulationMode,
    const VkBool32 coverageModulationTableEnable, const uint32_t coverageModulationTableCount,
    const float *pCoverageModulationTable) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderSMBuiltinsPropertiesNV(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const uint32_t shaderSMCount,
                                                                            const uint32_t shaderWarpsPerSM) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderSMBuiltinsFeaturesNV(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkBool32 shaderSMBuiltins) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDrmFormatModifierPropertiesEXT(const LogObjectList &_parentObjects,
                                                                const uint64_t drmFormatModifier,
                                                                const uint32_t drmFormatModifierPlaneCount,
                                                                const VkFormatFeatureFlags drmFormatModifierTilingFeatures) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateDrmFormatModifierPropertiesListEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t drmFormatModifierCount,
    const VkDrmFormatModifierPropertiesEXT *pDrmFormatModifierProperties) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceImageDrmFormatModifierInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint64_t drmFormatModifier,
    const VkSharingMode sharingMode, const uint32_t queueFamilyIndexCount, const uint32_t *pQueueFamilyIndices) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageDrmFormatModifierListCreateInfoEXT(const LogObjectList &_parentObjects,
                                                                         const VkStructureType sType, const void *pNext,
                                                                         const uint32_t drmFormatModifierCount,
                                                                         const uint64_t *pDrmFormatModifiers) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageDrmFormatModifierExplicitCreateInfoEXT(const LogObjectList &_parentObjects,
                                                                             const VkStructureType sType, const void *pNext,
                                                                             const uint64_t drmFormatModifier,
                                                                             const uint32_t drmFormatModifierPlaneCount,
                                                                             const VkSubresourceLayout *pPlaneLayouts) const {
    bool skip = false;
    if (pPlaneLayouts != nullptr) {
        for (uint32_t _i309 = 0; _i309 < drmFormatModifierPlaneCount; ++_i309) {
            const auto _s310 = &pPlaneLayouts[_i309];
            skip |= ValidateSubresourceLayout(_parentObjects, _s310->offset, _s310->size, _s310->rowPitch, _s310->arrayPitch,
                                              _s310->depthPitch);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageDrmFormatModifierPropertiesEXT(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const uint64_t drmFormatModifier) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDrmFormatModifierProperties2EXT(
    const LogObjectList &_parentObjects, const uint64_t drmFormatModifier, const uint32_t drmFormatModifierPlaneCount,
    const VkFormatFeatureFlags2 drmFormatModifierTilingFeatures) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateDrmFormatModifierPropertiesList2EXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t drmFormatModifierCount,
    const VkDrmFormatModifierProperties2EXT *pDrmFormatModifierProperties) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateValidationCacheCreateInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const VkValidationCacheCreateFlagsEXT flags,
                                                              const size_t initialDataSize, const void *pInitialData) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateShaderModuleValidationCacheCreateInfoEXT(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkValidationCacheEXT validationCache) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateShadingRatePaletteNV(const LogObjectList &_parentObjects,
                                                      const uint32_t shadingRatePaletteEntryCount,
                                                      const VkShadingRatePaletteEntryNV *pShadingRatePaletteEntries) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePipelineViewportShadingRateImageStateCreateInfoNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 shadingRateImageEnable,
    const uint32_t viewportCount, const VkShadingRatePaletteNV *pShadingRatePalettes) const {
    bool skip = false;
    if (pShadingRatePalettes != nullptr) {
        for (uint32_t _i311 = 0; _i311 < viewportCount; ++_i311) {
            const auto _s312 = &pShadingRatePalettes[_i311];
            skip |= ValidateShadingRatePaletteNV(_parentObjects, _s312->shadingRatePaletteEntryCount,
                                                 _s312->pShadingRatePaletteEntries);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShadingRateImageFeaturesNV(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkBool32 shadingRateImage,
                                                                          const VkBool32 shadingRateCoarseSampleOrder) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShadingRateImagePropertiesNV(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const VkExtent2D shadingRateTexelSize,
                                                                            const uint32_t shadingRatePaletteSize,
                                                                            const uint32_t shadingRateMaxCoarseSamples) const {
    bool skip = false;
    const auto _s313 = &shadingRateTexelSize;
    skip |= ValidateExtent2D(_parentObjects, _s313->width, _s313->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCoarseSampleLocationNV(const LogObjectList &_parentObjects, const uint32_t pixelX,
                                                        const uint32_t pixelY, const uint32_t sample) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateCoarseSampleOrderCustomNV(const LogObjectList &_parentObjects,
                                                           const VkShadingRatePaletteEntryNV shadingRate,
                                                           const uint32_t sampleCount, const uint32_t sampleLocationCount,
                                                           const VkCoarseSampleLocationNV *pSampleLocations) const {
    bool skip = false;
    if (pSampleLocations != nullptr) {
        for (uint32_t _i314 = 0; _i314 < sampleLocationCount; ++_i314) {
            const auto _s315 = &pSampleLocations[_i314];
            skip |= ValidateCoarseSampleLocationNV(_parentObjects, _s315->pixelX, _s315->pixelY, _s315->sample);
        }
    }
    return skip;
}
bool ExplicitValidation::ValidatePipelineViewportCoarseSampleOrderStateCreateInfoNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkCoarseSampleOrderTypeNV sampleOrderType, const uint32_t customSampleOrderCount,
    const VkCoarseSampleOrderCustomNV *pCustomSampleOrders) const {
    bool skip = false;
    if (pCustomSampleOrders != nullptr) {
        for (uint32_t _i316 = 0; _i316 < customSampleOrderCount; ++_i316) {
            const auto _s317 = &pCustomSampleOrders[_i316];
            skip |= ValidateCoarseSampleOrderCustomNV(_parentObjects, _s317->shadingRate, _s317->sampleCount,
                                                      _s317->sampleLocationCount, _s317->pSampleLocations);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRayTracingShaderGroupCreateInfoNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const VkRayTracingShaderGroupTypeKHR type,
                                                                   const uint32_t generalShader, const uint32_t closestHitShader,
                                                                   const uint32_t anyHitShader,
                                                                   const uint32_t intersectionShader) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRayTracingPipelineCreateInfoNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkPipelineCreateFlags flags,
    const uint32_t stageCount, const VkPipelineShaderStageCreateInfo *pStages, const uint32_t groupCount,
    const VkRayTracingShaderGroupCreateInfoNV *pGroups, const uint32_t maxRecursionDepth, const VkPipelineLayout layout,
    const VkPipeline basePipelineHandle, const int32_t basePipelineIndex) const {
    bool skip = false;
    if (pStages != nullptr) {
        for (uint32_t _i318 = 0; _i318 < stageCount; ++_i318) {
            const auto _s319 = &pStages[_i318];
            skip |= ValidatePipelineShaderStageCreateInfo(_parentObjects, _s319->sType, _s319->pNext, _s319->flags, _s319->stage,
                                                          _s319->module, _s319->pName, _s319->pSpecializationInfo);
        }
    }
    if (pGroups != nullptr) {
        for (uint32_t _i320 = 0; _i320 < groupCount; ++_i320) {
            const auto _s321 = &pGroups[_i320];
            skip |= ValidateRayTracingShaderGroupCreateInfoNV(_parentObjects, _s321->sType, _s321->pNext, _s321->type,
                                                              _s321->generalShader, _s321->closestHitShader, _s321->anyHitShader,
                                                              _s321->intersectionShader);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateGeometryTrianglesNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                     const void *pNext, const VkBuffer vertexData, const VkDeviceSize vertexOffset,
                                                     const uint32_t vertexCount, const VkDeviceSize vertexStride,
                                                     const VkFormat vertexFormat, const VkBuffer indexData,
                                                     const VkDeviceSize indexOffset, const uint32_t indexCount,
                                                     const VkIndexType indexType, const VkBuffer transformData,
                                                     const VkDeviceSize transformOffset) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateGeometryAABBNV(const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
                                                const VkBuffer aabbData, const uint32_t numAABBs, const uint32_t stride,
                                                const VkDeviceSize offset) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateGeometryDataNV(const LogObjectList &_parentObjects, const VkGeometryTrianglesNV triangles,
                                                const VkGeometryAABBNV aabbs) const {
    bool skip = false;
    const auto _s322 = &triangles;
    skip |= ValidateGeometryTrianglesNV(_parentObjects, _s322->sType, _s322->pNext, _s322->vertexData, _s322->vertexOffset,
                                        _s322->vertexCount, _s322->vertexStride, _s322->vertexFormat, _s322->indexData,
                                        _s322->indexOffset, _s322->indexCount, _s322->indexType, _s322->transformData,
                                        _s322->transformOffset);
    const auto _s323 = &aabbs;
    skip |= ValidateGeometryAABBNV(_parentObjects, _s323->sType, _s323->pNext, _s323->aabbData, _s323->numAABBs, _s323->stride,
                                   _s323->offset);
    return skip;
}
bool ExplicitValidation::ValidateGeometryNV(const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
                                            const VkGeometryTypeKHR geometryType, const VkGeometryDataNV geometry,
                                            const VkGeometryFlagsKHR flags) const {
    bool skip = false;
    const auto _s324 = &geometry;
    skip |= ValidateGeometryDataNV(_parentObjects, _s324->triangles, _s324->aabbs);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureInfoNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const VkAccelerationStructureTypeNV type,
                                                             const VkBuildAccelerationStructureFlagsNV flags,
                                                             const uint32_t instanceCount, const uint32_t geometryCount,
                                                             const VkGeometryNV *pGeometries) const {
    bool skip = false;
    if (pGeometries != nullptr) {
        for (uint32_t _i325 = 0; _i325 < geometryCount; ++_i325) {
            const auto _s326 = &pGeometries[_i325];
            skip |=
                ValidateGeometryNV(_parentObjects, _s326->sType, _s326->pNext, _s326->geometryType, _s326->geometry, _s326->flags);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureCreateInfoNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const VkDeviceSize compactedSize,
                                                                   const VkAccelerationStructureInfoNV info) const {
    bool skip = false;
    const auto _s327 = &info;
    skip |= ValidateAccelerationStructureInfoNV(_parentObjects, _s327->sType, _s327->pNext, _s327->type, _s327->flags,
                                                _s327->instanceCount, _s327->geometryCount, _s327->pGeometries);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBindAccelerationStructureMemoryInfoNV(const LogObjectList &_parentObjects,
                                                                       const VkStructureType sType, const void *pNext,
                                                                       const VkAccelerationStructureNV accelerationStructure,
                                                                       const VkDeviceMemory memory, const VkDeviceSize memoryOffset,
                                                                       const uint32_t deviceIndexCount,
                                                                       const uint32_t *pDeviceIndices) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateWriteDescriptorSetAccelerationStructureNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t accelerationStructureCount,
    const VkAccelerationStructureNV *pAccelerationStructures) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureMemoryRequirementsInfoNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkAccelerationStructureMemoryRequirementsTypeNV type, const VkAccelerationStructureNV accelerationStructure) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceRayTracingPropertiesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t shaderGroupHandleSize,
    const uint32_t maxRecursionDepth, const uint32_t maxShaderGroupStride, const uint32_t shaderGroupBaseAlignment,
    const uint64_t maxGeometryCount, const uint64_t maxInstanceCount, const uint64_t maxTriangleCount,
    const uint32_t maxDescriptorSetAccelerationStructures) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateTransformMatrixKHR(const LogObjectList &_parentObjects, const float matrix[3][4]) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateAabbPositionsKHR(const LogObjectList &_parentObjects, const float minX, const float minY,
                                                  const float minZ, const float maxX, const float maxY, const float maxZ) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureInstanceKHR(const LogObjectList &_parentObjects,
                                                                  const VkTransformMatrixKHR transform,
                                                                  const uint32_t instanceCustomIndex, const uint32_t mask,
                                                                  const uint32_t instanceShaderBindingTableRecordOffset,
                                                                  const VkGeometryInstanceFlagsKHR flags,
                                                                  const uint64_t accelerationStructureReference) const {
    bool skip = false;
    const auto _s328 = &transform;
    skip |= ValidateTransformMatrixKHR(_parentObjects, _s328->matrix);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceRepresentativeFragmentTestFeaturesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 representativeFragmentTest) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineRepresentativeFragmentTestStateCreateInfoNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 representativeFragmentTestEnable) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceImageViewImageFormatInfoEXT(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const VkImageViewType imageViewType) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateFilterCubicImageViewImageFormatPropertiesEXT(const LogObjectList &_parentObjects,
                                                                              const VkStructureType sType, const void *pNext,
                                                                              const VkBool32 filterCubic,
                                                                              const VkBool32 filterCubicMinmax) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImportMemoryHostPointerInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext,
                                                                const VkExternalMemoryHandleTypeFlagBits handleType,
                                                                const void *pHostPointer) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMemoryHostPointerPropertiesEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const uint32_t memoryTypeBits) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceExternalMemoryHostPropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkDeviceSize minImportedHostPointerAlignment) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineCompilerControlCreateInfoAMD(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkPipelineCompilerControlFlagsAMD compilerControlFlags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCalibratedTimestampInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                            const void *pNext, const VkTimeDomainEXT timeDomain) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderCorePropertiesAMD(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t shaderEngineCount,
    const uint32_t shaderArraysPerEngineCount, const uint32_t computeUnitsPerShaderArray, const uint32_t simdPerComputeUnit,
    const uint32_t wavefrontsPerSimd, const uint32_t wavefrontSize, const uint32_t sgprsPerSimd, const uint32_t minSgprAllocation,
    const uint32_t maxSgprAllocation, const uint32_t sgprAllocationGranularity, const uint32_t vgprsPerSimd,
    const uint32_t minVgprAllocation, const uint32_t maxVgprAllocation, const uint32_t vgprAllocationGranularity) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceMemoryOverallocationCreateInfoAMD(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkMemoryOverallocationBehaviorAMD overallocationBehavior) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceVertexAttributeDivisorPropertiesEXT(const LogObjectList &_parentObjects,
                                                                                   const VkStructureType sType, const void *pNext,
                                                                                   const uint32_t maxVertexAttribDivisor) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVertexInputBindingDivisorDescriptionEXT(const LogObjectList &_parentObjects,
                                                                         const uint32_t binding, const uint32_t divisor) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePipelineVertexInputDivisorStateCreateInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t vertexBindingDivisorCount,
    const VkVertexInputBindingDivisorDescriptionEXT *pVertexBindingDivisors) const {
    bool skip = false;
    if (pVertexBindingDivisors != nullptr) {
        for (uint32_t _i329 = 0; _i329 < vertexBindingDivisorCount; ++_i329) {
            const auto _s330 = &pVertexBindingDivisors[_i329];
            skip |= ValidateVertexInputBindingDivisorDescriptionEXT(_parentObjects, _s330->binding, _s330->divisor);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceVertexAttributeDivisorFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 vertexAttributeInstanceRateDivisor, const VkBool32 vertexAttributeInstanceRateZeroDivisor) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_USE_PLATFORM_GGP
bool ExplicitValidation::ValidatePresentFrameTokenGGP(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                      const void *pNext, const GgpFrameToken frameToken) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_GGP
bool ExplicitValidation::ValidatePhysicalDeviceComputeShaderDerivativesFeaturesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 computeDerivativeGroupQuads,
    const VkBool32 computeDerivativeGroupLinear) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMeshShaderFeaturesNV(const LogObjectList &_parentObjects,
                                                                    const VkStructureType sType, const void *pNext,
                                                                    const VkBool32 taskShader, const VkBool32 meshShader) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMeshShaderPropertiesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t maxDrawMeshTasksCount,
    const uint32_t maxTaskWorkGroupInvocations, const uint32_t maxTaskWorkGroupSize[3], const uint32_t maxTaskTotalMemorySize,
    const uint32_t maxTaskOutputCount, const uint32_t maxMeshWorkGroupInvocations, const uint32_t maxMeshWorkGroupSize[3],
    const uint32_t maxMeshTotalMemorySize, const uint32_t maxMeshOutputVertices, const uint32_t maxMeshOutputPrimitives,
    const uint32_t maxMeshMultiviewViewCount, const uint32_t meshOutputPerVertexGranularity,
    const uint32_t meshOutputPerPrimitiveGranularity) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDrawMeshTasksIndirectCommandNV(const LogObjectList &_parentObjects, const uint32_t taskCount,
                                                                const uint32_t firstTask) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderImageFootprintFeaturesNV(const LogObjectList &_parentObjects,
                                                                              const VkStructureType sType, const void *pNext,
                                                                              const VkBool32 imageFootprint) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineViewportExclusiveScissorStateCreateInfoNV(const LogObjectList &_parentObjects,
                                                                                   const VkStructureType sType, const void *pNext,
                                                                                   const uint32_t exclusiveScissorCount,
                                                                                   const VkRect2D *pExclusiveScissors) const {
    bool skip = false;
    if (pExclusiveScissors != nullptr) {
        for (uint32_t _i331 = 0; _i331 < exclusiveScissorCount; ++_i331) {
            const auto _s332 = &pExclusiveScissors[_i331];
            skip |= ValidateRect2D(_parentObjects, _s332->offset, _s332->extent);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceExclusiveScissorFeaturesNV(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkBool32 exclusiveScissor) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateQueueFamilyCheckpointPropertiesNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext,
                                                                   const VkPipelineStageFlags checkpointExecutionStageMask) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCheckpointDataNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                  const void *pNext, const VkPipelineStageFlagBits stage,
                                                  const void *pCheckpointMarker) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(const LogObjectList &_parentObjects,
                                                                                    const VkStructureType sType, const void *pNext,
                                                                                    const VkBool32 shaderIntegerFunctions2) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePerformanceValueDataINTEL(const LogObjectList &_parentObjects, const uint32_t value32,
                                                           const uint64_t value64, const float valueFloat, const VkBool32 valueBool,
                                                           const char *valueString) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePerformanceValueINTEL(const LogObjectList &_parentObjects, const VkPerformanceValueTypeINTEL type,
                                                       const VkPerformanceValueDataINTEL data) const {
    bool skip = false;
    const auto _s333 = &data;
    skip |= ValidatePerformanceValueDataINTEL(_parentObjects, _s333->value32, _s333->value64, _s333->valueFloat, _s333->valueBool,
                                              _s333->valueString);
    return skip;
}
bool ExplicitValidation::ValidateInitializePerformanceApiInfoINTEL(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const void *pUserData) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateQueryPoolPerformanceQueryCreateInfoINTEL(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkQueryPoolSamplingModeINTEL performanceCountersSampling) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePerformanceMarkerInfoINTEL(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                            const void *pNext, const uint64_t marker) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePerformanceStreamMarkerInfoINTEL(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                  const void *pNext, const uint32_t marker) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePerformanceOverrideInfoINTEL(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const VkPerformanceOverrideTypeINTEL type,
                                                              const VkBool32 enable, const uint64_t parameter) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePerformanceConfigurationAcquireInfoINTEL(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkPerformanceConfigurationTypeINTEL type) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePCIBusInfoPropertiesEXT(const LogObjectList &_parentObjects,
                                                                       const VkStructureType sType, const void *pNext,
                                                                       const uint32_t pciDomain, const uint32_t pciBus,
                                                                       const uint32_t pciDevice, const uint32_t pciFunction) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDisplayNativeHdrSurfaceCapabilitiesAMD(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkBool32 localDimmingSupport) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSwapchainDisplayNativeHdrCreateInfoAMD(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkBool32 localDimmingEnable) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::ValidateImagePipeSurfaceCreateInfoFUCHSIA(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext,
                                                                   const VkImagePipeSurfaceCreateFlagsFUCHSIA flags,
                                                                   const zx_handle_t imagePipeHandle) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::ValidateMetalSurfaceCreateInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const VkMetalSurfaceCreateFlagsEXT flags,
                                                           const CAMetalLayer *pLayer) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::ValidatePhysicalDeviceFragmentDensityMapFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 fragmentDensityMap,
    const VkBool32 fragmentDensityMapDynamic, const VkBool32 fragmentDensityMapNonSubsampledImages) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceFragmentDensityMapPropertiesEXT(const LogObjectList &_parentObjects,
                                                                               const VkStructureType sType, const void *pNext,
                                                                               const VkExtent2D minFragmentDensityTexelSize,
                                                                               const VkExtent2D maxFragmentDensityTexelSize,
                                                                               const VkBool32 fragmentDensityInvocations) const {
    bool skip = false;
    const auto _s334 = &minFragmentDensityTexelSize;
    skip |= ValidateExtent2D(_parentObjects, _s334->width, _s334->height);
    const auto _s335 = &maxFragmentDensityTexelSize;
    skip |= ValidateExtent2D(_parentObjects, _s335->width, _s335->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRenderPassFragmentDensityMapCreateInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkAttachmentReference fragmentDensityMapAttachment) const {
    bool skip = false;
    const auto _s336 = &fragmentDensityMapAttachment;
    skip |= ValidateAttachmentReference(_parentObjects, _s336->attachment, _s336->layout);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderCoreProperties2AMD(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkShaderCorePropertiesFlagsAMD shaderCoreFeatures,
                                                                        const uint32_t activeComputeUnitCount) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceCoherentMemoryFeaturesAMD(const LogObjectList &_parentObjects,
                                                                         const VkStructureType sType, const void *pNext,
                                                                         const VkBool32 deviceCoherentMemory) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderImageAtomicInt64FeaturesEXT(const LogObjectList &_parentObjects,
                                                                                 const VkStructureType sType, const void *pNext,
                                                                                 const VkBool32 shaderImageInt64Atomics,
                                                                                 const VkBool32 sparseImageInt64Atomics) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMemoryBudgetPropertiesEXT(const LogObjectList &_parentObjects,
                                                                         const VkStructureType sType, const void *pNext,
                                                                         const VkDeviceSize heapBudget[VK_MAX_MEMORY_HEAPS],
                                                                         const VkDeviceSize heapUsage[VK_MAX_MEMORY_HEAPS]) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMemoryPriorityFeaturesEXT(const LogObjectList &_parentObjects,
                                                                         const VkStructureType sType, const void *pNext,
                                                                         const VkBool32 memoryPriority) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMemoryPriorityAllocateInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const float priority) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 dedicatedAllocationImageAliasing) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceBufferDeviceAddressFeaturesEXT(const LogObjectList &_parentObjects,
                                                                              const VkStructureType sType, const void *pNext,
                                                                              const VkBool32 bufferDeviceAddress,
                                                                              const VkBool32 bufferDeviceAddressCaptureReplay,
                                                                              const VkBool32 bufferDeviceAddressMultiDevice) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBufferDeviceAddressCreateInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                  const void *pNext, const VkDeviceAddress deviceAddress) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateValidationFeaturesEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const uint32_t enabledValidationFeatureCount,
                                                       const VkValidationFeatureEnableEXT *pEnabledValidationFeatures,
                                                       const uint32_t disabledValidationFeatureCount,
                                                       const VkValidationFeatureDisableEXT *pDisabledValidationFeatures) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCooperativeMatrixPropertiesNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const uint32_t MSize, const uint32_t NSize,
                                                               const uint32_t KSize, const VkComponentTypeNV AType,
                                                               const VkComponentTypeNV BType, const VkComponentTypeNV CType,
                                                               const VkComponentTypeNV DType, const VkScopeNV scope) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceCooperativeMatrixFeaturesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 cooperativeMatrix,
    const VkBool32 cooperativeMatrixRobustBufferAccess) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceCooperativeMatrixPropertiesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkShaderStageFlags cooperativeMatrixSupportedStages) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceCoverageReductionModeFeaturesNV(const LogObjectList &_parentObjects,
                                                                               const VkStructureType sType, const void *pNext,
                                                                               const VkBool32 coverageReductionMode) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineCoverageReductionStateCreateInfoNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkPipelineCoverageReductionStateCreateFlagsNV flags, const VkCoverageReductionModeNV coverageReductionMode) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateFramebufferMixedSamplesCombinationNV(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const VkCoverageReductionModeNV coverageReductionMode,
                                                                      const VkSampleCountFlagBits rasterizationSamples,
                                                                      const VkSampleCountFlags depthStencilSamples,
                                                                      const VkSampleCountFlags colorSamples) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceFragmentShaderInterlockFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 fragmentShaderSampleInterlock, const VkBool32 fragmentShaderPixelInterlock,
    const VkBool32 fragmentShaderShadingRateInterlock) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceYcbcrImageArraysFeaturesEXT(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const VkBool32 ycbcrImageArrays) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceProvokingVertexFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 provokingVertexLast,
    const VkBool32 transformFeedbackPreservesProvokingVertex) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceProvokingVertexPropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 provokingVertexModePerPipeline, const VkBool32 transformFeedbackPreservesTriangleFanProvokingVertex) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineRasterizationProvokingVertexStateCreateInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkProvokingVertexModeEXT provokingVertexMode) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateSurfaceFullScreenExclusiveInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext,
                                                                   const VkFullScreenExclusiveEXT fullScreenExclusive) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateSurfaceCapabilitiesFullScreenExclusiveEXT(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const VkBool32 fullScreenExclusiveSupported) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateSurfaceFullScreenExclusiveWin32InfoEXT(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const HMONITOR hmonitor) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_WIN32_KHR
bool ExplicitValidation::ValidateHeadlessSurfaceCreateInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext,
                                                              const VkHeadlessSurfaceCreateFlagsEXT flags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceLineRasterizationFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 rectangularLines,
    const VkBool32 bresenhamLines, const VkBool32 smoothLines, const VkBool32 stippledRectangularLines,
    const VkBool32 stippledBresenhamLines, const VkBool32 stippledSmoothLines) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceLineRasterizationPropertiesEXT(const LogObjectList &_parentObjects,
                                                                              const VkStructureType sType, const void *pNext,
                                                                              const uint32_t lineSubPixelPrecisionBits) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineRasterizationLineStateCreateInfoEXT(const LogObjectList &_parentObjects,
                                                                             const VkStructureType sType, const void *pNext,
                                                                             const VkLineRasterizationModeEXT lineRasterizationMode,
                                                                             const VkBool32 stippledLineEnable,
                                                                             const uint32_t lineStippleFactor,
                                                                             const uint16_t lineStipplePattern) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderAtomicFloatFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 shaderBufferFloat32Atomics,
    const VkBool32 shaderBufferFloat32AtomicAdd, const VkBool32 shaderBufferFloat64Atomics,
    const VkBool32 shaderBufferFloat64AtomicAdd, const VkBool32 shaderSharedFloat32Atomics,
    const VkBool32 shaderSharedFloat32AtomicAdd, const VkBool32 shaderSharedFloat64Atomics,
    const VkBool32 shaderSharedFloat64AtomicAdd, const VkBool32 shaderImageFloat32Atomics,
    const VkBool32 shaderImageFloat32AtomicAdd, const VkBool32 sparseImageFloat32Atomics,
    const VkBool32 sparseImageFloat32AtomicAdd) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceIndexTypeUint8FeaturesEXT(const LogObjectList &_parentObjects,
                                                                         const VkStructureType sType, const void *pNext,
                                                                         const VkBool32 indexTypeUint8) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceExtendedDynamicStateFeaturesEXT(const LogObjectList &_parentObjects,
                                                                               const VkStructureType sType, const void *pNext,
                                                                               const VkBool32 extendedDynamicState) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceHostImageCopyFeaturesEXT(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkBool32 hostImageCopy) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceHostImageCopyPropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t copySrcLayoutCount,
    const VkImageLayout *pCopySrcLayouts, const uint32_t copyDstLayoutCount, const VkImageLayout *pCopyDstLayouts,
    const uint8_t optimalTilingLayoutUUID[VK_UUID_SIZE], const VkBool32 identicalMemoryTypeRequirements) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMemoryToImageCopyEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                      const void *pNext, const void *pHostPointer, const uint32_t memoryRowLength,
                                                      const uint32_t memoryImageHeight,
                                                      const VkImageSubresourceLayers imageSubresource, const VkOffset3D imageOffset,
                                                      const VkExtent3D imageExtent) const {
    bool skip = false;
    const auto _s337 = &imageSubresource;
    skip |= ValidateImageSubresourceLayers(_parentObjects, _s337->aspectMask, _s337->mipLevel, _s337->baseArrayLayer,
                                           _s337->layerCount);
    const auto _s338 = &imageOffset;
    skip |= ValidateOffset3D(_parentObjects, _s338->x, _s338->y, _s338->z);
    const auto _s339 = &imageExtent;
    skip |= ValidateExtent3D(_parentObjects, _s339->width, _s339->height, _s339->depth);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageToMemoryCopyEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                      const void *pNext, const void *pHostPointer, const uint32_t memoryRowLength,
                                                      const uint32_t memoryImageHeight,
                                                      const VkImageSubresourceLayers imageSubresource, const VkOffset3D imageOffset,
                                                      const VkExtent3D imageExtent) const {
    bool skip = false;
    const auto _s340 = &imageSubresource;
    skip |= ValidateImageSubresourceLayers(_parentObjects, _s340->aspectMask, _s340->mipLevel, _s340->baseArrayLayer,
                                           _s340->layerCount);
    const auto _s341 = &imageOffset;
    skip |= ValidateOffset3D(_parentObjects, _s341->x, _s341->y, _s341->z);
    const auto _s342 = &imageExtent;
    skip |= ValidateExtent3D(_parentObjects, _s342->width, _s342->height, _s342->depth);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCopyMemoryToImageInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const VkHostImageCopyFlagsEXT flags,
                                                          const VkImage dstImage, const VkImageLayout dstImageLayout,
                                                          const uint32_t regionCount,
                                                          const VkMemoryToImageCopyEXT *pRegions) const {
    bool skip = false;
    if (pRegions != nullptr) {
        for (uint32_t _i343 = 0; _i343 < regionCount; ++_i343) {
            const auto _s344 = &pRegions[_i343];
            skip |= ValidateMemoryToImageCopyEXT(_parentObjects, _s344->sType, _s344->pNext, _s344->pHostPointer,
                                                 _s344->memoryRowLength, _s344->memoryImageHeight, _s344->imageSubresource,
                                                 _s344->imageOffset, _s344->imageExtent);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCopyImageToMemoryInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const VkHostImageCopyFlagsEXT flags,
                                                          const VkImage srcImage, const VkImageLayout srcImageLayout,
                                                          const uint32_t regionCount,
                                                          const VkImageToMemoryCopyEXT *pRegions) const {
    bool skip = false;
    if (pRegions != nullptr) {
        for (uint32_t _i345 = 0; _i345 < regionCount; ++_i345) {
            const auto _s346 = &pRegions[_i345];
            skip |= ValidateImageToMemoryCopyEXT(_parentObjects, _s346->sType, _s346->pNext, _s346->pHostPointer,
                                                 _s346->memoryRowLength, _s346->memoryImageHeight, _s346->imageSubresource,
                                                 _s346->imageOffset, _s346->imageExtent);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCopyImageToImageInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext, const VkHostImageCopyFlagsEXT flags,
                                                         const VkImage srcImage, const VkImageLayout srcImageLayout,
                                                         const VkImage dstImage, const VkImageLayout dstImageLayout,
                                                         const uint32_t regionCount, const VkImageCopy2 *pRegions) const {
    bool skip = false;
    if (pRegions != nullptr) {
        for (uint32_t _i347 = 0; _i347 < regionCount; ++_i347) {
            const auto _s348 = &pRegions[_i347];
            skip |= ValidateImageCopy2(_parentObjects, _s348->sType, _s348->pNext, _s348->srcSubresource, _s348->srcOffset,
                                       _s348->dstSubresource, _s348->dstOffset, _s348->extent);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateHostImageLayoutTransitionInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                  const void *pNext, const VkImage image,
                                                                  const VkImageLayout oldLayout, const VkImageLayout newLayout,
                                                                  const VkImageSubresourceRange subresourceRange) const {
    bool skip = false;
    const auto _s349 = &subresourceRange;
    skip |= ValidateImageSubresourceRange(_parentObjects, _s349->aspectMask, _s349->baseMipLevel, _s349->levelCount,
                                          _s349->baseArrayLayer, _s349->layerCount);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSubresourceHostMemcpySizeEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const VkDeviceSize size) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateHostImageCopyDevicePerformanceQueryEXT(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkBool32 optimalDeviceAccess,
                                                                        const VkBool32 identicalMemoryLayout) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderAtomicFloat2FeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 shaderBufferFloat16Atomics,
    const VkBool32 shaderBufferFloat16AtomicAdd, const VkBool32 shaderBufferFloat16AtomicMinMax,
    const VkBool32 shaderBufferFloat32AtomicMinMax, const VkBool32 shaderBufferFloat64AtomicMinMax,
    const VkBool32 shaderSharedFloat16Atomics, const VkBool32 shaderSharedFloat16AtomicAdd,
    const VkBool32 shaderSharedFloat16AtomicMinMax, const VkBool32 shaderSharedFloat32AtomicMinMax,
    const VkBool32 shaderSharedFloat64AtomicMinMax, const VkBool32 shaderImageFloat32AtomicMinMax,
    const VkBool32 sparseImageFloat32AtomicMinMax) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSurfacePresentModeEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const VkPresentModeKHR presentMode) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSurfacePresentScalingCapabilitiesEXT(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const VkPresentScalingFlagsEXT supportedPresentScaling,
                                                                      const VkPresentGravityFlagsEXT supportedPresentGravityX,
                                                                      const VkPresentGravityFlagsEXT supportedPresentGravityY,
                                                                      const VkExtent2D minScaledImageExtent,
                                                                      const VkExtent2D maxScaledImageExtent) const {
    bool skip = false;
    const auto _s350 = &minScaledImageExtent;
    skip |= ValidateExtent2D(_parentObjects, _s350->width, _s350->height);
    const auto _s351 = &maxScaledImageExtent;
    skip |= ValidateExtent2D(_parentObjects, _s351->width, _s351->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSurfacePresentModeCompatibilityEXT(const LogObjectList &_parentObjects,
                                                                    const VkStructureType sType, const void *pNext,
                                                                    const uint32_t presentModeCount,
                                                                    const VkPresentModeKHR *pPresentModes) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceSwapchainMaintenance1FeaturesEXT(const LogObjectList &_parentObjects,
                                                                                const VkStructureType sType, const void *pNext,
                                                                                const VkBool32 swapchainMaintenance1) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSwapchainPresentFenceInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const uint32_t swapchainCount,
                                                              const VkFence *pFences) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSwapchainPresentModesCreateInfoEXT(const LogObjectList &_parentObjects,
                                                                    const VkStructureType sType, const void *pNext,
                                                                    const uint32_t presentModeCount,
                                                                    const VkPresentModeKHR *pPresentModes) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSwapchainPresentModeInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const uint32_t swapchainCount,
                                                             const VkPresentModeKHR *pPresentModes) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSwapchainPresentScalingCreateInfoEXT(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const VkPresentScalingFlagsEXT scalingBehavior,
                                                                      const VkPresentGravityFlagsEXT presentGravityX,
                                                                      const VkPresentGravityFlagsEXT presentGravityY) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateReleaseSwapchainImagesInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const VkSwapchainKHR swapchain,
                                                               const uint32_t imageIndexCount,
                                                               const uint32_t *pImageIndices) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDeviceGeneratedCommandsPropertiesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t maxGraphicsShaderGroupCount,
    const uint32_t maxIndirectSequenceCount, const uint32_t maxIndirectCommandsTokenCount,
    const uint32_t maxIndirectCommandsStreamCount, const uint32_t maxIndirectCommandsTokenOffset,
    const uint32_t maxIndirectCommandsStreamStride, const uint32_t minSequencesCountBufferOffsetAlignment,
    const uint32_t minSequencesIndexBufferOffsetAlignment, const uint32_t minIndirectCommandsBufferOffsetAlignment) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDeviceGeneratedCommandsFeaturesNV(const LogObjectList &_parentObjects,
                                                                                 const VkStructureType sType, const void *pNext,
                                                                                 const VkBool32 deviceGeneratedCommands) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateGraphicsShaderGroupCreateInfoNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t stageCount,
    const VkPipelineShaderStageCreateInfo *pStages, const VkPipelineVertexInputStateCreateInfo *pVertexInputState,
    const VkPipelineTessellationStateCreateInfo *pTessellationState) const {
    bool skip = false;
    if (pStages != nullptr) {
        for (uint32_t _i352 = 0; _i352 < stageCount; ++_i352) {
            const auto _s353 = &pStages[_i352];
            skip |= ValidatePipelineShaderStageCreateInfo(_parentObjects, _s353->sType, _s353->pNext, _s353->flags, _s353->stage,
                                                          _s353->module, _s353->pName, _s353->pSpecializationInfo);
        }
    }
    if (pVertexInputState != nullptr) {
        const auto _s354 = pVertexInputState;
        skip |= ValidatePipelineVertexInputStateCreateInfo(
            _parentObjects, _s354->sType, _s354->pNext, _s354->flags, _s354->vertexBindingDescriptionCount,
            _s354->pVertexBindingDescriptions, _s354->vertexAttributeDescriptionCount, _s354->pVertexAttributeDescriptions);
    }
    if (pTessellationState != nullptr) {
        const auto _s355 = pTessellationState;
        skip |= ValidatePipelineTessellationStateCreateInfo(_parentObjects, _s355->sType, _s355->pNext, _s355->flags,
                                                            _s355->patchControlPoints);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateGraphicsPipelineShaderGroupsCreateInfoNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t groupCount,
    const VkGraphicsShaderGroupCreateInfoNV *pGroups, const uint32_t pipelineCount, const VkPipeline *pPipelines) const {
    bool skip = false;
    if (pGroups != nullptr) {
        for (uint32_t _i356 = 0; _i356 < groupCount; ++_i356) {
            const auto _s357 = &pGroups[_i356];
            skip |= ValidateGraphicsShaderGroupCreateInfoNV(_parentObjects, _s357->sType, _s357->pNext, _s357->stageCount,
                                                            _s357->pStages, _s357->pVertexInputState, _s357->pTessellationState);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBindShaderGroupIndirectCommandNV(const LogObjectList &_parentObjects,
                                                                  const uint32_t groupIndex) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateBindIndexBufferIndirectCommandNV(const LogObjectList &_parentObjects,
                                                                  const VkDeviceAddress bufferAddress, const uint32_t size,
                                                                  const VkIndexType indexType) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateBindVertexBufferIndirectCommandNV(const LogObjectList &_parentObjects,
                                                                   const VkDeviceAddress bufferAddress, const uint32_t size,
                                                                   const uint32_t stride) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateSetStateFlagsIndirectCommandNV(const LogObjectList &_parentObjects, const uint32_t data) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateIndirectCommandsStreamNV(const LogObjectList &_parentObjects, const VkBuffer buffer,
                                                          const VkDeviceSize offset) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateIndirectCommandsLayoutTokenNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkIndirectCommandsTokenTypeNV tokenType, const uint32_t stream, const uint32_t offset, const uint32_t vertexBindingUnit,
    const VkBool32 vertexDynamicStride, VkPipelineLayout pushconstantPipelineLayout,
    VkShaderStageFlags pushconstantShaderStageFlags, uint32_t pushconstantOffset, uint32_t pushconstantSize,
    const VkIndirectStateFlagsNV indirectStateFlags, const uint32_t indexTypeCount, const VkIndexType *pIndexTypes,
    const uint32_t *pIndexTypeValues) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateIndirectCommandsLayoutCreateInfoNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkIndirectCommandsLayoutUsageFlagsNV flags, const VkPipelineBindPoint pipelineBindPoint, const uint32_t tokenCount,
    const VkIndirectCommandsLayoutTokenNV *pTokens, const uint32_t streamCount, const uint32_t *pStreamStrides) const {
    bool skip = false;
    if (pTokens != nullptr) {
        for (uint32_t _i358 = 0; _i358 < tokenCount; ++_i358) {
            const auto _s359 = &pTokens[_i358];
            skip |= ValidateIndirectCommandsLayoutTokenNV(
                _parentObjects, _s359->sType, _s359->pNext, _s359->tokenType, _s359->stream, _s359->offset,
                _s359->vertexBindingUnit, _s359->vertexDynamicStride, _s359->pushconstantPipelineLayout,
                _s359->pushconstantShaderStageFlags, _s359->pushconstantOffset, _s359->pushconstantSize, _s359->indirectStateFlags,
                _s359->indexTypeCount, _s359->pIndexTypes, _s359->pIndexTypeValues);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateGeneratedCommandsInfoNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkPipelineBindPoint pipelineBindPoint, const VkPipeline pipeline, const VkIndirectCommandsLayoutNV indirectCommandsLayout,
    const uint32_t streamCount, const VkIndirectCommandsStreamNV *pStreams, const uint32_t sequencesCount,
    const VkBuffer preprocessBuffer, const VkDeviceSize preprocessOffset, const VkDeviceSize preprocessSize,
    const VkBuffer sequencesCountBuffer, const VkDeviceSize sequencesCountOffset, const VkBuffer sequencesIndexBuffer,
    const VkDeviceSize sequencesIndexOffset) const {
    bool skip = false;
    if (pStreams != nullptr) {
        for (uint32_t _i360 = 0; _i360 < streamCount; ++_i360) {
            const auto _s361 = &pStreams[_i360];
            skip |= ValidateIndirectCommandsStreamNV(_parentObjects, _s361->buffer, _s361->offset);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateGeneratedCommandsMemoryRequirementsInfoNV(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const VkPipelineBindPoint pipelineBindPoint,
                                                                           const VkPipeline pipeline,
                                                                           const VkIndirectCommandsLayoutNV indirectCommandsLayout,
                                                                           const uint32_t maxSequencesCount) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceInheritedViewportScissorFeaturesNV(const LogObjectList &_parentObjects,
                                                                                  const VkStructureType sType, const void *pNext,
                                                                                  const VkBool32 inheritedViewportScissor2D) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCommandBufferInheritanceViewportScissorInfoNV(const LogObjectList &_parentObjects,
                                                                               const VkStructureType sType, const void *pNext,
                                                                               const VkBool32 viewportScissor2D,
                                                                               const uint32_t viewportDepthCount,
                                                                               const VkViewport *pViewportDepths) const {
    bool skip = false;
    if (pViewportDepths != nullptr) {
        const auto _s362 = pViewportDepths;
        skip |= ValidateViewport(_parentObjects, _s362->x, _s362->y, _s362->width, _s362->height, _s362->minDepth, _s362->maxDepth);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceTexelBufferAlignmentFeaturesEXT(const LogObjectList &_parentObjects,
                                                                               const VkStructureType sType, const void *pNext,
                                                                               const VkBool32 texelBufferAlignment) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRenderPassTransformBeginInfoQCOM(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                  const void *pNext,
                                                                  const VkSurfaceTransformFlagBitsKHR transform) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCommandBufferInheritanceRenderPassTransformInfoQCOM(const LogObjectList &_parentObjects,
                                                                                     const VkStructureType sType, const void *pNext,
                                                                                     const VkSurfaceTransformFlagBitsKHR transform,
                                                                                     const VkRect2D renderArea) const {
    bool skip = false;
    const auto _s363 = &renderArea;
    skip |= ValidateRect2D(_parentObjects, _s363->offset, _s363->extent);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDepthBiasControlFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 depthBiasControl,
    const VkBool32 leastRepresentableValueForceUnormRepresentation, const VkBool32 floatRepresentation,
    const VkBool32 depthBiasExact) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDepthBiasInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                  const void *pNext, const float depthBiasConstantFactor,
                                                  const float depthBiasClamp, const float depthBiasSlopeFactor) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDepthBiasRepresentationInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext,
                                                                const VkDepthBiasRepresentationEXT depthBiasRepresentation,
                                                                const VkBool32 depthBiasExact) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDeviceMemoryReportFeaturesEXT(const LogObjectList &_parentObjects,
                                                                             const VkStructureType sType, const void *pNext,
                                                                             const VkBool32 deviceMemoryReport) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceMemoryReportCallbackDataEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const VkDeviceMemoryReportFlagsEXT flags,
                                                                   const VkDeviceMemoryReportEventTypeEXT type,
                                                                   const uint64_t memoryObjectId, const VkDeviceSize size,
                                                                   const VkObjectType objectType, const uint64_t objectHandle,
                                                                   const uint32_t heapIndex) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceDeviceMemoryReportCreateInfoEXT(const LogObjectList &_parentObjects,
                                                                       const VkStructureType sType, const void *pNext,
                                                                       const VkDeviceMemoryReportFlagsEXT flags,
                                                                       const PFN_vkDeviceMemoryReportCallbackEXT pfnUserCallback,
                                                                       const void *pUserData) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceRobustness2FeaturesEXT(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const VkBool32 robustBufferAccess2,
                                                                      const VkBool32 robustImageAccess2,
                                                                      const VkBool32 nullDescriptor) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceRobustness2PropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkDeviceSize robustStorageBufferAccessSizeAlignment, const VkDeviceSize robustUniformBufferAccessSizeAlignment) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSamplerCustomBorderColorCreateInfoEXT(const LogObjectList &_parentObjects,
                                                                       const VkStructureType sType, const void *pNext,
                                                                       const VkClearColorValue customBorderColor,
                                                                       const VkFormat format) const {
    bool skip = false;
    const auto _s364 = &customBorderColor;
    skip |= ValidateClearColorValue(_parentObjects, _s364->float32, _s364->int32, _s364->uint32);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceCustomBorderColorPropertiesEXT(const LogObjectList &_parentObjects,
                                                                              const VkStructureType sType, const void *pNext,
                                                                              const uint32_t maxCustomBorderColorSamplers) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceCustomBorderColorFeaturesEXT(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const VkBool32 customBorderColors,
                                                                            const VkBool32 customBorderColorWithoutFormat) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePresentBarrierFeaturesNV(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkBool32 presentBarrier) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSurfaceCapabilitiesPresentBarrierNV(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const VkBool32 presentBarrierSupported) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSwapchainPresentBarrierCreateInfoNV(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const VkBool32 presentBarrierEnable) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDiagnosticsConfigFeaturesNV(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const VkBool32 diagnosticsConfig) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceDiagnosticsConfigCreateInfoNV(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const VkDeviceDiagnosticsConfigFlagsNV flags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateQueryLowLatencySupportNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const void *pQueriedLowLatencyData) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::ValidateExportMetalObjectCreateInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext,
                                                                const VkExportMetalObjectTypeFlagBitsEXT exportObjectType) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::ValidateExportMetalObjectsInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::ValidateExportMetalDeviceInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const MTLDevice_id mtlDevice) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::ValidateExportMetalCommandQueueInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const VkQueue queue,
                                                                const MTLCommandQueue_id mtlCommandQueue) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::ValidateExportMetalBufferInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const VkDeviceMemory memory,
                                                          const MTLBuffer_id mtlBuffer) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::ValidateImportMetalBufferInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const MTLBuffer_id mtlBuffer) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::ValidateExportMetalTextureInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const VkImage image, const VkImageView imageView,
                                                           const VkBufferView bufferView, const VkImageAspectFlagBits plane,
                                                           const MTLTexture_id mtlTexture) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::ValidateImportMetalTextureInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const VkImageAspectFlagBits plane,
                                                           const MTLTexture_id mtlTexture) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::ValidateExportMetalIOSurfaceInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const VkImage image,
                                                             const IOSurfaceRef ioSurface) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::ValidateImportMetalIOSurfaceInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const IOSurfaceRef ioSurface) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::ValidateExportMetalSharedEventInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const VkSemaphore semaphore, const VkEvent event,
                                                               const MTLSharedEvent_id mtlSharedEvent) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::ValidateImportMetalSharedEventInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const MTLSharedEvent_id mtlSharedEvent) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_METAL_EXT
bool ExplicitValidation::ValidatePhysicalDeviceDescriptorBufferPropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 combinedImageSamplerDescriptorSingleArray, const VkBool32 bufferlessPushDescriptors,
    const VkBool32 allowSamplerImageViewPostSubmitCreation, const VkDeviceSize descriptorBufferOffsetAlignment,
    const uint32_t maxDescriptorBufferBindings, const uint32_t maxResourceDescriptorBufferBindings,
    const uint32_t maxSamplerDescriptorBufferBindings, const uint32_t maxEmbeddedImmutableSamplerBindings,
    const uint32_t maxEmbeddedImmutableSamplers, const size_t bufferCaptureReplayDescriptorDataSize,
    const size_t imageCaptureReplayDescriptorDataSize, const size_t imageViewCaptureReplayDescriptorDataSize,
    const size_t samplerCaptureReplayDescriptorDataSize, const size_t accelerationStructureCaptureReplayDescriptorDataSize,
    const size_t samplerDescriptorSize, const size_t combinedImageSamplerDescriptorSize, const size_t sampledImageDescriptorSize,
    const size_t storageImageDescriptorSize, const size_t uniformTexelBufferDescriptorSize,
    const size_t robustUniformTexelBufferDescriptorSize, const size_t storageTexelBufferDescriptorSize,
    const size_t robustStorageTexelBufferDescriptorSize, const size_t uniformBufferDescriptorSize,
    const size_t robustUniformBufferDescriptorSize, const size_t storageBufferDescriptorSize,
    const size_t robustStorageBufferDescriptorSize, const size_t inputAttachmentDescriptorSize,
    const size_t accelerationStructureDescriptorSize, const VkDeviceSize maxSamplerDescriptorBufferRange,
    const VkDeviceSize maxResourceDescriptorBufferRange, const VkDeviceSize samplerDescriptorBufferAddressSpaceSize,
    const VkDeviceSize resourceDescriptorBufferAddressSpaceSize, const VkDeviceSize descriptorBufferAddressSpaceSize) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const size_t combinedImageSamplerDensityMapDescriptorSize) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDescriptorBufferFeaturesEXT(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const VkBool32 descriptorBuffer,
                                                                           const VkBool32 descriptorBufferCaptureReplay,
                                                                           const VkBool32 descriptorBufferImageLayoutIgnored,
                                                                           const VkBool32 descriptorBufferPushDescriptors) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDescriptorAddressInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const VkDeviceAddress address,
                                                          const VkDeviceSize range, const VkFormat format) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDescriptorBufferBindingInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const VkDeviceAddress address,
                                                                const VkBufferUsageFlags usage) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDescriptorBufferBindingPushDescriptorBufferHandleEXT(const LogObjectList &_parentObjects,
                                                                                      const VkStructureType sType,
                                                                                      const void *pNext,
                                                                                      const VkBuffer buffer) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDescriptorDataEXT(
    const LogObjectList &_parentObjects, const VkSampler *pSampler, const VkDescriptorImageInfo *pCombinedImageSampler,
    const VkDescriptorImageInfo *pInputAttachmentImage, const VkDescriptorImageInfo *pSampledImage,
    const VkDescriptorImageInfo *pStorageImage, const VkDescriptorAddressInfoEXT *pUniformTexelBuffer,
    const VkDescriptorAddressInfoEXT *pStorageTexelBuffer, const VkDescriptorAddressInfoEXT *pUniformBuffer,
    const VkDescriptorAddressInfoEXT *pStorageBuffer, const VkDeviceAddress accelerationStructure) const {
    bool skip = false;
    if (pCombinedImageSampler != nullptr) {
        const auto _s365 = pCombinedImageSampler;
        skip |= ValidateDescriptorImageInfo(_parentObjects, _s365->sampler, _s365->imageView, _s365->imageLayout);
    }
    if (pInputAttachmentImage != nullptr) {
        const auto _s366 = pInputAttachmentImage;
        skip |= ValidateDescriptorImageInfo(_parentObjects, _s366->sampler, _s366->imageView, _s366->imageLayout);
    }
    if (pSampledImage != nullptr) {
        const auto _s367 = pSampledImage;
        skip |= ValidateDescriptorImageInfo(_parentObjects, _s367->sampler, _s367->imageView, _s367->imageLayout);
    }
    if (pStorageImage != nullptr) {
        const auto _s368 = pStorageImage;
        skip |= ValidateDescriptorImageInfo(_parentObjects, _s368->sampler, _s368->imageView, _s368->imageLayout);
    }
    if (pUniformTexelBuffer != nullptr) {
        const auto _s369 = pUniformTexelBuffer;
        skip |= ValidateDescriptorAddressInfoEXT(_parentObjects, _s369->sType, _s369->pNext, _s369->address, _s369->range,
                                                 _s369->format);
    }
    if (pStorageTexelBuffer != nullptr) {
        const auto _s370 = pStorageTexelBuffer;
        skip |= ValidateDescriptorAddressInfoEXT(_parentObjects, _s370->sType, _s370->pNext, _s370->address, _s370->range,
                                                 _s370->format);
    }
    if (pUniformBuffer != nullptr) {
        const auto _s371 = pUniformBuffer;
        skip |= ValidateDescriptorAddressInfoEXT(_parentObjects, _s371->sType, _s371->pNext, _s371->address, _s371->range,
                                                 _s371->format);
    }
    if (pStorageBuffer != nullptr) {
        const auto _s372 = pStorageBuffer;
        skip |= ValidateDescriptorAddressInfoEXT(_parentObjects, _s372->sType, _s372->pNext, _s372->address, _s372->range,
                                                 _s372->format);
    }
    return skip;
}
bool ExplicitValidation::ValidateDescriptorGetInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                      const void *pNext, const VkDescriptorType type,
                                                      const VkDescriptorDataEXT data) const {
    bool skip = false;
    const auto _s373 = &data;
    skip |= ValidateDescriptorDataEXT(_parentObjects, _s373->pSampler, _s373->pCombinedImageSampler, _s373->pInputAttachmentImage,
                                      _s373->pSampledImage, _s373->pStorageImage, _s373->pUniformTexelBuffer,
                                      _s373->pStorageTexelBuffer, _s373->pUniformBuffer, _s373->pStorageBuffer,
                                      _s373->accelerationStructure);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBufferCaptureDescriptorDataInfoEXT(const LogObjectList &_parentObjects,
                                                                    const VkStructureType sType, const void *pNext,
                                                                    const VkBuffer buffer) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageCaptureDescriptorDataInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const VkImage image) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageViewCaptureDescriptorDataInfoEXT(const LogObjectList &_parentObjects,
                                                                       const VkStructureType sType, const void *pNext,
                                                                       const VkImageView imageView) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSamplerCaptureDescriptorDataInfoEXT(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const VkSampler sampler) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateOpaqueCaptureDescriptorDataCreateInfoEXT(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const void *opaqueCaptureDescriptorData) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureCaptureDescriptorDataInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkAccelerationStructureKHR accelerationStructure, const VkAccelerationStructureNV accelerationStructureNV) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(const LogObjectList &_parentObjects,
                                                                                  const VkStructureType sType, const void *pNext,
                                                                                  const VkBool32 graphicsPipelineLibrary) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 graphicsPipelineLibraryFastLinking,
    const VkBool32 graphicsPipelineLibraryIndependentInterpolationDecoration) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateGraphicsPipelineLibraryCreateInfoEXT(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const VkGraphicsPipelineLibraryFlagsEXT flags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 shaderEarlyAndLateFragmentTests) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceFragmentShadingRateEnumsFeaturesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 fragmentShadingRateEnums,
    const VkBool32 supersampleFragmentShadingRates, const VkBool32 noInvocationFragmentShadingRates) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceFragmentShadingRateEnumsPropertiesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkSampleCountFlagBits maxFragmentShadingRateInvocationCount) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineFragmentShadingRateEnumStateCreateInfoNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkFragmentShadingRateTypeNV shadingRateType, const VkFragmentShadingRateNV shadingRate,
    const VkFragmentShadingRateCombinerOpKHR combinerOps[2]) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceOrHostAddressConstKHR(const LogObjectList &_parentObjects,
                                                             const VkDeviceAddress deviceAddress, const void *hostAddress) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureGeometryMotionTrianglesDataNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkDeviceOrHostAddressConstKHR vertexData) const {
    bool skip = false;
    const auto _s374 = &vertexData;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s374->deviceAddress, _s374->hostAddress);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureMotionInfoNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const uint32_t maxInstances,
                                                                   const VkAccelerationStructureMotionInfoFlagsNV flags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureMatrixMotionInstanceNV(
    const LogObjectList &_parentObjects, const VkTransformMatrixKHR transformT0, const VkTransformMatrixKHR transformT1,
    const uint32_t instanceCustomIndex, const uint32_t mask, const uint32_t instanceShaderBindingTableRecordOffset,
    const VkGeometryInstanceFlagsKHR flags, const uint64_t accelerationStructureReference) const {
    bool skip = false;
    const auto _s375 = &transformT0;
    skip |= ValidateTransformMatrixKHR(_parentObjects, _s375->matrix);
    const auto _s376 = &transformT1;
    skip |= ValidateTransformMatrixKHR(_parentObjects, _s376->matrix);
    return skip;
}
bool ExplicitValidation::ValidateSRTDataNV(const LogObjectList &_parentObjects, const float sx, const float a, const float b,
                                           const float pvx, const float sy, const float c, const float pvy, const float sz,
                                           const float pvz, const float qx, const float qy, const float qz, const float qw,
                                           const float tx, const float ty, const float tz) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureSRTMotionInstanceNV(
    const LogObjectList &_parentObjects, const VkSRTDataNV transformT0, const VkSRTDataNV transformT1,
    const uint32_t instanceCustomIndex, const uint32_t mask, const uint32_t instanceShaderBindingTableRecordOffset,
    const VkGeometryInstanceFlagsKHR flags, const uint64_t accelerationStructureReference) const {
    bool skip = false;
    const auto _s377 = &transformT0;
    skip |= ValidateSRTDataNV(_parentObjects, _s377->sx, _s377->a, _s377->b, _s377->pvx, _s377->sy, _s377->c, _s377->pvy, _s377->sz,
                              _s377->pvz, _s377->qx, _s377->qy, _s377->qz, _s377->qw, _s377->tx, _s377->ty, _s377->tz);
    const auto _s378 = &transformT1;
    skip |= ValidateSRTDataNV(_parentObjects, _s378->sx, _s378->a, _s378->b, _s378->pvx, _s378->sy, _s378->c, _s378->pvy, _s378->sz,
                              _s378->pvz, _s378->qx, _s378->qy, _s378->qz, _s378->qw, _s378->tx, _s378->ty, _s378->tz);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureMotionInstanceDataNV(
    const LogObjectList &_parentObjects, const VkAccelerationStructureInstanceKHR staticInstance,
    const VkAccelerationStructureMatrixMotionInstanceNV matrixMotionInstance,
    const VkAccelerationStructureSRTMotionInstanceNV srtMotionInstance) const {
    bool skip = false;
    const auto _s379 = &staticInstance;
    skip |= ValidateAccelerationStructureInstanceKHR(_parentObjects, _s379->transform, _s379->instanceCustomIndex, _s379->mask,
                                                     _s379->instanceShaderBindingTableRecordOffset, _s379->flags,
                                                     _s379->accelerationStructureReference);
    const auto _s380 = &matrixMotionInstance;
    skip |= ValidateAccelerationStructureMatrixMotionInstanceNV(
        _parentObjects, _s380->transformT0, _s380->transformT1, _s380->instanceCustomIndex, _s380->mask,
        _s380->instanceShaderBindingTableRecordOffset, _s380->flags, _s380->accelerationStructureReference);
    const auto _s381 = &srtMotionInstance;
    skip |= ValidateAccelerationStructureSRTMotionInstanceNV(
        _parentObjects, _s381->transformT0, _s381->transformT1, _s381->instanceCustomIndex, _s381->mask,
        _s381->instanceShaderBindingTableRecordOffset, _s381->flags, _s381->accelerationStructureReference);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureMotionInstanceNV(
    const LogObjectList &_parentObjects, const VkAccelerationStructureMotionInstanceTypeNV type,
    const VkAccelerationStructureMotionInstanceFlagsNV flags, const VkAccelerationStructureMotionInstanceDataNV data) const {
    bool skip = false;
    const auto _s382 = &data;
    skip |= ValidateAccelerationStructureMotionInstanceDataNV(_parentObjects, _s382->staticInstance, _s382->matrixMotionInstance,
                                                              _s382->srtMotionInstance);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceRayTracingMotionBlurFeaturesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 rayTracingMotionBlur,
    const VkBool32 rayTracingMotionBlurPipelineTraceRaysIndirect) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(const LogObjectList &_parentObjects,
                                                                                const VkStructureType sType, const void *pNext,
                                                                                const VkBool32 ycbcr2plane444Formats) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceFragmentDensityMap2FeaturesEXT(const LogObjectList &_parentObjects,
                                                                              const VkStructureType sType, const void *pNext,
                                                                              const VkBool32 fragmentDensityMapDeferred) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceFragmentDensityMap2PropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 subsampledLoads,
    VkBool32 subsampledCoarseReconstructionEarlyAccess, const uint32_t maxSubsampledArrayLayers,
    const uint32_t maxDescriptorSetSubsampledSamplers) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCopyCommandTransformInfoQCOM(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext,
                                                              const VkSurfaceTransformFlagBitsKHR transform) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceImageCompressionControlFeaturesEXT(const LogObjectList &_parentObjects,
                                                                                  const VkStructureType sType, const void *pNext,
                                                                                  const VkBool32 imageCompressionControl) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageCompressionControlEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                            const void *pNext, const VkImageCompressionFlagsEXT flags,
                                                            const uint32_t compressionControlPlaneCount,
                                                            const VkImageCompressionFixedRateFlagsEXT *pFixedRateFlags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageCompressionPropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkImageCompressionFlagsEXT imageCompressionFlags,
    const VkImageCompressionFixedRateFlagsEXT imageCompressionFixedRateFlags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 attachmentFeedbackLoopLayout) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevice4444FormatsFeaturesEXT(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const VkBool32 formatA4R4G4B4,
                                                                      const VkBool32 formatA4B4G4R4) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceFaultFeaturesEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const VkBool32 deviceFault,
                                                                const VkBool32 deviceFaultVendorBinary) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceFaultCountsEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                      const void *pNext, const uint32_t addressInfoCount,
                                                      const uint32_t vendorInfoCount, const VkDeviceSize vendorBinarySize) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceFaultAddressInfoEXT(const LogObjectList &_parentObjects,
                                                           const VkDeviceFaultAddressTypeEXT addressType,
                                                           const VkDeviceAddress reportedAddress,
                                                           const VkDeviceSize addressPrecision) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateDeviceFaultVendorInfoEXT(const LogObjectList &_parentObjects,
                                                          const char description[VK_MAX_DESCRIPTION_SIZE],
                                                          const uint64_t vendorFaultCode, const uint64_t vendorFaultData) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateDeviceFaultInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                    const void *pNext, const char description[VK_MAX_DESCRIPTION_SIZE],
                                                    const VkDeviceFaultAddressInfoEXT *pAddressInfos,
                                                    const VkDeviceFaultVendorInfoEXT *pVendorInfos,
                                                    const void *pVendorBinaryData) const {
    bool skip = false;
    if (pAddressInfos != nullptr) {
        const auto _s383 = pAddressInfos;
        skip |=
            ValidateDeviceFaultAddressInfoEXT(_parentObjects, _s383->addressType, _s383->reportedAddress, _s383->addressPrecision);
    }
    if (pVendorInfos != nullptr) {
        const auto _s384 = pVendorInfos;
        skip |=
            ValidateDeviceFaultVendorInfoEXT(_parentObjects, _s384->description, _s384->vendorFaultCode, _s384->vendorFaultData);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceFaultVendorBinaryHeaderVersionOneEXT(
    const LogObjectList &_parentObjects, const uint32_t headerSize, const VkDeviceFaultVendorBinaryHeaderVersionEXT headerVersion,
    const uint32_t vendorID, const uint32_t deviceID, const uint32_t driverVersion, const uint8_t pipelineCacheUUID[VK_UUID_SIZE],
    const uint32_t applicationNameOffset, const uint32_t applicationVersion, const uint32_t engineNameOffset,
    const uint32_t engineVersion, const uint32_t apiVersion) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 rasterizationOrderColorAttachmentAccess, const VkBool32 rasterizationOrderDepthAttachmentAccess,
    const VkBool32 rasterizationOrderStencilAttachmentAccess) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceRGBA10X6FormatsFeaturesEXT(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkBool32 formatRgba10x6WithoutYCbCrSampler) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
bool ExplicitValidation::ValidateDirectFBSurfaceCreateInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const VkDirectFBSurfaceCreateFlagsEXT flags,
                                                              const IDirectFB *dfb, const IDirectFBSurface *surface) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
bool ExplicitValidation::ValidatePhysicalDeviceMutableDescriptorTypeFeaturesEXT(const LogObjectList &_parentObjects,
                                                                                const VkStructureType sType, const void *pNext,
                                                                                const VkBool32 mutableDescriptorType) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMutableDescriptorTypeListEXT(const LogObjectList &_parentObjects,
                                                              const uint32_t descriptorTypeCount,
                                                              const VkDescriptorType *pDescriptorTypes) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateMutableDescriptorTypeCreateInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const uint32_t mutableDescriptorTypeListCount, const VkMutableDescriptorTypeListEXT *pMutableDescriptorTypeLists) const {
    bool skip = false;
    if (pMutableDescriptorTypeLists != nullptr) {
        for (uint32_t _i385 = 0; _i385 < mutableDescriptorTypeListCount; ++_i385) {
            const auto _s386 = &pMutableDescriptorTypeLists[_i385];
            skip |= ValidateMutableDescriptorTypeListEXT(_parentObjects, _s386->descriptorTypeCount, _s386->pDescriptorTypes);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceVertexInputDynamicStateFeaturesEXT(const LogObjectList &_parentObjects,
                                                                                  const VkStructureType sType, const void *pNext,
                                                                                  const VkBool32 vertexInputDynamicState) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVertexInputBindingDescription2EXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const uint32_t binding, const uint32_t stride,
                                                                   const VkVertexInputRate inputRate,
                                                                   const uint32_t divisor) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateVertexInputAttributeDescription2EXT(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const uint32_t location, const uint32_t binding,
                                                                     const VkFormat format, const uint32_t offset) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDrmPropertiesEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                const void *pNext, const VkBool32 hasPrimary,
                                                                const VkBool32 hasRender, const int64_t primaryMajor,
                                                                const int64_t primaryMinor, const int64_t renderMajor,
                                                                const int64_t renderMinor) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceAddressBindingReportFeaturesEXT(const LogObjectList &_parentObjects,
                                                                               const VkStructureType sType, const void *pNext,
                                                                               const VkBool32 reportAddressBinding) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDeviceAddressBindingCallbackDataEXT(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const VkDeviceAddressBindingFlagsEXT flags,
                                                                     const VkDeviceAddress baseAddress, const VkDeviceSize size,
                                                                     const VkDeviceAddressBindingTypeEXT bindingType) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDepthClipControlFeaturesEXT(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const VkBool32 depthClipControl) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineViewportDepthClipControlCreateInfoEXT(const LogObjectList &_parentObjects,
                                                                               const VkStructureType sType, const void *pNext,
                                                                               const VkBool32 negativeOneToOne) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 primitiveTopologyListRestart, const VkBool32 primitiveTopologyPatchListRestart) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::ValidateImportMemoryZirconHandleInfoFUCHSIA(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const VkExternalMemoryHandleTypeFlagBits handleType,
                                                                     const zx_handle_t handle) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::ValidateMemoryZirconHandlePropertiesFUCHSIA(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const uint32_t memoryTypeBits) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::ValidateMemoryGetZirconHandleInfoFUCHSIA(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                  const void *pNext, const VkDeviceMemory memory,
                                                                  const VkExternalMemoryHandleTypeFlagBits handleType) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::ValidateImportSemaphoreZirconHandleInfoFUCHSIA(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkSemaphore semaphore,
                                                                        const VkSemaphoreImportFlags flags,
                                                                        const VkExternalSemaphoreHandleTypeFlagBits handleType,
                                                                        const zx_handle_t zirconHandle) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::ValidateSemaphoreGetZirconHandleInfoFUCHSIA(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const VkSemaphore semaphore,
                                                                     const VkExternalSemaphoreHandleTypeFlagBits handleType) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::ValidateBufferCollectionCreateInfoFUCHSIA(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const zx_handle_t collectionToken) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::ValidateImportMemoryBufferCollectionFUCHSIA(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const VkBufferCollectionFUCHSIA collection,
                                                                     const uint32_t index) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::ValidateBufferCollectionImageCreateInfoFUCHSIA(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkBufferCollectionFUCHSIA collection,
                                                                        const uint32_t index) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::ValidateBufferCollectionConstraintsInfoFUCHSIA(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t minBufferCount,
    const uint32_t maxBufferCount, const uint32_t minBufferCountForCamping, const uint32_t minBufferCountForDedicatedSlack,
    const uint32_t minBufferCountForSharedSlack) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::ValidateBufferConstraintsInfoFUCHSIA(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBufferCreateInfo createInfo,
    const VkFormatFeatureFlags requiredFormatFeatures,
    const VkBufferCollectionConstraintsInfoFUCHSIA bufferCollectionConstraints) const {
    bool skip = false;
    const auto _s387 = &createInfo;
    skip |= ValidateBufferCreateInfo(_parentObjects, _s387->sType, _s387->pNext, _s387->flags, _s387->size, _s387->usage,
                                     _s387->sharingMode, _s387->queueFamilyIndexCount, _s387->pQueueFamilyIndices);
    const auto _s388 = &bufferCollectionConstraints;
    skip |= ValidateBufferCollectionConstraintsInfoFUCHSIA(
        _parentObjects, _s388->sType, _s388->pNext, _s388->minBufferCount, _s388->maxBufferCount, _s388->minBufferCountForCamping,
        _s388->minBufferCountForDedicatedSlack, _s388->minBufferCountForSharedSlack);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::ValidateBufferCollectionBufferCreateInfoFUCHSIA(const LogObjectList &_parentObjects,
                                                                         const VkStructureType sType, const void *pNext,
                                                                         const VkBufferCollectionFUCHSIA collection,
                                                                         const uint32_t index) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::ValidateSysmemColorSpaceFUCHSIA(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                         const void *pNext, const uint32_t colorSpace) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::ValidateBufferCollectionPropertiesFUCHSIA(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t memoryTypeBits,
    const uint32_t bufferCount, const uint32_t createInfoIndex, const uint64_t sysmemPixelFormat,
    const VkFormatFeatureFlags formatFeatures, const VkSysmemColorSpaceFUCHSIA sysmemColorSpaceIndex,
    const VkComponentMapping samplerYcbcrConversionComponents, const VkSamplerYcbcrModelConversion suggestedYcbcrModel,
    const VkSamplerYcbcrRange suggestedYcbcrRange, const VkChromaLocation suggestedXChromaOffset,
    const VkChromaLocation suggestedYChromaOffset) const {
    bool skip = false;
    const auto _s389 = &sysmemColorSpaceIndex;
    skip |= ValidateSysmemColorSpaceFUCHSIA(_parentObjects, _s389->sType, _s389->pNext, _s389->colorSpace);
    const auto _s390 = &samplerYcbcrConversionComponents;
    skip |= ValidateComponentMapping(_parentObjects, _s390->r, _s390->g, _s390->b, _s390->a);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::ValidateImageFormatConstraintsInfoFUCHSIA(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const VkImageCreateInfo imageCreateInfo,
                                                                   const VkFormatFeatureFlags requiredFormatFeatures,
                                                                   const VkImageFormatConstraintsFlagsFUCHSIA flags,
                                                                   const uint64_t sysmemPixelFormat, const uint32_t colorSpaceCount,
                                                                   const VkSysmemColorSpaceFUCHSIA *pColorSpaces) const {
    bool skip = false;
    const auto _s391 = &imageCreateInfo;
    skip |=
        ValidateImageCreateInfo(_parentObjects, _s391->sType, _s391->pNext, _s391->flags, _s391->imageType, _s391->format,
                                _s391->extent, _s391->mipLevels, _s391->arrayLayers, _s391->samples, _s391->tiling, _s391->usage,
                                _s391->sharingMode, _s391->queueFamilyIndexCount, _s391->pQueueFamilyIndices, _s391->initialLayout);
    if (pColorSpaces != nullptr) {
        for (uint32_t _i392 = 0; _i392 < colorSpaceCount; ++_i392) {
            const auto _s393 = &pColorSpaces[_i392];
            skip |= ValidateSysmemColorSpaceFUCHSIA(_parentObjects, _s393->sType, _s393->pNext, _s393->colorSpace);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::ValidateImageConstraintsInfoFUCHSIA(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t formatConstraintsCount,
    const VkImageFormatConstraintsInfoFUCHSIA *pFormatConstraints,
    const VkBufferCollectionConstraintsInfoFUCHSIA bufferCollectionConstraints,
    const VkImageConstraintsInfoFlagsFUCHSIA flags) const {
    bool skip = false;
    if (pFormatConstraints != nullptr) {
        for (uint32_t _i394 = 0; _i394 < formatConstraintsCount; ++_i394) {
            const auto _s395 = &pFormatConstraints[_i394];
            skip |= ValidateImageFormatConstraintsInfoFUCHSIA(_parentObjects, _s395->sType, _s395->pNext, _s395->imageCreateInfo,
                                                              _s395->requiredFormatFeatures, _s395->flags, _s395->sysmemPixelFormat,
                                                              _s395->colorSpaceCount, _s395->pColorSpaces);
        }
    }
    const auto _s396 = &bufferCollectionConstraints;
    skip |= ValidateBufferCollectionConstraintsInfoFUCHSIA(
        _parentObjects, _s396->sType, _s396->pNext, _s396->minBufferCount, _s396->maxBufferCount, _s396->minBufferCountForCamping,
        _s396->minBufferCountForDedicatedSlack, _s396->minBufferCountForSharedSlack);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_FUCHSIA
bool ExplicitValidation::ValidateSubpassShadingPipelineCreateInfoHUAWEI(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkRenderPass renderPass,
                                                                        const uint32_t subpass) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceSubpassShadingFeaturesHUAWEI(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const VkBool32 subpassShading) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceSubpassShadingPropertiesHUAWEI(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const uint32_t maxSubpassShadingWorkgroupSizeAspectRatio) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceInvocationMaskFeaturesHUAWEI(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const VkBool32 invocationMask) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMemoryGetRemoteAddressInfoNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const VkDeviceMemory memory,
                                                              const VkExternalMemoryHandleTypeFlagBits handleType) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceExternalMemoryRDMAFeaturesNV(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const VkBool32 externalMemoryRDMA) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelinePropertiesIdentifierEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                 const void *pNext,
                                                                 const uint8_t pipelineIdentifier[VK_UUID_SIZE]) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePipelinePropertiesFeaturesEXT(const LogObjectList &_parentObjects,
                                                                             const VkStructureType sType, const void *pNext,
                                                                             const VkBool32 pipelinePropertiesIdentifier) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceFrameBoundaryFeaturesEXT(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkBool32 frameBoundary) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateFrameBoundaryEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                  const void *pNext, const VkFrameBoundaryFlagsEXT flags, const uint64_t frameID,
                                                  const uint32_t imageCount, const VkImage *pImages, const uint32_t bufferCount,
                                                  const VkBuffer *pBuffers, const uint64_t tagName, const size_t tagSize,
                                                  const void *pTag) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 multisampledRenderToSingleSampled) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSubpassResolvePerformanceQueryEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const VkBool32 optimal) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMultisampledRenderToSingleSampledInfoEXT(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkBool32 multisampledRenderToSingleSampledEnable,
                                                                          const VkSampleCountFlagBits rasterizationSamples) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceExtendedDynamicState2FeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 extendedDynamicState2,
    const VkBool32 extendedDynamicState2LogicOp, const VkBool32 extendedDynamicState2PatchControlPoints) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_USE_PLATFORM_SCREEN_QNX
bool ExplicitValidation::ValidateScreenSurfaceCreateInfoQNX(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                            const void *pNext, const VkScreenSurfaceCreateFlagsQNX flags,
                                                            const struct _screen_context *context,
                                                            const struct _screen_window *window) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_SCREEN_QNX
bool ExplicitValidation::ValidatePhysicalDeviceColorWriteEnableFeaturesEXT(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const VkBool32 colorWriteEnable) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineColorWriteCreateInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                 const void *pNext, const uint32_t attachmentCount,
                                                                 const VkBool32 *pColorWriteEnables) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 primitivesGeneratedQuery,
    const VkBool32 primitivesGeneratedQueryWithRasterizerDiscard, const VkBool32 primitivesGeneratedQueryWithNonZeroStreams) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceImageViewMinLodFeaturesEXT(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkBool32 minLod) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageViewMinLodCreateInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const float minLod) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMultiDrawFeaturesEXT(const LogObjectList &_parentObjects,
                                                                    const VkStructureType sType, const void *pNext,
                                                                    const VkBool32 multiDraw) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMultiDrawPropertiesEXT(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const uint32_t maxMultiDrawCount) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMultiDrawInfoEXT(const LogObjectList &_parentObjects, const uint32_t firstVertex,
                                                  const uint32_t vertexCount) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateMultiDrawIndexedInfoEXT(const LogObjectList &_parentObjects, const uint32_t firstIndex,
                                                         const uint32_t indexCount, const int32_t vertexOffset) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceImage2DViewOf3DFeaturesEXT(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkBool32 image2DViewOf3D,
                                                                          const VkBool32 sampler2DViewOf3D) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderTileImageFeaturesEXT(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkBool32 shaderTileImageColorReadAccess,
                                                                          const VkBool32 shaderTileImageDepthReadAccess,
                                                                          const VkBool32 shaderTileImageStencilReadAccess) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderTileImagePropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 shaderTileImageCoherentReadAccelerated, const VkBool32 shaderTileImageReadSampleFromPixelRateInvocation,
    const VkBool32 shaderTileImageReadFromHelperInvocation) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMicromapUsageEXT(const LogObjectList &_parentObjects, const uint32_t count,
                                                  const uint32_t subdivisionLevel, const uint32_t format) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateDeviceOrHostAddressKHR(const LogObjectList &_parentObjects, const VkDeviceAddress deviceAddress,
                                                        const void *hostAddress) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateMicromapBuildInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkMicromapTypeEXT type,
    const VkBuildMicromapFlagsEXT flags, const VkBuildMicromapModeEXT mode, const VkMicromapEXT dstMicromap,
    const uint32_t usageCountsCount, const VkMicromapUsageEXT *pUsageCounts, const VkMicromapUsageEXT *const *ppUsageCounts,
    const VkDeviceOrHostAddressConstKHR data, const VkDeviceOrHostAddressKHR scratchData,
    const VkDeviceOrHostAddressConstKHR triangleArray, const VkDeviceSize triangleArrayStride) const {
    bool skip = false;
    if (pUsageCounts != nullptr) {
        for (uint32_t _i397 = 0; _i397 < usageCountsCount; ++_i397) {
            const auto _s398 = &pUsageCounts[_i397];
            skip |= ValidateMicromapUsageEXT(_parentObjects, _s398->count, _s398->subdivisionLevel, _s398->format);
        }
    }
    if (ppUsageCounts != nullptr) {
        for (uint32_t _i399 = 0; _i399 < usageCountsCount; ++_i399) {
            const auto _s400 = ppUsageCounts[_i399];
            skip |= ValidateMicromapUsageEXT(_parentObjects, _s400->count, _s400->subdivisionLevel, _s400->format);
        }
    }
    const auto _s401 = &data;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s401->deviceAddress, _s401->hostAddress);
    const auto _s402 = &scratchData;
    skip |= ValidateDeviceOrHostAddressKHR(_parentObjects, _s402->deviceAddress, _s402->hostAddress);
    const auto _s403 = &triangleArray;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s403->deviceAddress, _s403->hostAddress);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMicromapCreateInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                       const void *pNext, const VkMicromapCreateFlagsEXT createFlags,
                                                       const VkBuffer buffer, const VkDeviceSize offset, const VkDeviceSize size,
                                                       const VkMicromapTypeEXT type, const VkDeviceAddress deviceAddress) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceOpacityMicromapFeaturesEXT(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkBool32 micromap,
                                                                          const VkBool32 micromapCaptureReplay,
                                                                          const VkBool32 micromapHostCommands) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceOpacityMicromapPropertiesEXT(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const uint32_t maxOpacity2StateSubdivisionLevel,
                                                                            const uint32_t maxOpacity4StateSubdivisionLevel) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMicromapVersionInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                        const void *pNext, const uint8_t *pVersionData) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCopyMicromapToMemoryInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const VkMicromapEXT src,
                                                             const VkDeviceOrHostAddressKHR dst,
                                                             const VkCopyMicromapModeEXT mode) const {
    bool skip = false;
    const auto _s404 = &dst;
    skip |= ValidateDeviceOrHostAddressKHR(_parentObjects, _s404->deviceAddress, _s404->hostAddress);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCopyMemoryToMicromapInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const VkDeviceOrHostAddressConstKHR src,
                                                             const VkMicromapEXT dst, const VkCopyMicromapModeEXT mode) const {
    bool skip = false;
    const auto _s405 = &src;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s405->deviceAddress, _s405->hostAddress);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCopyMicromapInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                     const void *pNext, const VkMicromapEXT src, const VkMicromapEXT dst,
                                                     const VkCopyMicromapModeEXT mode) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMicromapBuildSizesInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const VkDeviceSize micromapSize,
                                                           const VkDeviceSize buildScratchSize, const VkBool32 discardable) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureTrianglesOpacityMicromapEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkIndexType indexType,
    const VkDeviceOrHostAddressConstKHR indexBuffer, const VkDeviceSize indexStride, const uint32_t baseTriangle,
    const uint32_t usageCountsCount, const VkMicromapUsageEXT *pUsageCounts, const VkMicromapUsageEXT *const *ppUsageCounts,
    const VkMicromapEXT micromap) const {
    bool skip = false;
    const auto _s406 = &indexBuffer;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s406->deviceAddress, _s406->hostAddress);
    if (pUsageCounts != nullptr) {
        for (uint32_t _i407 = 0; _i407 < usageCountsCount; ++_i407) {
            const auto _s408 = &pUsageCounts[_i407];
            skip |= ValidateMicromapUsageEXT(_parentObjects, _s408->count, _s408->subdivisionLevel, _s408->format);
        }
    }
    if (ppUsageCounts != nullptr) {
        for (uint32_t _i409 = 0; _i409 < usageCountsCount; ++_i409) {
            const auto _s410 = ppUsageCounts[_i409];
            skip |= ValidateMicromapUsageEXT(_parentObjects, _s410->count, _s410->subdivisionLevel, _s410->format);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMicromapTriangleEXT(const LogObjectList &_parentObjects, const uint32_t dataOffset,
                                                     const uint16_t subdivisionLevel, const uint16_t format) const {
    bool skip = false;
    return skip;
}
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidatePhysicalDeviceDisplacementMicromapFeaturesNV(const LogObjectList &_parentObjects,
                                                                              const VkStructureType sType, const void *pNext,
                                                                              const VkBool32 displacementMicromap) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidatePhysicalDeviceDisplacementMicromapPropertiesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const uint32_t maxDisplacementMicromapSubdivisionLevel) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidateAccelerationStructureTrianglesDisplacementMicromapNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkFormat displacementBiasAndScaleFormat, const VkFormat displacementVectorFormat,
    const VkDeviceOrHostAddressConstKHR displacementBiasAndScaleBuffer, const VkDeviceSize displacementBiasAndScaleStride,
    const VkDeviceOrHostAddressConstKHR displacementVectorBuffer, const VkDeviceSize displacementVectorStride,
    const VkDeviceOrHostAddressConstKHR displacedMicromapPrimitiveFlags, const VkDeviceSize displacedMicromapPrimitiveFlagsStride,
    const VkIndexType indexType, const VkDeviceOrHostAddressConstKHR indexBuffer, const VkDeviceSize indexStride,
    const uint32_t baseTriangle, const uint32_t usageCountsCount, const VkMicromapUsageEXT *pUsageCounts,
    const VkMicromapUsageEXT *const *ppUsageCounts, const VkMicromapEXT micromap) const {
    bool skip = false;
    const auto _s411 = &displacementBiasAndScaleBuffer;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s411->deviceAddress, _s411->hostAddress);
    const auto _s412 = &displacementVectorBuffer;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s412->deviceAddress, _s412->hostAddress);
    const auto _s413 = &displacedMicromapPrimitiveFlags;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s413->deviceAddress, _s413->hostAddress);
    const auto _s414 = &indexBuffer;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s414->deviceAddress, _s414->hostAddress);
    if (pUsageCounts != nullptr) {
        for (uint32_t _i415 = 0; _i415 < usageCountsCount; ++_i415) {
            const auto _s416 = &pUsageCounts[_i415];
            skip |= ValidateMicromapUsageEXT(_parentObjects, _s416->count, _s416->subdivisionLevel, _s416->format);
        }
    }
    if (ppUsageCounts != nullptr) {
        for (uint32_t _i417 = 0; _i417 < usageCountsCount; ++_i417) {
            const auto _s418 = ppUsageCounts[_i417];
            skip |= ValidateMicromapUsageEXT(_parentObjects, _s418->count, _s418->subdivisionLevel, _s418->format);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_ENABLE_BETA_EXTENSIONS
bool ExplicitValidation::ValidatePhysicalDeviceClusterCullingShaderFeaturesHUAWEI(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 clustercullingShader,
    const VkBool32 multiviewClusterCullingShader) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceClusterCullingShaderPropertiesHUAWEI(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t maxWorkGroupCount[3],
    const uint32_t maxWorkGroupSize[3], const uint32_t maxOutputClusterCount,
    const VkDeviceSize indirectBufferOffsetAlignment) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceBorderColorSwizzleFeaturesEXT(const LogObjectList &_parentObjects,
                                                                             const VkStructureType sType, const void *pNext,
                                                                             const VkBool32 borderColorSwizzle,
                                                                             const VkBool32 borderColorSwizzleFromImage) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSamplerBorderColorComponentMappingCreateInfoEXT(const LogObjectList &_parentObjects,
                                                                                 const VkStructureType sType, const void *pNext,
                                                                                 const VkComponentMapping components,
                                                                                 const VkBool32 srgb) const {
    bool skip = false;
    const auto _s419 = &components;
    skip |= ValidateComponentMapping(_parentObjects, _s419->r, _s419->g, _s419->b, _s419->a);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 pageableDeviceLocalMemory) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderCorePropertiesARM(const LogObjectList &_parentObjects,
                                                                       const VkStructureType sType, const void *pNext,
                                                                       const uint32_t pixelRate, const uint32_t texelRate,
                                                                       const uint32_t fmaRate) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceImageSlicedViewOf3DFeaturesEXT(const LogObjectList &_parentObjects,
                                                                              const VkStructureType sType, const void *pNext,
                                                                              const VkBool32 imageSlicedViewOf3D) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageViewSlicedCreateInfoEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const uint32_t sliceOffset,
                                                              const uint32_t sliceCount) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 descriptorSetHostMapping) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDescriptorSetBindingReferenceVALVE(const LogObjectList &_parentObjects,
                                                                    const VkStructureType sType, const void *pNext,
                                                                    const VkDescriptorSetLayout descriptorSetLayout,
                                                                    const uint32_t binding) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDescriptorSetLayoutHostMappingInfoVALVE(const LogObjectList &_parentObjects,
                                                                         const VkStructureType sType, const void *pNext,
                                                                         const size_t descriptorOffset,
                                                                         const uint32_t descriptorSize) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDepthClampZeroOneFeaturesEXT(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const VkBool32 depthClampZeroOne) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceNonSeamlessCubeMapFeaturesEXT(const LogObjectList &_parentObjects,
                                                                             const VkStructureType sType, const void *pNext,
                                                                             const VkBool32 nonSeamlessCubeMap) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(const LogObjectList &_parentObjects,
                                                                                    const VkStructureType sType, const void *pNext,
                                                                                    const VkBool32 fragmentDensityMapOffset) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkExtent2D fragmentDensityOffsetGranularity) const {
    bool skip = false;
    const auto _s420 = &fragmentDensityOffsetGranularity;
    skip |= ValidateExtent2D(_parentObjects, _s420->width, _s420->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSubpassFragmentDensityMapOffsetEndInfoQCOM(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const uint32_t fragmentDensityOffsetCount,
                                                                            const VkOffset2D *pFragmentDensityOffsets) const {
    bool skip = false;
    if (pFragmentDensityOffsets != nullptr) {
        for (uint32_t _i421 = 0; _i421 < fragmentDensityOffsetCount; ++_i421) {
            const auto _s422 = &pFragmentDensityOffsets[_i421];
            skip |= ValidateOffset2D(_parentObjects, _s422->x, _s422->y);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCopyMemoryIndirectCommandNV(const LogObjectList &_parentObjects, const VkDeviceAddress srcAddress,
                                                             const VkDeviceAddress dstAddress, const VkDeviceSize size) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateCopyMemoryToImageIndirectCommandNV(
    const LogObjectList &_parentObjects, const VkDeviceAddress srcAddress, const uint32_t bufferRowLength,
    const uint32_t bufferImageHeight, const VkImageSubresourceLayers imageSubresource, const VkOffset3D imageOffset,
    const VkExtent3D imageExtent) const {
    bool skip = false;
    const auto _s423 = &imageSubresource;
    skip |= ValidateImageSubresourceLayers(_parentObjects, _s423->aspectMask, _s423->mipLevel, _s423->baseArrayLayer,
                                           _s423->layerCount);
    const auto _s424 = &imageOffset;
    skip |= ValidateOffset3D(_parentObjects, _s424->x, _s424->y, _s424->z);
    const auto _s425 = &imageExtent;
    skip |= ValidateExtent3D(_parentObjects, _s425->width, _s425->height, _s425->depth);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceCopyMemoryIndirectFeaturesNV(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const VkBool32 indirectCopy) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceCopyMemoryIndirectPropertiesNV(const LogObjectList &_parentObjects,
                                                                              const VkStructureType sType, const void *pNext,
                                                                              const VkQueueFlags supportedQueues) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDecompressMemoryRegionNV(const LogObjectList &_parentObjects, const VkDeviceAddress srcAddress,
                                                          const VkDeviceAddress dstAddress, const VkDeviceSize compressedSize,
                                                          const VkDeviceSize decompressedSize,
                                                          const VkMemoryDecompressionMethodFlagsNV decompressionMethod) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMemoryDecompressionFeaturesNV(const LogObjectList &_parentObjects,
                                                                             const VkStructureType sType, const void *pNext,
                                                                             const VkBool32 memoryDecompression) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMemoryDecompressionPropertiesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkMemoryDecompressionMethodFlagsNV decompressionMethods, const uint64_t maxDecompressionIndirectCount) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 deviceGeneratedCompute,
    const VkBool32 deviceGeneratedComputePipelines, const VkBool32 deviceGeneratedComputeCaptureReplay) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateComputePipelineIndirectBufferInfoNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkDeviceAddress deviceAddress,
    const VkDeviceSize size, const VkDeviceAddress pipelineDeviceAddressCaptureReplay) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineIndirectDeviceAddressInfoNV(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const VkPipelineBindPoint pipelineBindPoint,
                                                                     const VkPipeline pipeline) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBindPipelineIndirectCommandNV(const LogObjectList &_parentObjects,
                                                               const VkDeviceAddress pipelineAddress) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceLinearColorAttachmentFeaturesNV(const LogObjectList &_parentObjects,
                                                                               const VkStructureType sType, const void *pNext,
                                                                               const VkBool32 linearColorAttachment) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 imageCompressionControlSwapchain) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateImageViewSampleWeightCreateInfoQCOM(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const VkOffset2D filterCenter, const VkExtent2D filterSize,
                                                                     const uint32_t numPhases) const {
    bool skip = false;
    const auto _s426 = &filterCenter;
    skip |= ValidateOffset2D(_parentObjects, _s426->x, _s426->y);
    const auto _s427 = &filterSize;
    skip |= ValidateExtent2D(_parentObjects, _s427->width, _s427->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceImageProcessingFeaturesQCOM(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const VkBool32 textureSampleWeighted,
                                                                           const VkBool32 textureBoxFilter,
                                                                           const VkBool32 textureBlockMatch) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceImageProcessingPropertiesQCOM(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t maxWeightFilterPhases,
    const VkExtent2D maxWeightFilterDimension, const VkExtent2D maxBlockMatchRegion, const VkExtent2D maxBoxFilterBlockSize) const {
    bool skip = false;
    const auto _s428 = &maxWeightFilterDimension;
    skip |= ValidateExtent2D(_parentObjects, _s428->width, _s428->height);
    const auto _s429 = &maxBlockMatchRegion;
    skip |= ValidateExtent2D(_parentObjects, _s429->width, _s429->height);
    const auto _s430 = &maxBoxFilterBlockSize;
    skip |= ValidateExtent2D(_parentObjects, _s430->width, _s430->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceNestedCommandBufferFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 nestedCommandBuffer,
    const VkBool32 nestedCommandBufferRendering, const VkBool32 nestedCommandBufferSimultaneousUse) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceNestedCommandBufferPropertiesEXT(const LogObjectList &_parentObjects,
                                                                                const VkStructureType sType, const void *pNext,
                                                                                const uint32_t maxCommandBufferNestingLevel) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateExternalMemoryAcquireUnmodifiedEXT(const LogObjectList &_parentObjects,
                                                                    const VkStructureType sType, const void *pNext,
                                                                    const VkBool32 acquireUnmodifiedMemory) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceExtendedDynamicState3FeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 extendedDynamicState3TessellationDomainOrigin, const VkBool32 extendedDynamicState3DepthClampEnable,
    const VkBool32 extendedDynamicState3PolygonMode, const VkBool32 extendedDynamicState3RasterizationSamples,
    const VkBool32 extendedDynamicState3SampleMask, const VkBool32 extendedDynamicState3AlphaToCoverageEnable,
    const VkBool32 extendedDynamicState3AlphaToOneEnable, const VkBool32 extendedDynamicState3LogicOpEnable,
    const VkBool32 extendedDynamicState3ColorBlendEnable, const VkBool32 extendedDynamicState3ColorBlendEquation,
    const VkBool32 extendedDynamicState3ColorWriteMask, const VkBool32 extendedDynamicState3RasterizationStream,
    const VkBool32 extendedDynamicState3ConservativeRasterizationMode,
    const VkBool32 extendedDynamicState3ExtraPrimitiveOverestimationSize, const VkBool32 extendedDynamicState3DepthClipEnable,
    const VkBool32 extendedDynamicState3SampleLocationsEnable, const VkBool32 extendedDynamicState3ColorBlendAdvanced,
    const VkBool32 extendedDynamicState3ProvokingVertexMode, const VkBool32 extendedDynamicState3LineRasterizationMode,
    const VkBool32 extendedDynamicState3LineStippleEnable, const VkBool32 extendedDynamicState3DepthClipNegativeOneToOne,
    const VkBool32 extendedDynamicState3ViewportWScalingEnable, const VkBool32 extendedDynamicState3ViewportSwizzle,
    const VkBool32 extendedDynamicState3CoverageToColorEnable, const VkBool32 extendedDynamicState3CoverageToColorLocation,
    const VkBool32 extendedDynamicState3CoverageModulationMode, const VkBool32 extendedDynamicState3CoverageModulationTableEnable,
    const VkBool32 extendedDynamicState3CoverageModulationTable, const VkBool32 extendedDynamicState3CoverageReductionMode,
    const VkBool32 extendedDynamicState3RepresentativeFragmentTestEnable,
    const VkBool32 extendedDynamicState3ShadingRateImageEnable) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceExtendedDynamicState3PropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 dynamicPrimitiveTopologyUnrestricted) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateColorBlendEquationEXT(const LogObjectList &_parentObjects, const VkBlendFactor srcColorBlendFactor,
                                                       const VkBlendFactor dstColorBlendFactor, const VkBlendOp colorBlendOp,
                                                       const VkBlendFactor srcAlphaBlendFactor,
                                                       const VkBlendFactor dstAlphaBlendFactor,
                                                       const VkBlendOp alphaBlendOp) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateColorBlendAdvancedEXT(const LogObjectList &_parentObjects, const VkBlendOp advancedBlendOp,
                                                       const VkBool32 srcPremultiplied, const VkBool32 dstPremultiplied,
                                                       const VkBlendOverlapEXT blendOverlap, const VkBool32 clampResults) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceSubpassMergeFeedbackFeaturesEXT(const LogObjectList &_parentObjects,
                                                                               const VkStructureType sType, const void *pNext,
                                                                               const VkBool32 subpassMergeFeedback) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRenderPassCreationControlEXT(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const VkBool32 disallowMerging) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRenderPassCreationFeedbackInfoEXT(const LogObjectList &_parentObjects,
                                                                   const uint32_t postMergeSubpassCount) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateRenderPassCreationFeedbackCreateInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkRenderPassCreationFeedbackInfoEXT *pRenderPassFeedback) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRenderPassSubpassFeedbackInfoEXT(const LogObjectList &_parentObjects,
                                                                  const VkSubpassMergeStatusEXT subpassMergeStatus,
                                                                  const char description[VK_MAX_DESCRIPTION_SIZE],
                                                                  const uint32_t postMergeIndex) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateRenderPassSubpassFeedbackCreateInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkRenderPassSubpassFeedbackInfoEXT *pSubpassFeedback) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDirectDriverLoadingInfoLUNARG(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const VkDirectDriverLoadingFlagsLUNARG flags,
                                                               const PFN_vkGetInstanceProcAddrLUNARG pfnGetInstanceProcAddr) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDirectDriverLoadingListLUNARG(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext, const VkDirectDriverLoadingModeLUNARG mode,
                                                               const uint32_t driverCount,
                                                               const VkDirectDriverLoadingInfoLUNARG *pDrivers) const {
    bool skip = false;
    if (pDrivers != nullptr) {
        for (uint32_t _i431 = 0; _i431 < driverCount; ++_i431) {
            const auto _s432 = &pDrivers[_i431];
            skip |= ValidateDirectDriverLoadingInfoLUNARG(_parentObjects, _s432->sType, _s432->pNext, _s432->flags,
                                                          _s432->pfnGetInstanceProcAddr);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderModuleIdentifierFeaturesEXT(const LogObjectList &_parentObjects,
                                                                                 const VkStructureType sType, const void *pNext,
                                                                                 const VkBool32 shaderModuleIdentifier) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderModuleIdentifierPropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const uint8_t shaderModuleIdentifierAlgorithmUUID[VK_UUID_SIZE]) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePipelineShaderStageModuleIdentifierCreateInfoEXT(const LogObjectList &_parentObjects,
                                                                                  const VkStructureType sType, const void *pNext,
                                                                                  const uint32_t identifierSize,
                                                                                  const uint8_t *pIdentifier) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateShaderModuleIdentifierEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t identifierSize,
    const uint8_t identifier[VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT]) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceOpticalFlowFeaturesNV(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const VkBool32 opticalFlow) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceOpticalFlowPropertiesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkOpticalFlowGridSizeFlagsNV supportedOutputGridSizes, const VkOpticalFlowGridSizeFlagsNV supportedHintGridSizes,
    const VkBool32 hintSupported, const VkBool32 costSupported, const VkBool32 bidirectionalFlowSupported,
    const VkBool32 globalFlowSupported, const uint32_t minWidth, const uint32_t minHeight, const uint32_t maxWidth,
    const uint32_t maxHeight, const uint32_t maxNumRegionsOfInterest) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateOpticalFlowImageFormatInfoNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const VkOpticalFlowUsageFlagsNV usage) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateOpticalFlowImageFormatPropertiesNV(const LogObjectList &_parentObjects,
                                                                    const VkStructureType sType, const void *pNext,
                                                                    const VkFormat format) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateOpticalFlowSessionCreateInfoNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t width,
    const uint32_t height, const VkFormat imageFormat, const VkFormat flowVectorFormat, const VkFormat costFormat,
    const VkOpticalFlowGridSizeFlagsNV outputGridSize, const VkOpticalFlowGridSizeFlagsNV hintGridSize,
    const VkOpticalFlowPerformanceLevelNV performanceLevel, const VkOpticalFlowSessionCreateFlagsNV flags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateOpticalFlowSessionCreatePrivateDataInfoNV(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const uint32_t id, const uint32_t size,
                                                                           const void *pPrivateData) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateOpticalFlowExecuteInfoNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const VkOpticalFlowExecuteFlagsNV flags,
                                                          const uint32_t regionCount, const VkRect2D *pRegions) const {
    bool skip = false;
    if (pRegions != nullptr) {
        for (uint32_t _i433 = 0; _i433 < regionCount; ++_i433) {
            const auto _s434 = &pRegions[_i433];
            skip |= ValidateRect2D(_parentObjects, _s434->offset, _s434->extent);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceLegacyDitheringFeaturesEXT(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkBool32 legacyDithering) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePipelineProtectedAccessFeaturesEXT(const LogObjectList &_parentObjects,
                                                                                  const VkStructureType sType, const void *pNext,
                                                                                  const VkBool32 pipelineProtectedAccess) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool ExplicitValidation::ValidatePhysicalDeviceExternalFormatResolveFeaturesANDROID(const LogObjectList &_parentObjects,
                                                                                    const VkStructureType sType, const void *pNext,
                                                                                    const VkBool32 externalFormatResolve) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool ExplicitValidation::ValidatePhysicalDeviceExternalFormatResolvePropertiesANDROID(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 nullColorAttachmentWithExternalFormatResolve, const VkChromaLocation externalFormatResolveChromaOffsetX,
    const VkChromaLocation externalFormatResolveChromaOffsetY) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool ExplicitValidation::ValidateAndroidHardwareBufferFormatResolvePropertiesANDROID(const LogObjectList &_parentObjects,
                                                                                     const VkStructureType sType, const void *pNext,
                                                                                     const VkFormat colorAttachmentFormat) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR
bool ExplicitValidation::ValidatePhysicalDeviceShaderObjectFeaturesEXT(const LogObjectList &_parentObjects,
                                                                       const VkStructureType sType, const void *pNext,
                                                                       const VkBool32 shaderObject) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderObjectPropertiesEXT(const LogObjectList &_parentObjects,
                                                                         const VkStructureType sType, const void *pNext,
                                                                         const uint8_t shaderBinaryUUID[VK_UUID_SIZE],
                                                                         const uint32_t shaderBinaryVersion) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateShaderCreateInfoEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkShaderCreateFlagsEXT flags,
    const VkShaderStageFlagBits stage, const VkShaderStageFlags nextStage, const VkShaderCodeTypeEXT codeType,
    const size_t codeSize, const void *pCode, const char *pName, const uint32_t setLayoutCount,
    const VkDescriptorSetLayout *pSetLayouts, const uint32_t pushConstantRangeCount, const VkPushConstantRange *pPushConstantRanges,
    const VkSpecializationInfo *pSpecializationInfo) const {
    bool skip = false;
    if (pPushConstantRanges != nullptr) {
        for (uint32_t _i435 = 0; _i435 < pushConstantRangeCount; ++_i435) {
            const auto _s436 = &pPushConstantRanges[_i435];
            skip |= ValidatePushConstantRange(_parentObjects, _s436->stageFlags, _s436->offset, _s436->size);
        }
    }
    if (pSpecializationInfo != nullptr) {
        const auto _s437 = pSpecializationInfo;
        skip |= ValidateSpecializationInfo(_parentObjects, _s437->mapEntryCount, _s437->pMapEntries, _s437->dataSize, _s437->pData);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceTilePropertiesFeaturesQCOM(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkBool32 tileProperties) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateTilePropertiesQCOM(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                    const void *pNext, const VkExtent3D tileSize, const VkExtent2D apronSize,
                                                    const VkOffset2D origin) const {
    bool skip = false;
    const auto _s438 = &tileSize;
    skip |= ValidateExtent3D(_parentObjects, _s438->width, _s438->height, _s438->depth);
    const auto _s439 = &apronSize;
    skip |= ValidateExtent2D(_parentObjects, _s439->width, _s439->height);
    const auto _s440 = &origin;
    skip |= ValidateOffset2D(_parentObjects, _s440->x, _s440->y);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceAmigoProfilingFeaturesSEC(const LogObjectList &_parentObjects,
                                                                         const VkStructureType sType, const void *pNext,
                                                                         const VkBool32 amigoProfiling) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAmigoProfilingSubmitInfoSEC(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                             const void *pNext, const uint64_t firstDrawTimestamp,
                                                             const uint64_t swapBufferTimestamp) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 multiviewPerViewViewports) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceRayTracingInvocationReorderPropertiesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkRayTracingInvocationReorderModeNV rayTracingInvocationReorderReorderingHint) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceRayTracingInvocationReorderFeaturesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 rayTracingInvocationReorder) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceExtendedSparseAddressSpaceFeaturesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 extendedSparseAddressSpace) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceExtendedSparseAddressSpacePropertiesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkDeviceSize extendedSparseAddressSpaceSize, const VkImageUsageFlags extendedSparseImageUsageFlags,
    const VkBufferUsageFlags extendedSparseBufferUsageFlags) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderCoreBuiltinsFeaturesARM(const LogObjectList &_parentObjects,
                                                                             const VkStructureType sType, const void *pNext,
                                                                             const VkBool32 shaderCoreBuiltins) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceShaderCoreBuiltinsPropertiesARM(const LogObjectList &_parentObjects,
                                                                               const VkStructureType sType, const void *pNext,
                                                                               const uint64_t shaderCoreMask,
                                                                               const uint32_t shaderCoreCount,
                                                                               const uint32_t shaderWarpsPerCore) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 pipelineLibraryGroupHandles) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 dynamicRenderingUnusedAttachments) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateLatencySleepModeInfoNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                        const void *pNext, const VkBool32 lowLatencyMode,
                                                        const VkBool32 lowLatencyBoost, const uint32_t minimumIntervalUs) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateLatencySleepInfoNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                    const void *pNext, const VkSemaphore signalSemaphore,
                                                    const uint64_t value) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSetLatencyMarkerInfoNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                        const void *pNext, const uint64_t presentID,
                                                        const VkLatencyMarkerNV marker) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateLatencyTimingsFrameReportNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint64_t presentID,
    const uint64_t inputSampleTimeUs, const uint64_t simStartTimeUs, const uint64_t simEndTimeUs,
    const uint64_t renderSubmitStartTimeUs, const uint64_t renderSubmitEndTimeUs, const uint64_t presentStartTimeUs,
    const uint64_t presentEndTimeUs, const uint64_t driverStartTimeUs, const uint64_t driverEndTimeUs,
    const uint64_t osRenderQueueStartTimeUs, const uint64_t osRenderQueueEndTimeUs, const uint64_t gpuRenderStartTimeUs,
    const uint64_t gpuRenderEndTimeUs) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateGetLatencyMarkerInfoNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                        const void *pNext, const VkLatencyTimingsFrameReportNV *pTimings) const {
    bool skip = false;
    if (pTimings != nullptr) {
        const auto _s441 = pTimings;
        skip |= ValidateLatencyTimingsFrameReportNV(
            _parentObjects, _s441->sType, _s441->pNext, _s441->presentID, _s441->inputSampleTimeUs, _s441->simStartTimeUs,
            _s441->simEndTimeUs, _s441->renderSubmitStartTimeUs, _s441->renderSubmitEndTimeUs, _s441->presentStartTimeUs,
            _s441->presentEndTimeUs, _s441->driverStartTimeUs, _s441->driverEndTimeUs, _s441->osRenderQueueStartTimeUs,
            _s441->osRenderQueueEndTimeUs, _s441->gpuRenderStartTimeUs, _s441->gpuRenderEndTimeUs);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateLatencySubmissionPresentIdNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const uint64_t presentID) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSwapchainLatencyCreateInfoNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const VkBool32 latencyModeEnable) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateOutOfBandQueueTypeInfoNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                          const void *pNext, const VkOutOfBandQueueTypeNV queueType) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateLatencySurfaceCapabilitiesNV(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                              const void *pNext, const uint32_t presentModeCount,
                                                              const VkPresentModeKHR *pPresentModes) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 multiviewPerViewRenderAreas) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(const LogObjectList &_parentObjects,
                                                                                    const VkStructureType sType, const void *pNext,
                                                                                    const uint32_t perViewRenderAreaCount,
                                                                                    const VkRect2D *pPerViewRenderAreas) const {
    bool skip = false;
    if (pPerViewRenderAreas != nullptr) {
        for (uint32_t _i442 = 0; _i442 < perViewRenderAreaCount; ++_i442) {
            const auto _s443 = &pPerViewRenderAreas[_i442];
            skip |= ValidateRect2D(_parentObjects, _s443->offset, _s443->extent);
        }
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceImageProcessing2FeaturesQCOM(const LogObjectList &_parentObjects,
                                                                            const VkStructureType sType, const void *pNext,
                                                                            const VkBool32 textureBlockMatch2) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceImageProcessing2PropertiesQCOM(const LogObjectList &_parentObjects,
                                                                              const VkStructureType sType, const void *pNext,
                                                                              const VkExtent2D maxBlockMatchWindow) const {
    bool skip = false;
    const auto _s444 = &maxBlockMatchWindow;
    skip |= ValidateExtent2D(_parentObjects, _s444->width, _s444->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSamplerBlockMatchWindowCreateInfoQCOM(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkExtent2D windowExtent,
    const VkBlockMatchWindowCompareModeQCOM windowCompareMode) const {
    bool skip = false;
    const auto _s445 = &windowExtent;
    skip |= ValidateExtent2D(_parentObjects, _s445->width, _s445->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceCubicWeightsFeaturesQCOM(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkBool32 selectableCubicWeights) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSamplerCubicWeightsCreateInfoQCOM(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext,
                                                                   const VkCubicFilterWeightsQCOM cubicWeights) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateBlitImageCubicWeightsInfoQCOM(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                               const void *pNext,
                                                               const VkCubicFilterWeightsQCOM cubicWeights) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceYcbcrDegammaFeaturesQCOM(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkBool32 ycbcrDegamma) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(const LogObjectList &_parentObjects,
                                                                                  const VkStructureType sType, const void *pNext,
                                                                                  const VkBool32 enableYDegamma,
                                                                                  const VkBool32 enableCbCrDegamma) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceCubicClampFeaturesQCOM(const LogObjectList &_parentObjects,
                                                                      const VkStructureType sType, const void *pNext,
                                                                      const VkBool32 cubicRangeClamp) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 attachmentFeedbackLoopDynamicState) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#ifdef VK_USE_PLATFORM_SCREEN_QNX
bool ExplicitValidation::ValidateScreenBufferPropertiesQNX(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const VkDeviceSize allocationSize,
                                                           const uint32_t memoryTypeBits) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_SCREEN_QNX
#ifdef VK_USE_PLATFORM_SCREEN_QNX
bool ExplicitValidation::ValidateScreenBufferFormatPropertiesQNX(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkFormat format,
    const uint64_t externalFormat, const uint64_t screenUsage, const VkFormatFeatureFlags formatFeatures,
    const VkComponentMapping samplerYcbcrConversionComponents, const VkSamplerYcbcrModelConversion suggestedYcbcrModel,
    const VkSamplerYcbcrRange suggestedYcbcrRange, const VkChromaLocation suggestedXChromaOffset,
    const VkChromaLocation suggestedYChromaOffset) const {
    bool skip = false;
    const auto _s446 = &samplerYcbcrConversionComponents;
    skip |= ValidateComponentMapping(_parentObjects, _s446->r, _s446->g, _s446->b, _s446->a);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_SCREEN_QNX
#ifdef VK_USE_PLATFORM_SCREEN_QNX
bool ExplicitValidation::ValidateImportScreenBufferInfoQNX(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                           const void *pNext, const struct _screen_buffer *buffer) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_SCREEN_QNX
#ifdef VK_USE_PLATFORM_SCREEN_QNX
bool ExplicitValidation::ValidateExternalFormatQNX(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                   const void *pNext, const uint64_t externalFormat) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_SCREEN_QNX
#ifdef VK_USE_PLATFORM_SCREEN_QNX
bool ExplicitValidation::ValidatePhysicalDeviceExternalMemoryScreenBufferFeaturesQNX(const LogObjectList &_parentObjects,
                                                                                     const VkStructureType sType, const void *pNext,
                                                                                     const VkBool32 screenBufferImport) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
#endif  // VK_USE_PLATFORM_SCREEN_QNX
bool ExplicitValidation::ValidatePhysicalDeviceLayeredDriverPropertiesMSFT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkLayeredDriverUnderlyingApiMSFT underlyingAPI) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceDescriptorPoolOverallocationFeaturesNV(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkBool32 descriptorPoolOverallocation) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureBuildRangeInfoKHR(const LogObjectList &_parentObjects,
                                                                        const uint32_t primitiveCount,
                                                                        const uint32_t primitiveOffset, const uint32_t firstVertex,
                                                                        const uint32_t transformOffset) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureGeometryTrianglesDataKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkFormat vertexFormat,
    const VkDeviceOrHostAddressConstKHR vertexData, const VkDeviceSize vertexStride, const uint32_t maxVertex,
    const VkIndexType indexType, const VkDeviceOrHostAddressConstKHR indexData,
    const VkDeviceOrHostAddressConstKHR transformData) const {
    bool skip = false;
    const auto _s447 = &vertexData;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s447->deviceAddress, _s447->hostAddress);
    const auto _s448 = &indexData;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s448->deviceAddress, _s448->hostAddress);
    const auto _s449 = &transformData;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s449->deviceAddress, _s449->hostAddress);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureGeometryAabbsDataKHR(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const VkDeviceOrHostAddressConstKHR data,
                                                                           const VkDeviceSize stride) const {
    bool skip = false;
    const auto _s450 = &data;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s450->deviceAddress, _s450->hostAddress);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureGeometryInstancesDataKHR(const LogObjectList &_parentObjects,
                                                                               const VkStructureType sType, const void *pNext,
                                                                               const VkBool32 arrayOfPointers,
                                                                               const VkDeviceOrHostAddressConstKHR data) const {
    bool skip = false;
    const auto _s451 = &data;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s451->deviceAddress, _s451->hostAddress);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureGeometryDataKHR(
    const LogObjectList &_parentObjects, const VkAccelerationStructureGeometryTrianglesDataKHR triangles,
    const VkAccelerationStructureGeometryAabbsDataKHR aabbs,
    const VkAccelerationStructureGeometryInstancesDataKHR instances) const {
    bool skip = false;
    const auto _s452 = &triangles;
    skip |= ValidateAccelerationStructureGeometryTrianglesDataKHR(_parentObjects, _s452->sType, _s452->pNext, _s452->vertexFormat,
                                                                  _s452->vertexData, _s452->vertexStride, _s452->maxVertex,
                                                                  _s452->indexType, _s452->indexData, _s452->transformData);
    const auto _s453 = &aabbs;
    skip |=
        ValidateAccelerationStructureGeometryAabbsDataKHR(_parentObjects, _s453->sType, _s453->pNext, _s453->data, _s453->stride);
    const auto _s454 = &instances;
    skip |= ValidateAccelerationStructureGeometryInstancesDataKHR(_parentObjects, _s454->sType, _s454->pNext,
                                                                  _s454->arrayOfPointers, _s454->data);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureGeometryKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                  const void *pNext, const VkGeometryTypeKHR geometryType,
                                                                  const VkAccelerationStructureGeometryDataKHR geometry,
                                                                  const VkGeometryFlagsKHR flags) const {
    bool skip = false;
    const auto _s455 = &geometry;
    skip |= ValidateAccelerationStructureGeometryDataKHR(_parentObjects, _s455->triangles, _s455->aabbs, _s455->instances);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureBuildGeometryInfoKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkAccelerationStructureTypeKHR type,
    const VkBuildAccelerationStructureFlagsKHR flags, const VkBuildAccelerationStructureModeKHR mode,
    const VkAccelerationStructureKHR srcAccelerationStructure, const VkAccelerationStructureKHR dstAccelerationStructure,
    const uint32_t geometryCount, const VkAccelerationStructureGeometryKHR *pGeometries,
    const VkAccelerationStructureGeometryKHR *const *ppGeometries, const VkDeviceOrHostAddressKHR scratchData) const {
    bool skip = false;
    if (pGeometries != nullptr) {
        for (uint32_t _i456 = 0; _i456 < geometryCount; ++_i456) {
            const auto _s457 = &pGeometries[_i456];
            skip |= ValidateAccelerationStructureGeometryKHR(_parentObjects, _s457->sType, _s457->pNext, _s457->geometryType,
                                                             _s457->geometry, _s457->flags);
        }
    }
    if (ppGeometries != nullptr) {
        for (uint32_t _i458 = 0; _i458 < geometryCount; ++_i458) {
            const auto _s459 = ppGeometries[_i458];
            skip |= ValidateAccelerationStructureGeometryKHR(_parentObjects, _s459->sType, _s459->pNext, _s459->geometryType,
                                                             _s459->geometry, _s459->flags);
        }
    }
    const auto _s460 = &scratchData;
    skip |= ValidateDeviceOrHostAddressKHR(_parentObjects, _s460->deviceAddress, _s460->hostAddress);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureCreateInfoKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkAccelerationStructureCreateFlagsKHR createFlags, const VkBuffer buffer, const VkDeviceSize offset,
    const VkDeviceSize size, const VkAccelerationStructureTypeKHR type, const VkDeviceAddress deviceAddress) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateWriteDescriptorSetAccelerationStructureKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t accelerationStructureCount,
    const VkAccelerationStructureKHR *pAccelerationStructures) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceAccelerationStructureFeaturesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 accelerationStructure,
    const VkBool32 accelerationStructureCaptureReplay, const VkBool32 accelerationStructureIndirectBuild,
    const VkBool32 accelerationStructureHostCommands, const VkBool32 descriptorBindingAccelerationStructureUpdateAfterBind) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceAccelerationStructurePropertiesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint64_t maxGeometryCount,
    const uint64_t maxInstanceCount, const uint64_t maxPrimitiveCount, const uint32_t maxPerStageDescriptorAccelerationStructures,
    const uint32_t maxPerStageDescriptorUpdateAfterBindAccelerationStructures,
    const uint32_t maxDescriptorSetAccelerationStructures, const uint32_t maxDescriptorSetUpdateAfterBindAccelerationStructures,
    const uint32_t minAccelerationStructureScratchOffsetAlignment) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureDeviceAddressInfoKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext,
    const VkAccelerationStructureKHR accelerationStructure) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureVersionInfoKHR(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const uint8_t *pVersionData) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCopyAccelerationStructureToMemoryInfoKHR(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkAccelerationStructureKHR src,
                                                                          const VkDeviceOrHostAddressKHR dst,
                                                                          const VkCopyAccelerationStructureModeKHR mode) const {
    bool skip = false;
    const auto _s461 = &dst;
    skip |= ValidateDeviceOrHostAddressKHR(_parentObjects, _s461->deviceAddress, _s461->hostAddress);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCopyMemoryToAccelerationStructureInfoKHR(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkDeviceOrHostAddressConstKHR src,
                                                                          const VkAccelerationStructureKHR dst,
                                                                          const VkCopyAccelerationStructureModeKHR mode) const {
    bool skip = false;
    const auto _s462 = &src;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s462->deviceAddress, _s462->hostAddress);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCopyAccelerationStructureInfoKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                  const void *pNext, const VkAccelerationStructureKHR src,
                                                                  const VkAccelerationStructureKHR dst,
                                                                  const VkCopyAccelerationStructureModeKHR mode) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureBuildSizesInfoKHR(const LogObjectList &_parentObjects,
                                                                        const VkStructureType sType, const void *pNext,
                                                                        const VkDeviceSize accelerationStructureSize,
                                                                        const VkDeviceSize updateScratchSize,
                                                                        const VkDeviceSize buildScratchSize) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRayTracingShaderGroupCreateInfoKHR(const LogObjectList &_parentObjects,
                                                                    const VkStructureType sType, const void *pNext,
                                                                    const VkRayTracingShaderGroupTypeKHR type,
                                                                    const uint32_t generalShader, const uint32_t closestHitShader,
                                                                    const uint32_t anyHitShader, const uint32_t intersectionShader,
                                                                    const void *pShaderGroupCaptureReplayHandle) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRayTracingPipelineInterfaceCreateInfoKHR(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const uint32_t maxPipelineRayPayloadSize,
                                                                          const uint32_t maxPipelineRayHitAttributeSize) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateRayTracingPipelineCreateInfoKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkPipelineCreateFlags flags,
    const uint32_t stageCount, const VkPipelineShaderStageCreateInfo *pStages, const uint32_t groupCount,
    const VkRayTracingShaderGroupCreateInfoKHR *pGroups, const uint32_t maxPipelineRayRecursionDepth,
    const VkPipelineLibraryCreateInfoKHR *pLibraryInfo, const VkRayTracingPipelineInterfaceCreateInfoKHR *pLibraryInterface,
    const VkPipelineDynamicStateCreateInfo *pDynamicState, const VkPipelineLayout layout, const VkPipeline basePipelineHandle,
    const int32_t basePipelineIndex) const {
    bool skip = false;
    if (pStages != nullptr) {
        for (uint32_t _i463 = 0; _i463 < stageCount; ++_i463) {
            const auto _s464 = &pStages[_i463];
            skip |= ValidatePipelineShaderStageCreateInfo(_parentObjects, _s464->sType, _s464->pNext, _s464->flags, _s464->stage,
                                                          _s464->module, _s464->pName, _s464->pSpecializationInfo);
        }
    }
    if (pGroups != nullptr) {
        for (uint32_t _i465 = 0; _i465 < groupCount; ++_i465) {
            const auto _s466 = &pGroups[_i465];
            skip |= ValidateRayTracingShaderGroupCreateInfoKHR(_parentObjects, _s466->sType, _s466->pNext, _s466->type,
                                                               _s466->generalShader, _s466->closestHitShader, _s466->anyHitShader,
                                                               _s466->intersectionShader, _s466->pShaderGroupCaptureReplayHandle);
        }
    }
    if (pLibraryInfo != nullptr) {
        const auto _s467 = pLibraryInfo;
        skip |= ValidatePipelineLibraryCreateInfoKHR(_parentObjects, _s467->sType, _s467->pNext, _s467->libraryCount,
                                                     _s467->pLibraries);
    }
    if (pLibraryInterface != nullptr) {
        const auto _s468 = pLibraryInterface;
        skip |= ValidateRayTracingPipelineInterfaceCreateInfoKHR(
            _parentObjects, _s468->sType, _s468->pNext, _s468->maxPipelineRayPayloadSize, _s468->maxPipelineRayHitAttributeSize);
    }
    if (pDynamicState != nullptr) {
        const auto _s469 = pDynamicState;
        skip |= ValidatePipelineDynamicStateCreateInfo(_parentObjects, _s469->sType, _s469->pNext, _s469->flags,
                                                       _s469->dynamicStateCount, _s469->pDynamicStates);
    }
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceRayTracingPipelineFeaturesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkBool32 rayTracingPipeline,
    const VkBool32 rayTracingPipelineShaderGroupHandleCaptureReplay,
    const VkBool32 rayTracingPipelineShaderGroupHandleCaptureReplayMixed, const VkBool32 rayTracingPipelineTraceRaysIndirect,
    const VkBool32 rayTraversalPrimitiveCulling) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceRayTracingPipelinePropertiesKHR(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t shaderGroupHandleSize,
    const uint32_t maxRayRecursionDepth, const uint32_t maxShaderGroupStride, const uint32_t shaderGroupBaseAlignment,
    const uint32_t shaderGroupHandleCaptureReplaySize, const uint32_t maxRayDispatchInvocationCount,
    const uint32_t shaderGroupHandleAlignment, const uint32_t maxRayHitAttributeSize) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateStridedDeviceAddressRegionKHR(const LogObjectList &_parentObjects,
                                                               const VkDeviceAddress deviceAddress, const VkDeviceSize stride,
                                                               const VkDeviceSize size) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidateTraceRaysIndirectCommandKHR(const LogObjectList &_parentObjects, const uint32_t width,
                                                             const uint32_t height, const uint32_t depth) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceRayQueryFeaturesKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                   const void *pNext, const VkBool32 rayQuery) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMeshShaderFeaturesEXT(const LogObjectList &_parentObjects,
                                                                     const VkStructureType sType, const void *pNext,
                                                                     const VkBool32 taskShader, const VkBool32 meshShader,
                                                                     const VkBool32 multiviewMeshShader,
                                                                     const VkBool32 primitiveFragmentShadingRateMeshShader,
                                                                     const VkBool32 meshShaderQueries) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidatePhysicalDeviceMeshShaderPropertiesEXT(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const uint32_t maxTaskWorkGroupTotalCount,
    const uint32_t maxTaskWorkGroupCount[3], const uint32_t maxTaskWorkGroupInvocations, const uint32_t maxTaskWorkGroupSize[3],
    const uint32_t maxTaskPayloadSize, const uint32_t maxTaskSharedMemorySize, const uint32_t maxTaskPayloadAndSharedMemorySize,
    const uint32_t maxMeshWorkGroupTotalCount, const uint32_t maxMeshWorkGroupCount[3], const uint32_t maxMeshWorkGroupInvocations,
    const uint32_t maxMeshWorkGroupSize[3], const uint32_t maxMeshSharedMemorySize,
    const uint32_t maxMeshPayloadAndSharedMemorySize, const uint32_t maxMeshOutputMemorySize,
    const uint32_t maxMeshPayloadAndOutputMemorySize, const uint32_t maxMeshOutputComponents, const uint32_t maxMeshOutputVertices,
    const uint32_t maxMeshOutputPrimitives, const uint32_t maxMeshOutputLayers, const uint32_t maxMeshMultiviewViewCount,
    const uint32_t meshOutputPerVertexGranularity, const uint32_t meshOutputPerPrimitiveGranularity,
    const uint32_t maxPreferredTaskWorkGroupInvocations, const uint32_t maxPreferredMeshWorkGroupInvocations,
    const VkBool32 prefersLocalInvocationVertexOutput, const VkBool32 prefersLocalInvocationPrimitiveOutput,
    const VkBool32 prefersCompactVertexOutput, const VkBool32 prefersCompactPrimitiveOutput) const {
    bool skip = false;
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateDrawMeshTasksIndirectCommandEXT(const LogObjectList &_parentObjects, const uint32_t groupCountX,
                                                                 const uint32_t groupCountY, const uint32_t groupCountZ) const {
    bool skip = false;
    return skip;
}
bool ExplicitValidation::ValidatePNext(const LogObjectList &_parentObjects, const void *pnext) const {
    bool skip = false;
    const VkBaseInStructure *header = reinterpret_cast<const VkBaseInStructure *>(pnext);
    while (header) {
        switch (header->sType) {
            case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO: {
                const auto _s470 = reinterpret_cast<const VkShaderModuleCreateInfo *>(header);
                skip |= ValidateShaderModuleCreateInfo(_parentObjects, _s470->sType, nullptr, _s470->flags, _s470->codeSize,
                                                       _s470->pCode);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES: {
                const auto _s471 = reinterpret_cast<const VkPhysicalDeviceSubgroupProperties *>(header);
                skip |= ValidatePhysicalDeviceSubgroupProperties(_parentObjects, _s471->sType, nullptr, _s471->subgroupSize,
                                                                 _s471->supportedStages, _s471->supportedOperations,
                                                                 _s471->quadOperationsInAllStages);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES: {
                const auto _s472 = reinterpret_cast<const VkPhysicalDevice16BitStorageFeatures *>(header);
                skip |= ValidatePhysicalDevice16BitStorageFeatures(
                    _parentObjects, _s472->sType, nullptr, _s472->storageBuffer16BitAccess,
                    _s472->uniformAndStorageBuffer16BitAccess, _s472->storagePushConstant16, _s472->storageInputOutput16);
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS: {
                const auto _s473 = reinterpret_cast<const VkMemoryDedicatedRequirements *>(header);
                skip |= ValidateMemoryDedicatedRequirements(_parentObjects, _s473->sType, nullptr,
                                                            _s473->prefersDedicatedAllocation, _s473->requiresDedicatedAllocation);
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO: {
                const auto _s474 = reinterpret_cast<const VkMemoryDedicatedAllocateInfo *>(header);
                skip |= ValidateMemoryDedicatedAllocateInfo(_parentObjects, _s474->sType, nullptr, _s474->image, _s474->buffer);
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO: {
                const auto _s475 = reinterpret_cast<const VkMemoryAllocateFlagsInfo *>(header);
                skip |= ValidateMemoryAllocateFlagsInfo(_parentObjects, _s475->sType, nullptr, _s475->flags, _s475->deviceMask);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO: {
                const auto _s476 = reinterpret_cast<const VkDeviceGroupRenderPassBeginInfo *>(header);
                skip |= ValidateDeviceGroupRenderPassBeginInfo(_parentObjects, _s476->sType, nullptr, _s476->deviceMask,
                                                               _s476->deviceRenderAreaCount, _s476->pDeviceRenderAreas);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO: {
                const auto _s477 = reinterpret_cast<const VkDeviceGroupCommandBufferBeginInfo *>(header);
                skip |= ValidateDeviceGroupCommandBufferBeginInfo(_parentObjects, _s477->sType, nullptr, _s477->deviceMask);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO: {
                const auto _s478 = reinterpret_cast<const VkDeviceGroupSubmitInfo *>(header);
                skip |= ValidateDeviceGroupSubmitInfo(_parentObjects, _s478->sType, nullptr, _s478->waitSemaphoreCount,
                                                      _s478->pWaitSemaphoreDeviceIndices, _s478->commandBufferCount,
                                                      _s478->pCommandBufferDeviceMasks, _s478->signalSemaphoreCount,
                                                      _s478->pSignalSemaphoreDeviceIndices);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO: {
                const auto _s479 = reinterpret_cast<const VkDeviceGroupBindSparseInfo *>(header);
                skip |= ValidateDeviceGroupBindSparseInfo(_parentObjects, _s479->sType, nullptr, _s479->resourceDeviceIndex,
                                                          _s479->memoryDeviceIndex);
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO: {
                const auto _s480 = reinterpret_cast<const VkBindBufferMemoryDeviceGroupInfo *>(header);
                skip |= ValidateBindBufferMemoryDeviceGroupInfo(_parentObjects, _s480->sType, nullptr, _s480->deviceIndexCount,
                                                                _s480->pDeviceIndices);
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO: {
                const auto _s481 = reinterpret_cast<const VkBindImageMemoryDeviceGroupInfo *>(header);
                skip |= ValidateBindImageMemoryDeviceGroupInfo(_parentObjects, _s481->sType, nullptr, _s481->deviceIndexCount,
                                                               _s481->pDeviceIndices, _s481->splitInstanceBindRegionCount,
                                                               _s481->pSplitInstanceBindRegions);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO: {
                const auto _s482 = reinterpret_cast<const VkDeviceGroupDeviceCreateInfo *>(header);
                skip |= ValidateDeviceGroupDeviceCreateInfo(_parentObjects, _s482->sType, nullptr, _s482->physicalDeviceCount,
                                                            _s482->pPhysicalDevices);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2: {
                const auto _s483 = reinterpret_cast<const VkPhysicalDeviceFeatures2 *>(header);
                skip |= ValidatePhysicalDeviceFeatures2(_parentObjects, _s483->sType, nullptr, _s483->features);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES: {
                const auto _s484 = reinterpret_cast<const VkPhysicalDevicePointClippingProperties *>(header);
                skip |= ValidatePhysicalDevicePointClippingProperties(_parentObjects, _s484->sType, nullptr,
                                                                      _s484->pointClippingBehavior);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO: {
                const auto _s485 = reinterpret_cast<const VkRenderPassInputAttachmentAspectCreateInfo *>(header);
                skip |= ValidateRenderPassInputAttachmentAspectCreateInfo(_parentObjects, _s485->sType, nullptr,
                                                                          _s485->aspectReferenceCount, _s485->pAspectReferences);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO: {
                const auto _s486 = reinterpret_cast<const VkImageViewUsageCreateInfo *>(header);
                skip |= ValidateImageViewUsageCreateInfo(_parentObjects, _s486->sType, nullptr, _s486->usage);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO: {
                const auto _s487 = reinterpret_cast<const VkPipelineTessellationDomainOriginStateCreateInfo *>(header);
                skip |= ValidatePipelineTessellationDomainOriginStateCreateInfo(_parentObjects, _s487->sType, nullptr,
                                                                                _s487->domainOrigin);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO: {
                const auto _s488 = reinterpret_cast<const VkRenderPassMultiviewCreateInfo *>(header);
                skip |= ValidateRenderPassMultiviewCreateInfo(_parentObjects, _s488->sType, nullptr, _s488->subpassCount,
                                                              _s488->pViewMasks, _s488->dependencyCount, _s488->pViewOffsets,
                                                              _s488->correlationMaskCount, _s488->pCorrelationMasks);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES: {
                const auto _s489 = reinterpret_cast<const VkPhysicalDeviceMultiviewFeatures *>(header);
                skip |= ValidatePhysicalDeviceMultiviewFeatures(_parentObjects, _s489->sType, nullptr, _s489->multiview,
                                                                _s489->multiviewGeometryShader, _s489->multiviewTessellationShader);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES: {
                const auto _s490 = reinterpret_cast<const VkPhysicalDeviceMultiviewProperties *>(header);
                skip |= ValidatePhysicalDeviceMultiviewProperties(_parentObjects, _s490->sType, nullptr,
                                                                  _s490->maxMultiviewViewCount, _s490->maxMultiviewInstanceIndex);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES: {
                const auto _s491 = reinterpret_cast<const VkPhysicalDeviceVariablePointersFeatures *>(header);
                skip |= ValidatePhysicalDeviceVariablePointersFeatures(
                    _parentObjects, _s491->sType, nullptr, _s491->variablePointersStorageBuffer, _s491->variablePointers);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES: {
                const auto _s492 = reinterpret_cast<const VkPhysicalDeviceProtectedMemoryFeatures *>(header);
                skip |=
                    ValidatePhysicalDeviceProtectedMemoryFeatures(_parentObjects, _s492->sType, nullptr, _s492->protectedMemory);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES: {
                const auto _s493 = reinterpret_cast<const VkPhysicalDeviceProtectedMemoryProperties *>(header);
                skip |=
                    ValidatePhysicalDeviceProtectedMemoryProperties(_parentObjects, _s493->sType, nullptr, _s493->protectedNoFault);
                break;
            }
            case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO: {
                const auto _s494 = reinterpret_cast<const VkProtectedSubmitInfo *>(header);
                skip |= ValidateProtectedSubmitInfo(_parentObjects, _s494->sType, nullptr, _s494->protectedSubmit);
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO: {
                const auto _s495 = reinterpret_cast<const VkSamplerYcbcrConversionInfo *>(header);
                skip |= ValidateSamplerYcbcrConversionInfo(_parentObjects, _s495->sType, nullptr, _s495->conversion);
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO: {
                const auto _s496 = reinterpret_cast<const VkBindImagePlaneMemoryInfo *>(header);
                skip |= ValidateBindImagePlaneMemoryInfo(_parentObjects, _s496->sType, nullptr, _s496->planeAspect);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO: {
                const auto _s497 = reinterpret_cast<const VkImagePlaneMemoryRequirementsInfo *>(header);
                skip |= ValidateImagePlaneMemoryRequirementsInfo(_parentObjects, _s497->sType, nullptr, _s497->planeAspect);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES: {
                const auto _s498 = reinterpret_cast<const VkPhysicalDeviceSamplerYcbcrConversionFeatures *>(header);
                skip |= ValidatePhysicalDeviceSamplerYcbcrConversionFeatures(_parentObjects, _s498->sType, nullptr,
                                                                             _s498->samplerYcbcrConversion);
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES: {
                const auto _s499 = reinterpret_cast<const VkSamplerYcbcrConversionImageFormatProperties *>(header);
                skip |= ValidateSamplerYcbcrConversionImageFormatProperties(_parentObjects, _s499->sType, nullptr,
                                                                            _s499->combinedImageSamplerDescriptorCount);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO: {
                const auto _s500 = reinterpret_cast<const VkPhysicalDeviceExternalImageFormatInfo *>(header);
                skip |= ValidatePhysicalDeviceExternalImageFormatInfo(_parentObjects, _s500->sType, nullptr, _s500->handleType);
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES: {
                const auto _s501 = reinterpret_cast<const VkExternalImageFormatProperties *>(header);
                skip |=
                    ValidateExternalImageFormatProperties(_parentObjects, _s501->sType, nullptr, _s501->externalMemoryProperties);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES: {
                const auto _s502 = reinterpret_cast<const VkPhysicalDeviceIDProperties *>(header);
                skip |=
                    ValidatePhysicalDeviceIDProperties(_parentObjects, _s502->sType, nullptr, _s502->deviceUUID, _s502->driverUUID,
                                                       _s502->deviceLUID, _s502->deviceNodeMask, _s502->deviceLUIDValid);
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO: {
                const auto _s503 = reinterpret_cast<const VkExternalMemoryImageCreateInfo *>(header);
                skip |= ValidateExternalMemoryImageCreateInfo(_parentObjects, _s503->sType, nullptr, _s503->handleTypes);
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO: {
                const auto _s504 = reinterpret_cast<const VkExternalMemoryBufferCreateInfo *>(header);
                skip |= ValidateExternalMemoryBufferCreateInfo(_parentObjects, _s504->sType, nullptr, _s504->handleTypes);
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO: {
                const auto _s505 = reinterpret_cast<const VkExportMemoryAllocateInfo *>(header);
                skip |= ValidateExportMemoryAllocateInfo(_parentObjects, _s505->sType, nullptr, _s505->handleTypes);
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO: {
                const auto _s506 = reinterpret_cast<const VkExportFenceCreateInfo *>(header);
                skip |= ValidateExportFenceCreateInfo(_parentObjects, _s506->sType, nullptr, _s506->handleTypes);
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO: {
                const auto _s507 = reinterpret_cast<const VkExportSemaphoreCreateInfo *>(header);
                skip |= ValidateExportSemaphoreCreateInfo(_parentObjects, _s507->sType, nullptr, _s507->handleTypes);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES: {
                const auto _s508 = reinterpret_cast<const VkPhysicalDeviceMaintenance3Properties *>(header);
                skip |= ValidatePhysicalDeviceMaintenance3Properties(_parentObjects, _s508->sType, nullptr,
                                                                     _s508->maxPerSetDescriptors, _s508->maxMemoryAllocationSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES: {
                const auto _s509 = reinterpret_cast<const VkPhysicalDeviceShaderDrawParametersFeatures *>(header);
                skip |= ValidatePhysicalDeviceShaderDrawParametersFeatures(_parentObjects, _s509->sType, nullptr,
                                                                           _s509->shaderDrawParameters);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES: {
                const auto _s510 = reinterpret_cast<const VkPhysicalDeviceVulkan11Features *>(header);
                skip |= ValidatePhysicalDeviceVulkan11Features(
                    _parentObjects, _s510->sType, nullptr, _s510->storageBuffer16BitAccess,
                    _s510->uniformAndStorageBuffer16BitAccess, _s510->storagePushConstant16, _s510->storageInputOutput16,
                    _s510->multiview, _s510->multiviewGeometryShader, _s510->multiviewTessellationShader,
                    _s510->variablePointersStorageBuffer, _s510->variablePointers, _s510->protectedMemory,
                    _s510->samplerYcbcrConversion, _s510->shaderDrawParameters);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES: {
                const auto _s511 = reinterpret_cast<const VkPhysicalDeviceVulkan11Properties *>(header);
                skip |= ValidatePhysicalDeviceVulkan11Properties(
                    _parentObjects, _s511->sType, nullptr, _s511->deviceUUID, _s511->driverUUID, _s511->deviceLUID,
                    _s511->deviceNodeMask, _s511->deviceLUIDValid, _s511->subgroupSize, _s511->subgroupSupportedStages,
                    _s511->subgroupSupportedOperations, _s511->subgroupQuadOperationsInAllStages, _s511->pointClippingBehavior,
                    _s511->maxMultiviewViewCount, _s511->maxMultiviewInstanceIndex, _s511->protectedNoFault,
                    _s511->maxPerSetDescriptors, _s511->maxMemoryAllocationSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES: {
                const auto _s512 = reinterpret_cast<const VkPhysicalDeviceVulkan12Features *>(header);
                skip |= ValidatePhysicalDeviceVulkan12Features(
                    _parentObjects, _s512->sType, nullptr, _s512->samplerMirrorClampToEdge, _s512->drawIndirectCount,
                    _s512->storageBuffer8BitAccess, _s512->uniformAndStorageBuffer8BitAccess, _s512->storagePushConstant8,
                    _s512->shaderBufferInt64Atomics, _s512->shaderSharedInt64Atomics, _s512->shaderFloat16, _s512->shaderInt8,
                    _s512->descriptorIndexing, _s512->shaderInputAttachmentArrayDynamicIndexing,
                    _s512->shaderUniformTexelBufferArrayDynamicIndexing, _s512->shaderStorageTexelBufferArrayDynamicIndexing,
                    _s512->shaderUniformBufferArrayNonUniformIndexing, _s512->shaderSampledImageArrayNonUniformIndexing,
                    _s512->shaderStorageBufferArrayNonUniformIndexing, _s512->shaderStorageImageArrayNonUniformIndexing,
                    _s512->shaderInputAttachmentArrayNonUniformIndexing, _s512->shaderUniformTexelBufferArrayNonUniformIndexing,
                    _s512->shaderStorageTexelBufferArrayNonUniformIndexing, _s512->descriptorBindingUniformBufferUpdateAfterBind,
                    _s512->descriptorBindingSampledImageUpdateAfterBind, _s512->descriptorBindingStorageImageUpdateAfterBind,
                    _s512->descriptorBindingStorageBufferUpdateAfterBind, _s512->descriptorBindingUniformTexelBufferUpdateAfterBind,
                    _s512->descriptorBindingStorageTexelBufferUpdateAfterBind, _s512->descriptorBindingUpdateUnusedWhilePending,
                    _s512->descriptorBindingPartiallyBound, _s512->descriptorBindingVariableDescriptorCount,
                    _s512->runtimeDescriptorArray, _s512->samplerFilterMinmax, _s512->scalarBlockLayout,
                    _s512->imagelessFramebuffer, _s512->uniformBufferStandardLayout, _s512->shaderSubgroupExtendedTypes,
                    _s512->separateDepthStencilLayouts, _s512->hostQueryReset, _s512->timelineSemaphore, _s512->bufferDeviceAddress,
                    _s512->bufferDeviceAddressCaptureReplay, _s512->bufferDeviceAddressMultiDevice, _s512->vulkanMemoryModel,
                    _s512->vulkanMemoryModelDeviceScope, _s512->vulkanMemoryModelAvailabilityVisibilityChains,
                    _s512->shaderOutputViewportIndex, _s512->shaderOutputLayer, _s512->subgroupBroadcastDynamicId);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES: {
                const auto _s513 = reinterpret_cast<const VkPhysicalDeviceVulkan12Properties *>(header);
                skip |= ValidatePhysicalDeviceVulkan12Properties(
                    _parentObjects, _s513->sType, nullptr, _s513->driverID, _s513->driverName, _s513->driverInfo,
                    _s513->conformanceVersion, _s513->denormBehaviorIndependence, _s513->roundingModeIndependence,
                    _s513->shaderSignedZeroInfNanPreserveFloat16, _s513->shaderSignedZeroInfNanPreserveFloat32,
                    _s513->shaderSignedZeroInfNanPreserveFloat64, _s513->shaderDenormPreserveFloat16,
                    _s513->shaderDenormPreserveFloat32, _s513->shaderDenormPreserveFloat64, _s513->shaderDenormFlushToZeroFloat16,
                    _s513->shaderDenormFlushToZeroFloat32, _s513->shaderDenormFlushToZeroFloat64,
                    _s513->shaderRoundingModeRTEFloat16, _s513->shaderRoundingModeRTEFloat32, _s513->shaderRoundingModeRTEFloat64,
                    _s513->shaderRoundingModeRTZFloat16, _s513->shaderRoundingModeRTZFloat32, _s513->shaderRoundingModeRTZFloat64,
                    _s513->maxUpdateAfterBindDescriptorsInAllPools, _s513->shaderUniformBufferArrayNonUniformIndexingNative,
                    _s513->shaderSampledImageArrayNonUniformIndexingNative, _s513->shaderStorageBufferArrayNonUniformIndexingNative,
                    _s513->shaderStorageImageArrayNonUniformIndexingNative,
                    _s513->shaderInputAttachmentArrayNonUniformIndexingNative, _s513->robustBufferAccessUpdateAfterBind,
                    _s513->quadDivergentImplicitLod, _s513->maxPerStageDescriptorUpdateAfterBindSamplers,
                    _s513->maxPerStageDescriptorUpdateAfterBindUniformBuffers,
                    _s513->maxPerStageDescriptorUpdateAfterBindStorageBuffers,
                    _s513->maxPerStageDescriptorUpdateAfterBindSampledImages,
                    _s513->maxPerStageDescriptorUpdateAfterBindStorageImages,
                    _s513->maxPerStageDescriptorUpdateAfterBindInputAttachments, _s513->maxPerStageUpdateAfterBindResources,
                    _s513->maxDescriptorSetUpdateAfterBindSamplers, _s513->maxDescriptorSetUpdateAfterBindUniformBuffers,
                    _s513->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic,
                    _s513->maxDescriptorSetUpdateAfterBindStorageBuffers,
                    _s513->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic,
                    _s513->maxDescriptorSetUpdateAfterBindSampledImages, _s513->maxDescriptorSetUpdateAfterBindStorageImages,
                    _s513->maxDescriptorSetUpdateAfterBindInputAttachments, _s513->supportedDepthResolveModes,
                    _s513->supportedStencilResolveModes, _s513->independentResolveNone, _s513->independentResolve,
                    _s513->filterMinmaxSingleComponentFormats, _s513->filterMinmaxImageComponentMapping,
                    _s513->maxTimelineSemaphoreValueDifference, _s513->framebufferIntegerColorSampleCounts);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO: {
                const auto _s514 = reinterpret_cast<const VkImageFormatListCreateInfo *>(header);
                skip |= ValidateImageFormatListCreateInfo(_parentObjects, _s514->sType, nullptr, _s514->viewFormatCount,
                                                          _s514->pViewFormats);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES: {
                const auto _s515 = reinterpret_cast<const VkPhysicalDevice8BitStorageFeatures *>(header);
                skip |= ValidatePhysicalDevice8BitStorageFeatures(
                    _parentObjects, _s515->sType, nullptr, _s515->storageBuffer8BitAccess, _s515->uniformAndStorageBuffer8BitAccess,
                    _s515->storagePushConstant8);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES: {
                const auto _s516 = reinterpret_cast<const VkPhysicalDeviceDriverProperties *>(header);
                skip |= ValidatePhysicalDeviceDriverProperties(_parentObjects, _s516->sType, nullptr, _s516->driverID,
                                                               _s516->driverName, _s516->driverInfo, _s516->conformanceVersion);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES: {
                const auto _s517 = reinterpret_cast<const VkPhysicalDeviceShaderAtomicInt64Features *>(header);
                skip |= ValidatePhysicalDeviceShaderAtomicInt64Features(
                    _parentObjects, _s517->sType, nullptr, _s517->shaderBufferInt64Atomics, _s517->shaderSharedInt64Atomics);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES: {
                const auto _s518 = reinterpret_cast<const VkPhysicalDeviceShaderFloat16Int8Features *>(header);
                skip |= ValidatePhysicalDeviceShaderFloat16Int8Features(_parentObjects, _s518->sType, nullptr, _s518->shaderFloat16,
                                                                        _s518->shaderInt8);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES: {
                const auto _s519 = reinterpret_cast<const VkPhysicalDeviceFloatControlsProperties *>(header);
                skip |= ValidatePhysicalDeviceFloatControlsProperties(
                    _parentObjects, _s519->sType, nullptr, _s519->denormBehaviorIndependence, _s519->roundingModeIndependence,
                    _s519->shaderSignedZeroInfNanPreserveFloat16, _s519->shaderSignedZeroInfNanPreserveFloat32,
                    _s519->shaderSignedZeroInfNanPreserveFloat64, _s519->shaderDenormPreserveFloat16,
                    _s519->shaderDenormPreserveFloat32, _s519->shaderDenormPreserveFloat64, _s519->shaderDenormFlushToZeroFloat16,
                    _s519->shaderDenormFlushToZeroFloat32, _s519->shaderDenormFlushToZeroFloat64,
                    _s519->shaderRoundingModeRTEFloat16, _s519->shaderRoundingModeRTEFloat32, _s519->shaderRoundingModeRTEFloat64,
                    _s519->shaderRoundingModeRTZFloat16, _s519->shaderRoundingModeRTZFloat32, _s519->shaderRoundingModeRTZFloat64);
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO: {
                const auto _s520 = reinterpret_cast<const VkDescriptorSetLayoutBindingFlagsCreateInfo *>(header);
                skip |= ValidateDescriptorSetLayoutBindingFlagsCreateInfo(_parentObjects, _s520->sType, nullptr,
                                                                          _s520->bindingCount, _s520->pBindingFlags);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES: {
                const auto _s521 = reinterpret_cast<const VkPhysicalDeviceDescriptorIndexingFeatures *>(header);
                skip |= ValidatePhysicalDeviceDescriptorIndexingFeatures(
                    _parentObjects, _s521->sType, nullptr, _s521->shaderInputAttachmentArrayDynamicIndexing,
                    _s521->shaderUniformTexelBufferArrayDynamicIndexing, _s521->shaderStorageTexelBufferArrayDynamicIndexing,
                    _s521->shaderUniformBufferArrayNonUniformIndexing, _s521->shaderSampledImageArrayNonUniformIndexing,
                    _s521->shaderStorageBufferArrayNonUniformIndexing, _s521->shaderStorageImageArrayNonUniformIndexing,
                    _s521->shaderInputAttachmentArrayNonUniformIndexing, _s521->shaderUniformTexelBufferArrayNonUniformIndexing,
                    _s521->shaderStorageTexelBufferArrayNonUniformIndexing, _s521->descriptorBindingUniformBufferUpdateAfterBind,
                    _s521->descriptorBindingSampledImageUpdateAfterBind, _s521->descriptorBindingStorageImageUpdateAfterBind,
                    _s521->descriptorBindingStorageBufferUpdateAfterBind, _s521->descriptorBindingUniformTexelBufferUpdateAfterBind,
                    _s521->descriptorBindingStorageTexelBufferUpdateAfterBind, _s521->descriptorBindingUpdateUnusedWhilePending,
                    _s521->descriptorBindingPartiallyBound, _s521->descriptorBindingVariableDescriptorCount,
                    _s521->runtimeDescriptorArray);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES: {
                const auto _s522 = reinterpret_cast<const VkPhysicalDeviceDescriptorIndexingProperties *>(header);
                skip |= ValidatePhysicalDeviceDescriptorIndexingProperties(
                    _parentObjects, _s522->sType, nullptr, _s522->maxUpdateAfterBindDescriptorsInAllPools,
                    _s522->shaderUniformBufferArrayNonUniformIndexingNative, _s522->shaderSampledImageArrayNonUniformIndexingNative,
                    _s522->shaderStorageBufferArrayNonUniformIndexingNative, _s522->shaderStorageImageArrayNonUniformIndexingNative,
                    _s522->shaderInputAttachmentArrayNonUniformIndexingNative, _s522->robustBufferAccessUpdateAfterBind,
                    _s522->quadDivergentImplicitLod, _s522->maxPerStageDescriptorUpdateAfterBindSamplers,
                    _s522->maxPerStageDescriptorUpdateAfterBindUniformBuffers,
                    _s522->maxPerStageDescriptorUpdateAfterBindStorageBuffers,
                    _s522->maxPerStageDescriptorUpdateAfterBindSampledImages,
                    _s522->maxPerStageDescriptorUpdateAfterBindStorageImages,
                    _s522->maxPerStageDescriptorUpdateAfterBindInputAttachments, _s522->maxPerStageUpdateAfterBindResources,
                    _s522->maxDescriptorSetUpdateAfterBindSamplers, _s522->maxDescriptorSetUpdateAfterBindUniformBuffers,
                    _s522->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic,
                    _s522->maxDescriptorSetUpdateAfterBindStorageBuffers,
                    _s522->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic,
                    _s522->maxDescriptorSetUpdateAfterBindSampledImages, _s522->maxDescriptorSetUpdateAfterBindStorageImages,
                    _s522->maxDescriptorSetUpdateAfterBindInputAttachments);
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO: {
                const auto _s523 = reinterpret_cast<const VkDescriptorSetVariableDescriptorCountAllocateInfo *>(header);
                skip |= ValidateDescriptorSetVariableDescriptorCountAllocateInfo(
                    _parentObjects, _s523->sType, nullptr, _s523->descriptorSetCount, _s523->pDescriptorCounts);
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT: {
                const auto _s524 = reinterpret_cast<const VkDescriptorSetVariableDescriptorCountLayoutSupport *>(header);
                skip |= ValidateDescriptorSetVariableDescriptorCountLayoutSupport(_parentObjects, _s524->sType, nullptr,
                                                                                  _s524->maxVariableDescriptorCount);
                break;
            }
            case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE: {
                const auto _s525 = reinterpret_cast<const VkSubpassDescriptionDepthStencilResolve *>(header);
                skip |=
                    ValidateSubpassDescriptionDepthStencilResolve(_parentObjects, _s525->sType, nullptr, _s525->depthResolveMode,
                                                                  _s525->stencilResolveMode, _s525->pDepthStencilResolveAttachment);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES: {
                const auto _s526 = reinterpret_cast<const VkPhysicalDeviceDepthStencilResolveProperties *>(header);
                skip |= ValidatePhysicalDeviceDepthStencilResolveProperties(
                    _parentObjects, _s526->sType, nullptr, _s526->supportedDepthResolveModes, _s526->supportedStencilResolveModes,
                    _s526->independentResolveNone, _s526->independentResolve);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES: {
                const auto _s527 = reinterpret_cast<const VkPhysicalDeviceScalarBlockLayoutFeatures *>(header);
                skip |= ValidatePhysicalDeviceScalarBlockLayoutFeatures(_parentObjects, _s527->sType, nullptr,
                                                                        _s527->scalarBlockLayout);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO: {
                const auto _s528 = reinterpret_cast<const VkImageStencilUsageCreateInfo *>(header);
                skip |= ValidateImageStencilUsageCreateInfo(_parentObjects, _s528->sType, nullptr, _s528->stencilUsage);
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO: {
                const auto _s529 = reinterpret_cast<const VkSamplerReductionModeCreateInfo *>(header);
                skip |= ValidateSamplerReductionModeCreateInfo(_parentObjects, _s529->sType, nullptr, _s529->reductionMode);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES: {
                const auto _s530 = reinterpret_cast<const VkPhysicalDeviceSamplerFilterMinmaxProperties *>(header);
                skip |= ValidatePhysicalDeviceSamplerFilterMinmaxProperties(_parentObjects, _s530->sType, nullptr,
                                                                            _s530->filterMinmaxSingleComponentFormats,
                                                                            _s530->filterMinmaxImageComponentMapping);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES: {
                const auto _s531 = reinterpret_cast<const VkPhysicalDeviceVulkanMemoryModelFeatures *>(header);
                skip |= ValidatePhysicalDeviceVulkanMemoryModelFeatures(
                    _parentObjects, _s531->sType, nullptr, _s531->vulkanMemoryModel, _s531->vulkanMemoryModelDeviceScope,
                    _s531->vulkanMemoryModelAvailabilityVisibilityChains);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES: {
                const auto _s532 = reinterpret_cast<const VkPhysicalDeviceImagelessFramebufferFeatures *>(header);
                skip |= ValidatePhysicalDeviceImagelessFramebufferFeatures(_parentObjects, _s532->sType, nullptr,
                                                                           _s532->imagelessFramebuffer);
                break;
            }
            case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO: {
                const auto _s533 = reinterpret_cast<const VkFramebufferAttachmentsCreateInfo *>(header);
                skip |= ValidateFramebufferAttachmentsCreateInfo(_parentObjects, _s533->sType, nullptr,
                                                                 _s533->attachmentImageInfoCount, _s533->pAttachmentImageInfos);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO: {
                const auto _s534 = reinterpret_cast<const VkRenderPassAttachmentBeginInfo *>(header);
                skip |= ValidateRenderPassAttachmentBeginInfo(_parentObjects, _s534->sType, nullptr, _s534->attachmentCount,
                                                              _s534->pAttachments);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES: {
                const auto _s535 = reinterpret_cast<const VkPhysicalDeviceUniformBufferStandardLayoutFeatures *>(header);
                skip |= ValidatePhysicalDeviceUniformBufferStandardLayoutFeatures(_parentObjects, _s535->sType, nullptr,
                                                                                  _s535->uniformBufferStandardLayout);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES: {
                const auto _s536 = reinterpret_cast<const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *>(header);
                skip |= ValidatePhysicalDeviceShaderSubgroupExtendedTypesFeatures(_parentObjects, _s536->sType, nullptr,
                                                                                  _s536->shaderSubgroupExtendedTypes);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES: {
                const auto _s537 = reinterpret_cast<const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *>(header);
                skip |= ValidatePhysicalDeviceSeparateDepthStencilLayoutsFeatures(_parentObjects, _s537->sType, nullptr,
                                                                                  _s537->separateDepthStencilLayouts);
                break;
            }
            case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT: {
                const auto _s538 = reinterpret_cast<const VkAttachmentReferenceStencilLayout *>(header);
                skip |= ValidateAttachmentReferenceStencilLayout(_parentObjects, _s538->sType, nullptr, _s538->stencilLayout);
                break;
            }
            case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT: {
                const auto _s539 = reinterpret_cast<const VkAttachmentDescriptionStencilLayout *>(header);
                skip |= ValidateAttachmentDescriptionStencilLayout(_parentObjects, _s539->sType, nullptr,
                                                                   _s539->stencilInitialLayout, _s539->stencilFinalLayout);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES: {
                const auto _s540 = reinterpret_cast<const VkPhysicalDeviceHostQueryResetFeatures *>(header);
                skip |= ValidatePhysicalDeviceHostQueryResetFeatures(_parentObjects, _s540->sType, nullptr, _s540->hostQueryReset);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES: {
                const auto _s541 = reinterpret_cast<const VkPhysicalDeviceTimelineSemaphoreFeatures *>(header);
                skip |= ValidatePhysicalDeviceTimelineSemaphoreFeatures(_parentObjects, _s541->sType, nullptr,
                                                                        _s541->timelineSemaphore);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES: {
                const auto _s542 = reinterpret_cast<const VkPhysicalDeviceTimelineSemaphoreProperties *>(header);
                skip |= ValidatePhysicalDeviceTimelineSemaphoreProperties(_parentObjects, _s542->sType, nullptr,
                                                                          _s542->maxTimelineSemaphoreValueDifference);
                break;
            }
            case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO: {
                const auto _s543 = reinterpret_cast<const VkSemaphoreTypeCreateInfo *>(header);
                skip |= ValidateSemaphoreTypeCreateInfo(_parentObjects, _s543->sType, nullptr, _s543->semaphoreType,
                                                        _s543->initialValue);
                break;
            }
            case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO: {
                const auto _s544 = reinterpret_cast<const VkTimelineSemaphoreSubmitInfo *>(header);
                skip |= ValidateTimelineSemaphoreSubmitInfo(_parentObjects, _s544->sType, nullptr, _s544->waitSemaphoreValueCount,
                                                            _s544->pWaitSemaphoreValues, _s544->signalSemaphoreValueCount,
                                                            _s544->pSignalSemaphoreValues);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES: {
                const auto _s545 = reinterpret_cast<const VkPhysicalDeviceBufferDeviceAddressFeatures *>(header);
                skip |= ValidatePhysicalDeviceBufferDeviceAddressFeatures(
                    _parentObjects, _s545->sType, nullptr, _s545->bufferDeviceAddress, _s545->bufferDeviceAddressCaptureReplay,
                    _s545->bufferDeviceAddressMultiDevice);
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO: {
                const auto _s546 = reinterpret_cast<const VkBufferOpaqueCaptureAddressCreateInfo *>(header);
                skip |= ValidateBufferOpaqueCaptureAddressCreateInfo(_parentObjects, _s546->sType, nullptr,
                                                                     _s546->opaqueCaptureAddress);
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO: {
                const auto _s547 = reinterpret_cast<const VkMemoryOpaqueCaptureAddressAllocateInfo *>(header);
                skip |= ValidateMemoryOpaqueCaptureAddressAllocateInfo(_parentObjects, _s547->sType, nullptr,
                                                                       _s547->opaqueCaptureAddress);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES: {
                const auto _s548 = reinterpret_cast<const VkPhysicalDeviceVulkan13Features *>(header);
                skip |= ValidatePhysicalDeviceVulkan13Features(
                    _parentObjects, _s548->sType, nullptr, _s548->robustImageAccess, _s548->inlineUniformBlock,
                    _s548->descriptorBindingInlineUniformBlockUpdateAfterBind, _s548->pipelineCreationCacheControl,
                    _s548->privateData, _s548->shaderDemoteToHelperInvocation, _s548->shaderTerminateInvocation,
                    _s548->subgroupSizeControl, _s548->computeFullSubgroups, _s548->synchronization2,
                    _s548->textureCompressionASTC_HDR, _s548->shaderZeroInitializeWorkgroupMemory, _s548->dynamicRendering,
                    _s548->shaderIntegerDotProduct, _s548->maintenance4);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES: {
                const auto _s549 = reinterpret_cast<const VkPhysicalDeviceVulkan13Properties *>(header);
                skip |= ValidatePhysicalDeviceVulkan13Properties(
                    _parentObjects, _s549->sType, nullptr, _s549->minSubgroupSize, _s549->maxSubgroupSize,
                    _s549->maxComputeWorkgroupSubgroups, _s549->requiredSubgroupSizeStages, _s549->maxInlineUniformBlockSize,
                    _s549->maxPerStageDescriptorInlineUniformBlocks, _s549->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks,
                    _s549->maxDescriptorSetInlineUniformBlocks, _s549->maxDescriptorSetUpdateAfterBindInlineUniformBlocks,
                    _s549->maxInlineUniformTotalSize, _s549->integerDotProduct8BitUnsignedAccelerated,
                    _s549->integerDotProduct8BitSignedAccelerated, _s549->integerDotProduct8BitMixedSignednessAccelerated,
                    _s549->integerDotProduct4x8BitPackedUnsignedAccelerated, _s549->integerDotProduct4x8BitPackedSignedAccelerated,
                    _s549->integerDotProduct4x8BitPackedMixedSignednessAccelerated,
                    _s549->integerDotProduct16BitUnsignedAccelerated, _s549->integerDotProduct16BitSignedAccelerated,
                    _s549->integerDotProduct16BitMixedSignednessAccelerated, _s549->integerDotProduct32BitUnsignedAccelerated,
                    _s549->integerDotProduct32BitSignedAccelerated, _s549->integerDotProduct32BitMixedSignednessAccelerated,
                    _s549->integerDotProduct64BitUnsignedAccelerated, _s549->integerDotProduct64BitSignedAccelerated,
                    _s549->integerDotProduct64BitMixedSignednessAccelerated,
                    _s549->integerDotProductAccumulatingSaturating8BitUnsignedAccelerated,
                    _s549->integerDotProductAccumulatingSaturating8BitSignedAccelerated,
                    _s549->integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated,
                    _s549->integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated,
                    _s549->integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated,
                    _s549->integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated,
                    _s549->integerDotProductAccumulatingSaturating16BitUnsignedAccelerated,
                    _s549->integerDotProductAccumulatingSaturating16BitSignedAccelerated,
                    _s549->integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated,
                    _s549->integerDotProductAccumulatingSaturating32BitUnsignedAccelerated,
                    _s549->integerDotProductAccumulatingSaturating32BitSignedAccelerated,
                    _s549->integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated,
                    _s549->integerDotProductAccumulatingSaturating64BitUnsignedAccelerated,
                    _s549->integerDotProductAccumulatingSaturating64BitSignedAccelerated,
                    _s549->integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated,
                    _s549->storageTexelBufferOffsetAlignmentBytes, _s549->storageTexelBufferOffsetSingleTexelAlignment,
                    _s549->uniformTexelBufferOffsetAlignmentBytes, _s549->uniformTexelBufferOffsetSingleTexelAlignment,
                    _s549->maxBufferSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO: {
                const auto _s550 = reinterpret_cast<const VkPipelineCreationFeedbackCreateInfo *>(header);
                skip |= ValidatePipelineCreationFeedbackCreateInfo(
                    _parentObjects, _s550->sType, nullptr, _s550->pPipelineCreationFeedback,
                    _s550->pipelineStageCreationFeedbackCount, _s550->pPipelineStageCreationFeedbacks);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES: {
                const auto _s551 = reinterpret_cast<const VkPhysicalDeviceShaderTerminateInvocationFeatures *>(header);
                skip |= ValidatePhysicalDeviceShaderTerminateInvocationFeatures(_parentObjects, _s551->sType, nullptr,
                                                                                _s551->shaderTerminateInvocation);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES: {
                const auto _s552 = reinterpret_cast<const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *>(header);
                skip |= ValidatePhysicalDeviceShaderDemoteToHelperInvocationFeatures(_parentObjects, _s552->sType, nullptr,
                                                                                     _s552->shaderDemoteToHelperInvocation);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES: {
                const auto _s553 = reinterpret_cast<const VkPhysicalDevicePrivateDataFeatures *>(header);
                skip |= ValidatePhysicalDevicePrivateDataFeatures(_parentObjects, _s553->sType, nullptr, _s553->privateData);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO: {
                const auto _s554 = reinterpret_cast<const VkDevicePrivateDataCreateInfo *>(header);
                skip |=
                    ValidateDevicePrivateDataCreateInfo(_parentObjects, _s554->sType, nullptr, _s554->privateDataSlotRequestCount);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES: {
                const auto _s555 = reinterpret_cast<const VkPhysicalDevicePipelineCreationCacheControlFeatures *>(header);
                skip |= ValidatePhysicalDevicePipelineCreationCacheControlFeatures(_parentObjects, _s555->sType, nullptr,
                                                                                   _s555->pipelineCreationCacheControl);
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_BARRIER_2: {
                const auto _s556 = reinterpret_cast<const VkMemoryBarrier2 *>(header);
                skip |= ValidateMemoryBarrier2(_parentObjects, _s556->sType, nullptr, _s556->srcStageMask, _s556->srcAccessMask,
                                               _s556->dstStageMask, _s556->dstAccessMask);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES: {
                const auto _s557 = reinterpret_cast<const VkPhysicalDeviceSynchronization2Features *>(header);
                skip |=
                    ValidatePhysicalDeviceSynchronization2Features(_parentObjects, _s557->sType, nullptr, _s557->synchronization2);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES: {
                const auto _s558 = reinterpret_cast<const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *>(header);
                skip |= ValidatePhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(_parentObjects, _s558->sType, nullptr,
                                                                                    _s558->shaderZeroInitializeWorkgroupMemory);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES: {
                const auto _s559 = reinterpret_cast<const VkPhysicalDeviceImageRobustnessFeatures *>(header);
                skip |=
                    ValidatePhysicalDeviceImageRobustnessFeatures(_parentObjects, _s559->sType, nullptr, _s559->robustImageAccess);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES: {
                const auto _s560 = reinterpret_cast<const VkPhysicalDeviceSubgroupSizeControlFeatures *>(header);
                skip |= ValidatePhysicalDeviceSubgroupSizeControlFeatures(_parentObjects, _s560->sType, nullptr,
                                                                          _s560->subgroupSizeControl, _s560->computeFullSubgroups);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES: {
                const auto _s561 = reinterpret_cast<const VkPhysicalDeviceSubgroupSizeControlProperties *>(header);
                skip |= ValidatePhysicalDeviceSubgroupSizeControlProperties(
                    _parentObjects, _s561->sType, nullptr, _s561->minSubgroupSize, _s561->maxSubgroupSize,
                    _s561->maxComputeWorkgroupSubgroups, _s561->requiredSubgroupSizeStages);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO: {
                const auto _s562 = reinterpret_cast<const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo *>(header);
                skip |= ValidatePipelineShaderStageRequiredSubgroupSizeCreateInfo(_parentObjects, _s562->sType, nullptr,
                                                                                  _s562->requiredSubgroupSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES: {
                const auto _s563 = reinterpret_cast<const VkPhysicalDeviceInlineUniformBlockFeatures *>(header);
                skip |= ValidatePhysicalDeviceInlineUniformBlockFeatures(_parentObjects, _s563->sType, nullptr,
                                                                         _s563->inlineUniformBlock,
                                                                         _s563->descriptorBindingInlineUniformBlockUpdateAfterBind);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES: {
                const auto _s564 = reinterpret_cast<const VkPhysicalDeviceInlineUniformBlockProperties *>(header);
                skip |= ValidatePhysicalDeviceInlineUniformBlockProperties(
                    _parentObjects, _s564->sType, nullptr, _s564->maxInlineUniformBlockSize,
                    _s564->maxPerStageDescriptorInlineUniformBlocks, _s564->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks,
                    _s564->maxDescriptorSetInlineUniformBlocks, _s564->maxDescriptorSetUpdateAfterBindInlineUniformBlocks);
                break;
            }
            case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK: {
                const auto _s565 = reinterpret_cast<const VkWriteDescriptorSetInlineUniformBlock *>(header);
                skip |= ValidateWriteDescriptorSetInlineUniformBlock(_parentObjects, _s565->sType, nullptr, _s565->dataSize,
                                                                     _s565->pData);
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO: {
                const auto _s566 = reinterpret_cast<const VkDescriptorPoolInlineUniformBlockCreateInfo *>(header);
                skip |= ValidateDescriptorPoolInlineUniformBlockCreateInfo(_parentObjects, _s566->sType, nullptr,
                                                                           _s566->maxInlineUniformBlockBindings);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES: {
                const auto _s567 = reinterpret_cast<const VkPhysicalDeviceTextureCompressionASTCHDRFeatures *>(header);
                skip |= ValidatePhysicalDeviceTextureCompressionASTCHDRFeatures(_parentObjects, _s567->sType, nullptr,
                                                                                _s567->textureCompressionASTC_HDR);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO: {
                const auto _s568 = reinterpret_cast<const VkPipelineRenderingCreateInfo *>(header);
                skip |= ValidatePipelineRenderingCreateInfo(_parentObjects, _s568->sType, nullptr, _s568->viewMask,
                                                            _s568->colorAttachmentCount, _s568->pColorAttachmentFormats,
                                                            _s568->depthAttachmentFormat, _s568->stencilAttachmentFormat);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES: {
                const auto _s569 = reinterpret_cast<const VkPhysicalDeviceDynamicRenderingFeatures *>(header);
                skip |=
                    ValidatePhysicalDeviceDynamicRenderingFeatures(_parentObjects, _s569->sType, nullptr, _s569->dynamicRendering);
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO: {
                const auto _s570 = reinterpret_cast<const VkCommandBufferInheritanceRenderingInfo *>(header);
                skip |= ValidateCommandBufferInheritanceRenderingInfo(_parentObjects, _s570->sType, nullptr, _s570->flags,
                                                                      _s570->viewMask, _s570->colorAttachmentCount,
                                                                      _s570->pColorAttachmentFormats, _s570->depthAttachmentFormat,
                                                                      _s570->stencilAttachmentFormat, _s570->rasterizationSamples);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES: {
                const auto _s571 = reinterpret_cast<const VkPhysicalDeviceShaderIntegerDotProductFeatures *>(header);
                skip |= ValidatePhysicalDeviceShaderIntegerDotProductFeatures(_parentObjects, _s571->sType, nullptr,
                                                                              _s571->shaderIntegerDotProduct);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES: {
                const auto _s572 = reinterpret_cast<const VkPhysicalDeviceShaderIntegerDotProductProperties *>(header);
                skip |= ValidatePhysicalDeviceShaderIntegerDotProductProperties(
                    _parentObjects, _s572->sType, nullptr, _s572->integerDotProduct8BitUnsignedAccelerated,
                    _s572->integerDotProduct8BitSignedAccelerated, _s572->integerDotProduct8BitMixedSignednessAccelerated,
                    _s572->integerDotProduct4x8BitPackedUnsignedAccelerated, _s572->integerDotProduct4x8BitPackedSignedAccelerated,
                    _s572->integerDotProduct4x8BitPackedMixedSignednessAccelerated,
                    _s572->integerDotProduct16BitUnsignedAccelerated, _s572->integerDotProduct16BitSignedAccelerated,
                    _s572->integerDotProduct16BitMixedSignednessAccelerated, _s572->integerDotProduct32BitUnsignedAccelerated,
                    _s572->integerDotProduct32BitSignedAccelerated, _s572->integerDotProduct32BitMixedSignednessAccelerated,
                    _s572->integerDotProduct64BitUnsignedAccelerated, _s572->integerDotProduct64BitSignedAccelerated,
                    _s572->integerDotProduct64BitMixedSignednessAccelerated,
                    _s572->integerDotProductAccumulatingSaturating8BitUnsignedAccelerated,
                    _s572->integerDotProductAccumulatingSaturating8BitSignedAccelerated,
                    _s572->integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated,
                    _s572->integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated,
                    _s572->integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated,
                    _s572->integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated,
                    _s572->integerDotProductAccumulatingSaturating16BitUnsignedAccelerated,
                    _s572->integerDotProductAccumulatingSaturating16BitSignedAccelerated,
                    _s572->integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated,
                    _s572->integerDotProductAccumulatingSaturating32BitUnsignedAccelerated,
                    _s572->integerDotProductAccumulatingSaturating32BitSignedAccelerated,
                    _s572->integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated,
                    _s572->integerDotProductAccumulatingSaturating64BitUnsignedAccelerated,
                    _s572->integerDotProductAccumulatingSaturating64BitSignedAccelerated,
                    _s572->integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES: {
                const auto _s573 = reinterpret_cast<const VkPhysicalDeviceTexelBufferAlignmentProperties *>(header);
                skip |= ValidatePhysicalDeviceTexelBufferAlignmentProperties(
                    _parentObjects, _s573->sType, nullptr, _s573->storageTexelBufferOffsetAlignmentBytes,
                    _s573->storageTexelBufferOffsetSingleTexelAlignment, _s573->uniformTexelBufferOffsetAlignmentBytes,
                    _s573->uniformTexelBufferOffsetSingleTexelAlignment);
                break;
            }
            case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3: {
                const auto _s574 = reinterpret_cast<const VkFormatProperties3 *>(header);
                skip |= ValidateFormatProperties3(_parentObjects, _s574->sType, nullptr, _s574->linearTilingFeatures,
                                                  _s574->optimalTilingFeatures, _s574->bufferFeatures);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES: {
                const auto _s575 = reinterpret_cast<const VkPhysicalDeviceMaintenance4Features *>(header);
                skip |= ValidatePhysicalDeviceMaintenance4Features(_parentObjects, _s575->sType, nullptr, _s575->maintenance4);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES: {
                const auto _s576 = reinterpret_cast<const VkPhysicalDeviceMaintenance4Properties *>(header);
                skip |= ValidatePhysicalDeviceMaintenance4Properties(_parentObjects, _s576->sType, nullptr, _s576->maxBufferSize);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR: {
                const auto _s577 = reinterpret_cast<const VkImageSwapchainCreateInfoKHR *>(header);
                skip |= ValidateImageSwapchainCreateInfoKHR(_parentObjects, _s577->sType, nullptr, _s577->swapchain);
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR: {
                const auto _s578 = reinterpret_cast<const VkBindImageMemorySwapchainInfoKHR *>(header);
                skip |= ValidateBindImageMemorySwapchainInfoKHR(_parentObjects, _s578->sType, nullptr, _s578->swapchain,
                                                                _s578->imageIndex);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR: {
                const auto _s579 = reinterpret_cast<const VkDeviceGroupPresentInfoKHR *>(header);
                skip |= ValidateDeviceGroupPresentInfoKHR(_parentObjects, _s579->sType, nullptr, _s579->swapchainCount,
                                                          _s579->pDeviceMasks, _s579->mode);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR: {
                const auto _s580 = reinterpret_cast<const VkDeviceGroupSwapchainCreateInfoKHR *>(header);
                skip |= ValidateDeviceGroupSwapchainCreateInfoKHR(_parentObjects, _s580->sType, nullptr, _s580->modes);
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR: {
                const auto _s581 = reinterpret_cast<const VkDisplayPresentInfoKHR *>(header);
                skip |= ValidateDisplayPresentInfoKHR(_parentObjects, _s581->sType, nullptr, _s581->srcRect, _s581->dstRect,
                                                      _s581->persistent);
                break;
            }
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR: {
                const auto _s582 = reinterpret_cast<const VkQueueFamilyQueryResultStatusPropertiesKHR *>(header);
                skip |= ValidateQueueFamilyQueryResultStatusPropertiesKHR(_parentObjects, _s582->sType, nullptr,
                                                                          _s582->queryResultStatusSupport);
                break;
            }
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_VIDEO_PROPERTIES_KHR: {
                const auto _s583 = reinterpret_cast<const VkQueueFamilyVideoPropertiesKHR *>(header);
                skip |= ValidateQueueFamilyVideoPropertiesKHR(_parentObjects, _s583->sType, nullptr, _s583->videoCodecOperations);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_PROFILE_INFO_KHR: {
                const auto _s584 = reinterpret_cast<const VkVideoProfileInfoKHR *>(header);
                skip |= ValidateVideoProfileInfoKHR(_parentObjects, _s584->sType, nullptr, _s584->videoCodecOperation,
                                                    _s584->chromaSubsampling, _s584->lumaBitDepth, _s584->chromaBitDepth);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_PROFILE_LIST_INFO_KHR: {
                const auto _s585 = reinterpret_cast<const VkVideoProfileListInfoKHR *>(header);
                skip |=
                    ValidateVideoProfileListInfoKHR(_parentObjects, _s585->sType, nullptr, _s585->profileCount, _s585->pProfiles);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_CAPABILITIES_KHR: {
                const auto _s586 = reinterpret_cast<const VkVideoDecodeCapabilitiesKHR *>(header);
                skip |= ValidateVideoDecodeCapabilitiesKHR(_parentObjects, _s586->sType, nullptr, _s586->flags);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_USAGE_INFO_KHR: {
                const auto _s587 = reinterpret_cast<const VkVideoDecodeUsageInfoKHR *>(header);
                skip |= ValidateVideoDecodeUsageInfoKHR(_parentObjects, _s587->sType, nullptr, _s587->videoUsageHints);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PROFILE_INFO_KHR: {
                const auto _s588 = reinterpret_cast<const VkVideoDecodeH264ProfileInfoKHR *>(header);
                skip |= ValidateVideoDecodeH264ProfileInfoKHR(_parentObjects, _s588->sType, nullptr, _s588->stdProfileIdc,
                                                              _s588->pictureLayout);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_CAPABILITIES_KHR: {
                const auto _s589 = reinterpret_cast<const VkVideoDecodeH264CapabilitiesKHR *>(header);
                skip |= ValidateVideoDecodeH264CapabilitiesKHR(_parentObjects, _s589->sType, nullptr, _s589->maxLevelIdc,
                                                               _s589->fieldOffsetGranularity);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR: {
                const auto _s590 = reinterpret_cast<const VkVideoDecodeH264SessionParametersAddInfoKHR *>(header);
                skip |=
                    ValidateVideoDecodeH264SessionParametersAddInfoKHR(_parentObjects, _s590->sType, nullptr, _s590->stdSPSCount,
                                                                       _s590->pStdSPSs, _s590->stdPPSCount, _s590->pStdPPSs);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR: {
                const auto _s591 = reinterpret_cast<const VkVideoDecodeH264SessionParametersCreateInfoKHR *>(header);
                skip |= ValidateVideoDecodeH264SessionParametersCreateInfoKHR(
                    _parentObjects, _s591->sType, nullptr, _s591->maxStdSPSCount, _s591->maxStdPPSCount, _s591->pParametersAddInfo);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PICTURE_INFO_KHR: {
                const auto _s592 = reinterpret_cast<const VkVideoDecodeH264PictureInfoKHR *>(header);
                skip |= ValidateVideoDecodeH264PictureInfoKHR(_parentObjects, _s592->sType, nullptr, _s592->pStdPictureInfo,
                                                              _s592->sliceCount, _s592->pSliceOffsets);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR: {
                const auto _s593 = reinterpret_cast<const VkVideoDecodeH264DpbSlotInfoKHR *>(header);
                skip |= ValidateVideoDecodeH264DpbSlotInfoKHR(_parentObjects, _s593->sType, nullptr, _s593->pStdReferenceInfo);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR: {
                const auto _s594 = reinterpret_cast<const VkRenderingFragmentShadingRateAttachmentInfoKHR *>(header);
                skip |= ValidateRenderingFragmentShadingRateAttachmentInfoKHR(_parentObjects, _s594->sType, nullptr,
                                                                              _s594->imageView, _s594->imageLayout,
                                                                              _s594->shadingRateAttachmentTexelSize);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT: {
                const auto _s595 = reinterpret_cast<const VkRenderingFragmentDensityMapAttachmentInfoEXT *>(header);
                skip |= ValidateRenderingFragmentDensityMapAttachmentInfoEXT(_parentObjects, _s595->sType, nullptr,
                                                                             _s595->imageView, _s595->imageLayout);
                break;
            }
            case VK_STRUCTURE_TYPE_ATTACHMENT_SAMPLE_COUNT_INFO_AMD: {
                const auto _s596 = reinterpret_cast<const VkAttachmentSampleCountInfoAMD *>(header);
                skip |= ValidateAttachmentSampleCountInfoAMD(_parentObjects, _s596->sType, nullptr, _s596->colorAttachmentCount,
                                                             _s596->pColorAttachmentSamples, _s596->depthStencilAttachmentSamples);
                break;
            }
            case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX: {
                const auto _s597 = reinterpret_cast<const VkMultiviewPerViewAttributesInfoNVX *>(header);
                skip |= ValidateMultiviewPerViewAttributesInfoNVX(_parentObjects, _s597->sType, nullptr, _s597->perViewAttributes,
                                                                  _s597->perViewAttributesPositionXOnly);
                break;
            }
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR: {
                const auto _s598 = reinterpret_cast<const VkImportMemoryWin32HandleInfoKHR *>(header);
                skip |= ValidateImportMemoryWin32HandleInfoKHR(_parentObjects, _s598->sType, nullptr, _s598->handleType,
                                                               _s598->handle, _s598->name);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR: {
                const auto _s599 = reinterpret_cast<const VkExportMemoryWin32HandleInfoKHR *>(header);
                skip |= ValidateExportMemoryWin32HandleInfoKHR(_parentObjects, _s599->sType, nullptr, _s599->pAttributes,
                                                               _s599->dwAccess, _s599->name);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR: {
                const auto _s600 = reinterpret_cast<const VkImportMemoryFdInfoKHR *>(header);
                skip |= ValidateImportMemoryFdInfoKHR(_parentObjects, _s600->sType, nullptr, _s600->handleType, _s600->fd);
                break;
            }
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR: {
                const auto _s601 = reinterpret_cast<const VkWin32KeyedMutexAcquireReleaseInfoKHR *>(header);
                skip |= ValidateWin32KeyedMutexAcquireReleaseInfoKHR(
                    _parentObjects, _s601->sType, nullptr, _s601->acquireCount, _s601->pAcquireSyncs, _s601->pAcquireKeys,
                    _s601->pAcquireTimeouts, _s601->releaseCount, _s601->pReleaseSyncs, _s601->pReleaseKeys);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: {
                const auto _s602 = reinterpret_cast<const VkExportSemaphoreWin32HandleInfoKHR *>(header);
                skip |= ValidateExportSemaphoreWin32HandleInfoKHR(_parentObjects, _s602->sType, nullptr, _s602->pAttributes,
                                                                  _s602->dwAccess, _s602->name);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR: {
                const auto _s603 = reinterpret_cast<const VkD3D12FenceSubmitInfoKHR *>(header);
                skip |= ValidateD3D12FenceSubmitInfoKHR(_parentObjects, _s603->sType, nullptr, _s603->waitSemaphoreValuesCount,
                                                        _s603->pWaitSemaphoreValues, _s603->signalSemaphoreValuesCount,
                                                        _s603->pSignalSemaphoreValues);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR: {
                const auto _s604 = reinterpret_cast<const VkPhysicalDevicePushDescriptorPropertiesKHR *>(header);
                skip |= ValidatePhysicalDevicePushDescriptorPropertiesKHR(_parentObjects, _s604->sType, nullptr,
                                                                          _s604->maxPushDescriptors);
                break;
            }
            case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR: {
                const auto _s605 = reinterpret_cast<const VkPresentRegionsKHR *>(header);
                skip |= ValidatePresentRegionsKHR(_parentObjects, _s605->sType, nullptr, _s605->swapchainCount, _s605->pRegions);
                break;
            }
            case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR: {
                const auto _s606 = reinterpret_cast<const VkSharedPresentSurfaceCapabilitiesKHR *>(header);
                skip |= ValidateSharedPresentSurfaceCapabilitiesKHR(_parentObjects, _s606->sType, nullptr,
                                                                    _s606->sharedPresentSupportedUsageFlags);
                break;
            }
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR: {
                const auto _s607 = reinterpret_cast<const VkExportFenceWin32HandleInfoKHR *>(header);
                skip |= ValidateExportFenceWin32HandleInfoKHR(_parentObjects, _s607->sType, nullptr, _s607->pAttributes,
                                                              _s607->dwAccess, _s607->name);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR: {
                const auto _s608 = reinterpret_cast<const VkPhysicalDevicePerformanceQueryFeaturesKHR *>(header);
                skip |= ValidatePhysicalDevicePerformanceQueryFeaturesKHR(_parentObjects, _s608->sType, nullptr,
                                                                          _s608->performanceCounterQueryPools,
                                                                          _s608->performanceCounterMultipleQueryPools);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR: {
                const auto _s609 = reinterpret_cast<const VkPhysicalDevicePerformanceQueryPropertiesKHR *>(header);
                skip |= ValidatePhysicalDevicePerformanceQueryPropertiesKHR(_parentObjects, _s609->sType, nullptr,
                                                                            _s609->allowCommandBufferQueryCopies);
                break;
            }
            case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR: {
                const auto _s610 = reinterpret_cast<const VkQueryPoolPerformanceCreateInfoKHR *>(header);
                skip |= ValidateQueryPoolPerformanceCreateInfoKHR(_parentObjects, _s610->sType, nullptr, _s610->queueFamilyIndex,
                                                                  _s610->counterIndexCount, _s610->pCounterIndices);
                break;
            }
            case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR: {
                const auto _s611 = reinterpret_cast<const VkPerformanceQuerySubmitInfoKHR *>(header);
                skip |= ValidatePerformanceQuerySubmitInfoKHR(_parentObjects, _s611->sType, nullptr, _s611->counterPassIndex);
                break;
            }
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR: {
                const auto _s612 = reinterpret_cast<const VkPhysicalDevicePortabilitySubsetFeaturesKHR *>(header);
                skip |= ValidatePhysicalDevicePortabilitySubsetFeaturesKHR(
                    _parentObjects, _s612->sType, nullptr, _s612->constantAlphaColorBlendFactors, _s612->events,
                    _s612->imageViewFormatReinterpretation, _s612->imageViewFormatSwizzle, _s612->imageView2DOn3DImage,
                    _s612->multisampleArrayImage, _s612->mutableComparisonSamplers, _s612->pointPolygons, _s612->samplerMipLodBias,
                    _s612->separateStencilMaskRef, _s612->shaderSampleRateInterpolationFunctions, _s612->tessellationIsolines,
                    _s612->tessellationPointMode, _s612->triangleFans, _s612->vertexAttributeAccessBeyondStride);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR: {
                const auto _s613 = reinterpret_cast<const VkPhysicalDevicePortabilitySubsetPropertiesKHR *>(header);
                skip |= ValidatePhysicalDevicePortabilitySubsetPropertiesKHR(_parentObjects, _s613->sType, nullptr,
                                                                             _s613->minVertexInputBindingStrideAlignment);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR: {
                const auto _s614 = reinterpret_cast<const VkPhysicalDeviceShaderClockFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceShaderClockFeaturesKHR(_parentObjects, _s614->sType, nullptr,
                                                                     _s614->shaderSubgroupClock, _s614->shaderDeviceClock);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PROFILE_INFO_KHR: {
                const auto _s615 = reinterpret_cast<const VkVideoDecodeH265ProfileInfoKHR *>(header);
                skip |= ValidateVideoDecodeH265ProfileInfoKHR(_parentObjects, _s615->sType, nullptr, _s615->stdProfileIdc);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_CAPABILITIES_KHR: {
                const auto _s616 = reinterpret_cast<const VkVideoDecodeH265CapabilitiesKHR *>(header);
                skip |= ValidateVideoDecodeH265CapabilitiesKHR(_parentObjects, _s616->sType, nullptr, _s616->maxLevelIdc);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR: {
                const auto _s617 = reinterpret_cast<const VkVideoDecodeH265SessionParametersAddInfoKHR *>(header);
                skip |= ValidateVideoDecodeH265SessionParametersAddInfoKHR(_parentObjects, _s617->sType, nullptr,
                                                                           _s617->stdVPSCount, _s617->pStdVPSs, _s617->stdSPSCount,
                                                                           _s617->pStdSPSs, _s617->stdPPSCount, _s617->pStdPPSs);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR: {
                const auto _s618 = reinterpret_cast<const VkVideoDecodeH265SessionParametersCreateInfoKHR *>(header);
                skip |= ValidateVideoDecodeH265SessionParametersCreateInfoKHR(_parentObjects, _s618->sType, nullptr,
                                                                              _s618->maxStdVPSCount, _s618->maxStdSPSCount,
                                                                              _s618->maxStdPPSCount, _s618->pParametersAddInfo);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PICTURE_INFO_KHR: {
                const auto _s619 = reinterpret_cast<const VkVideoDecodeH265PictureInfoKHR *>(header);
                skip |= ValidateVideoDecodeH265PictureInfoKHR(_parentObjects, _s619->sType, nullptr, _s619->pStdPictureInfo,
                                                              _s619->sliceSegmentCount, _s619->pSliceSegmentOffsets);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR: {
                const auto _s620 = reinterpret_cast<const VkVideoDecodeH265DpbSlotInfoKHR *>(header);
                skip |= ValidateVideoDecodeH265DpbSlotInfoKHR(_parentObjects, _s620->sType, nullptr, _s620->pStdReferenceInfo);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR: {
                const auto _s621 = reinterpret_cast<const VkDeviceQueueGlobalPriorityCreateInfoKHR *>(header);
                skip |=
                    ValidateDeviceQueueGlobalPriorityCreateInfoKHR(_parentObjects, _s621->sType, nullptr, _s621->globalPriority);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR: {
                const auto _s622 = reinterpret_cast<const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceGlobalPriorityQueryFeaturesKHR(_parentObjects, _s622->sType, nullptr,
                                                                             _s622->globalPriorityQuery);
                break;
            }
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR: {
                const auto _s623 = reinterpret_cast<const VkQueueFamilyGlobalPriorityPropertiesKHR *>(header);
                skip |= ValidateQueueFamilyGlobalPriorityPropertiesKHR(_parentObjects, _s623->sType, nullptr, _s623->priorityCount,
                                                                       _s623->priorities);
                break;
            }
            case VK_STRUCTURE_TYPE_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR: {
                const auto _s624 = reinterpret_cast<const VkFragmentShadingRateAttachmentInfoKHR *>(header);
                skip |= ValidateFragmentShadingRateAttachmentInfoKHR(_parentObjects, _s624->sType, nullptr,
                                                                     _s624->pFragmentShadingRateAttachment,
                                                                     _s624->shadingRateAttachmentTexelSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR: {
                const auto _s625 = reinterpret_cast<const VkPipelineFragmentShadingRateStateCreateInfoKHR *>(header);
                skip |= ValidatePipelineFragmentShadingRateStateCreateInfoKHR(_parentObjects, _s625->sType, nullptr,
                                                                              _s625->fragmentSize, _s625->combinerOps);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR: {
                const auto _s626 = reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceFragmentShadingRateFeaturesKHR(
                    _parentObjects, _s626->sType, nullptr, _s626->pipelineFragmentShadingRate, _s626->primitiveFragmentShadingRate,
                    _s626->attachmentFragmentShadingRate);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR: {
                const auto _s627 = reinterpret_cast<const VkPhysicalDeviceFragmentShadingRatePropertiesKHR *>(header);
                skip |= ValidatePhysicalDeviceFragmentShadingRatePropertiesKHR(
                    _parentObjects, _s627->sType, nullptr, _s627->minFragmentShadingRateAttachmentTexelSize,
                    _s627->maxFragmentShadingRateAttachmentTexelSize, _s627->maxFragmentShadingRateAttachmentTexelSizeAspectRatio,
                    _s627->primitiveFragmentShadingRateWithMultipleViewports, _s627->layeredShadingRateAttachments,
                    _s627->fragmentShadingRateNonTrivialCombinerOps, _s627->maxFragmentSize, _s627->maxFragmentSizeAspectRatio,
                    _s627->maxFragmentShadingRateCoverageSamples, _s627->maxFragmentShadingRateRasterizationSamples,
                    _s627->fragmentShadingRateWithShaderDepthStencilWrites, _s627->fragmentShadingRateWithSampleMask,
                    _s627->fragmentShadingRateWithShaderSampleMask, _s627->fragmentShadingRateWithConservativeRasterization,
                    _s627->fragmentShadingRateWithFragmentShaderInterlock, _s627->fragmentShadingRateWithCustomSampleLocations,
                    _s627->fragmentShadingRateStrictMultiplyCombiner);
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR: {
                const auto _s628 = reinterpret_cast<const VkSurfaceProtectedCapabilitiesKHR *>(header);
                skip |= ValidateSurfaceProtectedCapabilitiesKHR(_parentObjects, _s628->sType, nullptr, _s628->supportsProtected);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR: {
                const auto _s629 = reinterpret_cast<const VkPhysicalDevicePresentWaitFeaturesKHR *>(header);
                skip |= ValidatePhysicalDevicePresentWaitFeaturesKHR(_parentObjects, _s629->sType, nullptr, _s629->presentWait);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR: {
                const auto _s630 = reinterpret_cast<const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *>(header);
                skip |= ValidatePhysicalDevicePipelineExecutablePropertiesFeaturesKHR(_parentObjects, _s630->sType, nullptr,
                                                                                      _s630->pipelineExecutableInfo);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR: {
                const auto _s631 = reinterpret_cast<const VkPipelineLibraryCreateInfoKHR *>(header);
                skip |= ValidatePipelineLibraryCreateInfoKHR(_parentObjects, _s631->sType, nullptr, _s631->libraryCount,
                                                             _s631->pLibraries);
                break;
            }
            case VK_STRUCTURE_TYPE_PRESENT_ID_KHR: {
                const auto _s632 = reinterpret_cast<const VkPresentIdKHR *>(header);
                skip |= ValidatePresentIdKHR(_parentObjects, _s632->sType, nullptr, _s632->swapchainCount, _s632->pPresentIds);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR: {
                const auto _s633 = reinterpret_cast<const VkPhysicalDevicePresentIdFeaturesKHR *>(header);
                skip |= ValidatePhysicalDevicePresentIdFeaturesKHR(_parentObjects, _s633->sType, nullptr, _s633->presentId);
                break;
            }
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_CAPABILITIES_KHR: {
                const auto _s634 = reinterpret_cast<const VkVideoEncodeCapabilitiesKHR *>(header);
                skip |=
                    ValidateVideoEncodeCapabilitiesKHR(_parentObjects, _s634->sType, nullptr, _s634->flags, _s634->rateControlModes,
                                                       _s634->maxRateControlLayers, _s634->maxBitrate, _s634->maxQualityLevels,
                                                       _s634->encodeInputPictureGranularity, _s634->supportedEncodeFeedbackFlags);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR: {
                const auto _s635 = reinterpret_cast<const VkQueryPoolVideoEncodeFeedbackCreateInfoKHR *>(header);
                skip |= ValidateQueryPoolVideoEncodeFeedbackCreateInfoKHR(_parentObjects, _s635->sType, nullptr,
                                                                          _s635->encodeFeedbackFlags);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_USAGE_INFO_KHR: {
                const auto _s636 = reinterpret_cast<const VkVideoEncodeUsageInfoKHR *>(header);
                skip |= ValidateVideoEncodeUsageInfoKHR(_parentObjects, _s636->sType, nullptr, _s636->videoUsageHints,
                                                        _s636->videoContentHints, _s636->tuningMode);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR: {
                const auto _s637 = reinterpret_cast<const VkVideoEncodeRateControlInfoKHR *>(header);
                skip |= ValidateVideoEncodeRateControlInfoKHR(_parentObjects, _s637->sType, nullptr, _s637->flags,
                                                              _s637->rateControlMode, _s637->layerCount, _s637->pLayers,
                                                              _s637->virtualBufferSizeInMs, _s637->initialVirtualBufferSizeInMs);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR: {
                const auto _s638 = reinterpret_cast<const VkVideoEncodeQualityLevelInfoKHR *>(header);
                skip |= ValidateVideoEncodeQualityLevelInfoKHR(_parentObjects, _s638->sType, nullptr, _s638->qualityLevel);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV: {
                const auto _s639 = reinterpret_cast<const VkQueueFamilyCheckpointProperties2NV *>(header);
                skip |= ValidateQueueFamilyCheckpointProperties2NV(_parentObjects, _s639->sType, nullptr,
                                                                   _s639->checkpointExecutionStageMask);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR: {
                const auto _s640 = reinterpret_cast<const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceFragmentShaderBarycentricFeaturesKHR(_parentObjects, _s640->sType, nullptr,
                                                                                   _s640->fragmentShaderBarycentric);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR: {
                const auto _s641 = reinterpret_cast<const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR *>(header);
                skip |= ValidatePhysicalDeviceFragmentShaderBarycentricPropertiesKHR(
                    _parentObjects, _s641->sType, nullptr, _s641->triStripVertexOrderIndependentOfProvokingVertex);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR: {
                const auto _s642 = reinterpret_cast<const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(_parentObjects, _s642->sType, nullptr,
                                                                                          _s642->shaderSubgroupUniformControlFlow);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR: {
                const auto _s643 = reinterpret_cast<const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(
                    _parentObjects, _s643->sType, nullptr, _s643->workgroupMemoryExplicitLayout,
                    _s643->workgroupMemoryExplicitLayoutScalarBlockLayout, _s643->workgroupMemoryExplicitLayout8BitAccess,
                    _s643->workgroupMemoryExplicitLayout16BitAccess);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR: {
                const auto _s644 = reinterpret_cast<const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceRayTracingMaintenance1FeaturesKHR(_parentObjects, _s644->sType, nullptr,
                                                                                _s644->rayTracingMaintenance1,
                                                                                _s644->rayTracingPipelineTraceRaysIndirect2);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR: {
                const auto _s645 = reinterpret_cast<const VkPhysicalDeviceMaintenance5FeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceMaintenance5FeaturesKHR(_parentObjects, _s645->sType, nullptr, _s645->maintenance5);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES_KHR: {
                const auto _s646 = reinterpret_cast<const VkPhysicalDeviceMaintenance5PropertiesKHR *>(header);
                skip |= ValidatePhysicalDeviceMaintenance5PropertiesKHR(
                    _parentObjects, _s646->sType, nullptr, _s646->earlyFragmentMultisampleCoverageAfterSampleCounting,
                    _s646->earlyFragmentSampleMaskTestBeforeSampleCounting, _s646->depthStencilSwizzleOneSupport,
                    _s646->polygonModePointSize, _s646->nonStrictSinglePixelWideLinesUseParallelogram,
                    _s646->nonStrictWideLinesUseParallelogram);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO_KHR: {
                const auto _s647 = reinterpret_cast<const VkPipelineCreateFlags2CreateInfoKHR *>(header);
                skip |= ValidatePipelineCreateFlags2CreateInfoKHR(_parentObjects, _s647->sType, nullptr, _s647->flags);
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_USAGE_FLAGS_2_CREATE_INFO_KHR: {
                const auto _s648 = reinterpret_cast<const VkBufferUsageFlags2CreateInfoKHR *>(header);
                skip |= ValidateBufferUsageFlags2CreateInfoKHR(_parentObjects, _s648->sType, nullptr, _s648->usage);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR: {
                const auto _s649 = reinterpret_cast<const VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceRayTracingPositionFetchFeaturesKHR(_parentObjects, _s649->sType, nullptr,
                                                                                 _s649->rayTracingPositionFetch);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR: {
                const auto _s650 = reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceCooperativeMatrixFeaturesKHR(
                    _parentObjects, _s650->sType, nullptr, _s650->cooperativeMatrix, _s650->cooperativeMatrixRobustBufferAccess);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR: {
                const auto _s651 = reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixPropertiesKHR *>(header);
                skip |= ValidatePhysicalDeviceCooperativeMatrixPropertiesKHR(_parentObjects, _s651->sType, nullptr,
                                                                             _s651->cooperativeMatrixSupportedStages);
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT: {
                const auto _s652 = reinterpret_cast<const VkDebugReportCallbackCreateInfoEXT *>(header);
                skip |= ValidateDebugReportCallbackCreateInfoEXT(_parentObjects, _s652->sType, nullptr, _s652->flags,
                                                                 _s652->pfnCallback, _s652->pUserData);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD: {
                const auto _s653 = reinterpret_cast<const VkPipelineRasterizationStateRasterizationOrderAMD *>(header);
                skip |= ValidatePipelineRasterizationStateRasterizationOrderAMD(_parentObjects, _s653->sType, nullptr,
                                                                                _s653->rasterizationOrder);
                break;
            }
            case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV: {
                const auto _s654 = reinterpret_cast<const VkDedicatedAllocationImageCreateInfoNV *>(header);
                skip |=
                    ValidateDedicatedAllocationImageCreateInfoNV(_parentObjects, _s654->sType, nullptr, _s654->dedicatedAllocation);
                break;
            }
            case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV: {
                const auto _s655 = reinterpret_cast<const VkDedicatedAllocationBufferCreateInfoNV *>(header);
                skip |= ValidateDedicatedAllocationBufferCreateInfoNV(_parentObjects, _s655->sType, nullptr,
                                                                      _s655->dedicatedAllocation);
                break;
            }
            case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV: {
                const auto _s656 = reinterpret_cast<const VkDedicatedAllocationMemoryAllocateInfoNV *>(header);
                skip |= ValidateDedicatedAllocationMemoryAllocateInfoNV(_parentObjects, _s656->sType, nullptr, _s656->image,
                                                                        _s656->buffer);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT: {
                const auto _s657 = reinterpret_cast<const VkPhysicalDeviceTransformFeedbackFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceTransformFeedbackFeaturesEXT(_parentObjects, _s657->sType, nullptr,
                                                                           _s657->transformFeedback, _s657->geometryStreams);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT: {
                const auto _s658 = reinterpret_cast<const VkPhysicalDeviceTransformFeedbackPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceTransformFeedbackPropertiesEXT(
                    _parentObjects, _s658->sType, nullptr, _s658->maxTransformFeedbackStreams, _s658->maxTransformFeedbackBuffers,
                    _s658->maxTransformFeedbackBufferSize, _s658->maxTransformFeedbackStreamDataSize,
                    _s658->maxTransformFeedbackBufferDataSize, _s658->maxTransformFeedbackBufferDataStride,
                    _s658->transformFeedbackQueries, _s658->transformFeedbackStreamsLinesTriangles,
                    _s658->transformFeedbackRasterizationStreamSelect, _s658->transformFeedbackDraw);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT: {
                const auto _s659 = reinterpret_cast<const VkPipelineRasterizationStateStreamCreateInfoEXT *>(header);
                skip |= ValidatePipelineRasterizationStateStreamCreateInfoEXT(_parentObjects, _s659->sType, nullptr, _s659->flags,
                                                                              _s659->rasterizationStream);
                break;
            }
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_CAPABILITIES_EXT: {
                const auto _s660 = reinterpret_cast<const VkVideoEncodeH264CapabilitiesEXT *>(header);
                skip |= ValidateVideoEncodeH264CapabilitiesEXT(
                    _parentObjects, _s660->sType, nullptr, _s660->flags, _s660->maxLevelIdc, _s660->maxSliceCount,
                    _s660->maxPPictureL0ReferenceCount, _s660->maxBPictureL0ReferenceCount, _s660->maxL1ReferenceCount,
                    _s660->maxTemporalLayerCount, _s660->expectDyadicTemporalLayerPattern, _s660->minQp, _s660->maxQp,
                    _s660->prefersGopRemainingFrames, _s660->requiresGopRemainingFrames, _s660->stdSyntaxFlags);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_QUALITY_LEVEL_PROPERTIES_EXT: {
                const auto _s661 = reinterpret_cast<const VkVideoEncodeH264QualityLevelPropertiesEXT *>(header);
                skip |= ValidateVideoEncodeH264QualityLevelPropertiesEXT(
                    _parentObjects, _s661->sType, nullptr, _s661->preferredRateControlFlags, _s661->preferredGopFrameCount,
                    _s661->preferredIdrPeriod, _s661->preferredConsecutiveBFrameCount, _s661->preferredTemporalLayerCount,
                    _s661->preferredConstantQp, _s661->preferredMaxL0ReferenceCount, _s661->preferredMaxL1ReferenceCount,
                    _s661->preferredStdEntropyCodingModeFlag);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_CREATE_INFO_EXT: {
                const auto _s662 = reinterpret_cast<const VkVideoEncodeH264SessionCreateInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264SessionCreateInfoEXT(_parentObjects, _s662->sType, nullptr, _s662->useMaxLevelIdc,
                                                                    _s662->maxLevelIdc);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_EXT: {
                const auto _s663 = reinterpret_cast<const VkVideoEncodeH264SessionParametersAddInfoEXT *>(header);
                skip |=
                    ValidateVideoEncodeH264SessionParametersAddInfoEXT(_parentObjects, _s663->sType, nullptr, _s663->stdSPSCount,
                                                                       _s663->pStdSPSs, _s663->stdPPSCount, _s663->pStdPPSs);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_EXT: {
                const auto _s664 = reinterpret_cast<const VkVideoEncodeH264SessionParametersCreateInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264SessionParametersCreateInfoEXT(
                    _parentObjects, _s664->sType, nullptr, _s664->maxStdSPSCount, _s664->maxStdPPSCount, _s664->pParametersAddInfo);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_GET_INFO_EXT: {
                const auto _s665 = reinterpret_cast<const VkVideoEncodeH264SessionParametersGetInfoEXT *>(header);
                skip |=
                    ValidateVideoEncodeH264SessionParametersGetInfoEXT(_parentObjects, _s665->sType, nullptr, _s665->writeStdSPS,
                                                                       _s665->writeStdPPS, _s665->stdSPSId, _s665->stdPPSId);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_FEEDBACK_INFO_EXT: {
                const auto _s666 = reinterpret_cast<const VkVideoEncodeH264SessionParametersFeedbackInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264SessionParametersFeedbackInfoEXT(
                    _parentObjects, _s666->sType, nullptr, _s666->hasStdSPSOverrides, _s666->hasStdPPSOverrides);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PICTURE_INFO_EXT: {
                const auto _s667 = reinterpret_cast<const VkVideoEncodeH264PictureInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264PictureInfoEXT(_parentObjects, _s667->sType, nullptr, _s667->naluSliceEntryCount,
                                                              _s667->pNaluSliceEntries, _s667->pStdPictureInfo,
                                                              _s667->generatePrefixNalu);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_DPB_SLOT_INFO_EXT: {
                const auto _s668 = reinterpret_cast<const VkVideoEncodeH264DpbSlotInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264DpbSlotInfoEXT(_parentObjects, _s668->sType, nullptr, _s668->pStdReferenceInfo);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PROFILE_INFO_EXT: {
                const auto _s669 = reinterpret_cast<const VkVideoEncodeH264ProfileInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264ProfileInfoEXT(_parentObjects, _s669->sType, nullptr, _s669->stdProfileIdc);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_INFO_EXT: {
                const auto _s670 = reinterpret_cast<const VkVideoEncodeH264RateControlInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264RateControlInfoEXT(_parentObjects, _s670->sType, nullptr, _s670->flags,
                                                                  _s670->gopFrameCount, _s670->idrPeriod,
                                                                  _s670->consecutiveBFrameCount, _s670->temporalLayerCount);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_EXT: {
                const auto _s671 = reinterpret_cast<const VkVideoEncodeH264RateControlLayerInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264RateControlLayerInfoEXT(_parentObjects, _s671->sType, nullptr, _s671->useMinQp,
                                                                       _s671->minQp, _s671->useMaxQp, _s671->maxQp,
                                                                       _s671->useMaxFrameSize, _s671->maxFrameSize);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_GOP_REMAINING_FRAME_INFO_EXT: {
                const auto _s672 = reinterpret_cast<const VkVideoEncodeH264GopRemainingFrameInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264GopRemainingFrameInfoEXT(_parentObjects, _s672->sType, nullptr,
                                                                        _s672->useGopRemainingFrames, _s672->gopRemainingI,
                                                                        _s672->gopRemainingP, _s672->gopRemainingB);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_CAPABILITIES_EXT: {
                const auto _s673 = reinterpret_cast<const VkVideoEncodeH265CapabilitiesEXT *>(header);
                skip |= ValidateVideoEncodeH265CapabilitiesEXT(
                    _parentObjects, _s673->sType, nullptr, _s673->flags, _s673->maxLevelIdc, _s673->maxSliceSegmentCount,
                    _s673->maxTiles, _s673->ctbSizes, _s673->transformBlockSizes, _s673->maxPPictureL0ReferenceCount,
                    _s673->maxBPictureL0ReferenceCount, _s673->maxL1ReferenceCount, _s673->maxSubLayerCount,
                    _s673->expectDyadicTemporalSubLayerPattern, _s673->minQp, _s673->maxQp, _s673->prefersGopRemainingFrames,
                    _s673->requiresGopRemainingFrames, _s673->stdSyntaxFlags);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_CREATE_INFO_EXT: {
                const auto _s674 = reinterpret_cast<const VkVideoEncodeH265SessionCreateInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265SessionCreateInfoEXT(_parentObjects, _s674->sType, nullptr, _s674->useMaxLevelIdc,
                                                                    _s674->maxLevelIdc);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_QUALITY_LEVEL_PROPERTIES_EXT: {
                const auto _s675 = reinterpret_cast<const VkVideoEncodeH265QualityLevelPropertiesEXT *>(header);
                skip |= ValidateVideoEncodeH265QualityLevelPropertiesEXT(
                    _parentObjects, _s675->sType, nullptr, _s675->preferredRateControlFlags, _s675->preferredGopFrameCount,
                    _s675->preferredIdrPeriod, _s675->preferredConsecutiveBFrameCount, _s675->preferredSubLayerCount,
                    _s675->preferredConstantQp, _s675->preferredMaxL0ReferenceCount, _s675->preferredMaxL1ReferenceCount);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_EXT: {
                const auto _s676 = reinterpret_cast<const VkVideoEncodeH265SessionParametersAddInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265SessionParametersAddInfoEXT(_parentObjects, _s676->sType, nullptr,
                                                                           _s676->stdVPSCount, _s676->pStdVPSs, _s676->stdSPSCount,
                                                                           _s676->pStdSPSs, _s676->stdPPSCount, _s676->pStdPPSs);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_EXT: {
                const auto _s677 = reinterpret_cast<const VkVideoEncodeH265SessionParametersCreateInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265SessionParametersCreateInfoEXT(_parentObjects, _s677->sType, nullptr,
                                                                              _s677->maxStdVPSCount, _s677->maxStdSPSCount,
                                                                              _s677->maxStdPPSCount, _s677->pParametersAddInfo);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_GET_INFO_EXT: {
                const auto _s678 = reinterpret_cast<const VkVideoEncodeH265SessionParametersGetInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265SessionParametersGetInfoEXT(
                    _parentObjects, _s678->sType, nullptr, _s678->writeStdVPS, _s678->writeStdSPS, _s678->writeStdPPS,
                    _s678->stdVPSId, _s678->stdSPSId, _s678->stdPPSId);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_FEEDBACK_INFO_EXT: {
                const auto _s679 = reinterpret_cast<const VkVideoEncodeH265SessionParametersFeedbackInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265SessionParametersFeedbackInfoEXT(
                    _parentObjects, _s679->sType, nullptr, _s679->hasStdVPSOverrides, _s679->hasStdSPSOverrides,
                    _s679->hasStdPPSOverrides);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PICTURE_INFO_EXT: {
                const auto _s680 = reinterpret_cast<const VkVideoEncodeH265PictureInfoEXT *>(header);
                skip |=
                    ValidateVideoEncodeH265PictureInfoEXT(_parentObjects, _s680->sType, nullptr, _s680->naluSliceSegmentEntryCount,
                                                          _s680->pNaluSliceSegmentEntries, _s680->pStdPictureInfo);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_DPB_SLOT_INFO_EXT: {
                const auto _s681 = reinterpret_cast<const VkVideoEncodeH265DpbSlotInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265DpbSlotInfoEXT(_parentObjects, _s681->sType, nullptr, _s681->pStdReferenceInfo);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PROFILE_INFO_EXT: {
                const auto _s682 = reinterpret_cast<const VkVideoEncodeH265ProfileInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265ProfileInfoEXT(_parentObjects, _s682->sType, nullptr, _s682->stdProfileIdc);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_INFO_EXT: {
                const auto _s683 = reinterpret_cast<const VkVideoEncodeH265RateControlInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265RateControlInfoEXT(_parentObjects, _s683->sType, nullptr, _s683->flags,
                                                                  _s683->gopFrameCount, _s683->idrPeriod,
                                                                  _s683->consecutiveBFrameCount, _s683->subLayerCount);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_EXT: {
                const auto _s684 = reinterpret_cast<const VkVideoEncodeH265RateControlLayerInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265RateControlLayerInfoEXT(_parentObjects, _s684->sType, nullptr, _s684->useMinQp,
                                                                       _s684->minQp, _s684->useMaxQp, _s684->maxQp,
                                                                       _s684->useMaxFrameSize, _s684->maxFrameSize);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_GOP_REMAINING_FRAME_INFO_EXT: {
                const auto _s685 = reinterpret_cast<const VkVideoEncodeH265GopRemainingFrameInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265GopRemainingFrameInfoEXT(_parentObjects, _s685->sType, nullptr,
                                                                        _s685->useGopRemainingFrames, _s685->gopRemainingI,
                                                                        _s685->gopRemainingP, _s685->gopRemainingB);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD: {
                const auto _s686 = reinterpret_cast<const VkTextureLODGatherFormatPropertiesAMD *>(header);
                skip |= ValidateTextureLODGatherFormatPropertiesAMD(_parentObjects, _s686->sType, nullptr,
                                                                    _s686->supportsTextureGatherLODBiasAMD);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV: {
                const auto _s687 = reinterpret_cast<const VkPhysicalDeviceCornerSampledImageFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceCornerSampledImageFeaturesNV(_parentObjects, _s687->sType, nullptr,
                                                                           _s687->cornerSampledImage);
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV: {
                const auto _s688 = reinterpret_cast<const VkExternalMemoryImageCreateInfoNV *>(header);
                skip |= ValidateExternalMemoryImageCreateInfoNV(_parentObjects, _s688->sType, nullptr, _s688->handleTypes);
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV: {
                const auto _s689 = reinterpret_cast<const VkExportMemoryAllocateInfoNV *>(header);
                skip |= ValidateExportMemoryAllocateInfoNV(_parentObjects, _s689->sType, nullptr, _s689->handleTypes);
                break;
            }
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV: {
                const auto _s690 = reinterpret_cast<const VkImportMemoryWin32HandleInfoNV *>(header);
                skip |=
                    ValidateImportMemoryWin32HandleInfoNV(_parentObjects, _s690->sType, nullptr, _s690->handleType, _s690->handle);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV: {
                const auto _s691 = reinterpret_cast<const VkExportMemoryWin32HandleInfoNV *>(header);
                skip |= ValidateExportMemoryWin32HandleInfoNV(_parentObjects, _s691->sType, nullptr, _s691->pAttributes,
                                                              _s691->dwAccess);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV: {
                const auto _s692 = reinterpret_cast<const VkWin32KeyedMutexAcquireReleaseInfoNV *>(header);
                skip |= ValidateWin32KeyedMutexAcquireReleaseInfoNV(
                    _parentObjects, _s692->sType, nullptr, _s692->acquireCount, _s692->pAcquireSyncs, _s692->pAcquireKeys,
                    _s692->pAcquireTimeoutMilliseconds, _s692->releaseCount, _s692->pReleaseSyncs, _s692->pReleaseKeys);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT: {
                const auto _s693 = reinterpret_cast<const VkValidationFlagsEXT *>(header);
                skip |= ValidateValidationFlagsEXT(_parentObjects, _s693->sType, nullptr, _s693->disabledValidationCheckCount,
                                                   _s693->pDisabledValidationChecks);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT: {
                const auto _s694 = reinterpret_cast<const VkImageViewASTCDecodeModeEXT *>(header);
                skip |= ValidateImageViewASTCDecodeModeEXT(_parentObjects, _s694->sType, nullptr, _s694->decodeMode);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT: {
                const auto _s695 = reinterpret_cast<const VkPhysicalDeviceASTCDecodeFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceASTCDecodeFeaturesEXT(_parentObjects, _s695->sType, nullptr,
                                                                    _s695->decodeModeSharedExponent);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT: {
                const auto _s696 = reinterpret_cast<const VkPhysicalDevicePipelineRobustnessFeaturesEXT *>(header);
                skip |= ValidatePhysicalDevicePipelineRobustnessFeaturesEXT(_parentObjects, _s696->sType, nullptr,
                                                                            _s696->pipelineRobustness);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES_EXT: {
                const auto _s697 = reinterpret_cast<const VkPhysicalDevicePipelineRobustnessPropertiesEXT *>(header);
                skip |= ValidatePhysicalDevicePipelineRobustnessPropertiesEXT(
                    _parentObjects, _s697->sType, nullptr, _s697->defaultRobustnessStorageBuffers,
                    _s697->defaultRobustnessUniformBuffers, _s697->defaultRobustnessVertexInputs, _s697->defaultRobustnessImages);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO_EXT: {
                const auto _s698 = reinterpret_cast<const VkPipelineRobustnessCreateInfoEXT *>(header);
                skip |= ValidatePipelineRobustnessCreateInfoEXT(_parentObjects, _s698->sType, nullptr, _s698->storageBuffers,
                                                                _s698->uniformBuffers, _s698->vertexInputs, _s698->images);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT: {
                const auto _s699 = reinterpret_cast<const VkPhysicalDeviceConditionalRenderingFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceConditionalRenderingFeaturesEXT(
                    _parentObjects, _s699->sType, nullptr, _s699->conditionalRendering, _s699->inheritedConditionalRendering);
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT: {
                const auto _s700 = reinterpret_cast<const VkCommandBufferInheritanceConditionalRenderingInfoEXT *>(header);
                skip |= ValidateCommandBufferInheritanceConditionalRenderingInfoEXT(_parentObjects, _s700->sType, nullptr,
                                                                                    _s700->conditionalRenderingEnable);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV: {
                const auto _s701 = reinterpret_cast<const VkPipelineViewportWScalingStateCreateInfoNV *>(header);
                skip |= ValidatePipelineViewportWScalingStateCreateInfoNV(_parentObjects, _s701->sType, nullptr,
                                                                          _s701->viewportWScalingEnable, _s701->viewportCount,
                                                                          _s701->pViewportWScalings);
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT: {
                const auto _s702 = reinterpret_cast<const VkSwapchainCounterCreateInfoEXT *>(header);
                skip |= ValidateSwapchainCounterCreateInfoEXT(_parentObjects, _s702->sType, nullptr, _s702->surfaceCounters);
                break;
            }
            case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE: {
                const auto _s703 = reinterpret_cast<const VkPresentTimesInfoGOOGLE *>(header);
                skip |= ValidatePresentTimesInfoGOOGLE(_parentObjects, _s703->sType, nullptr, _s703->swapchainCount, _s703->pTimes);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX: {
                const auto _s704 = reinterpret_cast<const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *>(header);
                skip |= ValidatePhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(_parentObjects, _s704->sType, nullptr,
                                                                                      _s704->perViewPositionAllComponents);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV: {
                const auto _s705 = reinterpret_cast<const VkPipelineViewportSwizzleStateCreateInfoNV *>(header);
                skip |= ValidatePipelineViewportSwizzleStateCreateInfoNV(_parentObjects, _s705->sType, nullptr, _s705->flags,
                                                                         _s705->viewportCount, _s705->pViewportSwizzles);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT: {
                const auto _s706 = reinterpret_cast<const VkPhysicalDeviceDiscardRectanglePropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceDiscardRectanglePropertiesEXT(_parentObjects, _s706->sType, nullptr,
                                                                            _s706->maxDiscardRectangles);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT: {
                const auto _s707 = reinterpret_cast<const VkPipelineDiscardRectangleStateCreateInfoEXT *>(header);
                skip |= ValidatePipelineDiscardRectangleStateCreateInfoEXT(_parentObjects, _s707->sType, nullptr, _s707->flags,
                                                                           _s707->discardRectangleMode,
                                                                           _s707->discardRectangleCount, _s707->pDiscardRectangles);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT: {
                const auto _s708 = reinterpret_cast<const VkPhysicalDeviceConservativeRasterizationPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceConservativeRasterizationPropertiesEXT(
                    _parentObjects, _s708->sType, nullptr, _s708->primitiveOverestimationSize,
                    _s708->maxExtraPrimitiveOverestimationSize, _s708->extraPrimitiveOverestimationSizeGranularity,
                    _s708->primitiveUnderestimation, _s708->conservativePointAndLineRasterization,
                    _s708->degenerateTrianglesRasterized, _s708->degenerateLinesRasterized,
                    _s708->fullyCoveredFragmentShaderInputVariable, _s708->conservativeRasterizationPostDepthCoverage);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT: {
                const auto _s709 = reinterpret_cast<const VkPipelineRasterizationConservativeStateCreateInfoEXT *>(header);
                skip |= ValidatePipelineRasterizationConservativeStateCreateInfoEXT(
                    _parentObjects, _s709->sType, nullptr, _s709->flags, _s709->conservativeRasterizationMode,
                    _s709->extraPrimitiveOverestimationSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT: {
                const auto _s710 = reinterpret_cast<const VkPhysicalDeviceDepthClipEnableFeaturesEXT *>(header);
                skip |=
                    ValidatePhysicalDeviceDepthClipEnableFeaturesEXT(_parentObjects, _s710->sType, nullptr, _s710->depthClipEnable);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT: {
                const auto _s711 = reinterpret_cast<const VkPipelineRasterizationDepthClipStateCreateInfoEXT *>(header);
                skip |= ValidatePipelineRasterizationDepthClipStateCreateInfoEXT(_parentObjects, _s711->sType, nullptr,
                                                                                 _s711->flags, _s711->depthClipEnable);
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT: {
                const auto _s712 = reinterpret_cast<const VkDebugUtilsObjectNameInfoEXT *>(header);
                skip |= ValidateDebugUtilsObjectNameInfoEXT(_parentObjects, _s712->sType, nullptr, _s712->objectType,
                                                            _s712->objectHandle, _s712->pObjectName);
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT: {
                const auto _s713 = reinterpret_cast<const VkDebugUtilsMessengerCreateInfoEXT *>(header);
                skip |= ValidateDebugUtilsMessengerCreateInfoEXT(_parentObjects, _s713->sType, nullptr, _s713->flags,
                                                                 _s713->messageSeverity, _s713->messageType, _s713->pfnUserCallback,
                                                                 _s713->pUserData);
                break;
            }
#ifdef VK_USE_PLATFORM_ANDROID_KHR
            case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID: {
                const auto _s714 = reinterpret_cast<const VkAndroidHardwareBufferUsageANDROID *>(header);
                skip |= ValidateAndroidHardwareBufferUsageANDROID(_parentObjects, _s714->sType, nullptr,
                                                                  _s714->androidHardwareBufferUsage);
                break;
            }
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
            case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID: {
                const auto _s715 = reinterpret_cast<const VkAndroidHardwareBufferFormatPropertiesANDROID *>(header);
                skip |= ValidateAndroidHardwareBufferFormatPropertiesANDROID(
                    _parentObjects, _s715->sType, nullptr, _s715->format, _s715->externalFormat, _s715->formatFeatures,
                    _s715->samplerYcbcrConversionComponents, _s715->suggestedYcbcrModel, _s715->suggestedYcbcrRange,
                    _s715->suggestedXChromaOffset, _s715->suggestedYChromaOffset);
                break;
            }
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
            case VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID: {
                const auto _s716 = reinterpret_cast<const VkImportAndroidHardwareBufferInfoANDROID *>(header);
                skip |= ValidateImportAndroidHardwareBufferInfoANDROID(_parentObjects, _s716->sType, nullptr, _s716->buffer);
                break;
            }
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
            case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID: {
                const auto _s717 = reinterpret_cast<const VkExternalFormatANDROID *>(header);
                skip |= ValidateExternalFormatANDROID(_parentObjects, _s717->sType, nullptr, _s717->externalFormat);
                break;
            }
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
            case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_2_ANDROID: {
                const auto _s718 = reinterpret_cast<const VkAndroidHardwareBufferFormatProperties2ANDROID *>(header);
                skip |= ValidateAndroidHardwareBufferFormatProperties2ANDROID(
                    _parentObjects, _s718->sType, nullptr, _s718->format, _s718->externalFormat, _s718->formatFeatures,
                    _s718->samplerYcbcrConversionComponents, _s718->suggestedYcbcrModel, _s718->suggestedYcbcrRange,
                    _s718->suggestedXChromaOffset, _s718->suggestedYChromaOffset);
                break;
            }
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ENQUEUE_FEATURES_AMDX: {
                const auto _s719 = reinterpret_cast<const VkPhysicalDeviceShaderEnqueueFeaturesAMDX *>(header);
                skip |=
                    ValidatePhysicalDeviceShaderEnqueueFeaturesAMDX(_parentObjects, _s719->sType, nullptr, _s719->shaderEnqueue);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ENQUEUE_PROPERTIES_AMDX: {
                const auto _s720 = reinterpret_cast<const VkPhysicalDeviceShaderEnqueuePropertiesAMDX *>(header);
                skip |= ValidatePhysicalDeviceShaderEnqueuePropertiesAMDX(
                    _parentObjects, _s720->sType, nullptr, _s720->maxExecutionGraphDepth, _s720->maxExecutionGraphShaderOutputNodes,
                    _s720->maxExecutionGraphShaderPayloadSize, _s720->maxExecutionGraphShaderPayloadCount,
                    _s720->executionGraphDispatchAddressAlignment);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_NODE_CREATE_INFO_AMDX: {
                const auto _s721 = reinterpret_cast<const VkPipelineShaderStageNodeCreateInfoAMDX *>(header);
                skip |= ValidatePipelineShaderStageNodeCreateInfoAMDX(_parentObjects, _s721->sType, nullptr, _s721->pName,
                                                                      _s721->index);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT: {
                const auto _s722 = reinterpret_cast<const VkSampleLocationsInfoEXT *>(header);
                skip |= ValidateSampleLocationsInfoEXT(_parentObjects, _s722->sType, nullptr, _s722->sampleLocationsPerPixel,
                                                       _s722->sampleLocationGridSize, _s722->sampleLocationsCount,
                                                       _s722->pSampleLocations);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT: {
                const auto _s723 = reinterpret_cast<const VkRenderPassSampleLocationsBeginInfoEXT *>(header);
                skip |= ValidateRenderPassSampleLocationsBeginInfoEXT(
                    _parentObjects, _s723->sType, nullptr, _s723->attachmentInitialSampleLocationsCount,
                    _s723->pAttachmentInitialSampleLocations, _s723->postSubpassSampleLocationsCount,
                    _s723->pPostSubpassSampleLocations);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT: {
                const auto _s724 = reinterpret_cast<const VkPipelineSampleLocationsStateCreateInfoEXT *>(header);
                skip |= ValidatePipelineSampleLocationsStateCreateInfoEXT(_parentObjects, _s724->sType, nullptr,
                                                                          _s724->sampleLocationsEnable, _s724->sampleLocationsInfo);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT: {
                const auto _s725 = reinterpret_cast<const VkPhysicalDeviceSampleLocationsPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceSampleLocationsPropertiesEXT(
                    _parentObjects, _s725->sType, nullptr, _s725->sampleLocationSampleCounts, _s725->maxSampleLocationGridSize,
                    _s725->sampleLocationCoordinateRange, _s725->sampleLocationSubPixelBits, _s725->variableSampleLocations);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT: {
                const auto _s726 = reinterpret_cast<const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceBlendOperationAdvancedFeaturesEXT(_parentObjects, _s726->sType, nullptr,
                                                                                _s726->advancedBlendCoherentOperations);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT: {
                const auto _s727 = reinterpret_cast<const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceBlendOperationAdvancedPropertiesEXT(
                    _parentObjects, _s727->sType, nullptr, _s727->advancedBlendMaxColorAttachments,
                    _s727->advancedBlendIndependentBlend, _s727->advancedBlendNonPremultipliedSrcColor,
                    _s727->advancedBlendNonPremultipliedDstColor, _s727->advancedBlendCorrelatedOverlap,
                    _s727->advancedBlendAllOperations);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT: {
                const auto _s728 = reinterpret_cast<const VkPipelineColorBlendAdvancedStateCreateInfoEXT *>(header);
                skip |= ValidatePipelineColorBlendAdvancedStateCreateInfoEXT(
                    _parentObjects, _s728->sType, nullptr, _s728->srcPremultiplied, _s728->dstPremultiplied, _s728->blendOverlap);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV: {
                const auto _s729 = reinterpret_cast<const VkPipelineCoverageToColorStateCreateInfoNV *>(header);
                skip |=
                    ValidatePipelineCoverageToColorStateCreateInfoNV(_parentObjects, _s729->sType, nullptr, _s729->flags,
                                                                     _s729->coverageToColorEnable, _s729->coverageToColorLocation);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV: {
                const auto _s730 = reinterpret_cast<const VkPipelineCoverageModulationStateCreateInfoNV *>(header);
                skip |= ValidatePipelineCoverageModulationStateCreateInfoNV(
                    _parentObjects, _s730->sType, nullptr, _s730->flags, _s730->coverageModulationMode,
                    _s730->coverageModulationTableEnable, _s730->coverageModulationTableCount, _s730->pCoverageModulationTable);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV: {
                const auto _s731 = reinterpret_cast<const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceShaderSMBuiltinsPropertiesNV(_parentObjects, _s731->sType, nullptr,
                                                                           _s731->shaderSMCount, _s731->shaderWarpsPerSM);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV: {
                const auto _s732 = reinterpret_cast<const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceShaderSMBuiltinsFeaturesNV(_parentObjects, _s732->sType, nullptr,
                                                                         _s732->shaderSMBuiltins);
                break;
            }
            case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT: {
                const auto _s733 = reinterpret_cast<const VkDrmFormatModifierPropertiesListEXT *>(header);
                skip |= ValidateDrmFormatModifierPropertiesListEXT(
                    _parentObjects, _s733->sType, nullptr, _s733->drmFormatModifierCount, _s733->pDrmFormatModifierProperties);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT: {
                const auto _s734 = reinterpret_cast<const VkPhysicalDeviceImageDrmFormatModifierInfoEXT *>(header);
                skip |= ValidatePhysicalDeviceImageDrmFormatModifierInfoEXT(
                    _parentObjects, _s734->sType, nullptr, _s734->drmFormatModifier, _s734->sharingMode,
                    _s734->queueFamilyIndexCount, _s734->pQueueFamilyIndices);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT: {
                const auto _s735 = reinterpret_cast<const VkImageDrmFormatModifierListCreateInfoEXT *>(header);
                skip |= ValidateImageDrmFormatModifierListCreateInfoEXT(_parentObjects, _s735->sType, nullptr,
                                                                        _s735->drmFormatModifierCount, _s735->pDrmFormatModifiers);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT: {
                const auto _s736 = reinterpret_cast<const VkImageDrmFormatModifierExplicitCreateInfoEXT *>(header);
                skip |= ValidateImageDrmFormatModifierExplicitCreateInfoEXT(
                    _parentObjects, _s736->sType, nullptr, _s736->drmFormatModifier, _s736->drmFormatModifierPlaneCount,
                    _s736->pPlaneLayouts);
                break;
            }
            case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT: {
                const auto _s737 = reinterpret_cast<const VkDrmFormatModifierPropertiesList2EXT *>(header);
                skip |= ValidateDrmFormatModifierPropertiesList2EXT(
                    _parentObjects, _s737->sType, nullptr, _s737->drmFormatModifierCount, _s737->pDrmFormatModifierProperties);
                break;
            }
            case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT: {
                const auto _s738 = reinterpret_cast<const VkShaderModuleValidationCacheCreateInfoEXT *>(header);
                skip |=
                    ValidateShaderModuleValidationCacheCreateInfoEXT(_parentObjects, _s738->sType, nullptr, _s738->validationCache);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV: {
                const auto _s739 = reinterpret_cast<const VkPipelineViewportShadingRateImageStateCreateInfoNV *>(header);
                skip |= ValidatePipelineViewportShadingRateImageStateCreateInfoNV(
                    _parentObjects, _s739->sType, nullptr, _s739->shadingRateImageEnable, _s739->viewportCount,
                    _s739->pShadingRatePalettes);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV: {
                const auto _s740 = reinterpret_cast<const VkPhysicalDeviceShadingRateImageFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceShadingRateImageFeaturesNV(
                    _parentObjects, _s740->sType, nullptr, _s740->shadingRateImage, _s740->shadingRateCoarseSampleOrder);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV: {
                const auto _s741 = reinterpret_cast<const VkPhysicalDeviceShadingRateImagePropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceShadingRateImagePropertiesNV(
                    _parentObjects, _s741->sType, nullptr, _s741->shadingRateTexelSize, _s741->shadingRatePaletteSize,
                    _s741->shadingRateMaxCoarseSamples);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV: {
                const auto _s742 = reinterpret_cast<const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *>(header);
                skip |= ValidatePipelineViewportCoarseSampleOrderStateCreateInfoNV(
                    _parentObjects, _s742->sType, nullptr, _s742->sampleOrderType, _s742->customSampleOrderCount,
                    _s742->pCustomSampleOrders);
                break;
            }
            case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV: {
                const auto _s743 = reinterpret_cast<const VkWriteDescriptorSetAccelerationStructureNV *>(header);
                skip |= ValidateWriteDescriptorSetAccelerationStructureNV(
                    _parentObjects, _s743->sType, nullptr, _s743->accelerationStructureCount, _s743->pAccelerationStructures);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV: {
                const auto _s744 = reinterpret_cast<const VkPhysicalDeviceRayTracingPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceRayTracingPropertiesNV(
                    _parentObjects, _s744->sType, nullptr, _s744->shaderGroupHandleSize, _s744->maxRecursionDepth,
                    _s744->maxShaderGroupStride, _s744->shaderGroupBaseAlignment, _s744->maxGeometryCount, _s744->maxInstanceCount,
                    _s744->maxTriangleCount, _s744->maxDescriptorSetAccelerationStructures);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV: {
                const auto _s745 = reinterpret_cast<const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceRepresentativeFragmentTestFeaturesNV(_parentObjects, _s745->sType, nullptr,
                                                                                   _s745->representativeFragmentTest);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV: {
                const auto _s746 = reinterpret_cast<const VkPipelineRepresentativeFragmentTestStateCreateInfoNV *>(header);
                skip |= ValidatePipelineRepresentativeFragmentTestStateCreateInfoNV(_parentObjects, _s746->sType, nullptr,
                                                                                    _s746->representativeFragmentTestEnable);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT: {
                const auto _s747 = reinterpret_cast<const VkPhysicalDeviceImageViewImageFormatInfoEXT *>(header);
                skip |=
                    ValidatePhysicalDeviceImageViewImageFormatInfoEXT(_parentObjects, _s747->sType, nullptr, _s747->imageViewType);
                break;
            }
            case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT: {
                const auto _s748 = reinterpret_cast<const VkFilterCubicImageViewImageFormatPropertiesEXT *>(header);
                skip |= ValidateFilterCubicImageViewImageFormatPropertiesEXT(_parentObjects, _s748->sType, nullptr,
                                                                             _s748->filterCubic, _s748->filterCubicMinmax);
                break;
            }
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT: {
                const auto _s749 = reinterpret_cast<const VkImportMemoryHostPointerInfoEXT *>(header);
                skip |= ValidateImportMemoryHostPointerInfoEXT(_parentObjects, _s749->sType, nullptr, _s749->handleType,
                                                               _s749->pHostPointer);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT: {
                const auto _s750 = reinterpret_cast<const VkPhysicalDeviceExternalMemoryHostPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceExternalMemoryHostPropertiesEXT(_parentObjects, _s750->sType, nullptr,
                                                                              _s750->minImportedHostPointerAlignment);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD: {
                const auto _s751 = reinterpret_cast<const VkPipelineCompilerControlCreateInfoAMD *>(header);
                skip |= ValidatePipelineCompilerControlCreateInfoAMD(_parentObjects, _s751->sType, nullptr,
                                                                     _s751->compilerControlFlags);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD: {
                const auto _s752 = reinterpret_cast<const VkPhysicalDeviceShaderCorePropertiesAMD *>(header);
                skip |= ValidatePhysicalDeviceShaderCorePropertiesAMD(
                    _parentObjects, _s752->sType, nullptr, _s752->shaderEngineCount, _s752->shaderArraysPerEngineCount,
                    _s752->computeUnitsPerShaderArray, _s752->simdPerComputeUnit, _s752->wavefrontsPerSimd, _s752->wavefrontSize,
                    _s752->sgprsPerSimd, _s752->minSgprAllocation, _s752->maxSgprAllocation, _s752->sgprAllocationGranularity,
                    _s752->vgprsPerSimd, _s752->minVgprAllocation, _s752->maxVgprAllocation, _s752->vgprAllocationGranularity);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD: {
                const auto _s753 = reinterpret_cast<const VkDeviceMemoryOverallocationCreateInfoAMD *>(header);
                skip |= ValidateDeviceMemoryOverallocationCreateInfoAMD(_parentObjects, _s753->sType, nullptr,
                                                                        _s753->overallocationBehavior);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT: {
                const auto _s754 = reinterpret_cast<const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceVertexAttributeDivisorPropertiesEXT(_parentObjects, _s754->sType, nullptr,
                                                                                  _s754->maxVertexAttribDivisor);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT: {
                const auto _s755 = reinterpret_cast<const VkPipelineVertexInputDivisorStateCreateInfoEXT *>(header);
                skip |= ValidatePipelineVertexInputDivisorStateCreateInfoEXT(
                    _parentObjects, _s755->sType, nullptr, _s755->vertexBindingDivisorCount, _s755->pVertexBindingDivisors);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT: {
                const auto _s756 = reinterpret_cast<const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceVertexAttributeDivisorFeaturesEXT(_parentObjects, _s756->sType, nullptr,
                                                                                _s756->vertexAttributeInstanceRateDivisor,
                                                                                _s756->vertexAttributeInstanceRateZeroDivisor);
                break;
            }
#ifdef VK_USE_PLATFORM_GGP
            case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP: {
                const auto _s757 = reinterpret_cast<const VkPresentFrameTokenGGP *>(header);
                skip |= ValidatePresentFrameTokenGGP(_parentObjects, _s757->sType, nullptr, _s757->frameToken);
                break;
            }
#endif  // VK_USE_PLATFORM_GGP
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV: {
                const auto _s758 = reinterpret_cast<const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceComputeShaderDerivativesFeaturesNV(
                    _parentObjects, _s758->sType, nullptr, _s758->computeDerivativeGroupQuads, _s758->computeDerivativeGroupLinear);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV: {
                const auto _s759 = reinterpret_cast<const VkPhysicalDeviceMeshShaderFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceMeshShaderFeaturesNV(_parentObjects, _s759->sType, nullptr, _s759->taskShader,
                                                                   _s759->meshShader);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV: {
                const auto _s760 = reinterpret_cast<const VkPhysicalDeviceMeshShaderPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceMeshShaderPropertiesNV(
                    _parentObjects, _s760->sType, nullptr, _s760->maxDrawMeshTasksCount, _s760->maxTaskWorkGroupInvocations,
                    _s760->maxTaskWorkGroupSize, _s760->maxTaskTotalMemorySize, _s760->maxTaskOutputCount,
                    _s760->maxMeshWorkGroupInvocations, _s760->maxMeshWorkGroupSize, _s760->maxMeshTotalMemorySize,
                    _s760->maxMeshOutputVertices, _s760->maxMeshOutputPrimitives, _s760->maxMeshMultiviewViewCount,
                    _s760->meshOutputPerVertexGranularity, _s760->meshOutputPerPrimitiveGranularity);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV: {
                const auto _s761 = reinterpret_cast<const VkPhysicalDeviceShaderImageFootprintFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceShaderImageFootprintFeaturesNV(_parentObjects, _s761->sType, nullptr,
                                                                             _s761->imageFootprint);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV: {
                const auto _s762 = reinterpret_cast<const VkPipelineViewportExclusiveScissorStateCreateInfoNV *>(header);
                skip |= ValidatePipelineViewportExclusiveScissorStateCreateInfoNV(
                    _parentObjects, _s762->sType, nullptr, _s762->exclusiveScissorCount, _s762->pExclusiveScissors);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV: {
                const auto _s763 = reinterpret_cast<const VkPhysicalDeviceExclusiveScissorFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceExclusiveScissorFeaturesNV(_parentObjects, _s763->sType, nullptr,
                                                                         _s763->exclusiveScissor);
                break;
            }
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV: {
                const auto _s764 = reinterpret_cast<const VkQueueFamilyCheckpointPropertiesNV *>(header);
                skip |= ValidateQueueFamilyCheckpointPropertiesNV(_parentObjects, _s764->sType, nullptr,
                                                                  _s764->checkpointExecutionStageMask);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL: {
                const auto _s765 = reinterpret_cast<const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *>(header);
                skip |= ValidatePhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(_parentObjects, _s765->sType, nullptr,
                                                                                   _s765->shaderIntegerFunctions2);
                break;
            }
            case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL: {
                const auto _s766 = reinterpret_cast<const VkQueryPoolPerformanceQueryCreateInfoINTEL *>(header);
                skip |= ValidateQueryPoolPerformanceQueryCreateInfoINTEL(_parentObjects, _s766->sType, nullptr,
                                                                         _s766->performanceCountersSampling);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT: {
                const auto _s767 = reinterpret_cast<const VkPhysicalDevicePCIBusInfoPropertiesEXT *>(header);
                skip |= ValidatePhysicalDevicePCIBusInfoPropertiesEXT(_parentObjects, _s767->sType, nullptr, _s767->pciDomain,
                                                                      _s767->pciBus, _s767->pciDevice, _s767->pciFunction);
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD: {
                const auto _s768 = reinterpret_cast<const VkDisplayNativeHdrSurfaceCapabilitiesAMD *>(header);
                skip |= ValidateDisplayNativeHdrSurfaceCapabilitiesAMD(_parentObjects, _s768->sType, nullptr,
                                                                       _s768->localDimmingSupport);
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD: {
                const auto _s769 = reinterpret_cast<const VkSwapchainDisplayNativeHdrCreateInfoAMD *>(header);
                skip |= ValidateSwapchainDisplayNativeHdrCreateInfoAMD(_parentObjects, _s769->sType, nullptr,
                                                                       _s769->localDimmingEnable);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT: {
                const auto _s770 = reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceFragmentDensityMapFeaturesEXT(
                    _parentObjects, _s770->sType, nullptr, _s770->fragmentDensityMap, _s770->fragmentDensityMapDynamic,
                    _s770->fragmentDensityMapNonSubsampledImages);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT: {
                const auto _s771 = reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceFragmentDensityMapPropertiesEXT(
                    _parentObjects, _s771->sType, nullptr, _s771->minFragmentDensityTexelSize, _s771->maxFragmentDensityTexelSize,
                    _s771->fragmentDensityInvocations);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT: {
                const auto _s772 = reinterpret_cast<const VkRenderPassFragmentDensityMapCreateInfoEXT *>(header);
                skip |= ValidateRenderPassFragmentDensityMapCreateInfoEXT(_parentObjects, _s772->sType, nullptr,
                                                                          _s772->fragmentDensityMapAttachment);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD: {
                const auto _s773 = reinterpret_cast<const VkPhysicalDeviceShaderCoreProperties2AMD *>(header);
                skip |= ValidatePhysicalDeviceShaderCoreProperties2AMD(_parentObjects, _s773->sType, nullptr,
                                                                       _s773->shaderCoreFeatures, _s773->activeComputeUnitCount);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD: {
                const auto _s774 = reinterpret_cast<const VkPhysicalDeviceCoherentMemoryFeaturesAMD *>(header);
                skip |= ValidatePhysicalDeviceCoherentMemoryFeaturesAMD(_parentObjects, _s774->sType, nullptr,
                                                                        _s774->deviceCoherentMemory);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT: {
                const auto _s775 = reinterpret_cast<const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceShaderImageAtomicInt64FeaturesEXT(
                    _parentObjects, _s775->sType, nullptr, _s775->shaderImageInt64Atomics, _s775->sparseImageInt64Atomics);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT: {
                const auto _s776 = reinterpret_cast<const VkPhysicalDeviceMemoryBudgetPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceMemoryBudgetPropertiesEXT(_parentObjects, _s776->sType, nullptr, _s776->heapBudget,
                                                                        _s776->heapUsage);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT: {
                const auto _s777 = reinterpret_cast<const VkPhysicalDeviceMemoryPriorityFeaturesEXT *>(header);
                skip |=
                    ValidatePhysicalDeviceMemoryPriorityFeaturesEXT(_parentObjects, _s777->sType, nullptr, _s777->memoryPriority);
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT: {
                const auto _s778 = reinterpret_cast<const VkMemoryPriorityAllocateInfoEXT *>(header);
                skip |= ValidateMemoryPriorityAllocateInfoEXT(_parentObjects, _s778->sType, nullptr, _s778->priority);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV: {
                const auto _s779 = reinterpret_cast<const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(_parentObjects, _s779->sType, nullptr,
                                                                                         _s779->dedicatedAllocationImageAliasing);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT: {
                const auto _s780 = reinterpret_cast<const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceBufferDeviceAddressFeaturesEXT(
                    _parentObjects, _s780->sType, nullptr, _s780->bufferDeviceAddress, _s780->bufferDeviceAddressCaptureReplay,
                    _s780->bufferDeviceAddressMultiDevice);
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT: {
                const auto _s781 = reinterpret_cast<const VkBufferDeviceAddressCreateInfoEXT *>(header);
                skip |= ValidateBufferDeviceAddressCreateInfoEXT(_parentObjects, _s781->sType, nullptr, _s781->deviceAddress);
                break;
            }
            case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT: {
                const auto _s782 = reinterpret_cast<const VkValidationFeaturesEXT *>(header);
                skip |= ValidateValidationFeaturesEXT(_parentObjects, _s782->sType, nullptr, _s782->enabledValidationFeatureCount,
                                                      _s782->pEnabledValidationFeatures, _s782->disabledValidationFeatureCount,
                                                      _s782->pDisabledValidationFeatures);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV: {
                const auto _s783 = reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceCooperativeMatrixFeaturesNV(
                    _parentObjects, _s783->sType, nullptr, _s783->cooperativeMatrix, _s783->cooperativeMatrixRobustBufferAccess);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV: {
                const auto _s784 = reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceCooperativeMatrixPropertiesNV(_parentObjects, _s784->sType, nullptr,
                                                                            _s784->cooperativeMatrixSupportedStages);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV: {
                const auto _s785 = reinterpret_cast<const VkPhysicalDeviceCoverageReductionModeFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceCoverageReductionModeFeaturesNV(_parentObjects, _s785->sType, nullptr,
                                                                              _s785->coverageReductionMode);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV: {
                const auto _s786 = reinterpret_cast<const VkPipelineCoverageReductionStateCreateInfoNV *>(header);
                skip |= ValidatePipelineCoverageReductionStateCreateInfoNV(_parentObjects, _s786->sType, nullptr, _s786->flags,
                                                                           _s786->coverageReductionMode);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT: {
                const auto _s787 = reinterpret_cast<const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceFragmentShaderInterlockFeaturesEXT(
                    _parentObjects, _s787->sType, nullptr, _s787->fragmentShaderSampleInterlock,
                    _s787->fragmentShaderPixelInterlock, _s787->fragmentShaderShadingRateInterlock);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT: {
                const auto _s788 = reinterpret_cast<const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceYcbcrImageArraysFeaturesEXT(_parentObjects, _s788->sType, nullptr,
                                                                          _s788->ycbcrImageArrays);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT: {
                const auto _s789 = reinterpret_cast<const VkPhysicalDeviceProvokingVertexFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceProvokingVertexFeaturesEXT(_parentObjects, _s789->sType, nullptr,
                                                                         _s789->provokingVertexLast,
                                                                         _s789->transformFeedbackPreservesProvokingVertex);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT: {
                const auto _s790 = reinterpret_cast<const VkPhysicalDeviceProvokingVertexPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceProvokingVertexPropertiesEXT(
                    _parentObjects, _s790->sType, nullptr, _s790->provokingVertexModePerPipeline,
                    _s790->transformFeedbackPreservesTriangleFanProvokingVertex);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT: {
                const auto _s791 = reinterpret_cast<const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT *>(header);
                skip |= ValidatePipelineRasterizationProvokingVertexStateCreateInfoEXT(_parentObjects, _s791->sType, nullptr,
                                                                                       _s791->provokingVertexMode);
                break;
            }
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT: {
                const auto _s792 = reinterpret_cast<const VkSurfaceFullScreenExclusiveInfoEXT *>(header);
                skip |=
                    ValidateSurfaceFullScreenExclusiveInfoEXT(_parentObjects, _s792->sType, nullptr, _s792->fullScreenExclusive);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT: {
                const auto _s793 = reinterpret_cast<const VkSurfaceCapabilitiesFullScreenExclusiveEXT *>(header);
                skip |= ValidateSurfaceCapabilitiesFullScreenExclusiveEXT(_parentObjects, _s793->sType, nullptr,
                                                                          _s793->fullScreenExclusiveSupported);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT: {
                const auto _s794 = reinterpret_cast<const VkSurfaceFullScreenExclusiveWin32InfoEXT *>(header);
                skip |= ValidateSurfaceFullScreenExclusiveWin32InfoEXT(_parentObjects, _s794->sType, nullptr, _s794->hmonitor);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT: {
                const auto _s795 = reinterpret_cast<const VkPhysicalDeviceLineRasterizationFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceLineRasterizationFeaturesEXT(
                    _parentObjects, _s795->sType, nullptr, _s795->rectangularLines, _s795->bresenhamLines, _s795->smoothLines,
                    _s795->stippledRectangularLines, _s795->stippledBresenhamLines, _s795->stippledSmoothLines);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT: {
                const auto _s796 = reinterpret_cast<const VkPhysicalDeviceLineRasterizationPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceLineRasterizationPropertiesEXT(_parentObjects, _s796->sType, nullptr,
                                                                             _s796->lineSubPixelPrecisionBits);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT: {
                const auto _s797 = reinterpret_cast<const VkPipelineRasterizationLineStateCreateInfoEXT *>(header);
                skip |= ValidatePipelineRasterizationLineStateCreateInfoEXT(_parentObjects, _s797->sType, nullptr,
                                                                            _s797->lineRasterizationMode, _s797->stippledLineEnable,
                                                                            _s797->lineStippleFactor, _s797->lineStipplePattern);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT: {
                const auto _s798 = reinterpret_cast<const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceShaderAtomicFloatFeaturesEXT(
                    _parentObjects, _s798->sType, nullptr, _s798->shaderBufferFloat32Atomics, _s798->shaderBufferFloat32AtomicAdd,
                    _s798->shaderBufferFloat64Atomics, _s798->shaderBufferFloat64AtomicAdd, _s798->shaderSharedFloat32Atomics,
                    _s798->shaderSharedFloat32AtomicAdd, _s798->shaderSharedFloat64Atomics, _s798->shaderSharedFloat64AtomicAdd,
                    _s798->shaderImageFloat32Atomics, _s798->shaderImageFloat32AtomicAdd, _s798->sparseImageFloat32Atomics,
                    _s798->sparseImageFloat32AtomicAdd);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT: {
                const auto _s799 = reinterpret_cast<const VkPhysicalDeviceIndexTypeUint8FeaturesEXT *>(header);
                skip |=
                    ValidatePhysicalDeviceIndexTypeUint8FeaturesEXT(_parentObjects, _s799->sType, nullptr, _s799->indexTypeUint8);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT: {
                const auto _s800 = reinterpret_cast<const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceExtendedDynamicStateFeaturesEXT(_parentObjects, _s800->sType, nullptr,
                                                                              _s800->extendedDynamicState);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT: {
                const auto _s801 = reinterpret_cast<const VkPhysicalDeviceHostImageCopyFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceHostImageCopyFeaturesEXT(_parentObjects, _s801->sType, nullptr, _s801->hostImageCopy);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES_EXT: {
                const auto _s802 = reinterpret_cast<const VkPhysicalDeviceHostImageCopyPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceHostImageCopyPropertiesEXT(
                    _parentObjects, _s802->sType, nullptr, _s802->copySrcLayoutCount, _s802->pCopySrcLayouts,
                    _s802->copyDstLayoutCount, _s802->pCopyDstLayouts, _s802->optimalTilingLayoutUUID,
                    _s802->identicalMemoryTypeRequirements);
                break;
            }
            case VK_STRUCTURE_TYPE_SUBRESOURCE_HOST_MEMCPY_SIZE_EXT: {
                const auto _s803 = reinterpret_cast<const VkSubresourceHostMemcpySizeEXT *>(header);
                skip |= ValidateSubresourceHostMemcpySizeEXT(_parentObjects, _s803->sType, nullptr, _s803->size);
                break;
            }
            case VK_STRUCTURE_TYPE_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY_EXT: {
                const auto _s804 = reinterpret_cast<const VkHostImageCopyDevicePerformanceQueryEXT *>(header);
                skip |= ValidateHostImageCopyDevicePerformanceQueryEXT(_parentObjects, _s804->sType, nullptr,
                                                                       _s804->optimalDeviceAccess, _s804->identicalMemoryLayout);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT: {
                const auto _s805 = reinterpret_cast<const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceShaderAtomicFloat2FeaturesEXT(
                    _parentObjects, _s805->sType, nullptr, _s805->shaderBufferFloat16Atomics, _s805->shaderBufferFloat16AtomicAdd,
                    _s805->shaderBufferFloat16AtomicMinMax, _s805->shaderBufferFloat32AtomicMinMax,
                    _s805->shaderBufferFloat64AtomicMinMax, _s805->shaderSharedFloat16Atomics, _s805->shaderSharedFloat16AtomicAdd,
                    _s805->shaderSharedFloat16AtomicMinMax, _s805->shaderSharedFloat32AtomicMinMax,
                    _s805->shaderSharedFloat64AtomicMinMax, _s805->shaderImageFloat32AtomicMinMax,
                    _s805->sparseImageFloat32AtomicMinMax);
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_EXT: {
                const auto _s806 = reinterpret_cast<const VkSurfacePresentModeEXT *>(header);
                skip |= ValidateSurfacePresentModeEXT(_parentObjects, _s806->sType, nullptr, _s806->presentMode);
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT: {
                const auto _s807 = reinterpret_cast<const VkSurfacePresentScalingCapabilitiesEXT *>(header);
                skip |= ValidateSurfacePresentScalingCapabilitiesEXT(
                    _parentObjects, _s807->sType, nullptr, _s807->supportedPresentScaling, _s807->supportedPresentGravityX,
                    _s807->supportedPresentGravityY, _s807->minScaledImageExtent, _s807->maxScaledImageExtent);
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT: {
                const auto _s808 = reinterpret_cast<const VkSurfacePresentModeCompatibilityEXT *>(header);
                skip |= ValidateSurfacePresentModeCompatibilityEXT(_parentObjects, _s808->sType, nullptr, _s808->presentModeCount,
                                                                   _s808->pPresentModes);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT: {
                const auto _s809 = reinterpret_cast<const VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceSwapchainMaintenance1FeaturesEXT(_parentObjects, _s809->sType, nullptr,
                                                                               _s809->swapchainMaintenance1);
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_EXT: {
                const auto _s810 = reinterpret_cast<const VkSwapchainPresentFenceInfoEXT *>(header);
                skip |= ValidateSwapchainPresentFenceInfoEXT(_parentObjects, _s810->sType, nullptr, _s810->swapchainCount,
                                                             _s810->pFences);
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT: {
                const auto _s811 = reinterpret_cast<const VkSwapchainPresentModesCreateInfoEXT *>(header);
                skip |= ValidateSwapchainPresentModesCreateInfoEXT(_parentObjects, _s811->sType, nullptr, _s811->presentModeCount,
                                                                   _s811->pPresentModes);
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODE_INFO_EXT: {
                const auto _s812 = reinterpret_cast<const VkSwapchainPresentModeInfoEXT *>(header);
                skip |= ValidateSwapchainPresentModeInfoEXT(_parentObjects, _s812->sType, nullptr, _s812->swapchainCount,
                                                            _s812->pPresentModes);
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT: {
                const auto _s813 = reinterpret_cast<const VkSwapchainPresentScalingCreateInfoEXT *>(header);
                skip |= ValidateSwapchainPresentScalingCreateInfoEXT(_parentObjects, _s813->sType, nullptr, _s813->scalingBehavior,
                                                                     _s813->presentGravityX, _s813->presentGravityY);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV: {
                const auto _s814 = reinterpret_cast<const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceDeviceGeneratedCommandsPropertiesNV(
                    _parentObjects, _s814->sType, nullptr, _s814->maxGraphicsShaderGroupCount, _s814->maxIndirectSequenceCount,
                    _s814->maxIndirectCommandsTokenCount, _s814->maxIndirectCommandsStreamCount,
                    _s814->maxIndirectCommandsTokenOffset, _s814->maxIndirectCommandsStreamStride,
                    _s814->minSequencesCountBufferOffsetAlignment, _s814->minSequencesIndexBufferOffsetAlignment,
                    _s814->minIndirectCommandsBufferOffsetAlignment);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV: {
                const auto _s815 = reinterpret_cast<const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceDeviceGeneratedCommandsFeaturesNV(_parentObjects, _s815->sType, nullptr,
                                                                                _s815->deviceGeneratedCommands);
                break;
            }
            case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV: {
                const auto _s816 = reinterpret_cast<const VkGraphicsPipelineShaderGroupsCreateInfoNV *>(header);
                skip |= ValidateGraphicsPipelineShaderGroupsCreateInfoNV(_parentObjects, _s816->sType, nullptr, _s816->groupCount,
                                                                         _s816->pGroups, _s816->pipelineCount, _s816->pPipelines);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV: {
                const auto _s817 = reinterpret_cast<const VkPhysicalDeviceInheritedViewportScissorFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceInheritedViewportScissorFeaturesNV(_parentObjects, _s817->sType, nullptr,
                                                                                 _s817->inheritedViewportScissor2D);
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV: {
                const auto _s818 = reinterpret_cast<const VkCommandBufferInheritanceViewportScissorInfoNV *>(header);
                skip |= ValidateCommandBufferInheritanceViewportScissorInfoNV(_parentObjects, _s818->sType, nullptr,
                                                                              _s818->viewportScissor2D, _s818->viewportDepthCount,
                                                                              _s818->pViewportDepths);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT: {
                const auto _s819 = reinterpret_cast<const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceTexelBufferAlignmentFeaturesEXT(_parentObjects, _s819->sType, nullptr,
                                                                              _s819->texelBufferAlignment);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM: {
                const auto _s820 = reinterpret_cast<const VkRenderPassTransformBeginInfoQCOM *>(header);
                skip |= ValidateRenderPassTransformBeginInfoQCOM(_parentObjects, _s820->sType, nullptr, _s820->transform);
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM: {
                const auto _s821 = reinterpret_cast<const VkCommandBufferInheritanceRenderPassTransformInfoQCOM *>(header);
                skip |= ValidateCommandBufferInheritanceRenderPassTransformInfoQCOM(_parentObjects, _s821->sType, nullptr,
                                                                                    _s821->transform, _s821->renderArea);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT: {
                const auto _s822 = reinterpret_cast<const VkPhysicalDeviceDepthBiasControlFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceDepthBiasControlFeaturesEXT(
                    _parentObjects, _s822->sType, nullptr, _s822->depthBiasControl,
                    _s822->leastRepresentableValueForceUnormRepresentation, _s822->floatRepresentation, _s822->depthBiasExact);
                break;
            }
            case VK_STRUCTURE_TYPE_DEPTH_BIAS_REPRESENTATION_INFO_EXT: {
                const auto _s823 = reinterpret_cast<const VkDepthBiasRepresentationInfoEXT *>(header);
                skip |= ValidateDepthBiasRepresentationInfoEXT(_parentObjects, _s823->sType, nullptr,
                                                               _s823->depthBiasRepresentation, _s823->depthBiasExact);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT: {
                const auto _s824 = reinterpret_cast<const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceDeviceMemoryReportFeaturesEXT(_parentObjects, _s824->sType, nullptr,
                                                                            _s824->deviceMemoryReport);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT: {
                const auto _s825 = reinterpret_cast<const VkDeviceDeviceMemoryReportCreateInfoEXT *>(header);
                skip |= ValidateDeviceDeviceMemoryReportCreateInfoEXT(_parentObjects, _s825->sType, nullptr, _s825->flags,
                                                                      _s825->pfnUserCallback, _s825->pUserData);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT: {
                const auto _s826 = reinterpret_cast<const VkPhysicalDeviceRobustness2FeaturesEXT *>(header);
                skip |=
                    ValidatePhysicalDeviceRobustness2FeaturesEXT(_parentObjects, _s826->sType, nullptr, _s826->robustBufferAccess2,
                                                                 _s826->robustImageAccess2, _s826->nullDescriptor);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT: {
                const auto _s827 = reinterpret_cast<const VkPhysicalDeviceRobustness2PropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceRobustness2PropertiesEXT(_parentObjects, _s827->sType, nullptr,
                                                                       _s827->robustStorageBufferAccessSizeAlignment,
                                                                       _s827->robustUniformBufferAccessSizeAlignment);
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT: {
                const auto _s828 = reinterpret_cast<const VkSamplerCustomBorderColorCreateInfoEXT *>(header);
                skip |= ValidateSamplerCustomBorderColorCreateInfoEXT(_parentObjects, _s828->sType, nullptr,
                                                                      _s828->customBorderColor, _s828->format);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT: {
                const auto _s829 = reinterpret_cast<const VkPhysicalDeviceCustomBorderColorPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceCustomBorderColorPropertiesEXT(_parentObjects, _s829->sType, nullptr,
                                                                             _s829->maxCustomBorderColorSamplers);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT: {
                const auto _s830 = reinterpret_cast<const VkPhysicalDeviceCustomBorderColorFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceCustomBorderColorFeaturesEXT(
                    _parentObjects, _s830->sType, nullptr, _s830->customBorderColors, _s830->customBorderColorWithoutFormat);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV: {
                const auto _s831 = reinterpret_cast<const VkPhysicalDevicePresentBarrierFeaturesNV *>(header);
                skip |=
                    ValidatePhysicalDevicePresentBarrierFeaturesNV(_parentObjects, _s831->sType, nullptr, _s831->presentBarrier);
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_PRESENT_BARRIER_NV: {
                const auto _s832 = reinterpret_cast<const VkSurfaceCapabilitiesPresentBarrierNV *>(header);
                skip |= ValidateSurfaceCapabilitiesPresentBarrierNV(_parentObjects, _s832->sType, nullptr,
                                                                    _s832->presentBarrierSupported);
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV: {
                const auto _s833 = reinterpret_cast<const VkSwapchainPresentBarrierCreateInfoNV *>(header);
                skip |=
                    ValidateSwapchainPresentBarrierCreateInfoNV(_parentObjects, _s833->sType, nullptr, _s833->presentBarrierEnable);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV: {
                const auto _s834 = reinterpret_cast<const VkPhysicalDeviceDiagnosticsConfigFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceDiagnosticsConfigFeaturesNV(_parentObjects, _s834->sType, nullptr,
                                                                          _s834->diagnosticsConfig);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV: {
                const auto _s835 = reinterpret_cast<const VkDeviceDiagnosticsConfigCreateInfoNV *>(header);
                skip |= ValidateDeviceDiagnosticsConfigCreateInfoNV(_parentObjects, _s835->sType, nullptr, _s835->flags);
                break;
            }
            case VK_STRUCTURE_TYPE_QUERY_LOW_LATENCY_SUPPORT_NV: {
                const auto _s836 = reinterpret_cast<const VkQueryLowLatencySupportNV *>(header);
                skip |= ValidateQueryLowLatencySupportNV(_parentObjects, _s836->sType, nullptr, _s836->pQueriedLowLatencyData);
                break;
            }
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECT_CREATE_INFO_EXT: {
                const auto _s837 = reinterpret_cast<const VkExportMetalObjectCreateInfoEXT *>(header);
                skip |= ValidateExportMetalObjectCreateInfoEXT(_parentObjects, _s837->sType, nullptr, _s837->exportObjectType);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_EXPORT_METAL_DEVICE_INFO_EXT: {
                const auto _s838 = reinterpret_cast<const VkExportMetalDeviceInfoEXT *>(header);
                skip |= ValidateExportMetalDeviceInfoEXT(_parentObjects, _s838->sType, nullptr, _s838->mtlDevice);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_EXPORT_METAL_COMMAND_QUEUE_INFO_EXT: {
                const auto _s839 = reinterpret_cast<const VkExportMetalCommandQueueInfoEXT *>(header);
                skip |= ValidateExportMetalCommandQueueInfoEXT(_parentObjects, _s839->sType, nullptr, _s839->queue,
                                                               _s839->mtlCommandQueue);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_EXPORT_METAL_BUFFER_INFO_EXT: {
                const auto _s840 = reinterpret_cast<const VkExportMetalBufferInfoEXT *>(header);
                skip |= ValidateExportMetalBufferInfoEXT(_parentObjects, _s840->sType, nullptr, _s840->memory, _s840->mtlBuffer);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_IMPORT_METAL_BUFFER_INFO_EXT: {
                const auto _s841 = reinterpret_cast<const VkImportMetalBufferInfoEXT *>(header);
                skip |= ValidateImportMetalBufferInfoEXT(_parentObjects, _s841->sType, nullptr, _s841->mtlBuffer);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_EXPORT_METAL_TEXTURE_INFO_EXT: {
                const auto _s842 = reinterpret_cast<const VkExportMetalTextureInfoEXT *>(header);
                skip |= ValidateExportMetalTextureInfoEXT(_parentObjects, _s842->sType, nullptr, _s842->image, _s842->imageView,
                                                          _s842->bufferView, _s842->plane, _s842->mtlTexture);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_IMPORT_METAL_TEXTURE_INFO_EXT: {
                const auto _s843 = reinterpret_cast<const VkImportMetalTextureInfoEXT *>(header);
                skip |= ValidateImportMetalTextureInfoEXT(_parentObjects, _s843->sType, nullptr, _s843->plane, _s843->mtlTexture);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_EXPORT_METAL_IO_SURFACE_INFO_EXT: {
                const auto _s844 = reinterpret_cast<const VkExportMetalIOSurfaceInfoEXT *>(header);
                skip |= ValidateExportMetalIOSurfaceInfoEXT(_parentObjects, _s844->sType, nullptr, _s844->image, _s844->ioSurface);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_IMPORT_METAL_IO_SURFACE_INFO_EXT: {
                const auto _s845 = reinterpret_cast<const VkImportMetalIOSurfaceInfoEXT *>(header);
                skip |= ValidateImportMetalIOSurfaceInfoEXT(_parentObjects, _s845->sType, nullptr, _s845->ioSurface);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_EXPORT_METAL_SHARED_EVENT_INFO_EXT: {
                const auto _s846 = reinterpret_cast<const VkExportMetalSharedEventInfoEXT *>(header);
                skip |= ValidateExportMetalSharedEventInfoEXT(_parentObjects, _s846->sType, nullptr, _s846->semaphore, _s846->event,
                                                              _s846->mtlSharedEvent);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_IMPORT_METAL_SHARED_EVENT_INFO_EXT: {
                const auto _s847 = reinterpret_cast<const VkImportMetalSharedEventInfoEXT *>(header);
                skip |= ValidateImportMetalSharedEventInfoEXT(_parentObjects, _s847->sType, nullptr, _s847->mtlSharedEvent);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT: {
                const auto _s848 = reinterpret_cast<const VkPhysicalDeviceDescriptorBufferPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceDescriptorBufferPropertiesEXT(
                    _parentObjects, _s848->sType, nullptr, _s848->combinedImageSamplerDescriptorSingleArray,
                    _s848->bufferlessPushDescriptors, _s848->allowSamplerImageViewPostSubmitCreation,
                    _s848->descriptorBufferOffsetAlignment, _s848->maxDescriptorBufferBindings,
                    _s848->maxResourceDescriptorBufferBindings, _s848->maxSamplerDescriptorBufferBindings,
                    _s848->maxEmbeddedImmutableSamplerBindings, _s848->maxEmbeddedImmutableSamplers,
                    _s848->bufferCaptureReplayDescriptorDataSize, _s848->imageCaptureReplayDescriptorDataSize,
                    _s848->imageViewCaptureReplayDescriptorDataSize, _s848->samplerCaptureReplayDescriptorDataSize,
                    _s848->accelerationStructureCaptureReplayDescriptorDataSize, _s848->samplerDescriptorSize,
                    _s848->combinedImageSamplerDescriptorSize, _s848->sampledImageDescriptorSize, _s848->storageImageDescriptorSize,
                    _s848->uniformTexelBufferDescriptorSize, _s848->robustUniformTexelBufferDescriptorSize,
                    _s848->storageTexelBufferDescriptorSize, _s848->robustStorageTexelBufferDescriptorSize,
                    _s848->uniformBufferDescriptorSize, _s848->robustUniformBufferDescriptorSize,
                    _s848->storageBufferDescriptorSize, _s848->robustStorageBufferDescriptorSize,
                    _s848->inputAttachmentDescriptorSize, _s848->accelerationStructureDescriptorSize,
                    _s848->maxSamplerDescriptorBufferRange, _s848->maxResourceDescriptorBufferRange,
                    _s848->samplerDescriptorBufferAddressSpaceSize, _s848->resourceDescriptorBufferAddressSpaceSize,
                    _s848->descriptorBufferAddressSpaceSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT: {
                const auto _s849 = reinterpret_cast<const VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(
                    _parentObjects, _s849->sType, nullptr, _s849->combinedImageSamplerDensityMapDescriptorSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT: {
                const auto _s850 = reinterpret_cast<const VkPhysicalDeviceDescriptorBufferFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceDescriptorBufferFeaturesEXT(
                    _parentObjects, _s850->sType, nullptr, _s850->descriptorBuffer, _s850->descriptorBufferCaptureReplay,
                    _s850->descriptorBufferImageLayoutIgnored, _s850->descriptorBufferPushDescriptors);
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT: {
                const auto _s851 = reinterpret_cast<const VkDescriptorBufferBindingPushDescriptorBufferHandleEXT *>(header);
                skip |= ValidateDescriptorBufferBindingPushDescriptorBufferHandleEXT(_parentObjects, _s851->sType, nullptr,
                                                                                     _s851->buffer);
                break;
            }
            case VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT: {
                const auto _s852 = reinterpret_cast<const VkOpaqueCaptureDescriptorDataCreateInfoEXT *>(header);
                skip |= ValidateOpaqueCaptureDescriptorDataCreateInfoEXT(_parentObjects, _s852->sType, nullptr,
                                                                         _s852->opaqueCaptureDescriptorData);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT: {
                const auto _s853 = reinterpret_cast<const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(_parentObjects, _s853->sType, nullptr,
                                                                                 _s853->graphicsPipelineLibrary);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT: {
                const auto _s854 = reinterpret_cast<const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(
                    _parentObjects, _s854->sType, nullptr, _s854->graphicsPipelineLibraryFastLinking,
                    _s854->graphicsPipelineLibraryIndependentInterpolationDecoration);
                break;
            }
            case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT: {
                const auto _s855 = reinterpret_cast<const VkGraphicsPipelineLibraryCreateInfoEXT *>(header);
                skip |= ValidateGraphicsPipelineLibraryCreateInfoEXT(_parentObjects, _s855->sType, nullptr, _s855->flags);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD: {
                const auto _s856 = reinterpret_cast<const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *>(header);
                skip |= ValidatePhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(_parentObjects, _s856->sType, nullptr,
                                                                                         _s856->shaderEarlyAndLateFragmentTests);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV: {
                const auto _s857 = reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceFragmentShadingRateEnumsFeaturesNV(
                    _parentObjects, _s857->sType, nullptr, _s857->fragmentShadingRateEnums, _s857->supersampleFragmentShadingRates,
                    _s857->noInvocationFragmentShadingRates);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV: {
                const auto _s858 = reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceFragmentShadingRateEnumsPropertiesNV(_parentObjects, _s858->sType, nullptr,
                                                                                   _s858->maxFragmentShadingRateInvocationCount);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV: {
                const auto _s859 = reinterpret_cast<const VkPipelineFragmentShadingRateEnumStateCreateInfoNV *>(header);
                skip |= ValidatePipelineFragmentShadingRateEnumStateCreateInfoNV(
                    _parentObjects, _s859->sType, nullptr, _s859->shadingRateType, _s859->shadingRate, _s859->combinerOps);
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV: {
                const auto _s860 = reinterpret_cast<const VkAccelerationStructureGeometryMotionTrianglesDataNV *>(header);
                skip |= ValidateAccelerationStructureGeometryMotionTrianglesDataNV(_parentObjects, _s860->sType, nullptr,
                                                                                   _s860->vertexData);
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MOTION_INFO_NV: {
                const auto _s861 = reinterpret_cast<const VkAccelerationStructureMotionInfoNV *>(header);
                skip |= ValidateAccelerationStructureMotionInfoNV(_parentObjects, _s861->sType, nullptr, _s861->maxInstances,
                                                                  _s861->flags);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV: {
                const auto _s862 = reinterpret_cast<const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceRayTracingMotionBlurFeaturesNV(_parentObjects, _s862->sType, nullptr,
                                                                             _s862->rayTracingMotionBlur,
                                                                             _s862->rayTracingMotionBlurPipelineTraceRaysIndirect);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT: {
                const auto _s863 = reinterpret_cast<const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(_parentObjects, _s863->sType, nullptr,
                                                                               _s863->ycbcr2plane444Formats);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT: {
                const auto _s864 = reinterpret_cast<const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceFragmentDensityMap2FeaturesEXT(_parentObjects, _s864->sType, nullptr,
                                                                             _s864->fragmentDensityMapDeferred);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT: {
                const auto _s865 = reinterpret_cast<const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceFragmentDensityMap2PropertiesEXT(
                    _parentObjects, _s865->sType, nullptr, _s865->subsampledLoads, _s865->subsampledCoarseReconstructionEarlyAccess,
                    _s865->maxSubsampledArrayLayers, _s865->maxDescriptorSetSubsampledSamplers);
                break;
            }
            case VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM: {
                const auto _s866 = reinterpret_cast<const VkCopyCommandTransformInfoQCOM *>(header);
                skip |= ValidateCopyCommandTransformInfoQCOM(_parentObjects, _s866->sType, nullptr, _s866->transform);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT: {
                const auto _s867 = reinterpret_cast<const VkPhysicalDeviceImageCompressionControlFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceImageCompressionControlFeaturesEXT(_parentObjects, _s867->sType, nullptr,
                                                                                 _s867->imageCompressionControl);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_CONTROL_EXT: {
                const auto _s868 = reinterpret_cast<const VkImageCompressionControlEXT *>(header);
                skip |= ValidateImageCompressionControlEXT(_parentObjects, _s868->sType, nullptr, _s868->flags,
                                                           _s868->compressionControlPlaneCount, _s868->pFixedRateFlags);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_PROPERTIES_EXT: {
                const auto _s869 = reinterpret_cast<const VkImageCompressionPropertiesEXT *>(header);
                skip |= ValidateImageCompressionPropertiesEXT(_parentObjects, _s869->sType, nullptr, _s869->imageCompressionFlags,
                                                              _s869->imageCompressionFixedRateFlags);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT: {
                const auto _s870 = reinterpret_cast<const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(_parentObjects, _s870->sType, nullptr,
                                                                                      _s870->attachmentFeedbackLoopLayout);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT: {
                const auto _s871 = reinterpret_cast<const VkPhysicalDevice4444FormatsFeaturesEXT *>(header);
                skip |= ValidatePhysicalDevice4444FormatsFeaturesEXT(_parentObjects, _s871->sType, nullptr, _s871->formatA4R4G4B4,
                                                                     _s871->formatA4B4G4R4);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT: {
                const auto _s872 = reinterpret_cast<const VkPhysicalDeviceFaultFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceFaultFeaturesEXT(_parentObjects, _s872->sType, nullptr, _s872->deviceFault,
                                                               _s872->deviceFaultVendorBinary);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT: {
                const auto _s873 = reinterpret_cast<const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(
                    _parentObjects, _s873->sType, nullptr, _s873->rasterizationOrderColorAttachmentAccess,
                    _s873->rasterizationOrderDepthAttachmentAccess, _s873->rasterizationOrderStencilAttachmentAccess);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT: {
                const auto _s874 = reinterpret_cast<const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceRGBA10X6FormatsFeaturesEXT(_parentObjects, _s874->sType, nullptr,
                                                                         _s874->formatRgba10x6WithoutYCbCrSampler);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT: {
                const auto _s875 = reinterpret_cast<const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceMutableDescriptorTypeFeaturesEXT(_parentObjects, _s875->sType, nullptr,
                                                                               _s875->mutableDescriptorType);
                break;
            }
            case VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT: {
                const auto _s876 = reinterpret_cast<const VkMutableDescriptorTypeCreateInfoEXT *>(header);
                skip |= ValidateMutableDescriptorTypeCreateInfoEXT(_parentObjects, _s876->sType, nullptr,
                                                                   _s876->mutableDescriptorTypeListCount,
                                                                   _s876->pMutableDescriptorTypeLists);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT: {
                const auto _s877 = reinterpret_cast<const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceVertexInputDynamicStateFeaturesEXT(_parentObjects, _s877->sType, nullptr,
                                                                                 _s877->vertexInputDynamicState);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT: {
                const auto _s878 = reinterpret_cast<const VkPhysicalDeviceDrmPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceDrmPropertiesEXT(_parentObjects, _s878->sType, nullptr, _s878->hasPrimary,
                                                               _s878->hasRender, _s878->primaryMajor, _s878->primaryMinor,
                                                               _s878->renderMajor, _s878->renderMinor);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT: {
                const auto _s879 = reinterpret_cast<const VkPhysicalDeviceAddressBindingReportFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceAddressBindingReportFeaturesEXT(_parentObjects, _s879->sType, nullptr,
                                                                              _s879->reportAddressBinding);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT: {
                const auto _s880 = reinterpret_cast<const VkDeviceAddressBindingCallbackDataEXT *>(header);
                skip |= ValidateDeviceAddressBindingCallbackDataEXT(_parentObjects, _s880->sType, nullptr, _s880->flags,
                                                                    _s880->baseAddress, _s880->size, _s880->bindingType);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT: {
                const auto _s881 = reinterpret_cast<const VkPhysicalDeviceDepthClipControlFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceDepthClipControlFeaturesEXT(_parentObjects, _s881->sType, nullptr,
                                                                          _s881->depthClipControl);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT: {
                const auto _s882 = reinterpret_cast<const VkPipelineViewportDepthClipControlCreateInfoEXT *>(header);
                skip |= ValidatePipelineViewportDepthClipControlCreateInfoEXT(_parentObjects, _s882->sType, nullptr,
                                                                              _s882->negativeOneToOne);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT: {
                const auto _s883 = reinterpret_cast<const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *>(header);
                skip |= ValidatePhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(_parentObjects, _s883->sType, nullptr,
                                                                                      _s883->primitiveTopologyListRestart,
                                                                                      _s883->primitiveTopologyPatchListRestart);
                break;
            }
#ifdef VK_USE_PLATFORM_FUCHSIA
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_ZIRCON_HANDLE_INFO_FUCHSIA: {
                const auto _s884 = reinterpret_cast<const VkImportMemoryZirconHandleInfoFUCHSIA *>(header);
                skip |= ValidateImportMemoryZirconHandleInfoFUCHSIA(_parentObjects, _s884->sType, nullptr, _s884->handleType,
                                                                    _s884->handle);
                break;
            }
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_BUFFER_COLLECTION_FUCHSIA: {
                const auto _s885 = reinterpret_cast<const VkImportMemoryBufferCollectionFUCHSIA *>(header);
                skip |= ValidateImportMemoryBufferCollectionFUCHSIA(_parentObjects, _s885->sType, nullptr, _s885->collection,
                                                                    _s885->index);
                break;
            }
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
            case VK_STRUCTURE_TYPE_BUFFER_COLLECTION_IMAGE_CREATE_INFO_FUCHSIA: {
                const auto _s886 = reinterpret_cast<const VkBufferCollectionImageCreateInfoFUCHSIA *>(header);
                skip |= ValidateBufferCollectionImageCreateInfoFUCHSIA(_parentObjects, _s886->sType, nullptr, _s886->collection,
                                                                       _s886->index);
                break;
            }
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
            case VK_STRUCTURE_TYPE_BUFFER_COLLECTION_BUFFER_CREATE_INFO_FUCHSIA: {
                const auto _s887 = reinterpret_cast<const VkBufferCollectionBufferCreateInfoFUCHSIA *>(header);
                skip |= ValidateBufferCollectionBufferCreateInfoFUCHSIA(_parentObjects, _s887->sType, nullptr, _s887->collection,
                                                                        _s887->index);
                break;
            }
#endif  // VK_USE_PLATFORM_FUCHSIA
            case VK_STRUCTURE_TYPE_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI: {
                const auto _s888 = reinterpret_cast<const VkSubpassShadingPipelineCreateInfoHUAWEI *>(header);
                skip |= ValidateSubpassShadingPipelineCreateInfoHUAWEI(_parentObjects, _s888->sType, nullptr, _s888->renderPass,
                                                                       _s888->subpass);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI: {
                const auto _s889 = reinterpret_cast<const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *>(header);
                skip |= ValidatePhysicalDeviceSubpassShadingFeaturesHUAWEI(_parentObjects, _s889->sType, nullptr,
                                                                           _s889->subpassShading);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI: {
                const auto _s890 = reinterpret_cast<const VkPhysicalDeviceSubpassShadingPropertiesHUAWEI *>(header);
                skip |= ValidatePhysicalDeviceSubpassShadingPropertiesHUAWEI(_parentObjects, _s890->sType, nullptr,
                                                                             _s890->maxSubpassShadingWorkgroupSizeAspectRatio);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI: {
                const auto _s891 = reinterpret_cast<const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *>(header);
                skip |= ValidatePhysicalDeviceInvocationMaskFeaturesHUAWEI(_parentObjects, _s891->sType, nullptr,
                                                                           _s891->invocationMask);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV: {
                const auto _s892 = reinterpret_cast<const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceExternalMemoryRDMAFeaturesNV(_parentObjects, _s892->sType, nullptr,
                                                                           _s892->externalMemoryRDMA);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT: {
                const auto _s893 = reinterpret_cast<const VkPhysicalDevicePipelinePropertiesFeaturesEXT *>(header);
                skip |= ValidatePhysicalDevicePipelinePropertiesFeaturesEXT(_parentObjects, _s893->sType, nullptr,
                                                                            _s893->pipelinePropertiesIdentifier);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT: {
                const auto _s894 = reinterpret_cast<const VkPhysicalDeviceFrameBoundaryFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceFrameBoundaryFeaturesEXT(_parentObjects, _s894->sType, nullptr, _s894->frameBoundary);
                break;
            }
            case VK_STRUCTURE_TYPE_FRAME_BOUNDARY_EXT: {
                const auto _s895 = reinterpret_cast<const VkFrameBoundaryEXT *>(header);
                skip |= ValidateFrameBoundaryEXT(_parentObjects, _s895->sType, nullptr, _s895->flags, _s895->frameID,
                                                 _s895->imageCount, _s895->pImages, _s895->bufferCount, _s895->pBuffers,
                                                 _s895->tagName, _s895->tagSize, _s895->pTag);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT: {
                const auto _s896 = reinterpret_cast<const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(
                    _parentObjects, _s896->sType, nullptr, _s896->multisampledRenderToSingleSampled);
                break;
            }
            case VK_STRUCTURE_TYPE_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT: {
                const auto _s897 = reinterpret_cast<const VkSubpassResolvePerformanceQueryEXT *>(header);
                skip |= ValidateSubpassResolvePerformanceQueryEXT(_parentObjects, _s897->sType, nullptr, _s897->optimal);
                break;
            }
            case VK_STRUCTURE_TYPE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT: {
                const auto _s898 = reinterpret_cast<const VkMultisampledRenderToSingleSampledInfoEXT *>(header);
                skip |= ValidateMultisampledRenderToSingleSampledInfoEXT(_parentObjects, _s898->sType, nullptr,
                                                                         _s898->multisampledRenderToSingleSampledEnable,
                                                                         _s898->rasterizationSamples);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT: {
                const auto _s899 = reinterpret_cast<const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceExtendedDynamicState2FeaturesEXT(
                    _parentObjects, _s899->sType, nullptr, _s899->extendedDynamicState2, _s899->extendedDynamicState2LogicOp,
                    _s899->extendedDynamicState2PatchControlPoints);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT: {
                const auto _s900 = reinterpret_cast<const VkPhysicalDeviceColorWriteEnableFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceColorWriteEnableFeaturesEXT(_parentObjects, _s900->sType, nullptr,
                                                                          _s900->colorWriteEnable);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT: {
                const auto _s901 = reinterpret_cast<const VkPipelineColorWriteCreateInfoEXT *>(header);
                skip |= ValidatePipelineColorWriteCreateInfoEXT(_parentObjects, _s901->sType, nullptr, _s901->attachmentCount,
                                                                _s901->pColorWriteEnables);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT: {
                const auto _s902 = reinterpret_cast<const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *>(header);
                skip |= ValidatePhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(
                    _parentObjects, _s902->sType, nullptr, _s902->primitivesGeneratedQuery,
                    _s902->primitivesGeneratedQueryWithRasterizerDiscard, _s902->primitivesGeneratedQueryWithNonZeroStreams);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT: {
                const auto _s903 = reinterpret_cast<const VkPhysicalDeviceImageViewMinLodFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceImageViewMinLodFeaturesEXT(_parentObjects, _s903->sType, nullptr, _s903->minLod);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT: {
                const auto _s904 = reinterpret_cast<const VkImageViewMinLodCreateInfoEXT *>(header);
                skip |= ValidateImageViewMinLodCreateInfoEXT(_parentObjects, _s904->sType, nullptr, _s904->minLod);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT: {
                const auto _s905 = reinterpret_cast<const VkPhysicalDeviceMultiDrawFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceMultiDrawFeaturesEXT(_parentObjects, _s905->sType, nullptr, _s905->multiDraw);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT: {
                const auto _s906 = reinterpret_cast<const VkPhysicalDeviceMultiDrawPropertiesEXT *>(header);
                skip |=
                    ValidatePhysicalDeviceMultiDrawPropertiesEXT(_parentObjects, _s906->sType, nullptr, _s906->maxMultiDrawCount);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT: {
                const auto _s907 = reinterpret_cast<const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceImage2DViewOf3DFeaturesEXT(_parentObjects, _s907->sType, nullptr,
                                                                         _s907->image2DViewOf3D, _s907->sampler2DViewOf3D);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT: {
                const auto _s908 = reinterpret_cast<const VkPhysicalDeviceShaderTileImageFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceShaderTileImageFeaturesEXT(
                    _parentObjects, _s908->sType, nullptr, _s908->shaderTileImageColorReadAccess,
                    _s908->shaderTileImageDepthReadAccess, _s908->shaderTileImageStencilReadAccess);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT: {
                const auto _s909 = reinterpret_cast<const VkPhysicalDeviceShaderTileImagePropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceShaderTileImagePropertiesEXT(
                    _parentObjects, _s909->sType, nullptr, _s909->shaderTileImageCoherentReadAccelerated,
                    _s909->shaderTileImageReadSampleFromPixelRateInvocation, _s909->shaderTileImageReadFromHelperInvocation);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT: {
                const auto _s910 = reinterpret_cast<const VkPhysicalDeviceOpacityMicromapFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceOpacityMicromapFeaturesEXT(_parentObjects, _s910->sType, nullptr, _s910->micromap,
                                                                         _s910->micromapCaptureReplay, _s910->micromapHostCommands);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT: {
                const auto _s911 = reinterpret_cast<const VkPhysicalDeviceOpacityMicromapPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceOpacityMicromapPropertiesEXT(_parentObjects, _s911->sType, nullptr,
                                                                           _s911->maxOpacity2StateSubdivisionLevel,
                                                                           _s911->maxOpacity4StateSubdivisionLevel);
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT: {
                const auto _s912 = reinterpret_cast<const VkAccelerationStructureTrianglesOpacityMicromapEXT *>(header);
                skip |= ValidateAccelerationStructureTrianglesOpacityMicromapEXT(
                    _parentObjects, _s912->sType, nullptr, _s912->indexType, _s912->indexBuffer, _s912->indexStride,
                    _s912->baseTriangle, _s912->usageCountsCount, _s912->pUsageCounts, _s912->ppUsageCounts, _s912->micromap);
                break;
            }
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_FEATURES_NV: {
                const auto _s913 = reinterpret_cast<const VkPhysicalDeviceDisplacementMicromapFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceDisplacementMicromapFeaturesNV(_parentObjects, _s913->sType, nullptr,
                                                                             _s913->displacementMicromap);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_PROPERTIES_NV: {
                const auto _s914 = reinterpret_cast<const VkPhysicalDeviceDisplacementMicromapPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceDisplacementMicromapPropertiesNV(_parentObjects, _s914->sType, nullptr,
                                                                               _s914->maxDisplacementMicromapSubdivisionLevel);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_DISPLACEMENT_MICROMAP_NV: {
                const auto _s915 = reinterpret_cast<const VkAccelerationStructureTrianglesDisplacementMicromapNV *>(header);
                skip |= ValidateAccelerationStructureTrianglesDisplacementMicromapNV(
                    _parentObjects, _s915->sType, nullptr, _s915->displacementBiasAndScaleFormat, _s915->displacementVectorFormat,
                    _s915->displacementBiasAndScaleBuffer, _s915->displacementBiasAndScaleStride, _s915->displacementVectorBuffer,
                    _s915->displacementVectorStride, _s915->displacedMicromapPrimitiveFlags,
                    _s915->displacedMicromapPrimitiveFlagsStride, _s915->indexType, _s915->indexBuffer, _s915->indexStride,
                    _s915->baseTriangle, _s915->usageCountsCount, _s915->pUsageCounts, _s915->ppUsageCounts, _s915->micromap);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI: {
                const auto _s916 = reinterpret_cast<const VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI *>(header);
                skip |= ValidatePhysicalDeviceClusterCullingShaderFeaturesHUAWEI(
                    _parentObjects, _s916->sType, nullptr, _s916->clustercullingShader, _s916->multiviewClusterCullingShader);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI: {
                const auto _s917 = reinterpret_cast<const VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI *>(header);
                skip |= ValidatePhysicalDeviceClusterCullingShaderPropertiesHUAWEI(
                    _parentObjects, _s917->sType, nullptr, _s917->maxWorkGroupCount, _s917->maxWorkGroupSize,
                    _s917->maxOutputClusterCount, _s917->indirectBufferOffsetAlignment);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT: {
                const auto _s918 = reinterpret_cast<const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceBorderColorSwizzleFeaturesEXT(
                    _parentObjects, _s918->sType, nullptr, _s918->borderColorSwizzle, _s918->borderColorSwizzleFromImage);
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT: {
                const auto _s919 = reinterpret_cast<const VkSamplerBorderColorComponentMappingCreateInfoEXT *>(header);
                skip |= ValidateSamplerBorderColorComponentMappingCreateInfoEXT(_parentObjects, _s919->sType, nullptr,
                                                                                _s919->components, _s919->srgb);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT: {
                const auto _s920 = reinterpret_cast<const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *>(header);
                skip |= ValidatePhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(_parentObjects, _s920->sType, nullptr,
                                                                                   _s920->pageableDeviceLocalMemory);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM: {
                const auto _s921 = reinterpret_cast<const VkPhysicalDeviceShaderCorePropertiesARM *>(header);
                skip |= ValidatePhysicalDeviceShaderCorePropertiesARM(_parentObjects, _s921->sType, nullptr, _s921->pixelRate,
                                                                      _s921->texelRate, _s921->fmaRate);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT: {
                const auto _s922 = reinterpret_cast<const VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceImageSlicedViewOf3DFeaturesEXT(_parentObjects, _s922->sType, nullptr,
                                                                             _s922->imageSlicedViewOf3D);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_SLICED_CREATE_INFO_EXT: {
                const auto _s923 = reinterpret_cast<const VkImageViewSlicedCreateInfoEXT *>(header);
                skip |= ValidateImageViewSlicedCreateInfoEXT(_parentObjects, _s923->sType, nullptr, _s923->sliceOffset,
                                                             _s923->sliceCount);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE: {
                const auto _s924 = reinterpret_cast<const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *>(header);
                skip |= ValidatePhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(_parentObjects, _s924->sType, nullptr,
                                                                                    _s924->descriptorSetHostMapping);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT: {
                const auto _s925 = reinterpret_cast<const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceDepthClampZeroOneFeaturesEXT(_parentObjects, _s925->sType, nullptr,
                                                                           _s925->depthClampZeroOne);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT: {
                const auto _s926 = reinterpret_cast<const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceNonSeamlessCubeMapFeaturesEXT(_parentObjects, _s926->sType, nullptr,
                                                                            _s926->nonSeamlessCubeMap);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM: {
                const auto _s927 = reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *>(header);
                skip |= ValidatePhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(_parentObjects, _s927->sType, nullptr,
                                                                                   _s927->fragmentDensityMapOffset);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM: {
                const auto _s928 = reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM *>(header);
                skip |= ValidatePhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(_parentObjects, _s928->sType, nullptr,
                                                                                     _s928->fragmentDensityOffsetGranularity);
                break;
            }
            case VK_STRUCTURE_TYPE_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM: {
                const auto _s929 = reinterpret_cast<const VkSubpassFragmentDensityMapOffsetEndInfoQCOM *>(header);
                skip |= ValidateSubpassFragmentDensityMapOffsetEndInfoQCOM(
                    _parentObjects, _s929->sType, nullptr, _s929->fragmentDensityOffsetCount, _s929->pFragmentDensityOffsets);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV: {
                const auto _s930 = reinterpret_cast<const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *>(header);
                skip |=
                    ValidatePhysicalDeviceCopyMemoryIndirectFeaturesNV(_parentObjects, _s930->sType, nullptr, _s930->indirectCopy);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV: {
                const auto _s931 = reinterpret_cast<const VkPhysicalDeviceCopyMemoryIndirectPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceCopyMemoryIndirectPropertiesNV(_parentObjects, _s931->sType, nullptr,
                                                                             _s931->supportedQueues);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV: {
                const auto _s932 = reinterpret_cast<const VkPhysicalDeviceMemoryDecompressionFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceMemoryDecompressionFeaturesNV(_parentObjects, _s932->sType, nullptr,
                                                                            _s932->memoryDecompression);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV: {
                const auto _s933 = reinterpret_cast<const VkPhysicalDeviceMemoryDecompressionPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceMemoryDecompressionPropertiesNV(
                    _parentObjects, _s933->sType, nullptr, _s933->decompressionMethods, _s933->maxDecompressionIndirectCount);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV: {
                const auto _s934 = reinterpret_cast<const VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(
                    _parentObjects, _s934->sType, nullptr, _s934->deviceGeneratedCompute, _s934->deviceGeneratedComputePipelines,
                    _s934->deviceGeneratedComputeCaptureReplay);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV: {
                const auto _s935 = reinterpret_cast<const VkPhysicalDeviceLinearColorAttachmentFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceLinearColorAttachmentFeaturesNV(_parentObjects, _s935->sType, nullptr,
                                                                              _s935->linearColorAttachment);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT: {
                const auto _s936 = reinterpret_cast<const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(_parentObjects, _s936->sType, nullptr,
                                                                                          _s936->imageCompressionControlSwapchain);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM: {
                const auto _s937 = reinterpret_cast<const VkImageViewSampleWeightCreateInfoQCOM *>(header);
                skip |= ValidateImageViewSampleWeightCreateInfoQCOM(_parentObjects, _s937->sType, nullptr, _s937->filterCenter,
                                                                    _s937->filterSize, _s937->numPhases);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM: {
                const auto _s938 = reinterpret_cast<const VkPhysicalDeviceImageProcessingFeaturesQCOM *>(header);
                skip |= ValidatePhysicalDeviceImageProcessingFeaturesQCOM(_parentObjects, _s938->sType, nullptr,
                                                                          _s938->textureSampleWeighted, _s938->textureBoxFilter,
                                                                          _s938->textureBlockMatch);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM: {
                const auto _s939 = reinterpret_cast<const VkPhysicalDeviceImageProcessingPropertiesQCOM *>(header);
                skip |= ValidatePhysicalDeviceImageProcessingPropertiesQCOM(
                    _parentObjects, _s939->sType, nullptr, _s939->maxWeightFilterPhases, _s939->maxWeightFilterDimension,
                    _s939->maxBlockMatchRegion, _s939->maxBoxFilterBlockSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT: {
                const auto _s940 = reinterpret_cast<const VkPhysicalDeviceNestedCommandBufferFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceNestedCommandBufferFeaturesEXT(
                    _parentObjects, _s940->sType, nullptr, _s940->nestedCommandBuffer, _s940->nestedCommandBufferRendering,
                    _s940->nestedCommandBufferSimultaneousUse);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_PROPERTIES_EXT: {
                const auto _s941 = reinterpret_cast<const VkPhysicalDeviceNestedCommandBufferPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceNestedCommandBufferPropertiesEXT(_parentObjects, _s941->sType, nullptr,
                                                                               _s941->maxCommandBufferNestingLevel);
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT: {
                const auto _s942 = reinterpret_cast<const VkExternalMemoryAcquireUnmodifiedEXT *>(header);
                skip |= ValidateExternalMemoryAcquireUnmodifiedEXT(_parentObjects, _s942->sType, nullptr,
                                                                   _s942->acquireUnmodifiedMemory);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT: {
                const auto _s943 = reinterpret_cast<const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceExtendedDynamicState3FeaturesEXT(
                    _parentObjects, _s943->sType, nullptr, _s943->extendedDynamicState3TessellationDomainOrigin,
                    _s943->extendedDynamicState3DepthClampEnable, _s943->extendedDynamicState3PolygonMode,
                    _s943->extendedDynamicState3RasterizationSamples, _s943->extendedDynamicState3SampleMask,
                    _s943->extendedDynamicState3AlphaToCoverageEnable, _s943->extendedDynamicState3AlphaToOneEnable,
                    _s943->extendedDynamicState3LogicOpEnable, _s943->extendedDynamicState3ColorBlendEnable,
                    _s943->extendedDynamicState3ColorBlendEquation, _s943->extendedDynamicState3ColorWriteMask,
                    _s943->extendedDynamicState3RasterizationStream, _s943->extendedDynamicState3ConservativeRasterizationMode,
                    _s943->extendedDynamicState3ExtraPrimitiveOverestimationSize, _s943->extendedDynamicState3DepthClipEnable,
                    _s943->extendedDynamicState3SampleLocationsEnable, _s943->extendedDynamicState3ColorBlendAdvanced,
                    _s943->extendedDynamicState3ProvokingVertexMode, _s943->extendedDynamicState3LineRasterizationMode,
                    _s943->extendedDynamicState3LineStippleEnable, _s943->extendedDynamicState3DepthClipNegativeOneToOne,
                    _s943->extendedDynamicState3ViewportWScalingEnable, _s943->extendedDynamicState3ViewportSwizzle,
                    _s943->extendedDynamicState3CoverageToColorEnable, _s943->extendedDynamicState3CoverageToColorLocation,
                    _s943->extendedDynamicState3CoverageModulationMode, _s943->extendedDynamicState3CoverageModulationTableEnable,
                    _s943->extendedDynamicState3CoverageModulationTable, _s943->extendedDynamicState3CoverageReductionMode,
                    _s943->extendedDynamicState3RepresentativeFragmentTestEnable,
                    _s943->extendedDynamicState3ShadingRateImageEnable);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT: {
                const auto _s944 = reinterpret_cast<const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceExtendedDynamicState3PropertiesEXT(_parentObjects, _s944->sType, nullptr,
                                                                                 _s944->dynamicPrimitiveTopologyUnrestricted);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT: {
                const auto _s945 = reinterpret_cast<const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceSubpassMergeFeedbackFeaturesEXT(_parentObjects, _s945->sType, nullptr,
                                                                              _s945->subpassMergeFeedback);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_CONTROL_EXT: {
                const auto _s946 = reinterpret_cast<const VkRenderPassCreationControlEXT *>(header);
                skip |= ValidateRenderPassCreationControlEXT(_parentObjects, _s946->sType, nullptr, _s946->disallowMerging);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT: {
                const auto _s947 = reinterpret_cast<const VkRenderPassCreationFeedbackCreateInfoEXT *>(header);
                skip |= ValidateRenderPassCreationFeedbackCreateInfoEXT(_parentObjects, _s947->sType, nullptr,
                                                                        _s947->pRenderPassFeedback);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT: {
                const auto _s948 = reinterpret_cast<const VkRenderPassSubpassFeedbackCreateInfoEXT *>(header);
                skip |=
                    ValidateRenderPassSubpassFeedbackCreateInfoEXT(_parentObjects, _s948->sType, nullptr, _s948->pSubpassFeedback);
                break;
            }
            case VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_LIST_LUNARG: {
                const auto _s949 = reinterpret_cast<const VkDirectDriverLoadingListLUNARG *>(header);
                skip |= ValidateDirectDriverLoadingListLUNARG(_parentObjects, _s949->sType, nullptr, _s949->mode,
                                                              _s949->driverCount, _s949->pDrivers);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT: {
                const auto _s950 = reinterpret_cast<const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceShaderModuleIdentifierFeaturesEXT(_parentObjects, _s950->sType, nullptr,
                                                                                _s950->shaderModuleIdentifier);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT: {
                const auto _s951 = reinterpret_cast<const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceShaderModuleIdentifierPropertiesEXT(_parentObjects, _s951->sType, nullptr,
                                                                                  _s951->shaderModuleIdentifierAlgorithmUUID);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT: {
                const auto _s952 = reinterpret_cast<const VkPipelineShaderStageModuleIdentifierCreateInfoEXT *>(header);
                skip |= ValidatePipelineShaderStageModuleIdentifierCreateInfoEXT(_parentObjects, _s952->sType, nullptr,
                                                                                 _s952->identifierSize, _s952->pIdentifier);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV: {
                const auto _s953 = reinterpret_cast<const VkPhysicalDeviceOpticalFlowFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceOpticalFlowFeaturesNV(_parentObjects, _s953->sType, nullptr, _s953->opticalFlow);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV: {
                const auto _s954 = reinterpret_cast<const VkPhysicalDeviceOpticalFlowPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceOpticalFlowPropertiesNV(
                    _parentObjects, _s954->sType, nullptr, _s954->supportedOutputGridSizes, _s954->supportedHintGridSizes,
                    _s954->hintSupported, _s954->costSupported, _s954->bidirectionalFlowSupported, _s954->globalFlowSupported,
                    _s954->minWidth, _s954->minHeight, _s954->maxWidth, _s954->maxHeight, _s954->maxNumRegionsOfInterest);
                break;
            }
            case VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV: {
                const auto _s955 = reinterpret_cast<const VkOpticalFlowImageFormatInfoNV *>(header);
                skip |= ValidateOpticalFlowImageFormatInfoNV(_parentObjects, _s955->sType, nullptr, _s955->usage);
                break;
            }
            case VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV: {
                const auto _s956 = reinterpret_cast<const VkOpticalFlowSessionCreatePrivateDataInfoNV *>(header);
                skip |= ValidateOpticalFlowSessionCreatePrivateDataInfoNV(_parentObjects, _s956->sType, nullptr, _s956->id,
                                                                          _s956->size, _s956->pPrivateData);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT: {
                const auto _s957 = reinterpret_cast<const VkPhysicalDeviceLegacyDitheringFeaturesEXT *>(header);
                skip |=
                    ValidatePhysicalDeviceLegacyDitheringFeaturesEXT(_parentObjects, _s957->sType, nullptr, _s957->legacyDithering);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT: {
                const auto _s958 = reinterpret_cast<const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *>(header);
                skip |= ValidatePhysicalDevicePipelineProtectedAccessFeaturesEXT(_parentObjects, _s958->sType, nullptr,
                                                                                 _s958->pipelineProtectedAccess);
                break;
            }
#ifdef VK_USE_PLATFORM_ANDROID_KHR
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_FEATURES_ANDROID: {
                const auto _s959 = reinterpret_cast<const VkPhysicalDeviceExternalFormatResolveFeaturesANDROID *>(header);
                skip |= ValidatePhysicalDeviceExternalFormatResolveFeaturesANDROID(_parentObjects, _s959->sType, nullptr,
                                                                                   _s959->externalFormatResolve);
                break;
            }
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FORMAT_RESOLVE_PROPERTIES_ANDROID: {
                const auto _s960 = reinterpret_cast<const VkPhysicalDeviceExternalFormatResolvePropertiesANDROID *>(header);
                skip |= ValidatePhysicalDeviceExternalFormatResolvePropertiesANDROID(
                    _parentObjects, _s960->sType, nullptr, _s960->nullColorAttachmentWithExternalFormatResolve,
                    _s960->externalFormatResolveChromaOffsetX, _s960->externalFormatResolveChromaOffsetY);
                break;
            }
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
            case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_RESOLVE_PROPERTIES_ANDROID: {
                const auto _s961 = reinterpret_cast<const VkAndroidHardwareBufferFormatResolvePropertiesANDROID *>(header);
                skip |= ValidateAndroidHardwareBufferFormatResolvePropertiesANDROID(_parentObjects, _s961->sType, nullptr,
                                                                                    _s961->colorAttachmentFormat);
                break;
            }
#endif  // VK_USE_PLATFORM_ANDROID_KHR
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT: {
                const auto _s962 = reinterpret_cast<const VkPhysicalDeviceShaderObjectFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceShaderObjectFeaturesEXT(_parentObjects, _s962->sType, nullptr, _s962->shaderObject);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT: {
                const auto _s963 = reinterpret_cast<const VkPhysicalDeviceShaderObjectPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceShaderObjectPropertiesEXT(_parentObjects, _s963->sType, nullptr,
                                                                        _s963->shaderBinaryUUID, _s963->shaderBinaryVersion);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM: {
                const auto _s964 = reinterpret_cast<const VkPhysicalDeviceTilePropertiesFeaturesQCOM *>(header);
                skip |=
                    ValidatePhysicalDeviceTilePropertiesFeaturesQCOM(_parentObjects, _s964->sType, nullptr, _s964->tileProperties);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC: {
                const auto _s965 = reinterpret_cast<const VkPhysicalDeviceAmigoProfilingFeaturesSEC *>(header);
                skip |=
                    ValidatePhysicalDeviceAmigoProfilingFeaturesSEC(_parentObjects, _s965->sType, nullptr, _s965->amigoProfiling);
                break;
            }
            case VK_STRUCTURE_TYPE_AMIGO_PROFILING_SUBMIT_INFO_SEC: {
                const auto _s966 = reinterpret_cast<const VkAmigoProfilingSubmitInfoSEC *>(header);
                skip |= ValidateAmigoProfilingSubmitInfoSEC(_parentObjects, _s966->sType, nullptr, _s966->firstDrawTimestamp,
                                                            _s966->swapBufferTimestamp);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM: {
                const auto _s967 = reinterpret_cast<const VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *>(header);
                skip |= ValidatePhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(_parentObjects, _s967->sType, nullptr,
                                                                                    _s967->multiviewPerViewViewports);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV: {
                const auto _s968 = reinterpret_cast<const VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceRayTracingInvocationReorderPropertiesNV(
                    _parentObjects, _s968->sType, nullptr, _s968->rayTracingInvocationReorderReorderingHint);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV: {
                const auto _s969 = reinterpret_cast<const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceRayTracingInvocationReorderFeaturesNV(_parentObjects, _s969->sType, nullptr,
                                                                                    _s969->rayTracingInvocationReorder);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV: {
                const auto _s970 = reinterpret_cast<const VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceExtendedSparseAddressSpaceFeaturesNV(_parentObjects, _s970->sType, nullptr,
                                                                                   _s970->extendedSparseAddressSpace);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_PROPERTIES_NV: {
                const auto _s971 = reinterpret_cast<const VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceExtendedSparseAddressSpacePropertiesNV(
                    _parentObjects, _s971->sType, nullptr, _s971->extendedSparseAddressSpaceSize,
                    _s971->extendedSparseImageUsageFlags, _s971->extendedSparseBufferUsageFlags);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM: {
                const auto _s972 = reinterpret_cast<const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *>(header);
                skip |= ValidatePhysicalDeviceShaderCoreBuiltinsFeaturesARM(_parentObjects, _s972->sType, nullptr,
                                                                            _s972->shaderCoreBuiltins);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM: {
                const auto _s973 = reinterpret_cast<const VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM *>(header);
                skip |= ValidatePhysicalDeviceShaderCoreBuiltinsPropertiesARM(_parentObjects, _s973->sType, nullptr,
                                                                              _s973->shaderCoreMask, _s973->shaderCoreCount,
                                                                              _s973->shaderWarpsPerCore);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT: {
                const auto _s974 = reinterpret_cast<const VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT *>(header);
                skip |= ValidatePhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(_parentObjects, _s974->sType, nullptr,
                                                                                     _s974->pipelineLibraryGroupHandles);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT: {
                const auto _s975 = reinterpret_cast<const VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(
                    _parentObjects, _s975->sType, nullptr, _s975->dynamicRenderingUnusedAttachments);
                break;
            }
            case VK_STRUCTURE_TYPE_LATENCY_SUBMISSION_PRESENT_ID_NV: {
                const auto _s976 = reinterpret_cast<const VkLatencySubmissionPresentIdNV *>(header);
                skip |= ValidateLatencySubmissionPresentIdNV(_parentObjects, _s976->sType, nullptr, _s976->presentID);
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_LATENCY_CREATE_INFO_NV: {
                const auto _s977 = reinterpret_cast<const VkSwapchainLatencyCreateInfoNV *>(header);
                skip |= ValidateSwapchainLatencyCreateInfoNV(_parentObjects, _s977->sType, nullptr, _s977->latencyModeEnable);
                break;
            }
            case VK_STRUCTURE_TYPE_LATENCY_SURFACE_CAPABILITIES_NV: {
                const auto _s978 = reinterpret_cast<const VkLatencySurfaceCapabilitiesNV *>(header);
                skip |= ValidateLatencySurfaceCapabilitiesNV(_parentObjects, _s978->sType, nullptr, _s978->presentModeCount,
                                                             _s978->pPresentModes);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM: {
                const auto _s979 = reinterpret_cast<const VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *>(header);
                skip |= ValidatePhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(_parentObjects, _s979->sType, nullptr,
                                                                                      _s979->multiviewPerViewRenderAreas);
                break;
            }
            case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM: {
                const auto _s980 = reinterpret_cast<const VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM *>(header);
                skip |= ValidateMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(
                    _parentObjects, _s980->sType, nullptr, _s980->perViewRenderAreaCount, _s980->pPerViewRenderAreas);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM: {
                const auto _s981 = reinterpret_cast<const VkPhysicalDeviceImageProcessing2FeaturesQCOM *>(header);
                skip |= ValidatePhysicalDeviceImageProcessing2FeaturesQCOM(_parentObjects, _s981->sType, nullptr,
                                                                           _s981->textureBlockMatch2);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM: {
                const auto _s982 = reinterpret_cast<const VkPhysicalDeviceImageProcessing2PropertiesQCOM *>(header);
                skip |= ValidatePhysicalDeviceImageProcessing2PropertiesQCOM(_parentObjects, _s982->sType, nullptr,
                                                                             _s982->maxBlockMatchWindow);
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM: {
                const auto _s983 = reinterpret_cast<const VkSamplerBlockMatchWindowCreateInfoQCOM *>(header);
                skip |= ValidateSamplerBlockMatchWindowCreateInfoQCOM(_parentObjects, _s983->sType, nullptr, _s983->windowExtent,
                                                                      _s983->windowCompareMode);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM: {
                const auto _s984 = reinterpret_cast<const VkPhysicalDeviceCubicWeightsFeaturesQCOM *>(header);
                skip |= ValidatePhysicalDeviceCubicWeightsFeaturesQCOM(_parentObjects, _s984->sType, nullptr,
                                                                       _s984->selectableCubicWeights);
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM: {
                const auto _s985 = reinterpret_cast<const VkSamplerCubicWeightsCreateInfoQCOM *>(header);
                skip |= ValidateSamplerCubicWeightsCreateInfoQCOM(_parentObjects, _s985->sType, nullptr, _s985->cubicWeights);
                break;
            }
            case VK_STRUCTURE_TYPE_BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM: {
                const auto _s986 = reinterpret_cast<const VkBlitImageCubicWeightsInfoQCOM *>(header);
                skip |= ValidateBlitImageCubicWeightsInfoQCOM(_parentObjects, _s986->sType, nullptr, _s986->cubicWeights);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM: {
                const auto _s987 = reinterpret_cast<const VkPhysicalDeviceYcbcrDegammaFeaturesQCOM *>(header);
                skip |= ValidatePhysicalDeviceYcbcrDegammaFeaturesQCOM(_parentObjects, _s987->sType, nullptr, _s987->ycbcrDegamma);
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM: {
                const auto _s988 = reinterpret_cast<const VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM *>(header);
                skip |= ValidateSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(_parentObjects, _s988->sType, nullptr,
                                                                                 _s988->enableYDegamma, _s988->enableCbCrDegamma);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM: {
                const auto _s989 = reinterpret_cast<const VkPhysicalDeviceCubicClampFeaturesQCOM *>(header);
                skip |= ValidatePhysicalDeviceCubicClampFeaturesQCOM(_parentObjects, _s989->sType, nullptr, _s989->cubicRangeClamp);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT: {
                const auto _s990 = reinterpret_cast<const VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(
                    _parentObjects, _s990->sType, nullptr, _s990->attachmentFeedbackLoopDynamicState);
                break;
            }
#ifdef VK_USE_PLATFORM_SCREEN_QNX
            case VK_STRUCTURE_TYPE_SCREEN_BUFFER_FORMAT_PROPERTIES_QNX: {
                const auto _s991 = reinterpret_cast<const VkScreenBufferFormatPropertiesQNX *>(header);
                skip |= ValidateScreenBufferFormatPropertiesQNX(
                    _parentObjects, _s991->sType, nullptr, _s991->format, _s991->externalFormat, _s991->screenUsage,
                    _s991->formatFeatures, _s991->samplerYcbcrConversionComponents, _s991->suggestedYcbcrModel,
                    _s991->suggestedYcbcrRange, _s991->suggestedXChromaOffset, _s991->suggestedYChromaOffset);
                break;
            }
#endif  // VK_USE_PLATFORM_SCREEN_QNX
#ifdef VK_USE_PLATFORM_SCREEN_QNX
            case VK_STRUCTURE_TYPE_IMPORT_SCREEN_BUFFER_INFO_QNX: {
                const auto _s992 = reinterpret_cast<const VkImportScreenBufferInfoQNX *>(header);
                skip |= ValidateImportScreenBufferInfoQNX(_parentObjects, _s992->sType, nullptr, _s992->buffer);
                break;
            }
#endif  // VK_USE_PLATFORM_SCREEN_QNX
#ifdef VK_USE_PLATFORM_SCREEN_QNX
            case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_QNX: {
                const auto _s993 = reinterpret_cast<const VkExternalFormatQNX *>(header);
                skip |= ValidateExternalFormatQNX(_parentObjects, _s993->sType, nullptr, _s993->externalFormat);
                break;
            }
#endif  // VK_USE_PLATFORM_SCREEN_QNX
#ifdef VK_USE_PLATFORM_SCREEN_QNX
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX: {
                const auto _s994 = reinterpret_cast<const VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX *>(header);
                skip |= ValidatePhysicalDeviceExternalMemoryScreenBufferFeaturesQNX(_parentObjects, _s994->sType, nullptr,
                                                                                    _s994->screenBufferImport);
                break;
            }
#endif  // VK_USE_PLATFORM_SCREEN_QNX
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT: {
                const auto _s995 = reinterpret_cast<const VkPhysicalDeviceLayeredDriverPropertiesMSFT *>(header);
                skip |=
                    ValidatePhysicalDeviceLayeredDriverPropertiesMSFT(_parentObjects, _s995->sType, nullptr, _s995->underlyingAPI);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV: {
                const auto _s996 = reinterpret_cast<const VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceDescriptorPoolOverallocationFeaturesNV(_parentObjects, _s996->sType, nullptr,
                                                                                     _s996->descriptorPoolOverallocation);
                break;
            }
            case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR: {
                const auto _s997 = reinterpret_cast<const VkWriteDescriptorSetAccelerationStructureKHR *>(header);
                skip |= ValidateWriteDescriptorSetAccelerationStructureKHR(
                    _parentObjects, _s997->sType, nullptr, _s997->accelerationStructureCount, _s997->pAccelerationStructures);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR: {
                const auto _s998 = reinterpret_cast<const VkPhysicalDeviceAccelerationStructureFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceAccelerationStructureFeaturesKHR(
                    _parentObjects, _s998->sType, nullptr, _s998->accelerationStructure, _s998->accelerationStructureCaptureReplay,
                    _s998->accelerationStructureIndirectBuild, _s998->accelerationStructureHostCommands,
                    _s998->descriptorBindingAccelerationStructureUpdateAfterBind);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR: {
                const auto _s999 = reinterpret_cast<const VkPhysicalDeviceAccelerationStructurePropertiesKHR *>(header);
                skip |= ValidatePhysicalDeviceAccelerationStructurePropertiesKHR(
                    _parentObjects, _s999->sType, nullptr, _s999->maxGeometryCount, _s999->maxInstanceCount,
                    _s999->maxPrimitiveCount, _s999->maxPerStageDescriptorAccelerationStructures,
                    _s999->maxPerStageDescriptorUpdateAfterBindAccelerationStructures,
                    _s999->maxDescriptorSetAccelerationStructures, _s999->maxDescriptorSetUpdateAfterBindAccelerationStructures,
                    _s999->minAccelerationStructureScratchOffsetAlignment);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR: {
                const auto _s1000 = reinterpret_cast<const VkPhysicalDeviceRayTracingPipelineFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceRayTracingPipelineFeaturesKHR(
                    _parentObjects, _s1000->sType, nullptr, _s1000->rayTracingPipeline,
                    _s1000->rayTracingPipelineShaderGroupHandleCaptureReplay,
                    _s1000->rayTracingPipelineShaderGroupHandleCaptureReplayMixed, _s1000->rayTracingPipelineTraceRaysIndirect,
                    _s1000->rayTraversalPrimitiveCulling);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR: {
                const auto _s1001 = reinterpret_cast<const VkPhysicalDeviceRayTracingPipelinePropertiesKHR *>(header);
                skip |= ValidatePhysicalDeviceRayTracingPipelinePropertiesKHR(
                    _parentObjects, _s1001->sType, nullptr, _s1001->shaderGroupHandleSize, _s1001->maxRayRecursionDepth,
                    _s1001->maxShaderGroupStride, _s1001->shaderGroupBaseAlignment, _s1001->shaderGroupHandleCaptureReplaySize,
                    _s1001->maxRayDispatchInvocationCount, _s1001->shaderGroupHandleAlignment, _s1001->maxRayHitAttributeSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR: {
                const auto _s1002 = reinterpret_cast<const VkPhysicalDeviceRayQueryFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceRayQueryFeaturesKHR(_parentObjects, _s1002->sType, nullptr, _s1002->rayQuery);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT: {
                const auto _s1003 = reinterpret_cast<const VkPhysicalDeviceMeshShaderFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceMeshShaderFeaturesEXT(
                    _parentObjects, _s1003->sType, nullptr, _s1003->taskShader, _s1003->meshShader, _s1003->multiviewMeshShader,
                    _s1003->primitiveFragmentShadingRateMeshShader, _s1003->meshShaderQueries);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT: {
                const auto _s1004 = reinterpret_cast<const VkPhysicalDeviceMeshShaderPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceMeshShaderPropertiesEXT(
                    _parentObjects, _s1004->sType, nullptr, _s1004->maxTaskWorkGroupTotalCount, _s1004->maxTaskWorkGroupCount,
                    _s1004->maxTaskWorkGroupInvocations, _s1004->maxTaskWorkGroupSize, _s1004->maxTaskPayloadSize,
                    _s1004->maxTaskSharedMemorySize, _s1004->maxTaskPayloadAndSharedMemorySize, _s1004->maxMeshWorkGroupTotalCount,
                    _s1004->maxMeshWorkGroupCount, _s1004->maxMeshWorkGroupInvocations, _s1004->maxMeshWorkGroupSize,
                    _s1004->maxMeshSharedMemorySize, _s1004->maxMeshPayloadAndSharedMemorySize, _s1004->maxMeshOutputMemorySize,
                    _s1004->maxMeshPayloadAndOutputMemorySize, _s1004->maxMeshOutputComponents, _s1004->maxMeshOutputVertices,
                    _s1004->maxMeshOutputPrimitives, _s1004->maxMeshOutputLayers, _s1004->maxMeshMultiviewViewCount,
                    _s1004->meshOutputPerVertexGranularity, _s1004->meshOutputPerPrimitiveGranularity,
                    _s1004->maxPreferredTaskWorkGroupInvocations, _s1004->maxPreferredMeshWorkGroupInvocations,
                    _s1004->prefersLocalInvocationVertexOutput, _s1004->prefersLocalInvocationPrimitiveOutput,
                    _s1004->prefersCompactVertexOutput, _s1004->prefersCompactPrimitiveOutput);
                break;
            }
            default:
                break;
        }
        header = header->pNext;
    }
    return skip;
}

// NOLINTEND
