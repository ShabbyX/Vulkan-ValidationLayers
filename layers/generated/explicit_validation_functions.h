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
bool PreCallValidateRenderingInfo(VkStructureType sType, const void* pNext, VkRenderingFlags flags, VkRect2D renderArea, uint32_t layerCount, uint32_t viewMask, uint32_t colorAttachmentCount, const VkRenderingAttachmentInfo* pColorAttachments, const VkRenderingAttachmentInfo* pDepthAttachment, const VkRenderingAttachmentInfo* pStencilAttachment) const;
bool PreCallValidateCmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, uint32_t rangeCount, const VkImageSubresourceRange* pRanges) const override;
bool PreCallValidateCmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy* pRegions) const override;
bool PreCallValidateCmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions) const override;
bool PreCallValidateCopyBufferToImageInfo2(VkStructureType sType, const void* pNext, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy2* pRegions) const;
bool PreCallValidateCopyImageToBufferInfo2(VkStructureType sType, const void* pNext, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy2* pRegions) const;
bool PreCallValidateDescriptorSetLayoutCreateInfo(VkStructureType sType, const void* pNext, VkDescriptorSetLayoutCreateFlags flags, uint32_t bindingCount, const VkDescriptorSetLayoutBinding* pBindings) const;
bool PreCallValidateDeviceCreateInfo(VkStructureType sType, const void* pNext, VkDeviceCreateFlags flags, uint32_t queueCreateInfoCount, const VkDeviceQueueCreateInfo* pQueueCreateInfos, uint32_t enabledLayerCount, const char* const* ppEnabledLayerNames, uint32_t enabledExtensionCount, const char* const* ppEnabledExtensionNames, const VkPhysicalDeviceFeatures* pEnabledFeatures) const;
