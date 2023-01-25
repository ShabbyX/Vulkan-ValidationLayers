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
        for (uint32_t _i441 = 0; _i441 < perViewRenderAreaCount; ++_i441) {
            const auto _s442 = &pPerViewRenderAreas[_i441];
            skip |= ValidateRect2D(_parentObjects, _s442->offset, _s442->extent);
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
    const auto _s443 = &maxBlockMatchWindow;
    skip |= ValidateExtent2D(_parentObjects, _s443->width, _s443->height);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateSamplerBlockMatchWindowCreateInfoQCOM(
    const LogObjectList &_parentObjects, const VkStructureType sType, const void *pNext, const VkExtent2D windowExtent,
    const VkBlockMatchWindowCompareModeQCOM windowCompareMode) const {
    bool skip = false;
    const auto _s444 = &windowExtent;
    skip |= ValidateExtent2D(_parentObjects, _s444->width, _s444->height);
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
    const auto _s445 = &samplerYcbcrConversionComponents;
    skip |= ValidateComponentMapping(_parentObjects, _s445->r, _s445->g, _s445->b, _s445->a);
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
    const auto _s446 = &vertexData;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s446->deviceAddress, _s446->hostAddress);
    const auto _s447 = &indexData;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s447->deviceAddress, _s447->hostAddress);
    const auto _s448 = &transformData;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s448->deviceAddress, _s448->hostAddress);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureGeometryAabbsDataKHR(const LogObjectList &_parentObjects,
                                                                           const VkStructureType sType, const void *pNext,
                                                                           const VkDeviceOrHostAddressConstKHR data,
                                                                           const VkDeviceSize stride) const {
    bool skip = false;
    const auto _s449 = &data;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s449->deviceAddress, _s449->hostAddress);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureGeometryInstancesDataKHR(const LogObjectList &_parentObjects,
                                                                               const VkStructureType sType, const void *pNext,
                                                                               const VkBool32 arrayOfPointers,
                                                                               const VkDeviceOrHostAddressConstKHR data) const {
    bool skip = false;
    const auto _s450 = &data;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s450->deviceAddress, _s450->hostAddress);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureGeometryDataKHR(
    const LogObjectList &_parentObjects, const VkAccelerationStructureGeometryTrianglesDataKHR triangles,
    const VkAccelerationStructureGeometryAabbsDataKHR aabbs,
    const VkAccelerationStructureGeometryInstancesDataKHR instances) const {
    bool skip = false;
    const auto _s451 = &triangles;
    skip |= ValidateAccelerationStructureGeometryTrianglesDataKHR(_parentObjects, _s451->sType, _s451->pNext, _s451->vertexFormat,
                                                                  _s451->vertexData, _s451->vertexStride, _s451->maxVertex,
                                                                  _s451->indexType, _s451->indexData, _s451->transformData);
    const auto _s452 = &aabbs;
    skip |=
        ValidateAccelerationStructureGeometryAabbsDataKHR(_parentObjects, _s452->sType, _s452->pNext, _s452->data, _s452->stride);
    const auto _s453 = &instances;
    skip |= ValidateAccelerationStructureGeometryInstancesDataKHR(_parentObjects, _s453->sType, _s453->pNext,
                                                                  _s453->arrayOfPointers, _s453->data);
    return skip;
}
bool ExplicitValidation::ValidateAccelerationStructureGeometryKHR(const LogObjectList &_parentObjects, const VkStructureType sType,
                                                                  const void *pNext, const VkGeometryTypeKHR geometryType,
                                                                  const VkAccelerationStructureGeometryDataKHR geometry,
                                                                  const VkGeometryFlagsKHR flags) const {
    bool skip = false;
    const auto _s454 = &geometry;
    skip |= ValidateAccelerationStructureGeometryDataKHR(_parentObjects, _s454->triangles, _s454->aabbs, _s454->instances);
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
        for (uint32_t _i455 = 0; _i455 < geometryCount; ++_i455) {
            const auto _s456 = &pGeometries[_i455];
            skip |= ValidateAccelerationStructureGeometryKHR(_parentObjects, _s456->sType, _s456->pNext, _s456->geometryType,
                                                             _s456->geometry, _s456->flags);
        }
    }
    if (ppGeometries != nullptr) {
        for (uint32_t _i457 = 0; _i457 < geometryCount; ++_i457) {
            const auto _s458 = ppGeometries[_i457];
            skip |= ValidateAccelerationStructureGeometryKHR(_parentObjects, _s458->sType, _s458->pNext, _s458->geometryType,
                                                             _s458->geometry, _s458->flags);
        }
    }
    const auto _s459 = &scratchData;
    skip |= ValidateDeviceOrHostAddressKHR(_parentObjects, _s459->deviceAddress, _s459->hostAddress);
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
    const auto _s460 = &dst;
    skip |= ValidateDeviceOrHostAddressKHR(_parentObjects, _s460->deviceAddress, _s460->hostAddress);
    skip |= ValidatePNext(_parentObjects, pNext);
    return skip;
}
bool ExplicitValidation::ValidateCopyMemoryToAccelerationStructureInfoKHR(const LogObjectList &_parentObjects,
                                                                          const VkStructureType sType, const void *pNext,
                                                                          const VkDeviceOrHostAddressConstKHR src,
                                                                          const VkAccelerationStructureKHR dst,
                                                                          const VkCopyAccelerationStructureModeKHR mode) const {
    bool skip = false;
    const auto _s461 = &src;
    skip |= ValidateDeviceOrHostAddressConstKHR(_parentObjects, _s461->deviceAddress, _s461->hostAddress);
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
        for (uint32_t _i462 = 0; _i462 < stageCount; ++_i462) {
            const auto _s463 = &pStages[_i462];
            skip |= ValidatePipelineShaderStageCreateInfo(_parentObjects, _s463->sType, _s463->pNext, _s463->flags, _s463->stage,
                                                          _s463->module, _s463->pName, _s463->pSpecializationInfo);
        }
    }
    if (pGroups != nullptr) {
        for (uint32_t _i464 = 0; _i464 < groupCount; ++_i464) {
            const auto _s465 = &pGroups[_i464];
            skip |= ValidateRayTracingShaderGroupCreateInfoKHR(_parentObjects, _s465->sType, _s465->pNext, _s465->type,
                                                               _s465->generalShader, _s465->closestHitShader, _s465->anyHitShader,
                                                               _s465->intersectionShader, _s465->pShaderGroupCaptureReplayHandle);
        }
    }
    if (pLibraryInfo != nullptr) {
        const auto _s466 = pLibraryInfo;
        skip |= ValidatePipelineLibraryCreateInfoKHR(_parentObjects, _s466->sType, _s466->pNext, _s466->libraryCount,
                                                     _s466->pLibraries);
    }
    if (pLibraryInterface != nullptr) {
        const auto _s467 = pLibraryInterface;
        skip |= ValidateRayTracingPipelineInterfaceCreateInfoKHR(
            _parentObjects, _s467->sType, _s467->pNext, _s467->maxPipelineRayPayloadSize, _s467->maxPipelineRayHitAttributeSize);
    }
    if (pDynamicState != nullptr) {
        const auto _s468 = pDynamicState;
        skip |= ValidatePipelineDynamicStateCreateInfo(_parentObjects, _s468->sType, _s468->pNext, _s468->flags,
                                                       _s468->dynamicStateCount, _s468->pDynamicStates);
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
                const auto _s469 = reinterpret_cast<const VkShaderModuleCreateInfo *>(header);
                skip |= ValidateShaderModuleCreateInfo(_parentObjects, _s469->sType, _s469->pNext, _s469->flags, _s469->codeSize,
                                                       _s469->pCode);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES: {
                const auto _s470 = reinterpret_cast<const VkPhysicalDeviceSubgroupProperties *>(header);
                skip |= ValidatePhysicalDeviceSubgroupProperties(_parentObjects, _s470->sType, _s470->pNext, _s470->subgroupSize,
                                                                 _s470->supportedStages, _s470->supportedOperations,
                                                                 _s470->quadOperationsInAllStages);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES: {
                const auto _s471 = reinterpret_cast<const VkPhysicalDevice16BitStorageFeatures *>(header);
                skip |= ValidatePhysicalDevice16BitStorageFeatures(
                    _parentObjects, _s471->sType, _s471->pNext, _s471->storageBuffer16BitAccess,
                    _s471->uniformAndStorageBuffer16BitAccess, _s471->storagePushConstant16, _s471->storageInputOutput16);
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS: {
                const auto _s472 = reinterpret_cast<const VkMemoryDedicatedRequirements *>(header);
                skip |= ValidateMemoryDedicatedRequirements(_parentObjects, _s472->sType, _s472->pNext,
                                                            _s472->prefersDedicatedAllocation, _s472->requiresDedicatedAllocation);
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO: {
                const auto _s473 = reinterpret_cast<const VkMemoryDedicatedAllocateInfo *>(header);
                skip |=
                    ValidateMemoryDedicatedAllocateInfo(_parentObjects, _s473->sType, _s473->pNext, _s473->image, _s473->buffer);
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO: {
                const auto _s474 = reinterpret_cast<const VkMemoryAllocateFlagsInfo *>(header);
                skip |=
                    ValidateMemoryAllocateFlagsInfo(_parentObjects, _s474->sType, _s474->pNext, _s474->flags, _s474->deviceMask);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO: {
                const auto _s475 = reinterpret_cast<const VkDeviceGroupRenderPassBeginInfo *>(header);
                skip |= ValidateDeviceGroupRenderPassBeginInfo(_parentObjects, _s475->sType, _s475->pNext, _s475->deviceMask,
                                                               _s475->deviceRenderAreaCount, _s475->pDeviceRenderAreas);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO: {
                const auto _s476 = reinterpret_cast<const VkDeviceGroupCommandBufferBeginInfo *>(header);
                skip |= ValidateDeviceGroupCommandBufferBeginInfo(_parentObjects, _s476->sType, _s476->pNext, _s476->deviceMask);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO: {
                const auto _s477 = reinterpret_cast<const VkDeviceGroupSubmitInfo *>(header);
                skip |= ValidateDeviceGroupSubmitInfo(_parentObjects, _s477->sType, _s477->pNext, _s477->waitSemaphoreCount,
                                                      _s477->pWaitSemaphoreDeviceIndices, _s477->commandBufferCount,
                                                      _s477->pCommandBufferDeviceMasks, _s477->signalSemaphoreCount,
                                                      _s477->pSignalSemaphoreDeviceIndices);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO: {
                const auto _s478 = reinterpret_cast<const VkDeviceGroupBindSparseInfo *>(header);
                skip |= ValidateDeviceGroupBindSparseInfo(_parentObjects, _s478->sType, _s478->pNext, _s478->resourceDeviceIndex,
                                                          _s478->memoryDeviceIndex);
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO: {
                const auto _s479 = reinterpret_cast<const VkBindBufferMemoryDeviceGroupInfo *>(header);
                skip |= ValidateBindBufferMemoryDeviceGroupInfo(_parentObjects, _s479->sType, _s479->pNext, _s479->deviceIndexCount,
                                                                _s479->pDeviceIndices);
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO: {
                const auto _s480 = reinterpret_cast<const VkBindImageMemoryDeviceGroupInfo *>(header);
                skip |= ValidateBindImageMemoryDeviceGroupInfo(_parentObjects, _s480->sType, _s480->pNext, _s480->deviceIndexCount,
                                                               _s480->pDeviceIndices, _s480->splitInstanceBindRegionCount,
                                                               _s480->pSplitInstanceBindRegions);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO: {
                const auto _s481 = reinterpret_cast<const VkDeviceGroupDeviceCreateInfo *>(header);
                skip |= ValidateDeviceGroupDeviceCreateInfo(_parentObjects, _s481->sType, _s481->pNext, _s481->physicalDeviceCount,
                                                            _s481->pPhysicalDevices);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2: {
                const auto _s482 = reinterpret_cast<const VkPhysicalDeviceFeatures2 *>(header);
                skip |= ValidatePhysicalDeviceFeatures2(_parentObjects, _s482->sType, _s482->pNext, _s482->features);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES: {
                const auto _s483 = reinterpret_cast<const VkPhysicalDevicePointClippingProperties *>(header);
                skip |= ValidatePhysicalDevicePointClippingProperties(_parentObjects, _s483->sType, _s483->pNext,
                                                                      _s483->pointClippingBehavior);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO: {
                const auto _s484 = reinterpret_cast<const VkRenderPassInputAttachmentAspectCreateInfo *>(header);
                skip |= ValidateRenderPassInputAttachmentAspectCreateInfo(_parentObjects, _s484->sType, _s484->pNext,
                                                                          _s484->aspectReferenceCount, _s484->pAspectReferences);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO: {
                const auto _s485 = reinterpret_cast<const VkImageViewUsageCreateInfo *>(header);
                skip |= ValidateImageViewUsageCreateInfo(_parentObjects, _s485->sType, _s485->pNext, _s485->usage);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO: {
                const auto _s486 = reinterpret_cast<const VkPipelineTessellationDomainOriginStateCreateInfo *>(header);
                skip |= ValidatePipelineTessellationDomainOriginStateCreateInfo(_parentObjects, _s486->sType, _s486->pNext,
                                                                                _s486->domainOrigin);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO: {
                const auto _s487 = reinterpret_cast<const VkRenderPassMultiviewCreateInfo *>(header);
                skip |= ValidateRenderPassMultiviewCreateInfo(_parentObjects, _s487->sType, _s487->pNext, _s487->subpassCount,
                                                              _s487->pViewMasks, _s487->dependencyCount, _s487->pViewOffsets,
                                                              _s487->correlationMaskCount, _s487->pCorrelationMasks);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES: {
                const auto _s488 = reinterpret_cast<const VkPhysicalDeviceMultiviewFeatures *>(header);
                skip |= ValidatePhysicalDeviceMultiviewFeatures(_parentObjects, _s488->sType, _s488->pNext, _s488->multiview,
                                                                _s488->multiviewGeometryShader, _s488->multiviewTessellationShader);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES: {
                const auto _s489 = reinterpret_cast<const VkPhysicalDeviceMultiviewProperties *>(header);
                skip |= ValidatePhysicalDeviceMultiviewProperties(_parentObjects, _s489->sType, _s489->pNext,
                                                                  _s489->maxMultiviewViewCount, _s489->maxMultiviewInstanceIndex);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES: {
                const auto _s490 = reinterpret_cast<const VkPhysicalDeviceVariablePointersFeatures *>(header);
                skip |= ValidatePhysicalDeviceVariablePointersFeatures(
                    _parentObjects, _s490->sType, _s490->pNext, _s490->variablePointersStorageBuffer, _s490->variablePointers);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES: {
                const auto _s491 = reinterpret_cast<const VkPhysicalDeviceProtectedMemoryFeatures *>(header);
                skip |= ValidatePhysicalDeviceProtectedMemoryFeatures(_parentObjects, _s491->sType, _s491->pNext,
                                                                      _s491->protectedMemory);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES: {
                const auto _s492 = reinterpret_cast<const VkPhysicalDeviceProtectedMemoryProperties *>(header);
                skip |= ValidatePhysicalDeviceProtectedMemoryProperties(_parentObjects, _s492->sType, _s492->pNext,
                                                                        _s492->protectedNoFault);
                break;
            }
            case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO: {
                const auto _s493 = reinterpret_cast<const VkProtectedSubmitInfo *>(header);
                skip |= ValidateProtectedSubmitInfo(_parentObjects, _s493->sType, _s493->pNext, _s493->protectedSubmit);
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO: {
                const auto _s494 = reinterpret_cast<const VkSamplerYcbcrConversionInfo *>(header);
                skip |= ValidateSamplerYcbcrConversionInfo(_parentObjects, _s494->sType, _s494->pNext, _s494->conversion);
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO: {
                const auto _s495 = reinterpret_cast<const VkBindImagePlaneMemoryInfo *>(header);
                skip |= ValidateBindImagePlaneMemoryInfo(_parentObjects, _s495->sType, _s495->pNext, _s495->planeAspect);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO: {
                const auto _s496 = reinterpret_cast<const VkImagePlaneMemoryRequirementsInfo *>(header);
                skip |= ValidateImagePlaneMemoryRequirementsInfo(_parentObjects, _s496->sType, _s496->pNext, _s496->planeAspect);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES: {
                const auto _s497 = reinterpret_cast<const VkPhysicalDeviceSamplerYcbcrConversionFeatures *>(header);
                skip |= ValidatePhysicalDeviceSamplerYcbcrConversionFeatures(_parentObjects, _s497->sType, _s497->pNext,
                                                                             _s497->samplerYcbcrConversion);
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES: {
                const auto _s498 = reinterpret_cast<const VkSamplerYcbcrConversionImageFormatProperties *>(header);
                skip |= ValidateSamplerYcbcrConversionImageFormatProperties(_parentObjects, _s498->sType, _s498->pNext,
                                                                            _s498->combinedImageSamplerDescriptorCount);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO: {
                const auto _s499 = reinterpret_cast<const VkPhysicalDeviceExternalImageFormatInfo *>(header);
                skip |=
                    ValidatePhysicalDeviceExternalImageFormatInfo(_parentObjects, _s499->sType, _s499->pNext, _s499->handleType);
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES: {
                const auto _s500 = reinterpret_cast<const VkExternalImageFormatProperties *>(header);
                skip |= ValidateExternalImageFormatProperties(_parentObjects, _s500->sType, _s500->pNext,
                                                              _s500->externalMemoryProperties);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES: {
                const auto _s501 = reinterpret_cast<const VkPhysicalDeviceIDProperties *>(header);
                skip |= ValidatePhysicalDeviceIDProperties(_parentObjects, _s501->sType, _s501->pNext, _s501->deviceUUID,
                                                           _s501->driverUUID, _s501->deviceLUID, _s501->deviceNodeMask,
                                                           _s501->deviceLUIDValid);
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO: {
                const auto _s502 = reinterpret_cast<const VkExternalMemoryImageCreateInfo *>(header);
                skip |= ValidateExternalMemoryImageCreateInfo(_parentObjects, _s502->sType, _s502->pNext, _s502->handleTypes);
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO: {
                const auto _s503 = reinterpret_cast<const VkExternalMemoryBufferCreateInfo *>(header);
                skip |= ValidateExternalMemoryBufferCreateInfo(_parentObjects, _s503->sType, _s503->pNext, _s503->handleTypes);
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO: {
                const auto _s504 = reinterpret_cast<const VkExportMemoryAllocateInfo *>(header);
                skip |= ValidateExportMemoryAllocateInfo(_parentObjects, _s504->sType, _s504->pNext, _s504->handleTypes);
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO: {
                const auto _s505 = reinterpret_cast<const VkExportFenceCreateInfo *>(header);
                skip |= ValidateExportFenceCreateInfo(_parentObjects, _s505->sType, _s505->pNext, _s505->handleTypes);
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO: {
                const auto _s506 = reinterpret_cast<const VkExportSemaphoreCreateInfo *>(header);
                skip |= ValidateExportSemaphoreCreateInfo(_parentObjects, _s506->sType, _s506->pNext, _s506->handleTypes);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES: {
                const auto _s507 = reinterpret_cast<const VkPhysicalDeviceMaintenance3Properties *>(header);
                skip |= ValidatePhysicalDeviceMaintenance3Properties(_parentObjects, _s507->sType, _s507->pNext,
                                                                     _s507->maxPerSetDescriptors, _s507->maxMemoryAllocationSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES: {
                const auto _s508 = reinterpret_cast<const VkPhysicalDeviceShaderDrawParametersFeatures *>(header);
                skip |= ValidatePhysicalDeviceShaderDrawParametersFeatures(_parentObjects, _s508->sType, _s508->pNext,
                                                                           _s508->shaderDrawParameters);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES: {
                const auto _s509 = reinterpret_cast<const VkPhysicalDeviceVulkan11Features *>(header);
                skip |= ValidatePhysicalDeviceVulkan11Features(
                    _parentObjects, _s509->sType, _s509->pNext, _s509->storageBuffer16BitAccess,
                    _s509->uniformAndStorageBuffer16BitAccess, _s509->storagePushConstant16, _s509->storageInputOutput16,
                    _s509->multiview, _s509->multiviewGeometryShader, _s509->multiviewTessellationShader,
                    _s509->variablePointersStorageBuffer, _s509->variablePointers, _s509->protectedMemory,
                    _s509->samplerYcbcrConversion, _s509->shaderDrawParameters);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES: {
                const auto _s510 = reinterpret_cast<const VkPhysicalDeviceVulkan11Properties *>(header);
                skip |= ValidatePhysicalDeviceVulkan11Properties(
                    _parentObjects, _s510->sType, _s510->pNext, _s510->deviceUUID, _s510->driverUUID, _s510->deviceLUID,
                    _s510->deviceNodeMask, _s510->deviceLUIDValid, _s510->subgroupSize, _s510->subgroupSupportedStages,
                    _s510->subgroupSupportedOperations, _s510->subgroupQuadOperationsInAllStages, _s510->pointClippingBehavior,
                    _s510->maxMultiviewViewCount, _s510->maxMultiviewInstanceIndex, _s510->protectedNoFault,
                    _s510->maxPerSetDescriptors, _s510->maxMemoryAllocationSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES: {
                const auto _s511 = reinterpret_cast<const VkPhysicalDeviceVulkan12Features *>(header);
                skip |= ValidatePhysicalDeviceVulkan12Features(
                    _parentObjects, _s511->sType, _s511->pNext, _s511->samplerMirrorClampToEdge, _s511->drawIndirectCount,
                    _s511->storageBuffer8BitAccess, _s511->uniformAndStorageBuffer8BitAccess, _s511->storagePushConstant8,
                    _s511->shaderBufferInt64Atomics, _s511->shaderSharedInt64Atomics, _s511->shaderFloat16, _s511->shaderInt8,
                    _s511->descriptorIndexing, _s511->shaderInputAttachmentArrayDynamicIndexing,
                    _s511->shaderUniformTexelBufferArrayDynamicIndexing, _s511->shaderStorageTexelBufferArrayDynamicIndexing,
                    _s511->shaderUniformBufferArrayNonUniformIndexing, _s511->shaderSampledImageArrayNonUniformIndexing,
                    _s511->shaderStorageBufferArrayNonUniformIndexing, _s511->shaderStorageImageArrayNonUniformIndexing,
                    _s511->shaderInputAttachmentArrayNonUniformIndexing, _s511->shaderUniformTexelBufferArrayNonUniformIndexing,
                    _s511->shaderStorageTexelBufferArrayNonUniformIndexing, _s511->descriptorBindingUniformBufferUpdateAfterBind,
                    _s511->descriptorBindingSampledImageUpdateAfterBind, _s511->descriptorBindingStorageImageUpdateAfterBind,
                    _s511->descriptorBindingStorageBufferUpdateAfterBind, _s511->descriptorBindingUniformTexelBufferUpdateAfterBind,
                    _s511->descriptorBindingStorageTexelBufferUpdateAfterBind, _s511->descriptorBindingUpdateUnusedWhilePending,
                    _s511->descriptorBindingPartiallyBound, _s511->descriptorBindingVariableDescriptorCount,
                    _s511->runtimeDescriptorArray, _s511->samplerFilterMinmax, _s511->scalarBlockLayout,
                    _s511->imagelessFramebuffer, _s511->uniformBufferStandardLayout, _s511->shaderSubgroupExtendedTypes,
                    _s511->separateDepthStencilLayouts, _s511->hostQueryReset, _s511->timelineSemaphore, _s511->bufferDeviceAddress,
                    _s511->bufferDeviceAddressCaptureReplay, _s511->bufferDeviceAddressMultiDevice, _s511->vulkanMemoryModel,
                    _s511->vulkanMemoryModelDeviceScope, _s511->vulkanMemoryModelAvailabilityVisibilityChains,
                    _s511->shaderOutputViewportIndex, _s511->shaderOutputLayer, _s511->subgroupBroadcastDynamicId);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES: {
                const auto _s512 = reinterpret_cast<const VkPhysicalDeviceVulkan12Properties *>(header);
                skip |= ValidatePhysicalDeviceVulkan12Properties(
                    _parentObjects, _s512->sType, _s512->pNext, _s512->driverID, _s512->driverName, _s512->driverInfo,
                    _s512->conformanceVersion, _s512->denormBehaviorIndependence, _s512->roundingModeIndependence,
                    _s512->shaderSignedZeroInfNanPreserveFloat16, _s512->shaderSignedZeroInfNanPreserveFloat32,
                    _s512->shaderSignedZeroInfNanPreserveFloat64, _s512->shaderDenormPreserveFloat16,
                    _s512->shaderDenormPreserveFloat32, _s512->shaderDenormPreserveFloat64, _s512->shaderDenormFlushToZeroFloat16,
                    _s512->shaderDenormFlushToZeroFloat32, _s512->shaderDenormFlushToZeroFloat64,
                    _s512->shaderRoundingModeRTEFloat16, _s512->shaderRoundingModeRTEFloat32, _s512->shaderRoundingModeRTEFloat64,
                    _s512->shaderRoundingModeRTZFloat16, _s512->shaderRoundingModeRTZFloat32, _s512->shaderRoundingModeRTZFloat64,
                    _s512->maxUpdateAfterBindDescriptorsInAllPools, _s512->shaderUniformBufferArrayNonUniformIndexingNative,
                    _s512->shaderSampledImageArrayNonUniformIndexingNative, _s512->shaderStorageBufferArrayNonUniformIndexingNative,
                    _s512->shaderStorageImageArrayNonUniformIndexingNative,
                    _s512->shaderInputAttachmentArrayNonUniformIndexingNative, _s512->robustBufferAccessUpdateAfterBind,
                    _s512->quadDivergentImplicitLod, _s512->maxPerStageDescriptorUpdateAfterBindSamplers,
                    _s512->maxPerStageDescriptorUpdateAfterBindUniformBuffers,
                    _s512->maxPerStageDescriptorUpdateAfterBindStorageBuffers,
                    _s512->maxPerStageDescriptorUpdateAfterBindSampledImages,
                    _s512->maxPerStageDescriptorUpdateAfterBindStorageImages,
                    _s512->maxPerStageDescriptorUpdateAfterBindInputAttachments, _s512->maxPerStageUpdateAfterBindResources,
                    _s512->maxDescriptorSetUpdateAfterBindSamplers, _s512->maxDescriptorSetUpdateAfterBindUniformBuffers,
                    _s512->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic,
                    _s512->maxDescriptorSetUpdateAfterBindStorageBuffers,
                    _s512->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic,
                    _s512->maxDescriptorSetUpdateAfterBindSampledImages, _s512->maxDescriptorSetUpdateAfterBindStorageImages,
                    _s512->maxDescriptorSetUpdateAfterBindInputAttachments, _s512->supportedDepthResolveModes,
                    _s512->supportedStencilResolveModes, _s512->independentResolveNone, _s512->independentResolve,
                    _s512->filterMinmaxSingleComponentFormats, _s512->filterMinmaxImageComponentMapping,
                    _s512->maxTimelineSemaphoreValueDifference, _s512->framebufferIntegerColorSampleCounts);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO: {
                const auto _s513 = reinterpret_cast<const VkImageFormatListCreateInfo *>(header);
                skip |= ValidateImageFormatListCreateInfo(_parentObjects, _s513->sType, _s513->pNext, _s513->viewFormatCount,
                                                          _s513->pViewFormats);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES: {
                const auto _s514 = reinterpret_cast<const VkPhysicalDevice8BitStorageFeatures *>(header);
                skip |= ValidatePhysicalDevice8BitStorageFeatures(
                    _parentObjects, _s514->sType, _s514->pNext, _s514->storageBuffer8BitAccess,
                    _s514->uniformAndStorageBuffer8BitAccess, _s514->storagePushConstant8);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES: {
                const auto _s515 = reinterpret_cast<const VkPhysicalDeviceDriverProperties *>(header);
                skip |= ValidatePhysicalDeviceDriverProperties(_parentObjects, _s515->sType, _s515->pNext, _s515->driverID,
                                                               _s515->driverName, _s515->driverInfo, _s515->conformanceVersion);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES: {
                const auto _s516 = reinterpret_cast<const VkPhysicalDeviceShaderAtomicInt64Features *>(header);
                skip |= ValidatePhysicalDeviceShaderAtomicInt64Features(
                    _parentObjects, _s516->sType, _s516->pNext, _s516->shaderBufferInt64Atomics, _s516->shaderSharedInt64Atomics);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES: {
                const auto _s517 = reinterpret_cast<const VkPhysicalDeviceShaderFloat16Int8Features *>(header);
                skip |= ValidatePhysicalDeviceShaderFloat16Int8Features(_parentObjects, _s517->sType, _s517->pNext,
                                                                        _s517->shaderFloat16, _s517->shaderInt8);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES: {
                const auto _s518 = reinterpret_cast<const VkPhysicalDeviceFloatControlsProperties *>(header);
                skip |= ValidatePhysicalDeviceFloatControlsProperties(
                    _parentObjects, _s518->sType, _s518->pNext, _s518->denormBehaviorIndependence, _s518->roundingModeIndependence,
                    _s518->shaderSignedZeroInfNanPreserveFloat16, _s518->shaderSignedZeroInfNanPreserveFloat32,
                    _s518->shaderSignedZeroInfNanPreserveFloat64, _s518->shaderDenormPreserveFloat16,
                    _s518->shaderDenormPreserveFloat32, _s518->shaderDenormPreserveFloat64, _s518->shaderDenormFlushToZeroFloat16,
                    _s518->shaderDenormFlushToZeroFloat32, _s518->shaderDenormFlushToZeroFloat64,
                    _s518->shaderRoundingModeRTEFloat16, _s518->shaderRoundingModeRTEFloat32, _s518->shaderRoundingModeRTEFloat64,
                    _s518->shaderRoundingModeRTZFloat16, _s518->shaderRoundingModeRTZFloat32, _s518->shaderRoundingModeRTZFloat64);
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO: {
                const auto _s519 = reinterpret_cast<const VkDescriptorSetLayoutBindingFlagsCreateInfo *>(header);
                skip |= ValidateDescriptorSetLayoutBindingFlagsCreateInfo(_parentObjects, _s519->sType, _s519->pNext,
                                                                          _s519->bindingCount, _s519->pBindingFlags);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES: {
                const auto _s520 = reinterpret_cast<const VkPhysicalDeviceDescriptorIndexingFeatures *>(header);
                skip |= ValidatePhysicalDeviceDescriptorIndexingFeatures(
                    _parentObjects, _s520->sType, _s520->pNext, _s520->shaderInputAttachmentArrayDynamicIndexing,
                    _s520->shaderUniformTexelBufferArrayDynamicIndexing, _s520->shaderStorageTexelBufferArrayDynamicIndexing,
                    _s520->shaderUniformBufferArrayNonUniformIndexing, _s520->shaderSampledImageArrayNonUniformIndexing,
                    _s520->shaderStorageBufferArrayNonUniformIndexing, _s520->shaderStorageImageArrayNonUniformIndexing,
                    _s520->shaderInputAttachmentArrayNonUniformIndexing, _s520->shaderUniformTexelBufferArrayNonUniformIndexing,
                    _s520->shaderStorageTexelBufferArrayNonUniformIndexing, _s520->descriptorBindingUniformBufferUpdateAfterBind,
                    _s520->descriptorBindingSampledImageUpdateAfterBind, _s520->descriptorBindingStorageImageUpdateAfterBind,
                    _s520->descriptorBindingStorageBufferUpdateAfterBind, _s520->descriptorBindingUniformTexelBufferUpdateAfterBind,
                    _s520->descriptorBindingStorageTexelBufferUpdateAfterBind, _s520->descriptorBindingUpdateUnusedWhilePending,
                    _s520->descriptorBindingPartiallyBound, _s520->descriptorBindingVariableDescriptorCount,
                    _s520->runtimeDescriptorArray);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES: {
                const auto _s521 = reinterpret_cast<const VkPhysicalDeviceDescriptorIndexingProperties *>(header);
                skip |= ValidatePhysicalDeviceDescriptorIndexingProperties(
                    _parentObjects, _s521->sType, _s521->pNext, _s521->maxUpdateAfterBindDescriptorsInAllPools,
                    _s521->shaderUniformBufferArrayNonUniformIndexingNative, _s521->shaderSampledImageArrayNonUniformIndexingNative,
                    _s521->shaderStorageBufferArrayNonUniformIndexingNative, _s521->shaderStorageImageArrayNonUniformIndexingNative,
                    _s521->shaderInputAttachmentArrayNonUniformIndexingNative, _s521->robustBufferAccessUpdateAfterBind,
                    _s521->quadDivergentImplicitLod, _s521->maxPerStageDescriptorUpdateAfterBindSamplers,
                    _s521->maxPerStageDescriptorUpdateAfterBindUniformBuffers,
                    _s521->maxPerStageDescriptorUpdateAfterBindStorageBuffers,
                    _s521->maxPerStageDescriptorUpdateAfterBindSampledImages,
                    _s521->maxPerStageDescriptorUpdateAfterBindStorageImages,
                    _s521->maxPerStageDescriptorUpdateAfterBindInputAttachments, _s521->maxPerStageUpdateAfterBindResources,
                    _s521->maxDescriptorSetUpdateAfterBindSamplers, _s521->maxDescriptorSetUpdateAfterBindUniformBuffers,
                    _s521->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic,
                    _s521->maxDescriptorSetUpdateAfterBindStorageBuffers,
                    _s521->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic,
                    _s521->maxDescriptorSetUpdateAfterBindSampledImages, _s521->maxDescriptorSetUpdateAfterBindStorageImages,
                    _s521->maxDescriptorSetUpdateAfterBindInputAttachments);
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO: {
                const auto _s522 = reinterpret_cast<const VkDescriptorSetVariableDescriptorCountAllocateInfo *>(header);
                skip |= ValidateDescriptorSetVariableDescriptorCountAllocateInfo(
                    _parentObjects, _s522->sType, _s522->pNext, _s522->descriptorSetCount, _s522->pDescriptorCounts);
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT: {
                const auto _s523 = reinterpret_cast<const VkDescriptorSetVariableDescriptorCountLayoutSupport *>(header);
                skip |= ValidateDescriptorSetVariableDescriptorCountLayoutSupport(_parentObjects, _s523->sType, _s523->pNext,
                                                                                  _s523->maxVariableDescriptorCount);
                break;
            }
            case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE: {
                const auto _s524 = reinterpret_cast<const VkSubpassDescriptionDepthStencilResolve *>(header);
                skip |= ValidateSubpassDescriptionDepthStencilResolve(_parentObjects, _s524->sType, _s524->pNext,
                                                                      _s524->depthResolveMode, _s524->stencilResolveMode,
                                                                      _s524->pDepthStencilResolveAttachment);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES: {
                const auto _s525 = reinterpret_cast<const VkPhysicalDeviceDepthStencilResolveProperties *>(header);
                skip |= ValidatePhysicalDeviceDepthStencilResolveProperties(
                    _parentObjects, _s525->sType, _s525->pNext, _s525->supportedDepthResolveModes,
                    _s525->supportedStencilResolveModes, _s525->independentResolveNone, _s525->independentResolve);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES: {
                const auto _s526 = reinterpret_cast<const VkPhysicalDeviceScalarBlockLayoutFeatures *>(header);
                skip |= ValidatePhysicalDeviceScalarBlockLayoutFeatures(_parentObjects, _s526->sType, _s526->pNext,
                                                                        _s526->scalarBlockLayout);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO: {
                const auto _s527 = reinterpret_cast<const VkImageStencilUsageCreateInfo *>(header);
                skip |= ValidateImageStencilUsageCreateInfo(_parentObjects, _s527->sType, _s527->pNext, _s527->stencilUsage);
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO: {
                const auto _s528 = reinterpret_cast<const VkSamplerReductionModeCreateInfo *>(header);
                skip |= ValidateSamplerReductionModeCreateInfo(_parentObjects, _s528->sType, _s528->pNext, _s528->reductionMode);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES: {
                const auto _s529 = reinterpret_cast<const VkPhysicalDeviceSamplerFilterMinmaxProperties *>(header);
                skip |= ValidatePhysicalDeviceSamplerFilterMinmaxProperties(_parentObjects, _s529->sType, _s529->pNext,
                                                                            _s529->filterMinmaxSingleComponentFormats,
                                                                            _s529->filterMinmaxImageComponentMapping);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES: {
                const auto _s530 = reinterpret_cast<const VkPhysicalDeviceVulkanMemoryModelFeatures *>(header);
                skip |= ValidatePhysicalDeviceVulkanMemoryModelFeatures(
                    _parentObjects, _s530->sType, _s530->pNext, _s530->vulkanMemoryModel, _s530->vulkanMemoryModelDeviceScope,
                    _s530->vulkanMemoryModelAvailabilityVisibilityChains);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES: {
                const auto _s531 = reinterpret_cast<const VkPhysicalDeviceImagelessFramebufferFeatures *>(header);
                skip |= ValidatePhysicalDeviceImagelessFramebufferFeatures(_parentObjects, _s531->sType, _s531->pNext,
                                                                           _s531->imagelessFramebuffer);
                break;
            }
            case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO: {
                const auto _s532 = reinterpret_cast<const VkFramebufferAttachmentsCreateInfo *>(header);
                skip |= ValidateFramebufferAttachmentsCreateInfo(_parentObjects, _s532->sType, _s532->pNext,
                                                                 _s532->attachmentImageInfoCount, _s532->pAttachmentImageInfos);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO: {
                const auto _s533 = reinterpret_cast<const VkRenderPassAttachmentBeginInfo *>(header);
                skip |= ValidateRenderPassAttachmentBeginInfo(_parentObjects, _s533->sType, _s533->pNext, _s533->attachmentCount,
                                                              _s533->pAttachments);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES: {
                const auto _s534 = reinterpret_cast<const VkPhysicalDeviceUniformBufferStandardLayoutFeatures *>(header);
                skip |= ValidatePhysicalDeviceUniformBufferStandardLayoutFeatures(_parentObjects, _s534->sType, _s534->pNext,
                                                                                  _s534->uniformBufferStandardLayout);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES: {
                const auto _s535 = reinterpret_cast<const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *>(header);
                skip |= ValidatePhysicalDeviceShaderSubgroupExtendedTypesFeatures(_parentObjects, _s535->sType, _s535->pNext,
                                                                                  _s535->shaderSubgroupExtendedTypes);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES: {
                const auto _s536 = reinterpret_cast<const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *>(header);
                skip |= ValidatePhysicalDeviceSeparateDepthStencilLayoutsFeatures(_parentObjects, _s536->sType, _s536->pNext,
                                                                                  _s536->separateDepthStencilLayouts);
                break;
            }
            case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT: {
                const auto _s537 = reinterpret_cast<const VkAttachmentReferenceStencilLayout *>(header);
                skip |= ValidateAttachmentReferenceStencilLayout(_parentObjects, _s537->sType, _s537->pNext, _s537->stencilLayout);
                break;
            }
            case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT: {
                const auto _s538 = reinterpret_cast<const VkAttachmentDescriptionStencilLayout *>(header);
                skip |= ValidateAttachmentDescriptionStencilLayout(_parentObjects, _s538->sType, _s538->pNext,
                                                                   _s538->stencilInitialLayout, _s538->stencilFinalLayout);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES: {
                const auto _s539 = reinterpret_cast<const VkPhysicalDeviceHostQueryResetFeatures *>(header);
                skip |=
                    ValidatePhysicalDeviceHostQueryResetFeatures(_parentObjects, _s539->sType, _s539->pNext, _s539->hostQueryReset);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES: {
                const auto _s540 = reinterpret_cast<const VkPhysicalDeviceTimelineSemaphoreFeatures *>(header);
                skip |= ValidatePhysicalDeviceTimelineSemaphoreFeatures(_parentObjects, _s540->sType, _s540->pNext,
                                                                        _s540->timelineSemaphore);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES: {
                const auto _s541 = reinterpret_cast<const VkPhysicalDeviceTimelineSemaphoreProperties *>(header);
                skip |= ValidatePhysicalDeviceTimelineSemaphoreProperties(_parentObjects, _s541->sType, _s541->pNext,
                                                                          _s541->maxTimelineSemaphoreValueDifference);
                break;
            }
            case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO: {
                const auto _s542 = reinterpret_cast<const VkSemaphoreTypeCreateInfo *>(header);
                skip |= ValidateSemaphoreTypeCreateInfo(_parentObjects, _s542->sType, _s542->pNext, _s542->semaphoreType,
                                                        _s542->initialValue);
                break;
            }
            case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO: {
                const auto _s543 = reinterpret_cast<const VkTimelineSemaphoreSubmitInfo *>(header);
                skip |= ValidateTimelineSemaphoreSubmitInfo(_parentObjects, _s543->sType, _s543->pNext,
                                                            _s543->waitSemaphoreValueCount, _s543->pWaitSemaphoreValues,
                                                            _s543->signalSemaphoreValueCount, _s543->pSignalSemaphoreValues);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES: {
                const auto _s544 = reinterpret_cast<const VkPhysicalDeviceBufferDeviceAddressFeatures *>(header);
                skip |= ValidatePhysicalDeviceBufferDeviceAddressFeatures(
                    _parentObjects, _s544->sType, _s544->pNext, _s544->bufferDeviceAddress, _s544->bufferDeviceAddressCaptureReplay,
                    _s544->bufferDeviceAddressMultiDevice);
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO: {
                const auto _s545 = reinterpret_cast<const VkBufferOpaqueCaptureAddressCreateInfo *>(header);
                skip |= ValidateBufferOpaqueCaptureAddressCreateInfo(_parentObjects, _s545->sType, _s545->pNext,
                                                                     _s545->opaqueCaptureAddress);
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO: {
                const auto _s546 = reinterpret_cast<const VkMemoryOpaqueCaptureAddressAllocateInfo *>(header);
                skip |= ValidateMemoryOpaqueCaptureAddressAllocateInfo(_parentObjects, _s546->sType, _s546->pNext,
                                                                       _s546->opaqueCaptureAddress);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES: {
                const auto _s547 = reinterpret_cast<const VkPhysicalDeviceVulkan13Features *>(header);
                skip |= ValidatePhysicalDeviceVulkan13Features(
                    _parentObjects, _s547->sType, _s547->pNext, _s547->robustImageAccess, _s547->inlineUniformBlock,
                    _s547->descriptorBindingInlineUniformBlockUpdateAfterBind, _s547->pipelineCreationCacheControl,
                    _s547->privateData, _s547->shaderDemoteToHelperInvocation, _s547->shaderTerminateInvocation,
                    _s547->subgroupSizeControl, _s547->computeFullSubgroups, _s547->synchronization2,
                    _s547->textureCompressionASTC_HDR, _s547->shaderZeroInitializeWorkgroupMemory, _s547->dynamicRendering,
                    _s547->shaderIntegerDotProduct, _s547->maintenance4);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES: {
                const auto _s548 = reinterpret_cast<const VkPhysicalDeviceVulkan13Properties *>(header);
                skip |= ValidatePhysicalDeviceVulkan13Properties(
                    _parentObjects, _s548->sType, _s548->pNext, _s548->minSubgroupSize, _s548->maxSubgroupSize,
                    _s548->maxComputeWorkgroupSubgroups, _s548->requiredSubgroupSizeStages, _s548->maxInlineUniformBlockSize,
                    _s548->maxPerStageDescriptorInlineUniformBlocks, _s548->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks,
                    _s548->maxDescriptorSetInlineUniformBlocks, _s548->maxDescriptorSetUpdateAfterBindInlineUniformBlocks,
                    _s548->maxInlineUniformTotalSize, _s548->integerDotProduct8BitUnsignedAccelerated,
                    _s548->integerDotProduct8BitSignedAccelerated, _s548->integerDotProduct8BitMixedSignednessAccelerated,
                    _s548->integerDotProduct4x8BitPackedUnsignedAccelerated, _s548->integerDotProduct4x8BitPackedSignedAccelerated,
                    _s548->integerDotProduct4x8BitPackedMixedSignednessAccelerated,
                    _s548->integerDotProduct16BitUnsignedAccelerated, _s548->integerDotProduct16BitSignedAccelerated,
                    _s548->integerDotProduct16BitMixedSignednessAccelerated, _s548->integerDotProduct32BitUnsignedAccelerated,
                    _s548->integerDotProduct32BitSignedAccelerated, _s548->integerDotProduct32BitMixedSignednessAccelerated,
                    _s548->integerDotProduct64BitUnsignedAccelerated, _s548->integerDotProduct64BitSignedAccelerated,
                    _s548->integerDotProduct64BitMixedSignednessAccelerated,
                    _s548->integerDotProductAccumulatingSaturating8BitUnsignedAccelerated,
                    _s548->integerDotProductAccumulatingSaturating8BitSignedAccelerated,
                    _s548->integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated,
                    _s548->integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated,
                    _s548->integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated,
                    _s548->integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated,
                    _s548->integerDotProductAccumulatingSaturating16BitUnsignedAccelerated,
                    _s548->integerDotProductAccumulatingSaturating16BitSignedAccelerated,
                    _s548->integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated,
                    _s548->integerDotProductAccumulatingSaturating32BitUnsignedAccelerated,
                    _s548->integerDotProductAccumulatingSaturating32BitSignedAccelerated,
                    _s548->integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated,
                    _s548->integerDotProductAccumulatingSaturating64BitUnsignedAccelerated,
                    _s548->integerDotProductAccumulatingSaturating64BitSignedAccelerated,
                    _s548->integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated,
                    _s548->storageTexelBufferOffsetAlignmentBytes, _s548->storageTexelBufferOffsetSingleTexelAlignment,
                    _s548->uniformTexelBufferOffsetAlignmentBytes, _s548->uniformTexelBufferOffsetSingleTexelAlignment,
                    _s548->maxBufferSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO: {
                const auto _s549 = reinterpret_cast<const VkPipelineCreationFeedbackCreateInfo *>(header);
                skip |= ValidatePipelineCreationFeedbackCreateInfo(
                    _parentObjects, _s549->sType, _s549->pNext, _s549->pPipelineCreationFeedback,
                    _s549->pipelineStageCreationFeedbackCount, _s549->pPipelineStageCreationFeedbacks);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES: {
                const auto _s550 = reinterpret_cast<const VkPhysicalDeviceShaderTerminateInvocationFeatures *>(header);
                skip |= ValidatePhysicalDeviceShaderTerminateInvocationFeatures(_parentObjects, _s550->sType, _s550->pNext,
                                                                                _s550->shaderTerminateInvocation);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES: {
                const auto _s551 = reinterpret_cast<const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *>(header);
                skip |= ValidatePhysicalDeviceShaderDemoteToHelperInvocationFeatures(_parentObjects, _s551->sType, _s551->pNext,
                                                                                     _s551->shaderDemoteToHelperInvocation);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES: {
                const auto _s552 = reinterpret_cast<const VkPhysicalDevicePrivateDataFeatures *>(header);
                skip |= ValidatePhysicalDevicePrivateDataFeatures(_parentObjects, _s552->sType, _s552->pNext, _s552->privateData);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO: {
                const auto _s553 = reinterpret_cast<const VkDevicePrivateDataCreateInfo *>(header);
                skip |= ValidateDevicePrivateDataCreateInfo(_parentObjects, _s553->sType, _s553->pNext,
                                                            _s553->privateDataSlotRequestCount);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES: {
                const auto _s554 = reinterpret_cast<const VkPhysicalDevicePipelineCreationCacheControlFeatures *>(header);
                skip |= ValidatePhysicalDevicePipelineCreationCacheControlFeatures(_parentObjects, _s554->sType, _s554->pNext,
                                                                                   _s554->pipelineCreationCacheControl);
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_BARRIER_2: {
                const auto _s555 = reinterpret_cast<const VkMemoryBarrier2 *>(header);
                skip |= ValidateMemoryBarrier2(_parentObjects, _s555->sType, _s555->pNext, _s555->srcStageMask,
                                               _s555->srcAccessMask, _s555->dstStageMask, _s555->dstAccessMask);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES: {
                const auto _s556 = reinterpret_cast<const VkPhysicalDeviceSynchronization2Features *>(header);
                skip |= ValidatePhysicalDeviceSynchronization2Features(_parentObjects, _s556->sType, _s556->pNext,
                                                                       _s556->synchronization2);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES: {
                const auto _s557 = reinterpret_cast<const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *>(header);
                skip |= ValidatePhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(_parentObjects, _s557->sType, _s557->pNext,
                                                                                    _s557->shaderZeroInitializeWorkgroupMemory);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES: {
                const auto _s558 = reinterpret_cast<const VkPhysicalDeviceImageRobustnessFeatures *>(header);
                skip |= ValidatePhysicalDeviceImageRobustnessFeatures(_parentObjects, _s558->sType, _s558->pNext,
                                                                      _s558->robustImageAccess);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES: {
                const auto _s559 = reinterpret_cast<const VkPhysicalDeviceSubgroupSizeControlFeatures *>(header);
                skip |= ValidatePhysicalDeviceSubgroupSizeControlFeatures(_parentObjects, _s559->sType, _s559->pNext,
                                                                          _s559->subgroupSizeControl, _s559->computeFullSubgroups);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES: {
                const auto _s560 = reinterpret_cast<const VkPhysicalDeviceSubgroupSizeControlProperties *>(header);
                skip |= ValidatePhysicalDeviceSubgroupSizeControlProperties(
                    _parentObjects, _s560->sType, _s560->pNext, _s560->minSubgroupSize, _s560->maxSubgroupSize,
                    _s560->maxComputeWorkgroupSubgroups, _s560->requiredSubgroupSizeStages);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO: {
                const auto _s561 = reinterpret_cast<const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo *>(header);
                skip |= ValidatePipelineShaderStageRequiredSubgroupSizeCreateInfo(_parentObjects, _s561->sType, _s561->pNext,
                                                                                  _s561->requiredSubgroupSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES: {
                const auto _s562 = reinterpret_cast<const VkPhysicalDeviceInlineUniformBlockFeatures *>(header);
                skip |= ValidatePhysicalDeviceInlineUniformBlockFeatures(_parentObjects, _s562->sType, _s562->pNext,
                                                                         _s562->inlineUniformBlock,
                                                                         _s562->descriptorBindingInlineUniformBlockUpdateAfterBind);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES: {
                const auto _s563 = reinterpret_cast<const VkPhysicalDeviceInlineUniformBlockProperties *>(header);
                skip |= ValidatePhysicalDeviceInlineUniformBlockProperties(
                    _parentObjects, _s563->sType, _s563->pNext, _s563->maxInlineUniformBlockSize,
                    _s563->maxPerStageDescriptorInlineUniformBlocks, _s563->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks,
                    _s563->maxDescriptorSetInlineUniformBlocks, _s563->maxDescriptorSetUpdateAfterBindInlineUniformBlocks);
                break;
            }
            case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK: {
                const auto _s564 = reinterpret_cast<const VkWriteDescriptorSetInlineUniformBlock *>(header);
                skip |= ValidateWriteDescriptorSetInlineUniformBlock(_parentObjects, _s564->sType, _s564->pNext, _s564->dataSize,
                                                                     _s564->pData);
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO: {
                const auto _s565 = reinterpret_cast<const VkDescriptorPoolInlineUniformBlockCreateInfo *>(header);
                skip |= ValidateDescriptorPoolInlineUniformBlockCreateInfo(_parentObjects, _s565->sType, _s565->pNext,
                                                                           _s565->maxInlineUniformBlockBindings);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES: {
                const auto _s566 = reinterpret_cast<const VkPhysicalDeviceTextureCompressionASTCHDRFeatures *>(header);
                skip |= ValidatePhysicalDeviceTextureCompressionASTCHDRFeatures(_parentObjects, _s566->sType, _s566->pNext,
                                                                                _s566->textureCompressionASTC_HDR);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO: {
                const auto _s567 = reinterpret_cast<const VkPipelineRenderingCreateInfo *>(header);
                skip |= ValidatePipelineRenderingCreateInfo(_parentObjects, _s567->sType, _s567->pNext, _s567->viewMask,
                                                            _s567->colorAttachmentCount, _s567->pColorAttachmentFormats,
                                                            _s567->depthAttachmentFormat, _s567->stencilAttachmentFormat);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES: {
                const auto _s568 = reinterpret_cast<const VkPhysicalDeviceDynamicRenderingFeatures *>(header);
                skip |= ValidatePhysicalDeviceDynamicRenderingFeatures(_parentObjects, _s568->sType, _s568->pNext,
                                                                       _s568->dynamicRendering);
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO: {
                const auto _s569 = reinterpret_cast<const VkCommandBufferInheritanceRenderingInfo *>(header);
                skip |= ValidateCommandBufferInheritanceRenderingInfo(_parentObjects, _s569->sType, _s569->pNext, _s569->flags,
                                                                      _s569->viewMask, _s569->colorAttachmentCount,
                                                                      _s569->pColorAttachmentFormats, _s569->depthAttachmentFormat,
                                                                      _s569->stencilAttachmentFormat, _s569->rasterizationSamples);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES: {
                const auto _s570 = reinterpret_cast<const VkPhysicalDeviceShaderIntegerDotProductFeatures *>(header);
                skip |= ValidatePhysicalDeviceShaderIntegerDotProductFeatures(_parentObjects, _s570->sType, _s570->pNext,
                                                                              _s570->shaderIntegerDotProduct);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES: {
                const auto _s571 = reinterpret_cast<const VkPhysicalDeviceShaderIntegerDotProductProperties *>(header);
                skip |= ValidatePhysicalDeviceShaderIntegerDotProductProperties(
                    _parentObjects, _s571->sType, _s571->pNext, _s571->integerDotProduct8BitUnsignedAccelerated,
                    _s571->integerDotProduct8BitSignedAccelerated, _s571->integerDotProduct8BitMixedSignednessAccelerated,
                    _s571->integerDotProduct4x8BitPackedUnsignedAccelerated, _s571->integerDotProduct4x8BitPackedSignedAccelerated,
                    _s571->integerDotProduct4x8BitPackedMixedSignednessAccelerated,
                    _s571->integerDotProduct16BitUnsignedAccelerated, _s571->integerDotProduct16BitSignedAccelerated,
                    _s571->integerDotProduct16BitMixedSignednessAccelerated, _s571->integerDotProduct32BitUnsignedAccelerated,
                    _s571->integerDotProduct32BitSignedAccelerated, _s571->integerDotProduct32BitMixedSignednessAccelerated,
                    _s571->integerDotProduct64BitUnsignedAccelerated, _s571->integerDotProduct64BitSignedAccelerated,
                    _s571->integerDotProduct64BitMixedSignednessAccelerated,
                    _s571->integerDotProductAccumulatingSaturating8BitUnsignedAccelerated,
                    _s571->integerDotProductAccumulatingSaturating8BitSignedAccelerated,
                    _s571->integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated,
                    _s571->integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated,
                    _s571->integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated,
                    _s571->integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated,
                    _s571->integerDotProductAccumulatingSaturating16BitUnsignedAccelerated,
                    _s571->integerDotProductAccumulatingSaturating16BitSignedAccelerated,
                    _s571->integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated,
                    _s571->integerDotProductAccumulatingSaturating32BitUnsignedAccelerated,
                    _s571->integerDotProductAccumulatingSaturating32BitSignedAccelerated,
                    _s571->integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated,
                    _s571->integerDotProductAccumulatingSaturating64BitUnsignedAccelerated,
                    _s571->integerDotProductAccumulatingSaturating64BitSignedAccelerated,
                    _s571->integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES: {
                const auto _s572 = reinterpret_cast<const VkPhysicalDeviceTexelBufferAlignmentProperties *>(header);
                skip |= ValidatePhysicalDeviceTexelBufferAlignmentProperties(
                    _parentObjects, _s572->sType, _s572->pNext, _s572->storageTexelBufferOffsetAlignmentBytes,
                    _s572->storageTexelBufferOffsetSingleTexelAlignment, _s572->uniformTexelBufferOffsetAlignmentBytes,
                    _s572->uniformTexelBufferOffsetSingleTexelAlignment);
                break;
            }
            case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3: {
                const auto _s573 = reinterpret_cast<const VkFormatProperties3 *>(header);
                skip |= ValidateFormatProperties3(_parentObjects, _s573->sType, _s573->pNext, _s573->linearTilingFeatures,
                                                  _s573->optimalTilingFeatures, _s573->bufferFeatures);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES: {
                const auto _s574 = reinterpret_cast<const VkPhysicalDeviceMaintenance4Features *>(header);
                skip |= ValidatePhysicalDeviceMaintenance4Features(_parentObjects, _s574->sType, _s574->pNext, _s574->maintenance4);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES: {
                const auto _s575 = reinterpret_cast<const VkPhysicalDeviceMaintenance4Properties *>(header);
                skip |=
                    ValidatePhysicalDeviceMaintenance4Properties(_parentObjects, _s575->sType, _s575->pNext, _s575->maxBufferSize);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR: {
                const auto _s576 = reinterpret_cast<const VkImageSwapchainCreateInfoKHR *>(header);
                skip |= ValidateImageSwapchainCreateInfoKHR(_parentObjects, _s576->sType, _s576->pNext, _s576->swapchain);
                break;
            }
            case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR: {
                const auto _s577 = reinterpret_cast<const VkBindImageMemorySwapchainInfoKHR *>(header);
                skip |= ValidateBindImageMemorySwapchainInfoKHR(_parentObjects, _s577->sType, _s577->pNext, _s577->swapchain,
                                                                _s577->imageIndex);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR: {
                const auto _s578 = reinterpret_cast<const VkDeviceGroupPresentInfoKHR *>(header);
                skip |= ValidateDeviceGroupPresentInfoKHR(_parentObjects, _s578->sType, _s578->pNext, _s578->swapchainCount,
                                                          _s578->pDeviceMasks, _s578->mode);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR: {
                const auto _s579 = reinterpret_cast<const VkDeviceGroupSwapchainCreateInfoKHR *>(header);
                skip |= ValidateDeviceGroupSwapchainCreateInfoKHR(_parentObjects, _s579->sType, _s579->pNext, _s579->modes);
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR: {
                const auto _s580 = reinterpret_cast<const VkDisplayPresentInfoKHR *>(header);
                skip |= ValidateDisplayPresentInfoKHR(_parentObjects, _s580->sType, _s580->pNext, _s580->srcRect, _s580->dstRect,
                                                      _s580->persistent);
                break;
            }
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR: {
                const auto _s581 = reinterpret_cast<const VkQueueFamilyQueryResultStatusPropertiesKHR *>(header);
                skip |= ValidateQueueFamilyQueryResultStatusPropertiesKHR(_parentObjects, _s581->sType, _s581->pNext,
                                                                          _s581->queryResultStatusSupport);
                break;
            }
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_VIDEO_PROPERTIES_KHR: {
                const auto _s582 = reinterpret_cast<const VkQueueFamilyVideoPropertiesKHR *>(header);
                skip |=
                    ValidateQueueFamilyVideoPropertiesKHR(_parentObjects, _s582->sType, _s582->pNext, _s582->videoCodecOperations);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_PROFILE_INFO_KHR: {
                const auto _s583 = reinterpret_cast<const VkVideoProfileInfoKHR *>(header);
                skip |= ValidateVideoProfileInfoKHR(_parentObjects, _s583->sType, _s583->pNext, _s583->videoCodecOperation,
                                                    _s583->chromaSubsampling, _s583->lumaBitDepth, _s583->chromaBitDepth);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_PROFILE_LIST_INFO_KHR: {
                const auto _s584 = reinterpret_cast<const VkVideoProfileListInfoKHR *>(header);
                skip |= ValidateVideoProfileListInfoKHR(_parentObjects, _s584->sType, _s584->pNext, _s584->profileCount,
                                                        _s584->pProfiles);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_CAPABILITIES_KHR: {
                const auto _s585 = reinterpret_cast<const VkVideoDecodeCapabilitiesKHR *>(header);
                skip |= ValidateVideoDecodeCapabilitiesKHR(_parentObjects, _s585->sType, _s585->pNext, _s585->flags);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_USAGE_INFO_KHR: {
                const auto _s586 = reinterpret_cast<const VkVideoDecodeUsageInfoKHR *>(header);
                skip |= ValidateVideoDecodeUsageInfoKHR(_parentObjects, _s586->sType, _s586->pNext, _s586->videoUsageHints);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PROFILE_INFO_KHR: {
                const auto _s587 = reinterpret_cast<const VkVideoDecodeH264ProfileInfoKHR *>(header);
                skip |= ValidateVideoDecodeH264ProfileInfoKHR(_parentObjects, _s587->sType, _s587->pNext, _s587->stdProfileIdc,
                                                              _s587->pictureLayout);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_CAPABILITIES_KHR: {
                const auto _s588 = reinterpret_cast<const VkVideoDecodeH264CapabilitiesKHR *>(header);
                skip |= ValidateVideoDecodeH264CapabilitiesKHR(_parentObjects, _s588->sType, _s588->pNext, _s588->maxLevelIdc,
                                                               _s588->fieldOffsetGranularity);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR: {
                const auto _s589 = reinterpret_cast<const VkVideoDecodeH264SessionParametersAddInfoKHR *>(header);
                skip |= ValidateVideoDecodeH264SessionParametersAddInfoKHR(_parentObjects, _s589->sType, _s589->pNext,
                                                                           _s589->stdSPSCount, _s589->pStdSPSs, _s589->stdPPSCount,
                                                                           _s589->pStdPPSs);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR: {
                const auto _s590 = reinterpret_cast<const VkVideoDecodeH264SessionParametersCreateInfoKHR *>(header);
                skip |= ValidateVideoDecodeH264SessionParametersCreateInfoKHR(_parentObjects, _s590->sType, _s590->pNext,
                                                                              _s590->maxStdSPSCount, _s590->maxStdPPSCount,
                                                                              _s590->pParametersAddInfo);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PICTURE_INFO_KHR: {
                const auto _s591 = reinterpret_cast<const VkVideoDecodeH264PictureInfoKHR *>(header);
                skip |= ValidateVideoDecodeH264PictureInfoKHR(_parentObjects, _s591->sType, _s591->pNext, _s591->pStdPictureInfo,
                                                              _s591->sliceCount, _s591->pSliceOffsets);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR: {
                const auto _s592 = reinterpret_cast<const VkVideoDecodeH264DpbSlotInfoKHR *>(header);
                skip |= ValidateVideoDecodeH264DpbSlotInfoKHR(_parentObjects, _s592->sType, _s592->pNext, _s592->pStdReferenceInfo);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR: {
                const auto _s593 = reinterpret_cast<const VkRenderingFragmentShadingRateAttachmentInfoKHR *>(header);
                skip |= ValidateRenderingFragmentShadingRateAttachmentInfoKHR(_parentObjects, _s593->sType, _s593->pNext,
                                                                              _s593->imageView, _s593->imageLayout,
                                                                              _s593->shadingRateAttachmentTexelSize);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT: {
                const auto _s594 = reinterpret_cast<const VkRenderingFragmentDensityMapAttachmentInfoEXT *>(header);
                skip |= ValidateRenderingFragmentDensityMapAttachmentInfoEXT(_parentObjects, _s594->sType, _s594->pNext,
                                                                             _s594->imageView, _s594->imageLayout);
                break;
            }
            case VK_STRUCTURE_TYPE_ATTACHMENT_SAMPLE_COUNT_INFO_AMD: {
                const auto _s595 = reinterpret_cast<const VkAttachmentSampleCountInfoAMD *>(header);
                skip |=
                    ValidateAttachmentSampleCountInfoAMD(_parentObjects, _s595->sType, _s595->pNext, _s595->colorAttachmentCount,
                                                         _s595->pColorAttachmentSamples, _s595->depthStencilAttachmentSamples);
                break;
            }
            case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX: {
                const auto _s596 = reinterpret_cast<const VkMultiviewPerViewAttributesInfoNVX *>(header);
                skip |= ValidateMultiviewPerViewAttributesInfoNVX(_parentObjects, _s596->sType, _s596->pNext,
                                                                  _s596->perViewAttributes, _s596->perViewAttributesPositionXOnly);
                break;
            }
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR: {
                const auto _s597 = reinterpret_cast<const VkImportMemoryWin32HandleInfoKHR *>(header);
                skip |= ValidateImportMemoryWin32HandleInfoKHR(_parentObjects, _s597->sType, _s597->pNext, _s597->handleType,
                                                               _s597->handle, _s597->name);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR: {
                const auto _s598 = reinterpret_cast<const VkExportMemoryWin32HandleInfoKHR *>(header);
                skip |= ValidateExportMemoryWin32HandleInfoKHR(_parentObjects, _s598->sType, _s598->pNext, _s598->pAttributes,
                                                               _s598->dwAccess, _s598->name);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR: {
                const auto _s599 = reinterpret_cast<const VkImportMemoryFdInfoKHR *>(header);
                skip |= ValidateImportMemoryFdInfoKHR(_parentObjects, _s599->sType, _s599->pNext, _s599->handleType, _s599->fd);
                break;
            }
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR: {
                const auto _s600 = reinterpret_cast<const VkWin32KeyedMutexAcquireReleaseInfoKHR *>(header);
                skip |= ValidateWin32KeyedMutexAcquireReleaseInfoKHR(
                    _parentObjects, _s600->sType, _s600->pNext, _s600->acquireCount, _s600->pAcquireSyncs, _s600->pAcquireKeys,
                    _s600->pAcquireTimeouts, _s600->releaseCount, _s600->pReleaseSyncs, _s600->pReleaseKeys);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: {
                const auto _s601 = reinterpret_cast<const VkExportSemaphoreWin32HandleInfoKHR *>(header);
                skip |= ValidateExportSemaphoreWin32HandleInfoKHR(_parentObjects, _s601->sType, _s601->pNext, _s601->pAttributes,
                                                                  _s601->dwAccess, _s601->name);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR: {
                const auto _s602 = reinterpret_cast<const VkD3D12FenceSubmitInfoKHR *>(header);
                skip |= ValidateD3D12FenceSubmitInfoKHR(_parentObjects, _s602->sType, _s602->pNext, _s602->waitSemaphoreValuesCount,
                                                        _s602->pWaitSemaphoreValues, _s602->signalSemaphoreValuesCount,
                                                        _s602->pSignalSemaphoreValues);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR: {
                const auto _s603 = reinterpret_cast<const VkPhysicalDevicePushDescriptorPropertiesKHR *>(header);
                skip |= ValidatePhysicalDevicePushDescriptorPropertiesKHR(_parentObjects, _s603->sType, _s603->pNext,
                                                                          _s603->maxPushDescriptors);
                break;
            }
            case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR: {
                const auto _s604 = reinterpret_cast<const VkPresentRegionsKHR *>(header);
                skip |=
                    ValidatePresentRegionsKHR(_parentObjects, _s604->sType, _s604->pNext, _s604->swapchainCount, _s604->pRegions);
                break;
            }
            case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR: {
                const auto _s605 = reinterpret_cast<const VkSharedPresentSurfaceCapabilitiesKHR *>(header);
                skip |= ValidateSharedPresentSurfaceCapabilitiesKHR(_parentObjects, _s605->sType, _s605->pNext,
                                                                    _s605->sharedPresentSupportedUsageFlags);
                break;
            }
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR: {
                const auto _s606 = reinterpret_cast<const VkExportFenceWin32HandleInfoKHR *>(header);
                skip |= ValidateExportFenceWin32HandleInfoKHR(_parentObjects, _s606->sType, _s606->pNext, _s606->pAttributes,
                                                              _s606->dwAccess, _s606->name);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR: {
                const auto _s607 = reinterpret_cast<const VkPhysicalDevicePerformanceQueryFeaturesKHR *>(header);
                skip |= ValidatePhysicalDevicePerformanceQueryFeaturesKHR(_parentObjects, _s607->sType, _s607->pNext,
                                                                          _s607->performanceCounterQueryPools,
                                                                          _s607->performanceCounterMultipleQueryPools);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR: {
                const auto _s608 = reinterpret_cast<const VkPhysicalDevicePerformanceQueryPropertiesKHR *>(header);
                skip |= ValidatePhysicalDevicePerformanceQueryPropertiesKHR(_parentObjects, _s608->sType, _s608->pNext,
                                                                            _s608->allowCommandBufferQueryCopies);
                break;
            }
            case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR: {
                const auto _s609 = reinterpret_cast<const VkQueryPoolPerformanceCreateInfoKHR *>(header);
                skip |=
                    ValidateQueryPoolPerformanceCreateInfoKHR(_parentObjects, _s609->sType, _s609->pNext, _s609->queueFamilyIndex,
                                                              _s609->counterIndexCount, _s609->pCounterIndices);
                break;
            }
            case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR: {
                const auto _s610 = reinterpret_cast<const VkPerformanceQuerySubmitInfoKHR *>(header);
                skip |= ValidatePerformanceQuerySubmitInfoKHR(_parentObjects, _s610->sType, _s610->pNext, _s610->counterPassIndex);
                break;
            }
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_FEATURES_KHR: {
                const auto _s611 = reinterpret_cast<const VkPhysicalDevicePortabilitySubsetFeaturesKHR *>(header);
                skip |= ValidatePhysicalDevicePortabilitySubsetFeaturesKHR(
                    _parentObjects, _s611->sType, _s611->pNext, _s611->constantAlphaColorBlendFactors, _s611->events,
                    _s611->imageViewFormatReinterpretation, _s611->imageViewFormatSwizzle, _s611->imageView2DOn3DImage,
                    _s611->multisampleArrayImage, _s611->mutableComparisonSamplers, _s611->pointPolygons, _s611->samplerMipLodBias,
                    _s611->separateStencilMaskRef, _s611->shaderSampleRateInterpolationFunctions, _s611->tessellationIsolines,
                    _s611->tessellationPointMode, _s611->triangleFans, _s611->vertexAttributeAccessBeyondStride);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PORTABILITY_SUBSET_PROPERTIES_KHR: {
                const auto _s612 = reinterpret_cast<const VkPhysicalDevicePortabilitySubsetPropertiesKHR *>(header);
                skip |= ValidatePhysicalDevicePortabilitySubsetPropertiesKHR(_parentObjects, _s612->sType, _s612->pNext,
                                                                             _s612->minVertexInputBindingStrideAlignment);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR: {
                const auto _s613 = reinterpret_cast<const VkPhysicalDeviceShaderClockFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceShaderClockFeaturesKHR(_parentObjects, _s613->sType, _s613->pNext,
                                                                     _s613->shaderSubgroupClock, _s613->shaderDeviceClock);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PROFILE_INFO_KHR: {
                const auto _s614 = reinterpret_cast<const VkVideoDecodeH265ProfileInfoKHR *>(header);
                skip |= ValidateVideoDecodeH265ProfileInfoKHR(_parentObjects, _s614->sType, _s614->pNext, _s614->stdProfileIdc);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_CAPABILITIES_KHR: {
                const auto _s615 = reinterpret_cast<const VkVideoDecodeH265CapabilitiesKHR *>(header);
                skip |= ValidateVideoDecodeH265CapabilitiesKHR(_parentObjects, _s615->sType, _s615->pNext, _s615->maxLevelIdc);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR: {
                const auto _s616 = reinterpret_cast<const VkVideoDecodeH265SessionParametersAddInfoKHR *>(header);
                skip |= ValidateVideoDecodeH265SessionParametersAddInfoKHR(_parentObjects, _s616->sType, _s616->pNext,
                                                                           _s616->stdVPSCount, _s616->pStdVPSs, _s616->stdSPSCount,
                                                                           _s616->pStdSPSs, _s616->stdPPSCount, _s616->pStdPPSs);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR: {
                const auto _s617 = reinterpret_cast<const VkVideoDecodeH265SessionParametersCreateInfoKHR *>(header);
                skip |= ValidateVideoDecodeH265SessionParametersCreateInfoKHR(_parentObjects, _s617->sType, _s617->pNext,
                                                                              _s617->maxStdVPSCount, _s617->maxStdSPSCount,
                                                                              _s617->maxStdPPSCount, _s617->pParametersAddInfo);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PICTURE_INFO_KHR: {
                const auto _s618 = reinterpret_cast<const VkVideoDecodeH265PictureInfoKHR *>(header);
                skip |= ValidateVideoDecodeH265PictureInfoKHR(_parentObjects, _s618->sType, _s618->pNext, _s618->pStdPictureInfo,
                                                              _s618->sliceSegmentCount, _s618->pSliceSegmentOffsets);
                break;
            }
            case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR: {
                const auto _s619 = reinterpret_cast<const VkVideoDecodeH265DpbSlotInfoKHR *>(header);
                skip |= ValidateVideoDecodeH265DpbSlotInfoKHR(_parentObjects, _s619->sType, _s619->pNext, _s619->pStdReferenceInfo);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR: {
                const auto _s620 = reinterpret_cast<const VkDeviceQueueGlobalPriorityCreateInfoKHR *>(header);
                skip |= ValidateDeviceQueueGlobalPriorityCreateInfoKHR(_parentObjects, _s620->sType, _s620->pNext,
                                                                       _s620->globalPriority);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR: {
                const auto _s621 = reinterpret_cast<const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceGlobalPriorityQueryFeaturesKHR(_parentObjects, _s621->sType, _s621->pNext,
                                                                             _s621->globalPriorityQuery);
                break;
            }
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR: {
                const auto _s622 = reinterpret_cast<const VkQueueFamilyGlobalPriorityPropertiesKHR *>(header);
                skip |= ValidateQueueFamilyGlobalPriorityPropertiesKHR(_parentObjects, _s622->sType, _s622->pNext,
                                                                       _s622->priorityCount, _s622->priorities);
                break;
            }
            case VK_STRUCTURE_TYPE_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR: {
                const auto _s623 = reinterpret_cast<const VkFragmentShadingRateAttachmentInfoKHR *>(header);
                skip |= ValidateFragmentShadingRateAttachmentInfoKHR(_parentObjects, _s623->sType, _s623->pNext,
                                                                     _s623->pFragmentShadingRateAttachment,
                                                                     _s623->shadingRateAttachmentTexelSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR: {
                const auto _s624 = reinterpret_cast<const VkPipelineFragmentShadingRateStateCreateInfoKHR *>(header);
                skip |= ValidatePipelineFragmentShadingRateStateCreateInfoKHR(_parentObjects, _s624->sType, _s624->pNext,
                                                                              _s624->fragmentSize, _s624->combinerOps);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR: {
                const auto _s625 = reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceFragmentShadingRateFeaturesKHR(
                    _parentObjects, _s625->sType, _s625->pNext, _s625->pipelineFragmentShadingRate,
                    _s625->primitiveFragmentShadingRate, _s625->attachmentFragmentShadingRate);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR: {
                const auto _s626 = reinterpret_cast<const VkPhysicalDeviceFragmentShadingRatePropertiesKHR *>(header);
                skip |= ValidatePhysicalDeviceFragmentShadingRatePropertiesKHR(
                    _parentObjects, _s626->sType, _s626->pNext, _s626->minFragmentShadingRateAttachmentTexelSize,
                    _s626->maxFragmentShadingRateAttachmentTexelSize, _s626->maxFragmentShadingRateAttachmentTexelSizeAspectRatio,
                    _s626->primitiveFragmentShadingRateWithMultipleViewports, _s626->layeredShadingRateAttachments,
                    _s626->fragmentShadingRateNonTrivialCombinerOps, _s626->maxFragmentSize, _s626->maxFragmentSizeAspectRatio,
                    _s626->maxFragmentShadingRateCoverageSamples, _s626->maxFragmentShadingRateRasterizationSamples,
                    _s626->fragmentShadingRateWithShaderDepthStencilWrites, _s626->fragmentShadingRateWithSampleMask,
                    _s626->fragmentShadingRateWithShaderSampleMask, _s626->fragmentShadingRateWithConservativeRasterization,
                    _s626->fragmentShadingRateWithFragmentShaderInterlock, _s626->fragmentShadingRateWithCustomSampleLocations,
                    _s626->fragmentShadingRateStrictMultiplyCombiner);
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR: {
                const auto _s627 = reinterpret_cast<const VkSurfaceProtectedCapabilitiesKHR *>(header);
                skip |=
                    ValidateSurfaceProtectedCapabilitiesKHR(_parentObjects, _s627->sType, _s627->pNext, _s627->supportsProtected);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR: {
                const auto _s628 = reinterpret_cast<const VkPhysicalDevicePresentWaitFeaturesKHR *>(header);
                skip |=
                    ValidatePhysicalDevicePresentWaitFeaturesKHR(_parentObjects, _s628->sType, _s628->pNext, _s628->presentWait);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR: {
                const auto _s629 = reinterpret_cast<const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *>(header);
                skip |= ValidatePhysicalDevicePipelineExecutablePropertiesFeaturesKHR(_parentObjects, _s629->sType, _s629->pNext,
                                                                                      _s629->pipelineExecutableInfo);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR: {
                const auto _s630 = reinterpret_cast<const VkPipelineLibraryCreateInfoKHR *>(header);
                skip |= ValidatePipelineLibraryCreateInfoKHR(_parentObjects, _s630->sType, _s630->pNext, _s630->libraryCount,
                                                             _s630->pLibraries);
                break;
            }
            case VK_STRUCTURE_TYPE_PRESENT_ID_KHR: {
                const auto _s631 = reinterpret_cast<const VkPresentIdKHR *>(header);
                skip |= ValidatePresentIdKHR(_parentObjects, _s631->sType, _s631->pNext, _s631->swapchainCount, _s631->pPresentIds);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR: {
                const auto _s632 = reinterpret_cast<const VkPhysicalDevicePresentIdFeaturesKHR *>(header);
                skip |= ValidatePhysicalDevicePresentIdFeaturesKHR(_parentObjects, _s632->sType, _s632->pNext, _s632->presentId);
                break;
            }
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_CAPABILITIES_KHR: {
                const auto _s633 = reinterpret_cast<const VkVideoEncodeCapabilitiesKHR *>(header);
                skip |= ValidateVideoEncodeCapabilitiesKHR(_parentObjects, _s633->sType, _s633->pNext, _s633->flags,
                                                           _s633->rateControlModes, _s633->maxRateControlLayers, _s633->maxBitrate,
                                                           _s633->maxQualityLevels, _s633->encodeInputPictureGranularity,
                                                           _s633->supportedEncodeFeedbackFlags);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR: {
                const auto _s634 = reinterpret_cast<const VkQueryPoolVideoEncodeFeedbackCreateInfoKHR *>(header);
                skip |= ValidateQueryPoolVideoEncodeFeedbackCreateInfoKHR(_parentObjects, _s634->sType, _s634->pNext,
                                                                          _s634->encodeFeedbackFlags);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_USAGE_INFO_KHR: {
                const auto _s635 = reinterpret_cast<const VkVideoEncodeUsageInfoKHR *>(header);
                skip |= ValidateVideoEncodeUsageInfoKHR(_parentObjects, _s635->sType, _s635->pNext, _s635->videoUsageHints,
                                                        _s635->videoContentHints, _s635->tuningMode);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR: {
                const auto _s636 = reinterpret_cast<const VkVideoEncodeRateControlInfoKHR *>(header);
                skip |= ValidateVideoEncodeRateControlInfoKHR(_parentObjects, _s636->sType, _s636->pNext, _s636->flags,
                                                              _s636->rateControlMode, _s636->layerCount, _s636->pLayers,
                                                              _s636->virtualBufferSizeInMs, _s636->initialVirtualBufferSizeInMs);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR: {
                const auto _s637 = reinterpret_cast<const VkVideoEncodeQualityLevelInfoKHR *>(header);
                skip |= ValidateVideoEncodeQualityLevelInfoKHR(_parentObjects, _s637->sType, _s637->pNext, _s637->qualityLevel);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV: {
                const auto _s638 = reinterpret_cast<const VkQueueFamilyCheckpointProperties2NV *>(header);
                skip |= ValidateQueueFamilyCheckpointProperties2NV(_parentObjects, _s638->sType, _s638->pNext,
                                                                   _s638->checkpointExecutionStageMask);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR: {
                const auto _s639 = reinterpret_cast<const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceFragmentShaderBarycentricFeaturesKHR(_parentObjects, _s639->sType, _s639->pNext,
                                                                                   _s639->fragmentShaderBarycentric);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR: {
                const auto _s640 = reinterpret_cast<const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR *>(header);
                skip |= ValidatePhysicalDeviceFragmentShaderBarycentricPropertiesKHR(
                    _parentObjects, _s640->sType, _s640->pNext, _s640->triStripVertexOrderIndependentOfProvokingVertex);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR: {
                const auto _s641 = reinterpret_cast<const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(
                    _parentObjects, _s641->sType, _s641->pNext, _s641->shaderSubgroupUniformControlFlow);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR: {
                const auto _s642 = reinterpret_cast<const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(
                    _parentObjects, _s642->sType, _s642->pNext, _s642->workgroupMemoryExplicitLayout,
                    _s642->workgroupMemoryExplicitLayoutScalarBlockLayout, _s642->workgroupMemoryExplicitLayout8BitAccess,
                    _s642->workgroupMemoryExplicitLayout16BitAccess);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR: {
                const auto _s643 = reinterpret_cast<const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceRayTracingMaintenance1FeaturesKHR(_parentObjects, _s643->sType, _s643->pNext,
                                                                                _s643->rayTracingMaintenance1,
                                                                                _s643->rayTracingPipelineTraceRaysIndirect2);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR: {
                const auto _s644 = reinterpret_cast<const VkPhysicalDeviceMaintenance5FeaturesKHR *>(header);
                skip |=
                    ValidatePhysicalDeviceMaintenance5FeaturesKHR(_parentObjects, _s644->sType, _s644->pNext, _s644->maintenance5);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES_KHR: {
                const auto _s645 = reinterpret_cast<const VkPhysicalDeviceMaintenance5PropertiesKHR *>(header);
                skip |= ValidatePhysicalDeviceMaintenance5PropertiesKHR(
                    _parentObjects, _s645->sType, _s645->pNext, _s645->earlyFragmentMultisampleCoverageAfterSampleCounting,
                    _s645->earlyFragmentSampleMaskTestBeforeSampleCounting, _s645->depthStencilSwizzleOneSupport,
                    _s645->polygonModePointSize, _s645->nonStrictSinglePixelWideLinesUseParallelogram,
                    _s645->nonStrictWideLinesUseParallelogram);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO_KHR: {
                const auto _s646 = reinterpret_cast<const VkPipelineCreateFlags2CreateInfoKHR *>(header);
                skip |= ValidatePipelineCreateFlags2CreateInfoKHR(_parentObjects, _s646->sType, _s646->pNext, _s646->flags);
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_USAGE_FLAGS_2_CREATE_INFO_KHR: {
                const auto _s647 = reinterpret_cast<const VkBufferUsageFlags2CreateInfoKHR *>(header);
                skip |= ValidateBufferUsageFlags2CreateInfoKHR(_parentObjects, _s647->sType, _s647->pNext, _s647->usage);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR: {
                const auto _s648 = reinterpret_cast<const VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceRayTracingPositionFetchFeaturesKHR(_parentObjects, _s648->sType, _s648->pNext,
                                                                                 _s648->rayTracingPositionFetch);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR: {
                const auto _s649 = reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceCooperativeMatrixFeaturesKHR(_parentObjects, _s649->sType, _s649->pNext,
                                                                           _s649->cooperativeMatrix,
                                                                           _s649->cooperativeMatrixRobustBufferAccess);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR: {
                const auto _s650 = reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixPropertiesKHR *>(header);
                skip |= ValidatePhysicalDeviceCooperativeMatrixPropertiesKHR(_parentObjects, _s650->sType, _s650->pNext,
                                                                             _s650->cooperativeMatrixSupportedStages);
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT: {
                const auto _s651 = reinterpret_cast<const VkDebugReportCallbackCreateInfoEXT *>(header);
                skip |= ValidateDebugReportCallbackCreateInfoEXT(_parentObjects, _s651->sType, _s651->pNext, _s651->flags,
                                                                 _s651->pfnCallback, _s651->pUserData);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD: {
                const auto _s652 = reinterpret_cast<const VkPipelineRasterizationStateRasterizationOrderAMD *>(header);
                skip |= ValidatePipelineRasterizationStateRasterizationOrderAMD(_parentObjects, _s652->sType, _s652->pNext,
                                                                                _s652->rasterizationOrder);
                break;
            }
            case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV: {
                const auto _s653 = reinterpret_cast<const VkDedicatedAllocationImageCreateInfoNV *>(header);
                skip |= ValidateDedicatedAllocationImageCreateInfoNV(_parentObjects, _s653->sType, _s653->pNext,
                                                                     _s653->dedicatedAllocation);
                break;
            }
            case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV: {
                const auto _s654 = reinterpret_cast<const VkDedicatedAllocationBufferCreateInfoNV *>(header);
                skip |= ValidateDedicatedAllocationBufferCreateInfoNV(_parentObjects, _s654->sType, _s654->pNext,
                                                                      _s654->dedicatedAllocation);
                break;
            }
            case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV: {
                const auto _s655 = reinterpret_cast<const VkDedicatedAllocationMemoryAllocateInfoNV *>(header);
                skip |= ValidateDedicatedAllocationMemoryAllocateInfoNV(_parentObjects, _s655->sType, _s655->pNext, _s655->image,
                                                                        _s655->buffer);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT: {
                const auto _s656 = reinterpret_cast<const VkPhysicalDeviceTransformFeedbackFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceTransformFeedbackFeaturesEXT(_parentObjects, _s656->sType, _s656->pNext,
                                                                           _s656->transformFeedback, _s656->geometryStreams);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT: {
                const auto _s657 = reinterpret_cast<const VkPhysicalDeviceTransformFeedbackPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceTransformFeedbackPropertiesEXT(
                    _parentObjects, _s657->sType, _s657->pNext, _s657->maxTransformFeedbackStreams,
                    _s657->maxTransformFeedbackBuffers, _s657->maxTransformFeedbackBufferSize,
                    _s657->maxTransformFeedbackStreamDataSize, _s657->maxTransformFeedbackBufferDataSize,
                    _s657->maxTransformFeedbackBufferDataStride, _s657->transformFeedbackQueries,
                    _s657->transformFeedbackStreamsLinesTriangles, _s657->transformFeedbackRasterizationStreamSelect,
                    _s657->transformFeedbackDraw);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT: {
                const auto _s658 = reinterpret_cast<const VkPipelineRasterizationStateStreamCreateInfoEXT *>(header);
                skip |= ValidatePipelineRasterizationStateStreamCreateInfoEXT(_parentObjects, _s658->sType, _s658->pNext,
                                                                              _s658->flags, _s658->rasterizationStream);
                break;
            }
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_CAPABILITIES_EXT: {
                const auto _s659 = reinterpret_cast<const VkVideoEncodeH264CapabilitiesEXT *>(header);
                skip |= ValidateVideoEncodeH264CapabilitiesEXT(
                    _parentObjects, _s659->sType, _s659->pNext, _s659->flags, _s659->maxLevelIdc, _s659->maxSliceCount,
                    _s659->maxPPictureL0ReferenceCount, _s659->maxBPictureL0ReferenceCount, _s659->maxL1ReferenceCount,
                    _s659->maxTemporalLayerCount, _s659->expectDyadicTemporalLayerPattern, _s659->minQp, _s659->maxQp,
                    _s659->prefersGopRemainingFrames, _s659->requiresGopRemainingFrames, _s659->stdSyntaxFlags);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_QUALITY_LEVEL_PROPERTIES_EXT: {
                const auto _s660 = reinterpret_cast<const VkVideoEncodeH264QualityLevelPropertiesEXT *>(header);
                skip |= ValidateVideoEncodeH264QualityLevelPropertiesEXT(
                    _parentObjects, _s660->sType, _s660->pNext, _s660->preferredRateControlFlags, _s660->preferredGopFrameCount,
                    _s660->preferredIdrPeriod, _s660->preferredConsecutiveBFrameCount, _s660->preferredTemporalLayerCount,
                    _s660->preferredConstantQp, _s660->preferredMaxL0ReferenceCount, _s660->preferredMaxL1ReferenceCount,
                    _s660->preferredStdEntropyCodingModeFlag);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_CREATE_INFO_EXT: {
                const auto _s661 = reinterpret_cast<const VkVideoEncodeH264SessionCreateInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264SessionCreateInfoEXT(_parentObjects, _s661->sType, _s661->pNext,
                                                                    _s661->useMaxLevelIdc, _s661->maxLevelIdc);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_EXT: {
                const auto _s662 = reinterpret_cast<const VkVideoEncodeH264SessionParametersAddInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264SessionParametersAddInfoEXT(_parentObjects, _s662->sType, _s662->pNext,
                                                                           _s662->stdSPSCount, _s662->pStdSPSs, _s662->stdPPSCount,
                                                                           _s662->pStdPPSs);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_EXT: {
                const auto _s663 = reinterpret_cast<const VkVideoEncodeH264SessionParametersCreateInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264SessionParametersCreateInfoEXT(_parentObjects, _s663->sType, _s663->pNext,
                                                                              _s663->maxStdSPSCount, _s663->maxStdPPSCount,
                                                                              _s663->pParametersAddInfo);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_GET_INFO_EXT: {
                const auto _s664 = reinterpret_cast<const VkVideoEncodeH264SessionParametersGetInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264SessionParametersGetInfoEXT(_parentObjects, _s664->sType, _s664->pNext,
                                                                           _s664->writeStdSPS, _s664->writeStdPPS, _s664->stdSPSId,
                                                                           _s664->stdPPSId);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_SESSION_PARAMETERS_FEEDBACK_INFO_EXT: {
                const auto _s665 = reinterpret_cast<const VkVideoEncodeH264SessionParametersFeedbackInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264SessionParametersFeedbackInfoEXT(
                    _parentObjects, _s665->sType, _s665->pNext, _s665->hasStdSPSOverrides, _s665->hasStdPPSOverrides);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PICTURE_INFO_EXT: {
                const auto _s666 = reinterpret_cast<const VkVideoEncodeH264PictureInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264PictureInfoEXT(_parentObjects, _s666->sType, _s666->pNext,
                                                              _s666->naluSliceEntryCount, _s666->pNaluSliceEntries,
                                                              _s666->pStdPictureInfo, _s666->generatePrefixNalu);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_DPB_SLOT_INFO_EXT: {
                const auto _s667 = reinterpret_cast<const VkVideoEncodeH264DpbSlotInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264DpbSlotInfoEXT(_parentObjects, _s667->sType, _s667->pNext, _s667->pStdReferenceInfo);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_PROFILE_INFO_EXT: {
                const auto _s668 = reinterpret_cast<const VkVideoEncodeH264ProfileInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264ProfileInfoEXT(_parentObjects, _s668->sType, _s668->pNext, _s668->stdProfileIdc);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_INFO_EXT: {
                const auto _s669 = reinterpret_cast<const VkVideoEncodeH264RateControlInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264RateControlInfoEXT(_parentObjects, _s669->sType, _s669->pNext, _s669->flags,
                                                                  _s669->gopFrameCount, _s669->idrPeriod,
                                                                  _s669->consecutiveBFrameCount, _s669->temporalLayerCount);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_EXT: {
                const auto _s670 = reinterpret_cast<const VkVideoEncodeH264RateControlLayerInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264RateControlLayerInfoEXT(_parentObjects, _s670->sType, _s670->pNext, _s670->useMinQp,
                                                                       _s670->minQp, _s670->useMaxQp, _s670->maxQp,
                                                                       _s670->useMaxFrameSize, _s670->maxFrameSize);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H264_GOP_REMAINING_FRAME_INFO_EXT: {
                const auto _s671 = reinterpret_cast<const VkVideoEncodeH264GopRemainingFrameInfoEXT *>(header);
                skip |= ValidateVideoEncodeH264GopRemainingFrameInfoEXT(_parentObjects, _s671->sType, _s671->pNext,
                                                                        _s671->useGopRemainingFrames, _s671->gopRemainingI,
                                                                        _s671->gopRemainingP, _s671->gopRemainingB);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_CAPABILITIES_EXT: {
                const auto _s672 = reinterpret_cast<const VkVideoEncodeH265CapabilitiesEXT *>(header);
                skip |= ValidateVideoEncodeH265CapabilitiesEXT(
                    _parentObjects, _s672->sType, _s672->pNext, _s672->flags, _s672->maxLevelIdc, _s672->maxSliceSegmentCount,
                    _s672->maxTiles, _s672->ctbSizes, _s672->transformBlockSizes, _s672->maxPPictureL0ReferenceCount,
                    _s672->maxBPictureL0ReferenceCount, _s672->maxL1ReferenceCount, _s672->maxSubLayerCount,
                    _s672->expectDyadicTemporalSubLayerPattern, _s672->minQp, _s672->maxQp, _s672->prefersGopRemainingFrames,
                    _s672->requiresGopRemainingFrames, _s672->stdSyntaxFlags);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_CREATE_INFO_EXT: {
                const auto _s673 = reinterpret_cast<const VkVideoEncodeH265SessionCreateInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265SessionCreateInfoEXT(_parentObjects, _s673->sType, _s673->pNext,
                                                                    _s673->useMaxLevelIdc, _s673->maxLevelIdc);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_QUALITY_LEVEL_PROPERTIES_EXT: {
                const auto _s674 = reinterpret_cast<const VkVideoEncodeH265QualityLevelPropertiesEXT *>(header);
                skip |= ValidateVideoEncodeH265QualityLevelPropertiesEXT(
                    _parentObjects, _s674->sType, _s674->pNext, _s674->preferredRateControlFlags, _s674->preferredGopFrameCount,
                    _s674->preferredIdrPeriod, _s674->preferredConsecutiveBFrameCount, _s674->preferredSubLayerCount,
                    _s674->preferredConstantQp, _s674->preferredMaxL0ReferenceCount, _s674->preferredMaxL1ReferenceCount);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_EXT: {
                const auto _s675 = reinterpret_cast<const VkVideoEncodeH265SessionParametersAddInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265SessionParametersAddInfoEXT(_parentObjects, _s675->sType, _s675->pNext,
                                                                           _s675->stdVPSCount, _s675->pStdVPSs, _s675->stdSPSCount,
                                                                           _s675->pStdSPSs, _s675->stdPPSCount, _s675->pStdPPSs);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_EXT: {
                const auto _s676 = reinterpret_cast<const VkVideoEncodeH265SessionParametersCreateInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265SessionParametersCreateInfoEXT(_parentObjects, _s676->sType, _s676->pNext,
                                                                              _s676->maxStdVPSCount, _s676->maxStdSPSCount,
                                                                              _s676->maxStdPPSCount, _s676->pParametersAddInfo);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_GET_INFO_EXT: {
                const auto _s677 = reinterpret_cast<const VkVideoEncodeH265SessionParametersGetInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265SessionParametersGetInfoEXT(
                    _parentObjects, _s677->sType, _s677->pNext, _s677->writeStdVPS, _s677->writeStdSPS, _s677->writeStdPPS,
                    _s677->stdVPSId, _s677->stdSPSId, _s677->stdPPSId);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_SESSION_PARAMETERS_FEEDBACK_INFO_EXT: {
                const auto _s678 = reinterpret_cast<const VkVideoEncodeH265SessionParametersFeedbackInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265SessionParametersFeedbackInfoEXT(
                    _parentObjects, _s678->sType, _s678->pNext, _s678->hasStdVPSOverrides, _s678->hasStdSPSOverrides,
                    _s678->hasStdPPSOverrides);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PICTURE_INFO_EXT: {
                const auto _s679 = reinterpret_cast<const VkVideoEncodeH265PictureInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265PictureInfoEXT(_parentObjects, _s679->sType, _s679->pNext,
                                                              _s679->naluSliceSegmentEntryCount, _s679->pNaluSliceSegmentEntries,
                                                              _s679->pStdPictureInfo);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_DPB_SLOT_INFO_EXT: {
                const auto _s680 = reinterpret_cast<const VkVideoEncodeH265DpbSlotInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265DpbSlotInfoEXT(_parentObjects, _s680->sType, _s680->pNext, _s680->pStdReferenceInfo);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_PROFILE_INFO_EXT: {
                const auto _s681 = reinterpret_cast<const VkVideoEncodeH265ProfileInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265ProfileInfoEXT(_parentObjects, _s681->sType, _s681->pNext, _s681->stdProfileIdc);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_INFO_EXT: {
                const auto _s682 = reinterpret_cast<const VkVideoEncodeH265RateControlInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265RateControlInfoEXT(_parentObjects, _s682->sType, _s682->pNext, _s682->flags,
                                                                  _s682->gopFrameCount, _s682->idrPeriod,
                                                                  _s682->consecutiveBFrameCount, _s682->subLayerCount);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_EXT: {
                const auto _s683 = reinterpret_cast<const VkVideoEncodeH265RateControlLayerInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265RateControlLayerInfoEXT(_parentObjects, _s683->sType, _s683->pNext, _s683->useMinQp,
                                                                       _s683->minQp, _s683->useMaxQp, _s683->maxQp,
                                                                       _s683->useMaxFrameSize, _s683->maxFrameSize);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_VIDEO_ENCODE_H265_GOP_REMAINING_FRAME_INFO_EXT: {
                const auto _s684 = reinterpret_cast<const VkVideoEncodeH265GopRemainingFrameInfoEXT *>(header);
                skip |= ValidateVideoEncodeH265GopRemainingFrameInfoEXT(_parentObjects, _s684->sType, _s684->pNext,
                                                                        _s684->useGopRemainingFrames, _s684->gopRemainingI,
                                                                        _s684->gopRemainingP, _s684->gopRemainingB);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD: {
                const auto _s685 = reinterpret_cast<const VkTextureLODGatherFormatPropertiesAMD *>(header);
                skip |= ValidateTextureLODGatherFormatPropertiesAMD(_parentObjects, _s685->sType, _s685->pNext,
                                                                    _s685->supportsTextureGatherLODBiasAMD);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV: {
                const auto _s686 = reinterpret_cast<const VkPhysicalDeviceCornerSampledImageFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceCornerSampledImageFeaturesNV(_parentObjects, _s686->sType, _s686->pNext,
                                                                           _s686->cornerSampledImage);
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV: {
                const auto _s687 = reinterpret_cast<const VkExternalMemoryImageCreateInfoNV *>(header);
                skip |= ValidateExternalMemoryImageCreateInfoNV(_parentObjects, _s687->sType, _s687->pNext, _s687->handleTypes);
                break;
            }
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV: {
                const auto _s688 = reinterpret_cast<const VkExportMemoryAllocateInfoNV *>(header);
                skip |= ValidateExportMemoryAllocateInfoNV(_parentObjects, _s688->sType, _s688->pNext, _s688->handleTypes);
                break;
            }
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV: {
                const auto _s689 = reinterpret_cast<const VkImportMemoryWin32HandleInfoNV *>(header);
                skip |= ValidateImportMemoryWin32HandleInfoNV(_parentObjects, _s689->sType, _s689->pNext, _s689->handleType,
                                                              _s689->handle);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV: {
                const auto _s690 = reinterpret_cast<const VkExportMemoryWin32HandleInfoNV *>(header);
                skip |= ValidateExportMemoryWin32HandleInfoNV(_parentObjects, _s690->sType, _s690->pNext, _s690->pAttributes,
                                                              _s690->dwAccess);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV: {
                const auto _s691 = reinterpret_cast<const VkWin32KeyedMutexAcquireReleaseInfoNV *>(header);
                skip |= ValidateWin32KeyedMutexAcquireReleaseInfoNV(
                    _parentObjects, _s691->sType, _s691->pNext, _s691->acquireCount, _s691->pAcquireSyncs, _s691->pAcquireKeys,
                    _s691->pAcquireTimeoutMilliseconds, _s691->releaseCount, _s691->pReleaseSyncs, _s691->pReleaseKeys);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT: {
                const auto _s692 = reinterpret_cast<const VkValidationFlagsEXT *>(header);
                skip |= ValidateValidationFlagsEXT(_parentObjects, _s692->sType, _s692->pNext, _s692->disabledValidationCheckCount,
                                                   _s692->pDisabledValidationChecks);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT: {
                const auto _s693 = reinterpret_cast<const VkImageViewASTCDecodeModeEXT *>(header);
                skip |= ValidateImageViewASTCDecodeModeEXT(_parentObjects, _s693->sType, _s693->pNext, _s693->decodeMode);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT: {
                const auto _s694 = reinterpret_cast<const VkPhysicalDeviceASTCDecodeFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceASTCDecodeFeaturesEXT(_parentObjects, _s694->sType, _s694->pNext,
                                                                    _s694->decodeModeSharedExponent);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT: {
                const auto _s695 = reinterpret_cast<const VkPhysicalDevicePipelineRobustnessFeaturesEXT *>(header);
                skip |= ValidatePhysicalDevicePipelineRobustnessFeaturesEXT(_parentObjects, _s695->sType, _s695->pNext,
                                                                            _s695->pipelineRobustness);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES_EXT: {
                const auto _s696 = reinterpret_cast<const VkPhysicalDevicePipelineRobustnessPropertiesEXT *>(header);
                skip |= ValidatePhysicalDevicePipelineRobustnessPropertiesEXT(
                    _parentObjects, _s696->sType, _s696->pNext, _s696->defaultRobustnessStorageBuffers,
                    _s696->defaultRobustnessUniformBuffers, _s696->defaultRobustnessVertexInputs, _s696->defaultRobustnessImages);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO_EXT: {
                const auto _s697 = reinterpret_cast<const VkPipelineRobustnessCreateInfoEXT *>(header);
                skip |= ValidatePipelineRobustnessCreateInfoEXT(_parentObjects, _s697->sType, _s697->pNext, _s697->storageBuffers,
                                                                _s697->uniformBuffers, _s697->vertexInputs, _s697->images);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT: {
                const auto _s698 = reinterpret_cast<const VkPhysicalDeviceConditionalRenderingFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceConditionalRenderingFeaturesEXT(
                    _parentObjects, _s698->sType, _s698->pNext, _s698->conditionalRendering, _s698->inheritedConditionalRendering);
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT: {
                const auto _s699 = reinterpret_cast<const VkCommandBufferInheritanceConditionalRenderingInfoEXT *>(header);
                skip |= ValidateCommandBufferInheritanceConditionalRenderingInfoEXT(_parentObjects, _s699->sType, _s699->pNext,
                                                                                    _s699->conditionalRenderingEnable);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV: {
                const auto _s700 = reinterpret_cast<const VkPipelineViewportWScalingStateCreateInfoNV *>(header);
                skip |= ValidatePipelineViewportWScalingStateCreateInfoNV(_parentObjects, _s700->sType, _s700->pNext,
                                                                          _s700->viewportWScalingEnable, _s700->viewportCount,
                                                                          _s700->pViewportWScalings);
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT: {
                const auto _s701 = reinterpret_cast<const VkSwapchainCounterCreateInfoEXT *>(header);
                skip |= ValidateSwapchainCounterCreateInfoEXT(_parentObjects, _s701->sType, _s701->pNext, _s701->surfaceCounters);
                break;
            }
            case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE: {
                const auto _s702 = reinterpret_cast<const VkPresentTimesInfoGOOGLE *>(header);
                skip |= ValidatePresentTimesInfoGOOGLE(_parentObjects, _s702->sType, _s702->pNext, _s702->swapchainCount,
                                                       _s702->pTimes);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX: {
                const auto _s703 = reinterpret_cast<const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *>(header);
                skip |= ValidatePhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(_parentObjects, _s703->sType, _s703->pNext,
                                                                                      _s703->perViewPositionAllComponents);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV: {
                const auto _s704 = reinterpret_cast<const VkPipelineViewportSwizzleStateCreateInfoNV *>(header);
                skip |= ValidatePipelineViewportSwizzleStateCreateInfoNV(_parentObjects, _s704->sType, _s704->pNext, _s704->flags,
                                                                         _s704->viewportCount, _s704->pViewportSwizzles);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT: {
                const auto _s705 = reinterpret_cast<const VkPhysicalDeviceDiscardRectanglePropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceDiscardRectanglePropertiesEXT(_parentObjects, _s705->sType, _s705->pNext,
                                                                            _s705->maxDiscardRectangles);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT: {
                const auto _s706 = reinterpret_cast<const VkPipelineDiscardRectangleStateCreateInfoEXT *>(header);
                skip |= ValidatePipelineDiscardRectangleStateCreateInfoEXT(_parentObjects, _s706->sType, _s706->pNext, _s706->flags,
                                                                           _s706->discardRectangleMode,
                                                                           _s706->discardRectangleCount, _s706->pDiscardRectangles);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT: {
                const auto _s707 = reinterpret_cast<const VkPhysicalDeviceConservativeRasterizationPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceConservativeRasterizationPropertiesEXT(
                    _parentObjects, _s707->sType, _s707->pNext, _s707->primitiveOverestimationSize,
                    _s707->maxExtraPrimitiveOverestimationSize, _s707->extraPrimitiveOverestimationSizeGranularity,
                    _s707->primitiveUnderestimation, _s707->conservativePointAndLineRasterization,
                    _s707->degenerateTrianglesRasterized, _s707->degenerateLinesRasterized,
                    _s707->fullyCoveredFragmentShaderInputVariable, _s707->conservativeRasterizationPostDepthCoverage);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT: {
                const auto _s708 = reinterpret_cast<const VkPipelineRasterizationConservativeStateCreateInfoEXT *>(header);
                skip |= ValidatePipelineRasterizationConservativeStateCreateInfoEXT(
                    _parentObjects, _s708->sType, _s708->pNext, _s708->flags, _s708->conservativeRasterizationMode,
                    _s708->extraPrimitiveOverestimationSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT: {
                const auto _s709 = reinterpret_cast<const VkPhysicalDeviceDepthClipEnableFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceDepthClipEnableFeaturesEXT(_parentObjects, _s709->sType, _s709->pNext,
                                                                         _s709->depthClipEnable);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT: {
                const auto _s710 = reinterpret_cast<const VkPipelineRasterizationDepthClipStateCreateInfoEXT *>(header);
                skip |= ValidatePipelineRasterizationDepthClipStateCreateInfoEXT(_parentObjects, _s710->sType, _s710->pNext,
                                                                                 _s710->flags, _s710->depthClipEnable);
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT: {
                const auto _s711 = reinterpret_cast<const VkDebugUtilsObjectNameInfoEXT *>(header);
                skip |= ValidateDebugUtilsObjectNameInfoEXT(_parentObjects, _s711->sType, _s711->pNext, _s711->objectType,
                                                            _s711->objectHandle, _s711->pObjectName);
                break;
            }
            case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT: {
                const auto _s712 = reinterpret_cast<const VkDebugUtilsMessengerCreateInfoEXT *>(header);
                skip |= ValidateDebugUtilsMessengerCreateInfoEXT(_parentObjects, _s712->sType, _s712->pNext, _s712->flags,
                                                                 _s712->messageSeverity, _s712->messageType, _s712->pfnUserCallback,
                                                                 _s712->pUserData);
                break;
            }
#ifdef VK_USE_PLATFORM_ANDROID_KHR
            case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID: {
                const auto _s713 = reinterpret_cast<const VkAndroidHardwareBufferUsageANDROID *>(header);
                skip |= ValidateAndroidHardwareBufferUsageANDROID(_parentObjects, _s713->sType, _s713->pNext,
                                                                  _s713->androidHardwareBufferUsage);
                break;
            }
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
            case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID: {
                const auto _s714 = reinterpret_cast<const VkAndroidHardwareBufferFormatPropertiesANDROID *>(header);
                skip |= ValidateAndroidHardwareBufferFormatPropertiesANDROID(
                    _parentObjects, _s714->sType, _s714->pNext, _s714->format, _s714->externalFormat, _s714->formatFeatures,
                    _s714->samplerYcbcrConversionComponents, _s714->suggestedYcbcrModel, _s714->suggestedYcbcrRange,
                    _s714->suggestedXChromaOffset, _s714->suggestedYChromaOffset);
                break;
            }
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
            case VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID: {
                const auto _s715 = reinterpret_cast<const VkImportAndroidHardwareBufferInfoANDROID *>(header);
                skip |= ValidateImportAndroidHardwareBufferInfoANDROID(_parentObjects, _s715->sType, _s715->pNext, _s715->buffer);
                break;
            }
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
            case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID: {
                const auto _s716 = reinterpret_cast<const VkExternalFormatANDROID *>(header);
                skip |= ValidateExternalFormatANDROID(_parentObjects, _s716->sType, _s716->pNext, _s716->externalFormat);
                break;
            }
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
            case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_2_ANDROID: {
                const auto _s717 = reinterpret_cast<const VkAndroidHardwareBufferFormatProperties2ANDROID *>(header);
                skip |= ValidateAndroidHardwareBufferFormatProperties2ANDROID(
                    _parentObjects, _s717->sType, _s717->pNext, _s717->format, _s717->externalFormat, _s717->formatFeatures,
                    _s717->samplerYcbcrConversionComponents, _s717->suggestedYcbcrModel, _s717->suggestedYcbcrRange,
                    _s717->suggestedXChromaOffset, _s717->suggestedYChromaOffset);
                break;
            }
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ENQUEUE_FEATURES_AMDX: {
                const auto _s718 = reinterpret_cast<const VkPhysicalDeviceShaderEnqueueFeaturesAMDX *>(header);
                skip |= ValidatePhysicalDeviceShaderEnqueueFeaturesAMDX(_parentObjects, _s718->sType, _s718->pNext,
                                                                        _s718->shaderEnqueue);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ENQUEUE_PROPERTIES_AMDX: {
                const auto _s719 = reinterpret_cast<const VkPhysicalDeviceShaderEnqueuePropertiesAMDX *>(header);
                skip |= ValidatePhysicalDeviceShaderEnqueuePropertiesAMDX(
                    _parentObjects, _s719->sType, _s719->pNext, _s719->maxExecutionGraphDepth,
                    _s719->maxExecutionGraphShaderOutputNodes, _s719->maxExecutionGraphShaderPayloadSize,
                    _s719->maxExecutionGraphShaderPayloadCount, _s719->executionGraphDispatchAddressAlignment);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_NODE_CREATE_INFO_AMDX: {
                const auto _s720 = reinterpret_cast<const VkPipelineShaderStageNodeCreateInfoAMDX *>(header);
                skip |= ValidatePipelineShaderStageNodeCreateInfoAMDX(_parentObjects, _s720->sType, _s720->pNext, _s720->pName,
                                                                      _s720->index);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT: {
                const auto _s721 = reinterpret_cast<const VkSampleLocationsInfoEXT *>(header);
                skip |= ValidateSampleLocationsInfoEXT(_parentObjects, _s721->sType, _s721->pNext, _s721->sampleLocationsPerPixel,
                                                       _s721->sampleLocationGridSize, _s721->sampleLocationsCount,
                                                       _s721->pSampleLocations);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT: {
                const auto _s722 = reinterpret_cast<const VkRenderPassSampleLocationsBeginInfoEXT *>(header);
                skip |= ValidateRenderPassSampleLocationsBeginInfoEXT(
                    _parentObjects, _s722->sType, _s722->pNext, _s722->attachmentInitialSampleLocationsCount,
                    _s722->pAttachmentInitialSampleLocations, _s722->postSubpassSampleLocationsCount,
                    _s722->pPostSubpassSampleLocations);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT: {
                const auto _s723 = reinterpret_cast<const VkPipelineSampleLocationsStateCreateInfoEXT *>(header);
                skip |= ValidatePipelineSampleLocationsStateCreateInfoEXT(_parentObjects, _s723->sType, _s723->pNext,
                                                                          _s723->sampleLocationsEnable, _s723->sampleLocationsInfo);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT: {
                const auto _s724 = reinterpret_cast<const VkPhysicalDeviceSampleLocationsPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceSampleLocationsPropertiesEXT(
                    _parentObjects, _s724->sType, _s724->pNext, _s724->sampleLocationSampleCounts, _s724->maxSampleLocationGridSize,
                    _s724->sampleLocationCoordinateRange, _s724->sampleLocationSubPixelBits, _s724->variableSampleLocations);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT: {
                const auto _s725 = reinterpret_cast<const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceBlendOperationAdvancedFeaturesEXT(_parentObjects, _s725->sType, _s725->pNext,
                                                                                _s725->advancedBlendCoherentOperations);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT: {
                const auto _s726 = reinterpret_cast<const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceBlendOperationAdvancedPropertiesEXT(
                    _parentObjects, _s726->sType, _s726->pNext, _s726->advancedBlendMaxColorAttachments,
                    _s726->advancedBlendIndependentBlend, _s726->advancedBlendNonPremultipliedSrcColor,
                    _s726->advancedBlendNonPremultipliedDstColor, _s726->advancedBlendCorrelatedOverlap,
                    _s726->advancedBlendAllOperations);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT: {
                const auto _s727 = reinterpret_cast<const VkPipelineColorBlendAdvancedStateCreateInfoEXT *>(header);
                skip |= ValidatePipelineColorBlendAdvancedStateCreateInfoEXT(_parentObjects, _s727->sType, _s727->pNext,
                                                                             _s727->srcPremultiplied, _s727->dstPremultiplied,
                                                                             _s727->blendOverlap);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV: {
                const auto _s728 = reinterpret_cast<const VkPipelineCoverageToColorStateCreateInfoNV *>(header);
                skip |=
                    ValidatePipelineCoverageToColorStateCreateInfoNV(_parentObjects, _s728->sType, _s728->pNext, _s728->flags,
                                                                     _s728->coverageToColorEnable, _s728->coverageToColorLocation);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV: {
                const auto _s729 = reinterpret_cast<const VkPipelineCoverageModulationStateCreateInfoNV *>(header);
                skip |= ValidatePipelineCoverageModulationStateCreateInfoNV(
                    _parentObjects, _s729->sType, _s729->pNext, _s729->flags, _s729->coverageModulationMode,
                    _s729->coverageModulationTableEnable, _s729->coverageModulationTableCount, _s729->pCoverageModulationTable);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV: {
                const auto _s730 = reinterpret_cast<const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceShaderSMBuiltinsPropertiesNV(_parentObjects, _s730->sType, _s730->pNext,
                                                                           _s730->shaderSMCount, _s730->shaderWarpsPerSM);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV: {
                const auto _s731 = reinterpret_cast<const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceShaderSMBuiltinsFeaturesNV(_parentObjects, _s731->sType, _s731->pNext,
                                                                         _s731->shaderSMBuiltins);
                break;
            }
            case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT: {
                const auto _s732 = reinterpret_cast<const VkDrmFormatModifierPropertiesListEXT *>(header);
                skip |= ValidateDrmFormatModifierPropertiesListEXT(
                    _parentObjects, _s732->sType, _s732->pNext, _s732->drmFormatModifierCount, _s732->pDrmFormatModifierProperties);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT: {
                const auto _s733 = reinterpret_cast<const VkPhysicalDeviceImageDrmFormatModifierInfoEXT *>(header);
                skip |= ValidatePhysicalDeviceImageDrmFormatModifierInfoEXT(
                    _parentObjects, _s733->sType, _s733->pNext, _s733->drmFormatModifier, _s733->sharingMode,
                    _s733->queueFamilyIndexCount, _s733->pQueueFamilyIndices);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT: {
                const auto _s734 = reinterpret_cast<const VkImageDrmFormatModifierListCreateInfoEXT *>(header);
                skip |= ValidateImageDrmFormatModifierListCreateInfoEXT(_parentObjects, _s734->sType, _s734->pNext,
                                                                        _s734->drmFormatModifierCount, _s734->pDrmFormatModifiers);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT: {
                const auto _s735 = reinterpret_cast<const VkImageDrmFormatModifierExplicitCreateInfoEXT *>(header);
                skip |= ValidateImageDrmFormatModifierExplicitCreateInfoEXT(
                    _parentObjects, _s735->sType, _s735->pNext, _s735->drmFormatModifier, _s735->drmFormatModifierPlaneCount,
                    _s735->pPlaneLayouts);
                break;
            }
            case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT: {
                const auto _s736 = reinterpret_cast<const VkDrmFormatModifierPropertiesList2EXT *>(header);
                skip |= ValidateDrmFormatModifierPropertiesList2EXT(
                    _parentObjects, _s736->sType, _s736->pNext, _s736->drmFormatModifierCount, _s736->pDrmFormatModifierProperties);
                break;
            }
            case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT: {
                const auto _s737 = reinterpret_cast<const VkShaderModuleValidationCacheCreateInfoEXT *>(header);
                skip |= ValidateShaderModuleValidationCacheCreateInfoEXT(_parentObjects, _s737->sType, _s737->pNext,
                                                                         _s737->validationCache);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV: {
                const auto _s738 = reinterpret_cast<const VkPipelineViewportShadingRateImageStateCreateInfoNV *>(header);
                skip |= ValidatePipelineViewportShadingRateImageStateCreateInfoNV(
                    _parentObjects, _s738->sType, _s738->pNext, _s738->shadingRateImageEnable, _s738->viewportCount,
                    _s738->pShadingRatePalettes);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV: {
                const auto _s739 = reinterpret_cast<const VkPhysicalDeviceShadingRateImageFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceShadingRateImageFeaturesNV(
                    _parentObjects, _s739->sType, _s739->pNext, _s739->shadingRateImage, _s739->shadingRateCoarseSampleOrder);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV: {
                const auto _s740 = reinterpret_cast<const VkPhysicalDeviceShadingRateImagePropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceShadingRateImagePropertiesNV(
                    _parentObjects, _s740->sType, _s740->pNext, _s740->shadingRateTexelSize, _s740->shadingRatePaletteSize,
                    _s740->shadingRateMaxCoarseSamples);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV: {
                const auto _s741 = reinterpret_cast<const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *>(header);
                skip |= ValidatePipelineViewportCoarseSampleOrderStateCreateInfoNV(
                    _parentObjects, _s741->sType, _s741->pNext, _s741->sampleOrderType, _s741->customSampleOrderCount,
                    _s741->pCustomSampleOrders);
                break;
            }
            case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV: {
                const auto _s742 = reinterpret_cast<const VkWriteDescriptorSetAccelerationStructureNV *>(header);
                skip |= ValidateWriteDescriptorSetAccelerationStructureNV(
                    _parentObjects, _s742->sType, _s742->pNext, _s742->accelerationStructureCount, _s742->pAccelerationStructures);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV: {
                const auto _s743 = reinterpret_cast<const VkPhysicalDeviceRayTracingPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceRayTracingPropertiesNV(
                    _parentObjects, _s743->sType, _s743->pNext, _s743->shaderGroupHandleSize, _s743->maxRecursionDepth,
                    _s743->maxShaderGroupStride, _s743->shaderGroupBaseAlignment, _s743->maxGeometryCount, _s743->maxInstanceCount,
                    _s743->maxTriangleCount, _s743->maxDescriptorSetAccelerationStructures);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV: {
                const auto _s744 = reinterpret_cast<const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceRepresentativeFragmentTestFeaturesNV(_parentObjects, _s744->sType, _s744->pNext,
                                                                                   _s744->representativeFragmentTest);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV: {
                const auto _s745 = reinterpret_cast<const VkPipelineRepresentativeFragmentTestStateCreateInfoNV *>(header);
                skip |= ValidatePipelineRepresentativeFragmentTestStateCreateInfoNV(_parentObjects, _s745->sType, _s745->pNext,
                                                                                    _s745->representativeFragmentTestEnable);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT: {
                const auto _s746 = reinterpret_cast<const VkPhysicalDeviceImageViewImageFormatInfoEXT *>(header);
                skip |= ValidatePhysicalDeviceImageViewImageFormatInfoEXT(_parentObjects, _s746->sType, _s746->pNext,
                                                                          _s746->imageViewType);
                break;
            }
            case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT: {
                const auto _s747 = reinterpret_cast<const VkFilterCubicImageViewImageFormatPropertiesEXT *>(header);
                skip |= ValidateFilterCubicImageViewImageFormatPropertiesEXT(_parentObjects, _s747->sType, _s747->pNext,
                                                                             _s747->filterCubic, _s747->filterCubicMinmax);
                break;
            }
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT: {
                const auto _s748 = reinterpret_cast<const VkImportMemoryHostPointerInfoEXT *>(header);
                skip |= ValidateImportMemoryHostPointerInfoEXT(_parentObjects, _s748->sType, _s748->pNext, _s748->handleType,
                                                               _s748->pHostPointer);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT: {
                const auto _s749 = reinterpret_cast<const VkPhysicalDeviceExternalMemoryHostPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceExternalMemoryHostPropertiesEXT(_parentObjects, _s749->sType, _s749->pNext,
                                                                              _s749->minImportedHostPointerAlignment);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD: {
                const auto _s750 = reinterpret_cast<const VkPipelineCompilerControlCreateInfoAMD *>(header);
                skip |= ValidatePipelineCompilerControlCreateInfoAMD(_parentObjects, _s750->sType, _s750->pNext,
                                                                     _s750->compilerControlFlags);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD: {
                const auto _s751 = reinterpret_cast<const VkPhysicalDeviceShaderCorePropertiesAMD *>(header);
                skip |= ValidatePhysicalDeviceShaderCorePropertiesAMD(
                    _parentObjects, _s751->sType, _s751->pNext, _s751->shaderEngineCount, _s751->shaderArraysPerEngineCount,
                    _s751->computeUnitsPerShaderArray, _s751->simdPerComputeUnit, _s751->wavefrontsPerSimd, _s751->wavefrontSize,
                    _s751->sgprsPerSimd, _s751->minSgprAllocation, _s751->maxSgprAllocation, _s751->sgprAllocationGranularity,
                    _s751->vgprsPerSimd, _s751->minVgprAllocation, _s751->maxVgprAllocation, _s751->vgprAllocationGranularity);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD: {
                const auto _s752 = reinterpret_cast<const VkDeviceMemoryOverallocationCreateInfoAMD *>(header);
                skip |= ValidateDeviceMemoryOverallocationCreateInfoAMD(_parentObjects, _s752->sType, _s752->pNext,
                                                                        _s752->overallocationBehavior);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT: {
                const auto _s753 = reinterpret_cast<const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceVertexAttributeDivisorPropertiesEXT(_parentObjects, _s753->sType, _s753->pNext,
                                                                                  _s753->maxVertexAttribDivisor);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT: {
                const auto _s754 = reinterpret_cast<const VkPipelineVertexInputDivisorStateCreateInfoEXT *>(header);
                skip |= ValidatePipelineVertexInputDivisorStateCreateInfoEXT(
                    _parentObjects, _s754->sType, _s754->pNext, _s754->vertexBindingDivisorCount, _s754->pVertexBindingDivisors);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT: {
                const auto _s755 = reinterpret_cast<const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceVertexAttributeDivisorFeaturesEXT(_parentObjects, _s755->sType, _s755->pNext,
                                                                                _s755->vertexAttributeInstanceRateDivisor,
                                                                                _s755->vertexAttributeInstanceRateZeroDivisor);
                break;
            }
#ifdef VK_USE_PLATFORM_GGP
            case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP: {
                const auto _s756 = reinterpret_cast<const VkPresentFrameTokenGGP *>(header);
                skip |= ValidatePresentFrameTokenGGP(_parentObjects, _s756->sType, _s756->pNext, _s756->frameToken);
                break;
            }
#endif  // VK_USE_PLATFORM_GGP
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV: {
                const auto _s757 = reinterpret_cast<const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceComputeShaderDerivativesFeaturesNV(_parentObjects, _s757->sType, _s757->pNext,
                                                                                 _s757->computeDerivativeGroupQuads,
                                                                                 _s757->computeDerivativeGroupLinear);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV: {
                const auto _s758 = reinterpret_cast<const VkPhysicalDeviceMeshShaderFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceMeshShaderFeaturesNV(_parentObjects, _s758->sType, _s758->pNext, _s758->taskShader,
                                                                   _s758->meshShader);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV: {
                const auto _s759 = reinterpret_cast<const VkPhysicalDeviceMeshShaderPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceMeshShaderPropertiesNV(
                    _parentObjects, _s759->sType, _s759->pNext, _s759->maxDrawMeshTasksCount, _s759->maxTaskWorkGroupInvocations,
                    _s759->maxTaskWorkGroupSize, _s759->maxTaskTotalMemorySize, _s759->maxTaskOutputCount,
                    _s759->maxMeshWorkGroupInvocations, _s759->maxMeshWorkGroupSize, _s759->maxMeshTotalMemorySize,
                    _s759->maxMeshOutputVertices, _s759->maxMeshOutputPrimitives, _s759->maxMeshMultiviewViewCount,
                    _s759->meshOutputPerVertexGranularity, _s759->meshOutputPerPrimitiveGranularity);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV: {
                const auto _s760 = reinterpret_cast<const VkPhysicalDeviceShaderImageFootprintFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceShaderImageFootprintFeaturesNV(_parentObjects, _s760->sType, _s760->pNext,
                                                                             _s760->imageFootprint);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV: {
                const auto _s761 = reinterpret_cast<const VkPipelineViewportExclusiveScissorStateCreateInfoNV *>(header);
                skip |= ValidatePipelineViewportExclusiveScissorStateCreateInfoNV(
                    _parentObjects, _s761->sType, _s761->pNext, _s761->exclusiveScissorCount, _s761->pExclusiveScissors);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV: {
                const auto _s762 = reinterpret_cast<const VkPhysicalDeviceExclusiveScissorFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceExclusiveScissorFeaturesNV(_parentObjects, _s762->sType, _s762->pNext,
                                                                         _s762->exclusiveScissor);
                break;
            }
            case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV: {
                const auto _s763 = reinterpret_cast<const VkQueueFamilyCheckpointPropertiesNV *>(header);
                skip |= ValidateQueueFamilyCheckpointPropertiesNV(_parentObjects, _s763->sType, _s763->pNext,
                                                                  _s763->checkpointExecutionStageMask);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL: {
                const auto _s764 = reinterpret_cast<const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *>(header);
                skip |= ValidatePhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(_parentObjects, _s764->sType, _s764->pNext,
                                                                                   _s764->shaderIntegerFunctions2);
                break;
            }
            case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL: {
                const auto _s765 = reinterpret_cast<const VkQueryPoolPerformanceQueryCreateInfoINTEL *>(header);
                skip |= ValidateQueryPoolPerformanceQueryCreateInfoINTEL(_parentObjects, _s765->sType, _s765->pNext,
                                                                         _s765->performanceCountersSampling);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT: {
                const auto _s766 = reinterpret_cast<const VkPhysicalDevicePCIBusInfoPropertiesEXT *>(header);
                skip |= ValidatePhysicalDevicePCIBusInfoPropertiesEXT(_parentObjects, _s766->sType, _s766->pNext, _s766->pciDomain,
                                                                      _s766->pciBus, _s766->pciDevice, _s766->pciFunction);
                break;
            }
            case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD: {
                const auto _s767 = reinterpret_cast<const VkDisplayNativeHdrSurfaceCapabilitiesAMD *>(header);
                skip |= ValidateDisplayNativeHdrSurfaceCapabilitiesAMD(_parentObjects, _s767->sType, _s767->pNext,
                                                                       _s767->localDimmingSupport);
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD: {
                const auto _s768 = reinterpret_cast<const VkSwapchainDisplayNativeHdrCreateInfoAMD *>(header);
                skip |= ValidateSwapchainDisplayNativeHdrCreateInfoAMD(_parentObjects, _s768->sType, _s768->pNext,
                                                                       _s768->localDimmingEnable);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT: {
                const auto _s769 = reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceFragmentDensityMapFeaturesEXT(
                    _parentObjects, _s769->sType, _s769->pNext, _s769->fragmentDensityMap, _s769->fragmentDensityMapDynamic,
                    _s769->fragmentDensityMapNonSubsampledImages);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT: {
                const auto _s770 = reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceFragmentDensityMapPropertiesEXT(
                    _parentObjects, _s770->sType, _s770->pNext, _s770->minFragmentDensityTexelSize,
                    _s770->maxFragmentDensityTexelSize, _s770->fragmentDensityInvocations);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT: {
                const auto _s771 = reinterpret_cast<const VkRenderPassFragmentDensityMapCreateInfoEXT *>(header);
                skip |= ValidateRenderPassFragmentDensityMapCreateInfoEXT(_parentObjects, _s771->sType, _s771->pNext,
                                                                          _s771->fragmentDensityMapAttachment);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD: {
                const auto _s772 = reinterpret_cast<const VkPhysicalDeviceShaderCoreProperties2AMD *>(header);
                skip |= ValidatePhysicalDeviceShaderCoreProperties2AMD(_parentObjects, _s772->sType, _s772->pNext,
                                                                       _s772->shaderCoreFeatures, _s772->activeComputeUnitCount);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD: {
                const auto _s773 = reinterpret_cast<const VkPhysicalDeviceCoherentMemoryFeaturesAMD *>(header);
                skip |= ValidatePhysicalDeviceCoherentMemoryFeaturesAMD(_parentObjects, _s773->sType, _s773->pNext,
                                                                        _s773->deviceCoherentMemory);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT: {
                const auto _s774 = reinterpret_cast<const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceShaderImageAtomicInt64FeaturesEXT(
                    _parentObjects, _s774->sType, _s774->pNext, _s774->shaderImageInt64Atomics, _s774->sparseImageInt64Atomics);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT: {
                const auto _s775 = reinterpret_cast<const VkPhysicalDeviceMemoryBudgetPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceMemoryBudgetPropertiesEXT(_parentObjects, _s775->sType, _s775->pNext,
                                                                        _s775->heapBudget, _s775->heapUsage);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT: {
                const auto _s776 = reinterpret_cast<const VkPhysicalDeviceMemoryPriorityFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceMemoryPriorityFeaturesEXT(_parentObjects, _s776->sType, _s776->pNext,
                                                                        _s776->memoryPriority);
                break;
            }
            case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT: {
                const auto _s777 = reinterpret_cast<const VkMemoryPriorityAllocateInfoEXT *>(header);
                skip |= ValidateMemoryPriorityAllocateInfoEXT(_parentObjects, _s777->sType, _s777->pNext, _s777->priority);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV: {
                const auto _s778 = reinterpret_cast<const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(_parentObjects, _s778->sType, _s778->pNext,
                                                                                         _s778->dedicatedAllocationImageAliasing);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT: {
                const auto _s779 = reinterpret_cast<const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceBufferDeviceAddressFeaturesEXT(
                    _parentObjects, _s779->sType, _s779->pNext, _s779->bufferDeviceAddress, _s779->bufferDeviceAddressCaptureReplay,
                    _s779->bufferDeviceAddressMultiDevice);
                break;
            }
            case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT: {
                const auto _s780 = reinterpret_cast<const VkBufferDeviceAddressCreateInfoEXT *>(header);
                skip |= ValidateBufferDeviceAddressCreateInfoEXT(_parentObjects, _s780->sType, _s780->pNext, _s780->deviceAddress);
                break;
            }
            case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT: {
                const auto _s781 = reinterpret_cast<const VkValidationFeaturesEXT *>(header);
                skip |= ValidateValidationFeaturesEXT(_parentObjects, _s781->sType, _s781->pNext,
                                                      _s781->enabledValidationFeatureCount, _s781->pEnabledValidationFeatures,
                                                      _s781->disabledValidationFeatureCount, _s781->pDisabledValidationFeatures);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV: {
                const auto _s782 = reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceCooperativeMatrixFeaturesNV(_parentObjects, _s782->sType, _s782->pNext,
                                                                          _s782->cooperativeMatrix,
                                                                          _s782->cooperativeMatrixRobustBufferAccess);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV: {
                const auto _s783 = reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceCooperativeMatrixPropertiesNV(_parentObjects, _s783->sType, _s783->pNext,
                                                                            _s783->cooperativeMatrixSupportedStages);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV: {
                const auto _s784 = reinterpret_cast<const VkPhysicalDeviceCoverageReductionModeFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceCoverageReductionModeFeaturesNV(_parentObjects, _s784->sType, _s784->pNext,
                                                                              _s784->coverageReductionMode);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV: {
                const auto _s785 = reinterpret_cast<const VkPipelineCoverageReductionStateCreateInfoNV *>(header);
                skip |= ValidatePipelineCoverageReductionStateCreateInfoNV(_parentObjects, _s785->sType, _s785->pNext, _s785->flags,
                                                                           _s785->coverageReductionMode);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT: {
                const auto _s786 = reinterpret_cast<const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceFragmentShaderInterlockFeaturesEXT(
                    _parentObjects, _s786->sType, _s786->pNext, _s786->fragmentShaderSampleInterlock,
                    _s786->fragmentShaderPixelInterlock, _s786->fragmentShaderShadingRateInterlock);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT: {
                const auto _s787 = reinterpret_cast<const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceYcbcrImageArraysFeaturesEXT(_parentObjects, _s787->sType, _s787->pNext,
                                                                          _s787->ycbcrImageArrays);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT: {
                const auto _s788 = reinterpret_cast<const VkPhysicalDeviceProvokingVertexFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceProvokingVertexFeaturesEXT(_parentObjects, _s788->sType, _s788->pNext,
                                                                         _s788->provokingVertexLast,
                                                                         _s788->transformFeedbackPreservesProvokingVertex);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT: {
                const auto _s789 = reinterpret_cast<const VkPhysicalDeviceProvokingVertexPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceProvokingVertexPropertiesEXT(
                    _parentObjects, _s789->sType, _s789->pNext, _s789->provokingVertexModePerPipeline,
                    _s789->transformFeedbackPreservesTriangleFanProvokingVertex);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT: {
                const auto _s790 = reinterpret_cast<const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT *>(header);
                skip |= ValidatePipelineRasterizationProvokingVertexStateCreateInfoEXT(_parentObjects, _s790->sType, _s790->pNext,
                                                                                       _s790->provokingVertexMode);
                break;
            }
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT: {
                const auto _s791 = reinterpret_cast<const VkSurfaceFullScreenExclusiveInfoEXT *>(header);
                skip |= ValidateSurfaceFullScreenExclusiveInfoEXT(_parentObjects, _s791->sType, _s791->pNext,
                                                                  _s791->fullScreenExclusive);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT: {
                const auto _s792 = reinterpret_cast<const VkSurfaceCapabilitiesFullScreenExclusiveEXT *>(header);
                skip |= ValidateSurfaceCapabilitiesFullScreenExclusiveEXT(_parentObjects, _s792->sType, _s792->pNext,
                                                                          _s792->fullScreenExclusiveSupported);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT: {
                const auto _s793 = reinterpret_cast<const VkSurfaceFullScreenExclusiveWin32InfoEXT *>(header);
                skip |= ValidateSurfaceFullScreenExclusiveWin32InfoEXT(_parentObjects, _s793->sType, _s793->pNext, _s793->hmonitor);
                break;
            }
#endif  // VK_USE_PLATFORM_WIN32_KHR
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT: {
                const auto _s794 = reinterpret_cast<const VkPhysicalDeviceLineRasterizationFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceLineRasterizationFeaturesEXT(
                    _parentObjects, _s794->sType, _s794->pNext, _s794->rectangularLines, _s794->bresenhamLines, _s794->smoothLines,
                    _s794->stippledRectangularLines, _s794->stippledBresenhamLines, _s794->stippledSmoothLines);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT: {
                const auto _s795 = reinterpret_cast<const VkPhysicalDeviceLineRasterizationPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceLineRasterizationPropertiesEXT(_parentObjects, _s795->sType, _s795->pNext,
                                                                             _s795->lineSubPixelPrecisionBits);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT: {
                const auto _s796 = reinterpret_cast<const VkPipelineRasterizationLineStateCreateInfoEXT *>(header);
                skip |= ValidatePipelineRasterizationLineStateCreateInfoEXT(_parentObjects, _s796->sType, _s796->pNext,
                                                                            _s796->lineRasterizationMode, _s796->stippledLineEnable,
                                                                            _s796->lineStippleFactor, _s796->lineStipplePattern);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT: {
                const auto _s797 = reinterpret_cast<const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceShaderAtomicFloatFeaturesEXT(
                    _parentObjects, _s797->sType, _s797->pNext, _s797->shaderBufferFloat32Atomics,
                    _s797->shaderBufferFloat32AtomicAdd, _s797->shaderBufferFloat64Atomics, _s797->shaderBufferFloat64AtomicAdd,
                    _s797->shaderSharedFloat32Atomics, _s797->shaderSharedFloat32AtomicAdd, _s797->shaderSharedFloat64Atomics,
                    _s797->shaderSharedFloat64AtomicAdd, _s797->shaderImageFloat32Atomics, _s797->shaderImageFloat32AtomicAdd,
                    _s797->sparseImageFloat32Atomics, _s797->sparseImageFloat32AtomicAdd);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT: {
                const auto _s798 = reinterpret_cast<const VkPhysicalDeviceIndexTypeUint8FeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceIndexTypeUint8FeaturesEXT(_parentObjects, _s798->sType, _s798->pNext,
                                                                        _s798->indexTypeUint8);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT: {
                const auto _s799 = reinterpret_cast<const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceExtendedDynamicStateFeaturesEXT(_parentObjects, _s799->sType, _s799->pNext,
                                                                              _s799->extendedDynamicState);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT: {
                const auto _s800 = reinterpret_cast<const VkPhysicalDeviceHostImageCopyFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceHostImageCopyFeaturesEXT(_parentObjects, _s800->sType, _s800->pNext,
                                                                       _s800->hostImageCopy);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES_EXT: {
                const auto _s801 = reinterpret_cast<const VkPhysicalDeviceHostImageCopyPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceHostImageCopyPropertiesEXT(
                    _parentObjects, _s801->sType, _s801->pNext, _s801->copySrcLayoutCount, _s801->pCopySrcLayouts,
                    _s801->copyDstLayoutCount, _s801->pCopyDstLayouts, _s801->optimalTilingLayoutUUID,
                    _s801->identicalMemoryTypeRequirements);
                break;
            }
            case VK_STRUCTURE_TYPE_SUBRESOURCE_HOST_MEMCPY_SIZE_EXT: {
                const auto _s802 = reinterpret_cast<const VkSubresourceHostMemcpySizeEXT *>(header);
                skip |= ValidateSubresourceHostMemcpySizeEXT(_parentObjects, _s802->sType, _s802->pNext, _s802->size);
                break;
            }
            case VK_STRUCTURE_TYPE_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY_EXT: {
                const auto _s803 = reinterpret_cast<const VkHostImageCopyDevicePerformanceQueryEXT *>(header);
                skip |= ValidateHostImageCopyDevicePerformanceQueryEXT(_parentObjects, _s803->sType, _s803->pNext,
                                                                       _s803->optimalDeviceAccess, _s803->identicalMemoryLayout);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT: {
                const auto _s804 = reinterpret_cast<const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceShaderAtomicFloat2FeaturesEXT(
                    _parentObjects, _s804->sType, _s804->pNext, _s804->shaderBufferFloat16Atomics,
                    _s804->shaderBufferFloat16AtomicAdd, _s804->shaderBufferFloat16AtomicMinMax,
                    _s804->shaderBufferFloat32AtomicMinMax, _s804->shaderBufferFloat64AtomicMinMax,
                    _s804->shaderSharedFloat16Atomics, _s804->shaderSharedFloat16AtomicAdd, _s804->shaderSharedFloat16AtomicMinMax,
                    _s804->shaderSharedFloat32AtomicMinMax, _s804->shaderSharedFloat64AtomicMinMax,
                    _s804->shaderImageFloat32AtomicMinMax, _s804->sparseImageFloat32AtomicMinMax);
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_EXT: {
                const auto _s805 = reinterpret_cast<const VkSurfacePresentModeEXT *>(header);
                skip |= ValidateSurfacePresentModeEXT(_parentObjects, _s805->sType, _s805->pNext, _s805->presentMode);
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT: {
                const auto _s806 = reinterpret_cast<const VkSurfacePresentScalingCapabilitiesEXT *>(header);
                skip |= ValidateSurfacePresentScalingCapabilitiesEXT(
                    _parentObjects, _s806->sType, _s806->pNext, _s806->supportedPresentScaling, _s806->supportedPresentGravityX,
                    _s806->supportedPresentGravityY, _s806->minScaledImageExtent, _s806->maxScaledImageExtent);
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT: {
                const auto _s807 = reinterpret_cast<const VkSurfacePresentModeCompatibilityEXT *>(header);
                skip |= ValidateSurfacePresentModeCompatibilityEXT(_parentObjects, _s807->sType, _s807->pNext,
                                                                   _s807->presentModeCount, _s807->pPresentModes);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT: {
                const auto _s808 = reinterpret_cast<const VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceSwapchainMaintenance1FeaturesEXT(_parentObjects, _s808->sType, _s808->pNext,
                                                                               _s808->swapchainMaintenance1);
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_EXT: {
                const auto _s809 = reinterpret_cast<const VkSwapchainPresentFenceInfoEXT *>(header);
                skip |= ValidateSwapchainPresentFenceInfoEXT(_parentObjects, _s809->sType, _s809->pNext, _s809->swapchainCount,
                                                             _s809->pFences);
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT: {
                const auto _s810 = reinterpret_cast<const VkSwapchainPresentModesCreateInfoEXT *>(header);
                skip |= ValidateSwapchainPresentModesCreateInfoEXT(_parentObjects, _s810->sType, _s810->pNext,
                                                                   _s810->presentModeCount, _s810->pPresentModes);
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODE_INFO_EXT: {
                const auto _s811 = reinterpret_cast<const VkSwapchainPresentModeInfoEXT *>(header);
                skip |= ValidateSwapchainPresentModeInfoEXT(_parentObjects, _s811->sType, _s811->pNext, _s811->swapchainCount,
                                                            _s811->pPresentModes);
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT: {
                const auto _s812 = reinterpret_cast<const VkSwapchainPresentScalingCreateInfoEXT *>(header);
                skip |=
                    ValidateSwapchainPresentScalingCreateInfoEXT(_parentObjects, _s812->sType, _s812->pNext, _s812->scalingBehavior,
                                                                 _s812->presentGravityX, _s812->presentGravityY);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV: {
                const auto _s813 = reinterpret_cast<const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceDeviceGeneratedCommandsPropertiesNV(
                    _parentObjects, _s813->sType, _s813->pNext, _s813->maxGraphicsShaderGroupCount, _s813->maxIndirectSequenceCount,
                    _s813->maxIndirectCommandsTokenCount, _s813->maxIndirectCommandsStreamCount,
                    _s813->maxIndirectCommandsTokenOffset, _s813->maxIndirectCommandsStreamStride,
                    _s813->minSequencesCountBufferOffsetAlignment, _s813->minSequencesIndexBufferOffsetAlignment,
                    _s813->minIndirectCommandsBufferOffsetAlignment);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV: {
                const auto _s814 = reinterpret_cast<const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceDeviceGeneratedCommandsFeaturesNV(_parentObjects, _s814->sType, _s814->pNext,
                                                                                _s814->deviceGeneratedCommands);
                break;
            }
            case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV: {
                const auto _s815 = reinterpret_cast<const VkGraphicsPipelineShaderGroupsCreateInfoNV *>(header);
                skip |=
                    ValidateGraphicsPipelineShaderGroupsCreateInfoNV(_parentObjects, _s815->sType, _s815->pNext, _s815->groupCount,
                                                                     _s815->pGroups, _s815->pipelineCount, _s815->pPipelines);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV: {
                const auto _s816 = reinterpret_cast<const VkPhysicalDeviceInheritedViewportScissorFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceInheritedViewportScissorFeaturesNV(_parentObjects, _s816->sType, _s816->pNext,
                                                                                 _s816->inheritedViewportScissor2D);
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV: {
                const auto _s817 = reinterpret_cast<const VkCommandBufferInheritanceViewportScissorInfoNV *>(header);
                skip |= ValidateCommandBufferInheritanceViewportScissorInfoNV(_parentObjects, _s817->sType, _s817->pNext,
                                                                              _s817->viewportScissor2D, _s817->viewportDepthCount,
                                                                              _s817->pViewportDepths);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT: {
                const auto _s818 = reinterpret_cast<const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceTexelBufferAlignmentFeaturesEXT(_parentObjects, _s818->sType, _s818->pNext,
                                                                              _s818->texelBufferAlignment);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM: {
                const auto _s819 = reinterpret_cast<const VkRenderPassTransformBeginInfoQCOM *>(header);
                skip |= ValidateRenderPassTransformBeginInfoQCOM(_parentObjects, _s819->sType, _s819->pNext, _s819->transform);
                break;
            }
            case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM: {
                const auto _s820 = reinterpret_cast<const VkCommandBufferInheritanceRenderPassTransformInfoQCOM *>(header);
                skip |= ValidateCommandBufferInheritanceRenderPassTransformInfoQCOM(_parentObjects, _s820->sType, _s820->pNext,
                                                                                    _s820->transform, _s820->renderArea);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT: {
                const auto _s821 = reinterpret_cast<const VkPhysicalDeviceDepthBiasControlFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceDepthBiasControlFeaturesEXT(
                    _parentObjects, _s821->sType, _s821->pNext, _s821->depthBiasControl,
                    _s821->leastRepresentableValueForceUnormRepresentation, _s821->floatRepresentation, _s821->depthBiasExact);
                break;
            }
            case VK_STRUCTURE_TYPE_DEPTH_BIAS_REPRESENTATION_INFO_EXT: {
                const auto _s822 = reinterpret_cast<const VkDepthBiasRepresentationInfoEXT *>(header);
                skip |= ValidateDepthBiasRepresentationInfoEXT(_parentObjects, _s822->sType, _s822->pNext,
                                                               _s822->depthBiasRepresentation, _s822->depthBiasExact);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT: {
                const auto _s823 = reinterpret_cast<const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceDeviceMemoryReportFeaturesEXT(_parentObjects, _s823->sType, _s823->pNext,
                                                                            _s823->deviceMemoryReport);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT: {
                const auto _s824 = reinterpret_cast<const VkDeviceDeviceMemoryReportCreateInfoEXT *>(header);
                skip |= ValidateDeviceDeviceMemoryReportCreateInfoEXT(_parentObjects, _s824->sType, _s824->pNext, _s824->flags,
                                                                      _s824->pfnUserCallback, _s824->pUserData);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT: {
                const auto _s825 = reinterpret_cast<const VkPhysicalDeviceRobustness2FeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceRobustness2FeaturesEXT(_parentObjects, _s825->sType, _s825->pNext,
                                                                     _s825->robustBufferAccess2, _s825->robustImageAccess2,
                                                                     _s825->nullDescriptor);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT: {
                const auto _s826 = reinterpret_cast<const VkPhysicalDeviceRobustness2PropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceRobustness2PropertiesEXT(_parentObjects, _s826->sType, _s826->pNext,
                                                                       _s826->robustStorageBufferAccessSizeAlignment,
                                                                       _s826->robustUniformBufferAccessSizeAlignment);
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT: {
                const auto _s827 = reinterpret_cast<const VkSamplerCustomBorderColorCreateInfoEXT *>(header);
                skip |= ValidateSamplerCustomBorderColorCreateInfoEXT(_parentObjects, _s827->sType, _s827->pNext,
                                                                      _s827->customBorderColor, _s827->format);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT: {
                const auto _s828 = reinterpret_cast<const VkPhysicalDeviceCustomBorderColorPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceCustomBorderColorPropertiesEXT(_parentObjects, _s828->sType, _s828->pNext,
                                                                             _s828->maxCustomBorderColorSamplers);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT: {
                const auto _s829 = reinterpret_cast<const VkPhysicalDeviceCustomBorderColorFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceCustomBorderColorFeaturesEXT(
                    _parentObjects, _s829->sType, _s829->pNext, _s829->customBorderColors, _s829->customBorderColorWithoutFormat);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV: {
                const auto _s830 = reinterpret_cast<const VkPhysicalDevicePresentBarrierFeaturesNV *>(header);
                skip |= ValidatePhysicalDevicePresentBarrierFeaturesNV(_parentObjects, _s830->sType, _s830->pNext,
                                                                       _s830->presentBarrier);
                break;
            }
            case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_PRESENT_BARRIER_NV: {
                const auto _s831 = reinterpret_cast<const VkSurfaceCapabilitiesPresentBarrierNV *>(header);
                skip |= ValidateSurfaceCapabilitiesPresentBarrierNV(_parentObjects, _s831->sType, _s831->pNext,
                                                                    _s831->presentBarrierSupported);
                break;
            }
            case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV: {
                const auto _s832 = reinterpret_cast<const VkSwapchainPresentBarrierCreateInfoNV *>(header);
                skip |= ValidateSwapchainPresentBarrierCreateInfoNV(_parentObjects, _s832->sType, _s832->pNext,
                                                                    _s832->presentBarrierEnable);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV: {
                const auto _s833 = reinterpret_cast<const VkPhysicalDeviceDiagnosticsConfigFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceDiagnosticsConfigFeaturesNV(_parentObjects, _s833->sType, _s833->pNext,
                                                                          _s833->diagnosticsConfig);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV: {
                const auto _s834 = reinterpret_cast<const VkDeviceDiagnosticsConfigCreateInfoNV *>(header);
                skip |= ValidateDeviceDiagnosticsConfigCreateInfoNV(_parentObjects, _s834->sType, _s834->pNext, _s834->flags);
                break;
            }
            case VK_STRUCTURE_TYPE_QUERY_LOW_LATENCY_SUPPORT_NV: {
                const auto _s835 = reinterpret_cast<const VkQueryLowLatencySupportNV *>(header);
                skip |= ValidateQueryLowLatencySupportNV(_parentObjects, _s835->sType, _s835->pNext, _s835->pQueriedLowLatencyData);
                break;
            }
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_EXPORT_METAL_OBJECT_CREATE_INFO_EXT: {
                const auto _s836 = reinterpret_cast<const VkExportMetalObjectCreateInfoEXT *>(header);
                skip |= ValidateExportMetalObjectCreateInfoEXT(_parentObjects, _s836->sType, _s836->pNext, _s836->exportObjectType);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_EXPORT_METAL_DEVICE_INFO_EXT: {
                const auto _s837 = reinterpret_cast<const VkExportMetalDeviceInfoEXT *>(header);
                skip |= ValidateExportMetalDeviceInfoEXT(_parentObjects, _s837->sType, _s837->pNext, _s837->mtlDevice);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_EXPORT_METAL_COMMAND_QUEUE_INFO_EXT: {
                const auto _s838 = reinterpret_cast<const VkExportMetalCommandQueueInfoEXT *>(header);
                skip |= ValidateExportMetalCommandQueueInfoEXT(_parentObjects, _s838->sType, _s838->pNext, _s838->queue,
                                                               _s838->mtlCommandQueue);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_EXPORT_METAL_BUFFER_INFO_EXT: {
                const auto _s839 = reinterpret_cast<const VkExportMetalBufferInfoEXT *>(header);
                skip |=
                    ValidateExportMetalBufferInfoEXT(_parentObjects, _s839->sType, _s839->pNext, _s839->memory, _s839->mtlBuffer);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_IMPORT_METAL_BUFFER_INFO_EXT: {
                const auto _s840 = reinterpret_cast<const VkImportMetalBufferInfoEXT *>(header);
                skip |= ValidateImportMetalBufferInfoEXT(_parentObjects, _s840->sType, _s840->pNext, _s840->mtlBuffer);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_EXPORT_METAL_TEXTURE_INFO_EXT: {
                const auto _s841 = reinterpret_cast<const VkExportMetalTextureInfoEXT *>(header);
                skip |= ValidateExportMetalTextureInfoEXT(_parentObjects, _s841->sType, _s841->pNext, _s841->image,
                                                          _s841->imageView, _s841->bufferView, _s841->plane, _s841->mtlTexture);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_IMPORT_METAL_TEXTURE_INFO_EXT: {
                const auto _s842 = reinterpret_cast<const VkImportMetalTextureInfoEXT *>(header);
                skip |=
                    ValidateImportMetalTextureInfoEXT(_parentObjects, _s842->sType, _s842->pNext, _s842->plane, _s842->mtlTexture);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_EXPORT_METAL_IO_SURFACE_INFO_EXT: {
                const auto _s843 = reinterpret_cast<const VkExportMetalIOSurfaceInfoEXT *>(header);
                skip |=
                    ValidateExportMetalIOSurfaceInfoEXT(_parentObjects, _s843->sType, _s843->pNext, _s843->image, _s843->ioSurface);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_IMPORT_METAL_IO_SURFACE_INFO_EXT: {
                const auto _s844 = reinterpret_cast<const VkImportMetalIOSurfaceInfoEXT *>(header);
                skip |= ValidateImportMetalIOSurfaceInfoEXT(_parentObjects, _s844->sType, _s844->pNext, _s844->ioSurface);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_EXPORT_METAL_SHARED_EVENT_INFO_EXT: {
                const auto _s845 = reinterpret_cast<const VkExportMetalSharedEventInfoEXT *>(header);
                skip |= ValidateExportMetalSharedEventInfoEXT(_parentObjects, _s845->sType, _s845->pNext, _s845->semaphore,
                                                              _s845->event, _s845->mtlSharedEvent);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
#ifdef VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_IMPORT_METAL_SHARED_EVENT_INFO_EXT: {
                const auto _s846 = reinterpret_cast<const VkImportMetalSharedEventInfoEXT *>(header);
                skip |= ValidateImportMetalSharedEventInfoEXT(_parentObjects, _s846->sType, _s846->pNext, _s846->mtlSharedEvent);
                break;
            }
#endif  // VK_USE_PLATFORM_METAL_EXT
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT: {
                const auto _s847 = reinterpret_cast<const VkPhysicalDeviceDescriptorBufferPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceDescriptorBufferPropertiesEXT(
                    _parentObjects, _s847->sType, _s847->pNext, _s847->combinedImageSamplerDescriptorSingleArray,
                    _s847->bufferlessPushDescriptors, _s847->allowSamplerImageViewPostSubmitCreation,
                    _s847->descriptorBufferOffsetAlignment, _s847->maxDescriptorBufferBindings,
                    _s847->maxResourceDescriptorBufferBindings, _s847->maxSamplerDescriptorBufferBindings,
                    _s847->maxEmbeddedImmutableSamplerBindings, _s847->maxEmbeddedImmutableSamplers,
                    _s847->bufferCaptureReplayDescriptorDataSize, _s847->imageCaptureReplayDescriptorDataSize,
                    _s847->imageViewCaptureReplayDescriptorDataSize, _s847->samplerCaptureReplayDescriptorDataSize,
                    _s847->accelerationStructureCaptureReplayDescriptorDataSize, _s847->samplerDescriptorSize,
                    _s847->combinedImageSamplerDescriptorSize, _s847->sampledImageDescriptorSize, _s847->storageImageDescriptorSize,
                    _s847->uniformTexelBufferDescriptorSize, _s847->robustUniformTexelBufferDescriptorSize,
                    _s847->storageTexelBufferDescriptorSize, _s847->robustStorageTexelBufferDescriptorSize,
                    _s847->uniformBufferDescriptorSize, _s847->robustUniformBufferDescriptorSize,
                    _s847->storageBufferDescriptorSize, _s847->robustStorageBufferDescriptorSize,
                    _s847->inputAttachmentDescriptorSize, _s847->accelerationStructureDescriptorSize,
                    _s847->maxSamplerDescriptorBufferRange, _s847->maxResourceDescriptorBufferRange,
                    _s847->samplerDescriptorBufferAddressSpaceSize, _s847->resourceDescriptorBufferAddressSpaceSize,
                    _s847->descriptorBufferAddressSpaceSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT: {
                const auto _s848 = reinterpret_cast<const VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(
                    _parentObjects, _s848->sType, _s848->pNext, _s848->combinedImageSamplerDensityMapDescriptorSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT: {
                const auto _s849 = reinterpret_cast<const VkPhysicalDeviceDescriptorBufferFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceDescriptorBufferFeaturesEXT(
                    _parentObjects, _s849->sType, _s849->pNext, _s849->descriptorBuffer, _s849->descriptorBufferCaptureReplay,
                    _s849->descriptorBufferImageLayoutIgnored, _s849->descriptorBufferPushDescriptors);
                break;
            }
            case VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT: {
                const auto _s850 = reinterpret_cast<const VkDescriptorBufferBindingPushDescriptorBufferHandleEXT *>(header);
                skip |= ValidateDescriptorBufferBindingPushDescriptorBufferHandleEXT(_parentObjects, _s850->sType, _s850->pNext,
                                                                                     _s850->buffer);
                break;
            }
            case VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT: {
                const auto _s851 = reinterpret_cast<const VkOpaqueCaptureDescriptorDataCreateInfoEXT *>(header);
                skip |= ValidateOpaqueCaptureDescriptorDataCreateInfoEXT(_parentObjects, _s851->sType, _s851->pNext,
                                                                         _s851->opaqueCaptureDescriptorData);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT: {
                const auto _s852 = reinterpret_cast<const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(_parentObjects, _s852->sType, _s852->pNext,
                                                                                 _s852->graphicsPipelineLibrary);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT: {
                const auto _s853 = reinterpret_cast<const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(
                    _parentObjects, _s853->sType, _s853->pNext, _s853->graphicsPipelineLibraryFastLinking,
                    _s853->graphicsPipelineLibraryIndependentInterpolationDecoration);
                break;
            }
            case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT: {
                const auto _s854 = reinterpret_cast<const VkGraphicsPipelineLibraryCreateInfoEXT *>(header);
                skip |= ValidateGraphicsPipelineLibraryCreateInfoEXT(_parentObjects, _s854->sType, _s854->pNext, _s854->flags);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD: {
                const auto _s855 = reinterpret_cast<const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *>(header);
                skip |= ValidatePhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(_parentObjects, _s855->sType, _s855->pNext,
                                                                                         _s855->shaderEarlyAndLateFragmentTests);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV: {
                const auto _s856 = reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceFragmentShadingRateEnumsFeaturesNV(
                    _parentObjects, _s856->sType, _s856->pNext, _s856->fragmentShadingRateEnums,
                    _s856->supersampleFragmentShadingRates, _s856->noInvocationFragmentShadingRates);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV: {
                const auto _s857 = reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceFragmentShadingRateEnumsPropertiesNV(_parentObjects, _s857->sType, _s857->pNext,
                                                                                   _s857->maxFragmentShadingRateInvocationCount);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV: {
                const auto _s858 = reinterpret_cast<const VkPipelineFragmentShadingRateEnumStateCreateInfoNV *>(header);
                skip |= ValidatePipelineFragmentShadingRateEnumStateCreateInfoNV(
                    _parentObjects, _s858->sType, _s858->pNext, _s858->shadingRateType, _s858->shadingRate, _s858->combinerOps);
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV: {
                const auto _s859 = reinterpret_cast<const VkAccelerationStructureGeometryMotionTrianglesDataNV *>(header);
                skip |= ValidateAccelerationStructureGeometryMotionTrianglesDataNV(_parentObjects, _s859->sType, _s859->pNext,
                                                                                   _s859->vertexData);
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MOTION_INFO_NV: {
                const auto _s860 = reinterpret_cast<const VkAccelerationStructureMotionInfoNV *>(header);
                skip |= ValidateAccelerationStructureMotionInfoNV(_parentObjects, _s860->sType, _s860->pNext, _s860->maxInstances,
                                                                  _s860->flags);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV: {
                const auto _s861 = reinterpret_cast<const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceRayTracingMotionBlurFeaturesNV(_parentObjects, _s861->sType, _s861->pNext,
                                                                             _s861->rayTracingMotionBlur,
                                                                             _s861->rayTracingMotionBlurPipelineTraceRaysIndirect);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT: {
                const auto _s862 = reinterpret_cast<const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(_parentObjects, _s862->sType, _s862->pNext,
                                                                               _s862->ycbcr2plane444Formats);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT: {
                const auto _s863 = reinterpret_cast<const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceFragmentDensityMap2FeaturesEXT(_parentObjects, _s863->sType, _s863->pNext,
                                                                             _s863->fragmentDensityMapDeferred);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT: {
                const auto _s864 = reinterpret_cast<const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceFragmentDensityMap2PropertiesEXT(
                    _parentObjects, _s864->sType, _s864->pNext, _s864->subsampledLoads,
                    _s864->subsampledCoarseReconstructionEarlyAccess, _s864->maxSubsampledArrayLayers,
                    _s864->maxDescriptorSetSubsampledSamplers);
                break;
            }
            case VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM: {
                const auto _s865 = reinterpret_cast<const VkCopyCommandTransformInfoQCOM *>(header);
                skip |= ValidateCopyCommandTransformInfoQCOM(_parentObjects, _s865->sType, _s865->pNext, _s865->transform);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT: {
                const auto _s866 = reinterpret_cast<const VkPhysicalDeviceImageCompressionControlFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceImageCompressionControlFeaturesEXT(_parentObjects, _s866->sType, _s866->pNext,
                                                                                 _s866->imageCompressionControl);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_CONTROL_EXT: {
                const auto _s867 = reinterpret_cast<const VkImageCompressionControlEXT *>(header);
                skip |= ValidateImageCompressionControlEXT(_parentObjects, _s867->sType, _s867->pNext, _s867->flags,
                                                           _s867->compressionControlPlaneCount, _s867->pFixedRateFlags);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_PROPERTIES_EXT: {
                const auto _s868 = reinterpret_cast<const VkImageCompressionPropertiesEXT *>(header);
                skip |= ValidateImageCompressionPropertiesEXT(_parentObjects, _s868->sType, _s868->pNext,
                                                              _s868->imageCompressionFlags, _s868->imageCompressionFixedRateFlags);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT: {
                const auto _s869 = reinterpret_cast<const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(_parentObjects, _s869->sType, _s869->pNext,
                                                                                      _s869->attachmentFeedbackLoopLayout);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT: {
                const auto _s870 = reinterpret_cast<const VkPhysicalDevice4444FormatsFeaturesEXT *>(header);
                skip |= ValidatePhysicalDevice4444FormatsFeaturesEXT(_parentObjects, _s870->sType, _s870->pNext,
                                                                     _s870->formatA4R4G4B4, _s870->formatA4B4G4R4);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT: {
                const auto _s871 = reinterpret_cast<const VkPhysicalDeviceFaultFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceFaultFeaturesEXT(_parentObjects, _s871->sType, _s871->pNext, _s871->deviceFault,
                                                               _s871->deviceFaultVendorBinary);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT: {
                const auto _s872 = reinterpret_cast<const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(
                    _parentObjects, _s872->sType, _s872->pNext, _s872->rasterizationOrderColorAttachmentAccess,
                    _s872->rasterizationOrderDepthAttachmentAccess, _s872->rasterizationOrderStencilAttachmentAccess);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT: {
                const auto _s873 = reinterpret_cast<const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceRGBA10X6FormatsFeaturesEXT(_parentObjects, _s873->sType, _s873->pNext,
                                                                         _s873->formatRgba10x6WithoutYCbCrSampler);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT: {
                const auto _s874 = reinterpret_cast<const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceMutableDescriptorTypeFeaturesEXT(_parentObjects, _s874->sType, _s874->pNext,
                                                                               _s874->mutableDescriptorType);
                break;
            }
            case VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT: {
                const auto _s875 = reinterpret_cast<const VkMutableDescriptorTypeCreateInfoEXT *>(header);
                skip |= ValidateMutableDescriptorTypeCreateInfoEXT(_parentObjects, _s875->sType, _s875->pNext,
                                                                   _s875->mutableDescriptorTypeListCount,
                                                                   _s875->pMutableDescriptorTypeLists);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT: {
                const auto _s876 = reinterpret_cast<const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceVertexInputDynamicStateFeaturesEXT(_parentObjects, _s876->sType, _s876->pNext,
                                                                                 _s876->vertexInputDynamicState);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT: {
                const auto _s877 = reinterpret_cast<const VkPhysicalDeviceDrmPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceDrmPropertiesEXT(_parentObjects, _s877->sType, _s877->pNext, _s877->hasPrimary,
                                                               _s877->hasRender, _s877->primaryMajor, _s877->primaryMinor,
                                                               _s877->renderMajor, _s877->renderMinor);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT: {
                const auto _s878 = reinterpret_cast<const VkPhysicalDeviceAddressBindingReportFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceAddressBindingReportFeaturesEXT(_parentObjects, _s878->sType, _s878->pNext,
                                                                              _s878->reportAddressBinding);
                break;
            }
            case VK_STRUCTURE_TYPE_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT: {
                const auto _s879 = reinterpret_cast<const VkDeviceAddressBindingCallbackDataEXT *>(header);
                skip |= ValidateDeviceAddressBindingCallbackDataEXT(_parentObjects, _s879->sType, _s879->pNext, _s879->flags,
                                                                    _s879->baseAddress, _s879->size, _s879->bindingType);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT: {
                const auto _s880 = reinterpret_cast<const VkPhysicalDeviceDepthClipControlFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceDepthClipControlFeaturesEXT(_parentObjects, _s880->sType, _s880->pNext,
                                                                          _s880->depthClipControl);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT: {
                const auto _s881 = reinterpret_cast<const VkPipelineViewportDepthClipControlCreateInfoEXT *>(header);
                skip |= ValidatePipelineViewportDepthClipControlCreateInfoEXT(_parentObjects, _s881->sType, _s881->pNext,
                                                                              _s881->negativeOneToOne);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT: {
                const auto _s882 = reinterpret_cast<const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *>(header);
                skip |= ValidatePhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(_parentObjects, _s882->sType, _s882->pNext,
                                                                                      _s882->primitiveTopologyListRestart,
                                                                                      _s882->primitiveTopologyPatchListRestart);
                break;
            }
#ifdef VK_USE_PLATFORM_FUCHSIA
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_ZIRCON_HANDLE_INFO_FUCHSIA: {
                const auto _s883 = reinterpret_cast<const VkImportMemoryZirconHandleInfoFUCHSIA *>(header);
                skip |= ValidateImportMemoryZirconHandleInfoFUCHSIA(_parentObjects, _s883->sType, _s883->pNext, _s883->handleType,
                                                                    _s883->handle);
                break;
            }
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
            case VK_STRUCTURE_TYPE_IMPORT_MEMORY_BUFFER_COLLECTION_FUCHSIA: {
                const auto _s884 = reinterpret_cast<const VkImportMemoryBufferCollectionFUCHSIA *>(header);
                skip |= ValidateImportMemoryBufferCollectionFUCHSIA(_parentObjects, _s884->sType, _s884->pNext, _s884->collection,
                                                                    _s884->index);
                break;
            }
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
            case VK_STRUCTURE_TYPE_BUFFER_COLLECTION_IMAGE_CREATE_INFO_FUCHSIA: {
                const auto _s885 = reinterpret_cast<const VkBufferCollectionImageCreateInfoFUCHSIA *>(header);
                skip |= ValidateBufferCollectionImageCreateInfoFUCHSIA(_parentObjects, _s885->sType, _s885->pNext,
                                                                       _s885->collection, _s885->index);
                break;
            }
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
            case VK_STRUCTURE_TYPE_BUFFER_COLLECTION_BUFFER_CREATE_INFO_FUCHSIA: {
                const auto _s886 = reinterpret_cast<const VkBufferCollectionBufferCreateInfoFUCHSIA *>(header);
                skip |= ValidateBufferCollectionBufferCreateInfoFUCHSIA(_parentObjects, _s886->sType, _s886->pNext,
                                                                        _s886->collection, _s886->index);
                break;
            }
#endif  // VK_USE_PLATFORM_FUCHSIA
            case VK_STRUCTURE_TYPE_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI: {
                const auto _s887 = reinterpret_cast<const VkSubpassShadingPipelineCreateInfoHUAWEI *>(header);
                skip |= ValidateSubpassShadingPipelineCreateInfoHUAWEI(_parentObjects, _s887->sType, _s887->pNext,
                                                                       _s887->renderPass, _s887->subpass);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI: {
                const auto _s888 = reinterpret_cast<const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *>(header);
                skip |= ValidatePhysicalDeviceSubpassShadingFeaturesHUAWEI(_parentObjects, _s888->sType, _s888->pNext,
                                                                           _s888->subpassShading);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI: {
                const auto _s889 = reinterpret_cast<const VkPhysicalDeviceSubpassShadingPropertiesHUAWEI *>(header);
                skip |= ValidatePhysicalDeviceSubpassShadingPropertiesHUAWEI(_parentObjects, _s889->sType, _s889->pNext,
                                                                             _s889->maxSubpassShadingWorkgroupSizeAspectRatio);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI: {
                const auto _s890 = reinterpret_cast<const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *>(header);
                skip |= ValidatePhysicalDeviceInvocationMaskFeaturesHUAWEI(_parentObjects, _s890->sType, _s890->pNext,
                                                                           _s890->invocationMask);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV: {
                const auto _s891 = reinterpret_cast<const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceExternalMemoryRDMAFeaturesNV(_parentObjects, _s891->sType, _s891->pNext,
                                                                           _s891->externalMemoryRDMA);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT: {
                const auto _s892 = reinterpret_cast<const VkPhysicalDevicePipelinePropertiesFeaturesEXT *>(header);
                skip |= ValidatePhysicalDevicePipelinePropertiesFeaturesEXT(_parentObjects, _s892->sType, _s892->pNext,
                                                                            _s892->pipelinePropertiesIdentifier);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT: {
                const auto _s893 = reinterpret_cast<const VkPhysicalDeviceFrameBoundaryFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceFrameBoundaryFeaturesEXT(_parentObjects, _s893->sType, _s893->pNext,
                                                                       _s893->frameBoundary);
                break;
            }
            case VK_STRUCTURE_TYPE_FRAME_BOUNDARY_EXT: {
                const auto _s894 = reinterpret_cast<const VkFrameBoundaryEXT *>(header);
                skip |= ValidateFrameBoundaryEXT(_parentObjects, _s894->sType, _s894->pNext, _s894->flags, _s894->frameID,
                                                 _s894->imageCount, _s894->pImages, _s894->bufferCount, _s894->pBuffers,
                                                 _s894->tagName, _s894->tagSize, _s894->pTag);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT: {
                const auto _s895 = reinterpret_cast<const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(
                    _parentObjects, _s895->sType, _s895->pNext, _s895->multisampledRenderToSingleSampled);
                break;
            }
            case VK_STRUCTURE_TYPE_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT: {
                const auto _s896 = reinterpret_cast<const VkSubpassResolvePerformanceQueryEXT *>(header);
                skip |= ValidateSubpassResolvePerformanceQueryEXT(_parentObjects, _s896->sType, _s896->pNext, _s896->optimal);
                break;
            }
            case VK_STRUCTURE_TYPE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT: {
                const auto _s897 = reinterpret_cast<const VkMultisampledRenderToSingleSampledInfoEXT *>(header);
                skip |= ValidateMultisampledRenderToSingleSampledInfoEXT(_parentObjects, _s897->sType, _s897->pNext,
                                                                         _s897->multisampledRenderToSingleSampledEnable,
                                                                         _s897->rasterizationSamples);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT: {
                const auto _s898 = reinterpret_cast<const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceExtendedDynamicState2FeaturesEXT(
                    _parentObjects, _s898->sType, _s898->pNext, _s898->extendedDynamicState2, _s898->extendedDynamicState2LogicOp,
                    _s898->extendedDynamicState2PatchControlPoints);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT: {
                const auto _s899 = reinterpret_cast<const VkPhysicalDeviceColorWriteEnableFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceColorWriteEnableFeaturesEXT(_parentObjects, _s899->sType, _s899->pNext,
                                                                          _s899->colorWriteEnable);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT: {
                const auto _s900 = reinterpret_cast<const VkPipelineColorWriteCreateInfoEXT *>(header);
                skip |= ValidatePipelineColorWriteCreateInfoEXT(_parentObjects, _s900->sType, _s900->pNext, _s900->attachmentCount,
                                                                _s900->pColorWriteEnables);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT: {
                const auto _s901 = reinterpret_cast<const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *>(header);
                skip |= ValidatePhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(
                    _parentObjects, _s901->sType, _s901->pNext, _s901->primitivesGeneratedQuery,
                    _s901->primitivesGeneratedQueryWithRasterizerDiscard, _s901->primitivesGeneratedQueryWithNonZeroStreams);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT: {
                const auto _s902 = reinterpret_cast<const VkPhysicalDeviceImageViewMinLodFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceImageViewMinLodFeaturesEXT(_parentObjects, _s902->sType, _s902->pNext, _s902->minLod);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT: {
                const auto _s903 = reinterpret_cast<const VkImageViewMinLodCreateInfoEXT *>(header);
                skip |= ValidateImageViewMinLodCreateInfoEXT(_parentObjects, _s903->sType, _s903->pNext, _s903->minLod);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT: {
                const auto _s904 = reinterpret_cast<const VkPhysicalDeviceMultiDrawFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceMultiDrawFeaturesEXT(_parentObjects, _s904->sType, _s904->pNext, _s904->multiDraw);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT: {
                const auto _s905 = reinterpret_cast<const VkPhysicalDeviceMultiDrawPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceMultiDrawPropertiesEXT(_parentObjects, _s905->sType, _s905->pNext,
                                                                     _s905->maxMultiDrawCount);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT: {
                const auto _s906 = reinterpret_cast<const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceImage2DViewOf3DFeaturesEXT(_parentObjects, _s906->sType, _s906->pNext,
                                                                         _s906->image2DViewOf3D, _s906->sampler2DViewOf3D);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT: {
                const auto _s907 = reinterpret_cast<const VkPhysicalDeviceShaderTileImageFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceShaderTileImageFeaturesEXT(
                    _parentObjects, _s907->sType, _s907->pNext, _s907->shaderTileImageColorReadAccess,
                    _s907->shaderTileImageDepthReadAccess, _s907->shaderTileImageStencilReadAccess);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT: {
                const auto _s908 = reinterpret_cast<const VkPhysicalDeviceShaderTileImagePropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceShaderTileImagePropertiesEXT(
                    _parentObjects, _s908->sType, _s908->pNext, _s908->shaderTileImageCoherentReadAccelerated,
                    _s908->shaderTileImageReadSampleFromPixelRateInvocation, _s908->shaderTileImageReadFromHelperInvocation);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT: {
                const auto _s909 = reinterpret_cast<const VkPhysicalDeviceOpacityMicromapFeaturesEXT *>(header);
                skip |=
                    ValidatePhysicalDeviceOpacityMicromapFeaturesEXT(_parentObjects, _s909->sType, _s909->pNext, _s909->micromap,
                                                                     _s909->micromapCaptureReplay, _s909->micromapHostCommands);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT: {
                const auto _s910 = reinterpret_cast<const VkPhysicalDeviceOpacityMicromapPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceOpacityMicromapPropertiesEXT(_parentObjects, _s910->sType, _s910->pNext,
                                                                           _s910->maxOpacity2StateSubdivisionLevel,
                                                                           _s910->maxOpacity4StateSubdivisionLevel);
                break;
            }
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT: {
                const auto _s911 = reinterpret_cast<const VkAccelerationStructureTrianglesOpacityMicromapEXT *>(header);
                skip |= ValidateAccelerationStructureTrianglesOpacityMicromapEXT(
                    _parentObjects, _s911->sType, _s911->pNext, _s911->indexType, _s911->indexBuffer, _s911->indexStride,
                    _s911->baseTriangle, _s911->usageCountsCount, _s911->pUsageCounts, _s911->ppUsageCounts, _s911->micromap);
                break;
            }
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_FEATURES_NV: {
                const auto _s912 = reinterpret_cast<const VkPhysicalDeviceDisplacementMicromapFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceDisplacementMicromapFeaturesNV(_parentObjects, _s912->sType, _s912->pNext,
                                                                             _s912->displacementMicromap);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISPLACEMENT_MICROMAP_PROPERTIES_NV: {
                const auto _s913 = reinterpret_cast<const VkPhysicalDeviceDisplacementMicromapPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceDisplacementMicromapPropertiesNV(_parentObjects, _s913->sType, _s913->pNext,
                                                                               _s913->maxDisplacementMicromapSubdivisionLevel);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_DISPLACEMENT_MICROMAP_NV: {
                const auto _s914 = reinterpret_cast<const VkAccelerationStructureTrianglesDisplacementMicromapNV *>(header);
                skip |= ValidateAccelerationStructureTrianglesDisplacementMicromapNV(
                    _parentObjects, _s914->sType, _s914->pNext, _s914->displacementBiasAndScaleFormat,
                    _s914->displacementVectorFormat, _s914->displacementBiasAndScaleBuffer, _s914->displacementBiasAndScaleStride,
                    _s914->displacementVectorBuffer, _s914->displacementVectorStride, _s914->displacedMicromapPrimitiveFlags,
                    _s914->displacedMicromapPrimitiveFlagsStride, _s914->indexType, _s914->indexBuffer, _s914->indexStride,
                    _s914->baseTriangle, _s914->usageCountsCount, _s914->pUsageCounts, _s914->ppUsageCounts, _s914->micromap);
                break;
            }
#endif  // VK_ENABLE_BETA_EXTENSIONS
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI: {
                const auto _s915 = reinterpret_cast<const VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI *>(header);
                skip |= ValidatePhysicalDeviceClusterCullingShaderFeaturesHUAWEI(
                    _parentObjects, _s915->sType, _s915->pNext, _s915->clustercullingShader, _s915->multiviewClusterCullingShader);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI: {
                const auto _s916 = reinterpret_cast<const VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI *>(header);
                skip |= ValidatePhysicalDeviceClusterCullingShaderPropertiesHUAWEI(
                    _parentObjects, _s916->sType, _s916->pNext, _s916->maxWorkGroupCount, _s916->maxWorkGroupSize,
                    _s916->maxOutputClusterCount, _s916->indirectBufferOffsetAlignment);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT: {
                const auto _s917 = reinterpret_cast<const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceBorderColorSwizzleFeaturesEXT(
                    _parentObjects, _s917->sType, _s917->pNext, _s917->borderColorSwizzle, _s917->borderColorSwizzleFromImage);
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT: {
                const auto _s918 = reinterpret_cast<const VkSamplerBorderColorComponentMappingCreateInfoEXT *>(header);
                skip |= ValidateSamplerBorderColorComponentMappingCreateInfoEXT(_parentObjects, _s918->sType, _s918->pNext,
                                                                                _s918->components, _s918->srgb);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT: {
                const auto _s919 = reinterpret_cast<const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *>(header);
                skip |= ValidatePhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(_parentObjects, _s919->sType, _s919->pNext,
                                                                                   _s919->pageableDeviceLocalMemory);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM: {
                const auto _s920 = reinterpret_cast<const VkPhysicalDeviceShaderCorePropertiesARM *>(header);
                skip |= ValidatePhysicalDeviceShaderCorePropertiesARM(_parentObjects, _s920->sType, _s920->pNext, _s920->pixelRate,
                                                                      _s920->texelRate, _s920->fmaRate);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT: {
                const auto _s921 = reinterpret_cast<const VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceImageSlicedViewOf3DFeaturesEXT(_parentObjects, _s921->sType, _s921->pNext,
                                                                             _s921->imageSlicedViewOf3D);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_SLICED_CREATE_INFO_EXT: {
                const auto _s922 = reinterpret_cast<const VkImageViewSlicedCreateInfoEXT *>(header);
                skip |= ValidateImageViewSlicedCreateInfoEXT(_parentObjects, _s922->sType, _s922->pNext, _s922->sliceOffset,
                                                             _s922->sliceCount);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE: {
                const auto _s923 = reinterpret_cast<const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *>(header);
                skip |= ValidatePhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(_parentObjects, _s923->sType, _s923->pNext,
                                                                                    _s923->descriptorSetHostMapping);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT: {
                const auto _s924 = reinterpret_cast<const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceDepthClampZeroOneFeaturesEXT(_parentObjects, _s924->sType, _s924->pNext,
                                                                           _s924->depthClampZeroOne);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT: {
                const auto _s925 = reinterpret_cast<const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceNonSeamlessCubeMapFeaturesEXT(_parentObjects, _s925->sType, _s925->pNext,
                                                                            _s925->nonSeamlessCubeMap);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM: {
                const auto _s926 = reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *>(header);
                skip |= ValidatePhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(_parentObjects, _s926->sType, _s926->pNext,
                                                                                   _s926->fragmentDensityMapOffset);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM: {
                const auto _s927 = reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM *>(header);
                skip |= ValidatePhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(_parentObjects, _s927->sType, _s927->pNext,
                                                                                     _s927->fragmentDensityOffsetGranularity);
                break;
            }
            case VK_STRUCTURE_TYPE_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM: {
                const auto _s928 = reinterpret_cast<const VkSubpassFragmentDensityMapOffsetEndInfoQCOM *>(header);
                skip |= ValidateSubpassFragmentDensityMapOffsetEndInfoQCOM(
                    _parentObjects, _s928->sType, _s928->pNext, _s928->fragmentDensityOffsetCount, _s928->pFragmentDensityOffsets);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV: {
                const auto _s929 = reinterpret_cast<const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceCopyMemoryIndirectFeaturesNV(_parentObjects, _s929->sType, _s929->pNext,
                                                                           _s929->indirectCopy);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV: {
                const auto _s930 = reinterpret_cast<const VkPhysicalDeviceCopyMemoryIndirectPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceCopyMemoryIndirectPropertiesNV(_parentObjects, _s930->sType, _s930->pNext,
                                                                             _s930->supportedQueues);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV: {
                const auto _s931 = reinterpret_cast<const VkPhysicalDeviceMemoryDecompressionFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceMemoryDecompressionFeaturesNV(_parentObjects, _s931->sType, _s931->pNext,
                                                                            _s931->memoryDecompression);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV: {
                const auto _s932 = reinterpret_cast<const VkPhysicalDeviceMemoryDecompressionPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceMemoryDecompressionPropertiesNV(
                    _parentObjects, _s932->sType, _s932->pNext, _s932->decompressionMethods, _s932->maxDecompressionIndirectCount);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV: {
                const auto _s933 = reinterpret_cast<const VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(
                    _parentObjects, _s933->sType, _s933->pNext, _s933->deviceGeneratedCompute,
                    _s933->deviceGeneratedComputePipelines, _s933->deviceGeneratedComputeCaptureReplay);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV: {
                const auto _s934 = reinterpret_cast<const VkPhysicalDeviceLinearColorAttachmentFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceLinearColorAttachmentFeaturesNV(_parentObjects, _s934->sType, _s934->pNext,
                                                                              _s934->linearColorAttachment);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT: {
                const auto _s935 = reinterpret_cast<const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(
                    _parentObjects, _s935->sType, _s935->pNext, _s935->imageCompressionControlSwapchain);
                break;
            }
            case VK_STRUCTURE_TYPE_IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM: {
                const auto _s936 = reinterpret_cast<const VkImageViewSampleWeightCreateInfoQCOM *>(header);
                skip |= ValidateImageViewSampleWeightCreateInfoQCOM(_parentObjects, _s936->sType, _s936->pNext, _s936->filterCenter,
                                                                    _s936->filterSize, _s936->numPhases);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM: {
                const auto _s937 = reinterpret_cast<const VkPhysicalDeviceImageProcessingFeaturesQCOM *>(header);
                skip |= ValidatePhysicalDeviceImageProcessingFeaturesQCOM(_parentObjects, _s937->sType, _s937->pNext,
                                                                          _s937->textureSampleWeighted, _s937->textureBoxFilter,
                                                                          _s937->textureBlockMatch);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM: {
                const auto _s938 = reinterpret_cast<const VkPhysicalDeviceImageProcessingPropertiesQCOM *>(header);
                skip |= ValidatePhysicalDeviceImageProcessingPropertiesQCOM(
                    _parentObjects, _s938->sType, _s938->pNext, _s938->maxWeightFilterPhases, _s938->maxWeightFilterDimension,
                    _s938->maxBlockMatchRegion, _s938->maxBoxFilterBlockSize);
                break;
            }
            case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT: {
                const auto _s939 = reinterpret_cast<const VkExternalMemoryAcquireUnmodifiedEXT *>(header);
                skip |= ValidateExternalMemoryAcquireUnmodifiedEXT(_parentObjects, _s939->sType, _s939->pNext,
                                                                   _s939->acquireUnmodifiedMemory);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT: {
                const auto _s940 = reinterpret_cast<const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceExtendedDynamicState3FeaturesEXT(
                    _parentObjects, _s940->sType, _s940->pNext, _s940->extendedDynamicState3TessellationDomainOrigin,
                    _s940->extendedDynamicState3DepthClampEnable, _s940->extendedDynamicState3PolygonMode,
                    _s940->extendedDynamicState3RasterizationSamples, _s940->extendedDynamicState3SampleMask,
                    _s940->extendedDynamicState3AlphaToCoverageEnable, _s940->extendedDynamicState3AlphaToOneEnable,
                    _s940->extendedDynamicState3LogicOpEnable, _s940->extendedDynamicState3ColorBlendEnable,
                    _s940->extendedDynamicState3ColorBlendEquation, _s940->extendedDynamicState3ColorWriteMask,
                    _s940->extendedDynamicState3RasterizationStream, _s940->extendedDynamicState3ConservativeRasterizationMode,
                    _s940->extendedDynamicState3ExtraPrimitiveOverestimationSize, _s940->extendedDynamicState3DepthClipEnable,
                    _s940->extendedDynamicState3SampleLocationsEnable, _s940->extendedDynamicState3ColorBlendAdvanced,
                    _s940->extendedDynamicState3ProvokingVertexMode, _s940->extendedDynamicState3LineRasterizationMode,
                    _s940->extendedDynamicState3LineStippleEnable, _s940->extendedDynamicState3DepthClipNegativeOneToOne,
                    _s940->extendedDynamicState3ViewportWScalingEnable, _s940->extendedDynamicState3ViewportSwizzle,
                    _s940->extendedDynamicState3CoverageToColorEnable, _s940->extendedDynamicState3CoverageToColorLocation,
                    _s940->extendedDynamicState3CoverageModulationMode, _s940->extendedDynamicState3CoverageModulationTableEnable,
                    _s940->extendedDynamicState3CoverageModulationTable, _s940->extendedDynamicState3CoverageReductionMode,
                    _s940->extendedDynamicState3RepresentativeFragmentTestEnable,
                    _s940->extendedDynamicState3ShadingRateImageEnable);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT: {
                const auto _s941 = reinterpret_cast<const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceExtendedDynamicState3PropertiesEXT(_parentObjects, _s941->sType, _s941->pNext,
                                                                                 _s941->dynamicPrimitiveTopologyUnrestricted);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT: {
                const auto _s942 = reinterpret_cast<const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceSubpassMergeFeedbackFeaturesEXT(_parentObjects, _s942->sType, _s942->pNext,
                                                                              _s942->subpassMergeFeedback);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_CONTROL_EXT: {
                const auto _s943 = reinterpret_cast<const VkRenderPassCreationControlEXT *>(header);
                skip |= ValidateRenderPassCreationControlEXT(_parentObjects, _s943->sType, _s943->pNext, _s943->disallowMerging);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT: {
                const auto _s944 = reinterpret_cast<const VkRenderPassCreationFeedbackCreateInfoEXT *>(header);
                skip |= ValidateRenderPassCreationFeedbackCreateInfoEXT(_parentObjects, _s944->sType, _s944->pNext,
                                                                        _s944->pRenderPassFeedback);
                break;
            }
            case VK_STRUCTURE_TYPE_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT: {
                const auto _s945 = reinterpret_cast<const VkRenderPassSubpassFeedbackCreateInfoEXT *>(header);
                skip |= ValidateRenderPassSubpassFeedbackCreateInfoEXT(_parentObjects, _s945->sType, _s945->pNext,
                                                                       _s945->pSubpassFeedback);
                break;
            }
            case VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_LIST_LUNARG: {
                const auto _s946 = reinterpret_cast<const VkDirectDriverLoadingListLUNARG *>(header);
                skip |= ValidateDirectDriverLoadingListLUNARG(_parentObjects, _s946->sType, _s946->pNext, _s946->mode,
                                                              _s946->driverCount, _s946->pDrivers);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT: {
                const auto _s947 = reinterpret_cast<const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceShaderModuleIdentifierFeaturesEXT(_parentObjects, _s947->sType, _s947->pNext,
                                                                                _s947->shaderModuleIdentifier);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT: {
                const auto _s948 = reinterpret_cast<const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceShaderModuleIdentifierPropertiesEXT(_parentObjects, _s948->sType, _s948->pNext,
                                                                                  _s948->shaderModuleIdentifierAlgorithmUUID);
                break;
            }
            case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT: {
                const auto _s949 = reinterpret_cast<const VkPipelineShaderStageModuleIdentifierCreateInfoEXT *>(header);
                skip |= ValidatePipelineShaderStageModuleIdentifierCreateInfoEXT(_parentObjects, _s949->sType, _s949->pNext,
                                                                                 _s949->identifierSize, _s949->pIdentifier);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV: {
                const auto _s950 = reinterpret_cast<const VkPhysicalDeviceOpticalFlowFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceOpticalFlowFeaturesNV(_parentObjects, _s950->sType, _s950->pNext, _s950->opticalFlow);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV: {
                const auto _s951 = reinterpret_cast<const VkPhysicalDeviceOpticalFlowPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceOpticalFlowPropertiesNV(
                    _parentObjects, _s951->sType, _s951->pNext, _s951->supportedOutputGridSizes, _s951->supportedHintGridSizes,
                    _s951->hintSupported, _s951->costSupported, _s951->bidirectionalFlowSupported, _s951->globalFlowSupported,
                    _s951->minWidth, _s951->minHeight, _s951->maxWidth, _s951->maxHeight, _s951->maxNumRegionsOfInterest);
                break;
            }
            case VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV: {
                const auto _s952 = reinterpret_cast<const VkOpticalFlowImageFormatInfoNV *>(header);
                skip |= ValidateOpticalFlowImageFormatInfoNV(_parentObjects, _s952->sType, _s952->pNext, _s952->usage);
                break;
            }
            case VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV: {
                const auto _s953 = reinterpret_cast<const VkOpticalFlowSessionCreatePrivateDataInfoNV *>(header);
                skip |= ValidateOpticalFlowSessionCreatePrivateDataInfoNV(_parentObjects, _s953->sType, _s953->pNext, _s953->id,
                                                                          _s953->size, _s953->pPrivateData);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT: {
                const auto _s954 = reinterpret_cast<const VkPhysicalDeviceLegacyDitheringFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceLegacyDitheringFeaturesEXT(_parentObjects, _s954->sType, _s954->pNext,
                                                                         _s954->legacyDithering);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT: {
                const auto _s955 = reinterpret_cast<const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *>(header);
                skip |= ValidatePhysicalDevicePipelineProtectedAccessFeaturesEXT(_parentObjects, _s955->sType, _s955->pNext,
                                                                                 _s955->pipelineProtectedAccess);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT: {
                const auto _s956 = reinterpret_cast<const VkPhysicalDeviceShaderObjectFeaturesEXT *>(header);
                skip |=
                    ValidatePhysicalDeviceShaderObjectFeaturesEXT(_parentObjects, _s956->sType, _s956->pNext, _s956->shaderObject);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT: {
                const auto _s957 = reinterpret_cast<const VkPhysicalDeviceShaderObjectPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceShaderObjectPropertiesEXT(_parentObjects, _s957->sType, _s957->pNext,
                                                                        _s957->shaderBinaryUUID, _s957->shaderBinaryVersion);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM: {
                const auto _s958 = reinterpret_cast<const VkPhysicalDeviceTilePropertiesFeaturesQCOM *>(header);
                skip |= ValidatePhysicalDeviceTilePropertiesFeaturesQCOM(_parentObjects, _s958->sType, _s958->pNext,
                                                                         _s958->tileProperties);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC: {
                const auto _s959 = reinterpret_cast<const VkPhysicalDeviceAmigoProfilingFeaturesSEC *>(header);
                skip |= ValidatePhysicalDeviceAmigoProfilingFeaturesSEC(_parentObjects, _s959->sType, _s959->pNext,
                                                                        _s959->amigoProfiling);
                break;
            }
            case VK_STRUCTURE_TYPE_AMIGO_PROFILING_SUBMIT_INFO_SEC: {
                const auto _s960 = reinterpret_cast<const VkAmigoProfilingSubmitInfoSEC *>(header);
                skip |= ValidateAmigoProfilingSubmitInfoSEC(_parentObjects, _s960->sType, _s960->pNext, _s960->firstDrawTimestamp,
                                                            _s960->swapBufferTimestamp);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM: {
                const auto _s961 = reinterpret_cast<const VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *>(header);
                skip |= ValidatePhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(_parentObjects, _s961->sType, _s961->pNext,
                                                                                    _s961->multiviewPerViewViewports);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV: {
                const auto _s962 = reinterpret_cast<const VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV *>(header);
                skip |= ValidatePhysicalDeviceRayTracingInvocationReorderPropertiesNV(
                    _parentObjects, _s962->sType, _s962->pNext, _s962->rayTracingInvocationReorderReorderingHint);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV: {
                const auto _s963 = reinterpret_cast<const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceRayTracingInvocationReorderFeaturesNV(_parentObjects, _s963->sType, _s963->pNext,
                                                                                    _s963->rayTracingInvocationReorder);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM: {
                const auto _s964 = reinterpret_cast<const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *>(header);
                skip |= ValidatePhysicalDeviceShaderCoreBuiltinsFeaturesARM(_parentObjects, _s964->sType, _s964->pNext,
                                                                            _s964->shaderCoreBuiltins);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM: {
                const auto _s965 = reinterpret_cast<const VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM *>(header);
                skip |= ValidatePhysicalDeviceShaderCoreBuiltinsPropertiesARM(_parentObjects, _s965->sType, _s965->pNext,
                                                                              _s965->shaderCoreMask, _s965->shaderCoreCount,
                                                                              _s965->shaderWarpsPerCore);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT: {
                const auto _s966 = reinterpret_cast<const VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT *>(header);
                skip |= ValidatePhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(_parentObjects, _s966->sType, _s966->pNext,
                                                                                     _s966->pipelineLibraryGroupHandles);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT: {
                const auto _s967 = reinterpret_cast<const VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(
                    _parentObjects, _s967->sType, _s967->pNext, _s967->dynamicRenderingUnusedAttachments);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM: {
                const auto _s968 = reinterpret_cast<const VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *>(header);
                skip |= ValidatePhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(_parentObjects, _s968->sType, _s968->pNext,
                                                                                      _s968->multiviewPerViewRenderAreas);
                break;
            }
            case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM: {
                const auto _s969 = reinterpret_cast<const VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM *>(header);
                skip |= ValidateMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(
                    _parentObjects, _s969->sType, _s969->pNext, _s969->perViewRenderAreaCount, _s969->pPerViewRenderAreas);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM: {
                const auto _s970 = reinterpret_cast<const VkPhysicalDeviceImageProcessing2FeaturesQCOM *>(header);
                skip |= ValidatePhysicalDeviceImageProcessing2FeaturesQCOM(_parentObjects, _s970->sType, _s970->pNext,
                                                                           _s970->textureBlockMatch2);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM: {
                const auto _s971 = reinterpret_cast<const VkPhysicalDeviceImageProcessing2PropertiesQCOM *>(header);
                skip |= ValidatePhysicalDeviceImageProcessing2PropertiesQCOM(_parentObjects, _s971->sType, _s971->pNext,
                                                                             _s971->maxBlockMatchWindow);
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM: {
                const auto _s972 = reinterpret_cast<const VkSamplerBlockMatchWindowCreateInfoQCOM *>(header);
                skip |= ValidateSamplerBlockMatchWindowCreateInfoQCOM(_parentObjects, _s972->sType, _s972->pNext,
                                                                      _s972->windowExtent, _s972->windowCompareMode);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM: {
                const auto _s973 = reinterpret_cast<const VkPhysicalDeviceCubicWeightsFeaturesQCOM *>(header);
                skip |= ValidatePhysicalDeviceCubicWeightsFeaturesQCOM(_parentObjects, _s973->sType, _s973->pNext,
                                                                       _s973->selectableCubicWeights);
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM: {
                const auto _s974 = reinterpret_cast<const VkSamplerCubicWeightsCreateInfoQCOM *>(header);
                skip |= ValidateSamplerCubicWeightsCreateInfoQCOM(_parentObjects, _s974->sType, _s974->pNext, _s974->cubicWeights);
                break;
            }
            case VK_STRUCTURE_TYPE_BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM: {
                const auto _s975 = reinterpret_cast<const VkBlitImageCubicWeightsInfoQCOM *>(header);
                skip |= ValidateBlitImageCubicWeightsInfoQCOM(_parentObjects, _s975->sType, _s975->pNext, _s975->cubicWeights);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM: {
                const auto _s976 = reinterpret_cast<const VkPhysicalDeviceYcbcrDegammaFeaturesQCOM *>(header);
                skip |=
                    ValidatePhysicalDeviceYcbcrDegammaFeaturesQCOM(_parentObjects, _s976->sType, _s976->pNext, _s976->ycbcrDegamma);
                break;
            }
            case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM: {
                const auto _s977 = reinterpret_cast<const VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM *>(header);
                skip |= ValidateSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(_parentObjects, _s977->sType, _s977->pNext,
                                                                                 _s977->enableYDegamma, _s977->enableCbCrDegamma);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM: {
                const auto _s978 = reinterpret_cast<const VkPhysicalDeviceCubicClampFeaturesQCOM *>(header);
                skip |= ValidatePhysicalDeviceCubicClampFeaturesQCOM(_parentObjects, _s978->sType, _s978->pNext,
                                                                     _s978->cubicRangeClamp);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT: {
                const auto _s979 = reinterpret_cast<const VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(
                    _parentObjects, _s979->sType, _s979->pNext, _s979->attachmentFeedbackLoopDynamicState);
                break;
            }
#ifdef VK_USE_PLATFORM_SCREEN_QNX
            case VK_STRUCTURE_TYPE_SCREEN_BUFFER_FORMAT_PROPERTIES_QNX: {
                const auto _s980 = reinterpret_cast<const VkScreenBufferFormatPropertiesQNX *>(header);
                skip |= ValidateScreenBufferFormatPropertiesQNX(
                    _parentObjects, _s980->sType, _s980->pNext, _s980->format, _s980->externalFormat, _s980->screenUsage,
                    _s980->formatFeatures, _s980->samplerYcbcrConversionComponents, _s980->suggestedYcbcrModel,
                    _s980->suggestedYcbcrRange, _s980->suggestedXChromaOffset, _s980->suggestedYChromaOffset);
                break;
            }
#endif  // VK_USE_PLATFORM_SCREEN_QNX
#ifdef VK_USE_PLATFORM_SCREEN_QNX
            case VK_STRUCTURE_TYPE_IMPORT_SCREEN_BUFFER_INFO_QNX: {
                const auto _s981 = reinterpret_cast<const VkImportScreenBufferInfoQNX *>(header);
                skip |= ValidateImportScreenBufferInfoQNX(_parentObjects, _s981->sType, _s981->pNext, _s981->buffer);
                break;
            }
#endif  // VK_USE_PLATFORM_SCREEN_QNX
#ifdef VK_USE_PLATFORM_SCREEN_QNX
            case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_QNX: {
                const auto _s982 = reinterpret_cast<const VkExternalFormatQNX *>(header);
                skip |= ValidateExternalFormatQNX(_parentObjects, _s982->sType, _s982->pNext, _s982->externalFormat);
                break;
            }
#endif  // VK_USE_PLATFORM_SCREEN_QNX
#ifdef VK_USE_PLATFORM_SCREEN_QNX
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_SCREEN_BUFFER_FEATURES_QNX: {
                const auto _s983 = reinterpret_cast<const VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX *>(header);
                skip |= ValidatePhysicalDeviceExternalMemoryScreenBufferFeaturesQNX(_parentObjects, _s983->sType, _s983->pNext,
                                                                                    _s983->screenBufferImport);
                break;
            }
#endif  // VK_USE_PLATFORM_SCREEN_QNX
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT: {
                const auto _s984 = reinterpret_cast<const VkPhysicalDeviceLayeredDriverPropertiesMSFT *>(header);
                skip |= ValidatePhysicalDeviceLayeredDriverPropertiesMSFT(_parentObjects, _s984->sType, _s984->pNext,
                                                                          _s984->underlyingAPI);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV: {
                const auto _s985 = reinterpret_cast<const VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV *>(header);
                skip |= ValidatePhysicalDeviceDescriptorPoolOverallocationFeaturesNV(_parentObjects, _s985->sType, _s985->pNext,
                                                                                     _s985->descriptorPoolOverallocation);
                break;
            }
            case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR: {
                const auto _s986 = reinterpret_cast<const VkWriteDescriptorSetAccelerationStructureKHR *>(header);
                skip |= ValidateWriteDescriptorSetAccelerationStructureKHR(
                    _parentObjects, _s986->sType, _s986->pNext, _s986->accelerationStructureCount, _s986->pAccelerationStructures);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR: {
                const auto _s987 = reinterpret_cast<const VkPhysicalDeviceAccelerationStructureFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceAccelerationStructureFeaturesKHR(
                    _parentObjects, _s987->sType, _s987->pNext, _s987->accelerationStructure,
                    _s987->accelerationStructureCaptureReplay, _s987->accelerationStructureIndirectBuild,
                    _s987->accelerationStructureHostCommands, _s987->descriptorBindingAccelerationStructureUpdateAfterBind);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR: {
                const auto _s988 = reinterpret_cast<const VkPhysicalDeviceAccelerationStructurePropertiesKHR *>(header);
                skip |= ValidatePhysicalDeviceAccelerationStructurePropertiesKHR(
                    _parentObjects, _s988->sType, _s988->pNext, _s988->maxGeometryCount, _s988->maxInstanceCount,
                    _s988->maxPrimitiveCount, _s988->maxPerStageDescriptorAccelerationStructures,
                    _s988->maxPerStageDescriptorUpdateAfterBindAccelerationStructures,
                    _s988->maxDescriptorSetAccelerationStructures, _s988->maxDescriptorSetUpdateAfterBindAccelerationStructures,
                    _s988->minAccelerationStructureScratchOffsetAlignment);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR: {
                const auto _s989 = reinterpret_cast<const VkPhysicalDeviceRayTracingPipelineFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceRayTracingPipelineFeaturesKHR(
                    _parentObjects, _s989->sType, _s989->pNext, _s989->rayTracingPipeline,
                    _s989->rayTracingPipelineShaderGroupHandleCaptureReplay,
                    _s989->rayTracingPipelineShaderGroupHandleCaptureReplayMixed, _s989->rayTracingPipelineTraceRaysIndirect,
                    _s989->rayTraversalPrimitiveCulling);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR: {
                const auto _s990 = reinterpret_cast<const VkPhysicalDeviceRayTracingPipelinePropertiesKHR *>(header);
                skip |= ValidatePhysicalDeviceRayTracingPipelinePropertiesKHR(
                    _parentObjects, _s990->sType, _s990->pNext, _s990->shaderGroupHandleSize, _s990->maxRayRecursionDepth,
                    _s990->maxShaderGroupStride, _s990->shaderGroupBaseAlignment, _s990->shaderGroupHandleCaptureReplaySize,
                    _s990->maxRayDispatchInvocationCount, _s990->shaderGroupHandleAlignment, _s990->maxRayHitAttributeSize);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR: {
                const auto _s991 = reinterpret_cast<const VkPhysicalDeviceRayQueryFeaturesKHR *>(header);
                skip |= ValidatePhysicalDeviceRayQueryFeaturesKHR(_parentObjects, _s991->sType, _s991->pNext, _s991->rayQuery);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT: {
                const auto _s992 = reinterpret_cast<const VkPhysicalDeviceMeshShaderFeaturesEXT *>(header);
                skip |= ValidatePhysicalDeviceMeshShaderFeaturesEXT(
                    _parentObjects, _s992->sType, _s992->pNext, _s992->taskShader, _s992->meshShader, _s992->multiviewMeshShader,
                    _s992->primitiveFragmentShadingRateMeshShader, _s992->meshShaderQueries);
                break;
            }
            case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT: {
                const auto _s993 = reinterpret_cast<const VkPhysicalDeviceMeshShaderPropertiesEXT *>(header);
                skip |= ValidatePhysicalDeviceMeshShaderPropertiesEXT(
                    _parentObjects, _s993->sType, _s993->pNext, _s993->maxTaskWorkGroupTotalCount, _s993->maxTaskWorkGroupCount,
                    _s993->maxTaskWorkGroupInvocations, _s993->maxTaskWorkGroupSize, _s993->maxTaskPayloadSize,
                    _s993->maxTaskSharedMemorySize, _s993->maxTaskPayloadAndSharedMemorySize, _s993->maxMeshWorkGroupTotalCount,
                    _s993->maxMeshWorkGroupCount, _s993->maxMeshWorkGroupInvocations, _s993->maxMeshWorkGroupSize,
                    _s993->maxMeshSharedMemorySize, _s993->maxMeshPayloadAndSharedMemorySize, _s993->maxMeshOutputMemorySize,
                    _s993->maxMeshPayloadAndOutputMemorySize, _s993->maxMeshOutputComponents, _s993->maxMeshOutputVertices,
                    _s993->maxMeshOutputPrimitives, _s993->maxMeshOutputLayers, _s993->maxMeshMultiviewViewCount,
                    _s993->meshOutputPerVertexGranularity, _s993->meshOutputPerPrimitiveGranularity,
                    _s993->maxPreferredTaskWorkGroupInvocations, _s993->maxPreferredMeshWorkGroupInvocations,
                    _s993->prefersLocalInvocationVertexOutput, _s993->prefersLocalInvocationPrimitiveOutput,
                    _s993->prefersCompactVertexOutput, _s993->prefersCompactPrimitiveOutput);
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
