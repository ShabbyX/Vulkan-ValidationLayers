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
#include "chassis.h"
#include "explicit/explicit_validation.h"

bool ExplicitValidation::PreCallValidateRenderingInfo(VkStructureType sType, const void* pNext, VkRenderingFlags flags, VkRect2D renderArea, uint32_t layerCount, uint32_t viewMask, uint32_t colorAttachmentCount, const VkRenderingAttachmentInfo* pColorAttachments, const VkRenderingAttachmentInfo* pDepthAttachment, const VkRenderingAttachmentInfo* pStencilAttachment) const
{
    bool skip = false;

    {
        for (uint32_t i2 = 0; i2 < colorAttachmentCount; ++i2)
        {
            const VkRenderingAttachmentInfo &attachment_0 = pColorAttachments[i2];
            {
                if (((attachment_0.imageView != VK_NULL_HANDLE)&&(attachment_0.resolveMode != VK_RESOLVE_MODE_NONE)))
                {
                    VkImageLayout resolveLayout_1=attachment_0.resolveImageLayout;
                    if (!(((resolveLayout_1 != VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL)&&(resolveLayout_1 != VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL))))
                    {
                        const LogObjectList objlist{attachment_0.imageView};
                        skip |= LogFail(objlist, "VUID-VkRenderingInfo-colorAttachmentCount-06097",
                            R"(    ${vu-keyword}for${} attachment${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pColorAttachments:
      ${vu-keyword}if${} (attachment${vu-value}{{@%)" PRIu32 R"(}}${}.imageView${vu-value}{{%s}}${} ${vu-operator}!=${} VK_NULL_HANDLE ${vu-operator}and${}
          attachment${vu-value}{{@%)" PRIu32 R"(}}${}.resolveMode ${vu-operator}!=${} VK_RESOLVE_MODE_NONE):
        resolveLayout ${vu-operator}=${} attachment${vu-value}{{@%)" PRIu32 R"(}}${}.resolveImageLayout
        ${vu-builtin}require${}(resolveLayout ${vu-operator}!=${} VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL ${vu-operator}and${}
            resolveLayout ${vu-operator}!=${} VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL)${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                            i2,
                            i2,
                            report_data->FormatHandle(attachment_0.imageView).c_str(),
                            i2,
                            i2);
                    }

                }

            }
        }

    }
    return skip;
}

bool ExplicitValidation::PreCallValidateCmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, uint32_t rangeCount, const VkImageSubresourceRange* pRanges) const
{
    auto image_ = Get<IMAGE_STATE>(image);
    bool skip = false;

    {
        if (!(Builtin_has_bit(Builtin_create_info(image_).usage, VK_IMAGE_USAGE_TRANSFER_DST_BIT)))
        {
            const LogObjectList objlist{image};
            skip |= LogFail(objlist, "VUID-vkCmdClearColorImage-image-00002",
                R"(    ${vu-builtin}require${}(image${vu-value}{{%s}}${}.${vu-builtin}create_info${}().usage${vu-value}{{%#)" PRIx32 R"(}}${}.${vu-builtin}has_bit${}(VK_IMAGE_USAGE_TRANSFER_DST_BIT)${vu-value}{{%s}}${})${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                report_data->FormatHandle(image).c_str(),
                Builtin_create_info(image_).usage,
                (Builtin_has_bit(Builtin_create_info(image_).usage, VK_IMAGE_USAGE_TRANSFER_DST_BIT)) ? "true" : "false");
        }

        if (!(((imageLayout == VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL)||(imageLayout == VK_IMAGE_LAYOUT_GENERAL))))
        {
            const LogObjectList objlist{};
            skip |= LogFail(objlist, "VUID-vkCmdClearColorImage-imageLayout-00005",
                R"(    ${vu-builtin}require${}(imageLayout ${vu-operator}==${} VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL ${vu-operator}or${}
        imageLayout ${vu-operator}==${} VK_IMAGE_LAYOUT_GENERAL)${vu-fail} <-- Failing condition (Values captured at this instant)${})");
        }

        if (!(((imageLayout == VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL)||(imageLayout == VK_IMAGE_LAYOUT_GENERAL)||(imageLayout == VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR))))
        {
            const LogObjectList objlist{};
            skip |= LogFail(objlist, "VUID-vkCmdClearColorImage-imageLayout-01394",
                R"(    ${vu-builtin}require${}(imageLayout ${vu-operator}==${} VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL ${vu-operator}or${}
        imageLayout ${vu-operator}==${} VK_IMAGE_LAYOUT_GENERAL ${vu-operator}or${}
        imageLayout ${vu-operator}==${} VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR)${vu-fail} <-- Failing condition (Values captured at this instant)${})");
        }

        uint32_t mipLevels_1=Builtin_create_info(image_).mipLevels;
        uint32_t arrayLayers_5=Builtin_create_info(image_).arrayLayers;
        for (uint32_t i2 = 0; i2 < rangeCount; ++i2)
        {
            const VkImageSubresourceRange &range_0 = pRanges[i2];
            {
                if (!((range_0.aspectMask == VK_IMAGE_ASPECT_COLOR_BIT)))
                {
                    const LogObjectList objlist{};
                    skip |= LogFail(objlist, "VUID-vkCmdClearColorImage-aspectMask-02498",
                        R"(    ${vu-keyword}for${} range${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pRanges:
      ${vu-builtin}require${}(range${vu-value}{{@%)" PRIu32 R"(}}${}.aspectMask${vu-value}{{%#)" PRIx32 R"(}}${} ${vu-operator}==${} VK_IMAGE_ASPECT_COLOR_BIT)${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                        i2,
                        i2,
                        range_0.aspectMask);
                }

                if (!((range_0.baseMipLevel < mipLevels_1)))
                {
                    const LogObjectList objlist{image};
                    skip |= LogFail(objlist, "VUID-vkCmdClearColorImage-baseMipLevel-01470",
                        R"(    mipLevels${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}=${} image${vu-value}{{%s}}${}.${vu-builtin}create_info${}().mipLevels${vu-value}{{%)" PRIu32 R"(}}${}
    ${vu-keyword}for${} range${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pRanges:
      ${vu-builtin}require${}(range${vu-value}{{@%)" PRIu32 R"(}}${}.baseMipLevel${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}<${} mipLevels${vu-value}{{%)" PRIu32 R"(}}${})${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                        mipLevels_1,
                        report_data->FormatHandle(image).c_str(),
                        Builtin_create_info(image_).mipLevels,
                        i2,
                        i2,
                        range_0.baseMipLevel,
                        mipLevels_1);
                }

                if (!((range_0.baseArrayLayer < arrayLayers_5)))
                {
                    const LogObjectList objlist{image};
                    skip |= LogFail(objlist, "VUID-vkCmdClearColorImage-baseArrayLayer-01472",
                        R"(    arrayLayers${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}=${} image${vu-value}{{%s}}${}.${vu-builtin}create_info${}().arrayLayers${vu-value}{{%)" PRIu32 R"(}}${}
    ${vu-keyword}for${} range${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pRanges:
      ${vu-builtin}require${}(range${vu-value}{{@%)" PRIu32 R"(}}${}.baseArrayLayer${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}<${} arrayLayers${vu-value}{{%)" PRIu32 R"(}}${})${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                        arrayLayers_5,
                        report_data->FormatHandle(image).c_str(),
                        Builtin_create_info(image_).arrayLayers,
                        i2,
                        i2,
                        range_0.baseArrayLayer,
                        arrayLayers_5);
                }

                if ((range_0.levelCount != VK_REMAINING_MIP_LEVELS))
                {
                    if (!(((range_0.baseMipLevel + range_0.levelCount) <= mipLevels_1)))
                    {
                        const LogObjectList objlist{image};
                        skip |= LogFail(objlist, "VUID-vkCmdClearColorImage-pRanges-01692",
                            R"(    mipLevels${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}=${} image${vu-value}{{%s}}${}.${vu-builtin}create_info${}().mipLevels${vu-value}{{%)" PRIu32 R"(}}${}
    ${vu-keyword}for${} range${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pRanges:
      ${vu-keyword}if${} range${vu-value}{{@%)" PRIu32 R"(}}${}.levelCount${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}!=${} VK_REMAINING_MIP_LEVELS:
        ${vu-builtin}require${}(range${vu-value}{{@%)" PRIu32 R"(}}${}.baseMipLevel${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}+${} range${vu-value}{{@%)" PRIu32 R"(}}${}.levelCount${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}<=${} mipLevels${vu-value}{{%)" PRIu32 R"(}}${})${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                            mipLevels_1,
                            report_data->FormatHandle(image).c_str(),
                            Builtin_create_info(image_).mipLevels,
                            i2,
                            i2,
                            range_0.levelCount,
                            i2,
                            range_0.baseMipLevel,
                            i2,
                            range_0.levelCount,
                            mipLevels_1);
                    }

                }

                if ((range_0.layerCount != VK_REMAINING_ARRAY_LAYERS))
                {
                    if (!(((range_0.baseArrayLayer + range_0.layerCount) <= arrayLayers_5)))
                    {
                        const LogObjectList objlist{image};
                        skip |= LogFail(objlist, "VUID-vkCmdClearColorImage-pRanges-01693",
                            R"(    arrayLayers${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}=${} image${vu-value}{{%s}}${}.${vu-builtin}create_info${}().arrayLayers${vu-value}{{%)" PRIu32 R"(}}${}
    ${vu-keyword}for${} range${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pRanges:
      ${vu-keyword}if${} range${vu-value}{{@%)" PRIu32 R"(}}${}.layerCount${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}!=${} VK_REMAINING_ARRAY_LAYERS:
        ${vu-builtin}require${}(range${vu-value}{{@%)" PRIu32 R"(}}${}.baseArrayLayer${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}+${} range${vu-value}{{@%)" PRIu32 R"(}}${}.layerCount${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}<=${} arrayLayers${vu-value}{{%)" PRIu32 R"(}}${})${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                            arrayLayers_5,
                            report_data->FormatHandle(image).c_str(),
                            Builtin_create_info(image_).arrayLayers,
                            i2,
                            i2,
                            range_0.layerCount,
                            i2,
                            range_0.baseArrayLayer,
                            i2,
                            range_0.layerCount,
                            arrayLayers_5);
                    }

                }

            }
        }

    }
    return skip;
}

bool ExplicitValidation::PreCallValidateCmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy* pRegions) const
{
    auto srcBuffer_ = Get<BUFFER_STATE>(srcBuffer);
    auto dstImage_ = Get<IMAGE_STATE>(dstImage);
    bool skip = false;

    {
        if ((Builtin_create_info(dstImage_).imageType == VK_IMAGE_TYPE_1D))
        {
            for (uint32_t i3 = 0; i3 < regionCount; ++i3)
            {
                const VkBufferImageCopy &region_0 = pRegions[i3];
                {
                    if (!((region_0.imageOffset.y == 0)))
                    {
                        const LogObjectList objlist{dstImage};
                        skip |= LogFail(objlist, "VUID-vkCmdCopyBufferToImage-srcImage-00199",
                            R"(    ${vu-keyword}if${} dstImage${vu-value}{{%s}}${}.${vu-builtin}create_info${}().imageType ${vu-operator}==${} VK_IMAGE_TYPE_1D:
      ${vu-keyword}for${} region${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pRegions:
        ${vu-builtin}require${}(region${vu-value}{{@%)" PRIu32 R"(}}${}.imageOffset.y${vu-value}{{%)" PRId32 R"(}}${} ${vu-operator}==${} ${vu-number}0${})${vu-fail} <-- Failing condition (Values captured at this instant)${}
        ${vu-builtin}require${}(region.imageExtent.height ${vu-operator}==${} ${vu-number}1${}))",
                            report_data->FormatHandle(dstImage).c_str(),
                            i3,
                            i3,
                            region_0.imageOffset.y);
                    }

                    if (!((region_0.imageExtent.height == 1)))
                    {
                        const LogObjectList objlist{dstImage};
                        skip |= LogFail(objlist, "VUID-vkCmdCopyBufferToImage-srcImage-00199",
                            R"(    ${vu-keyword}if${} dstImage${vu-value}{{%s}}${}.${vu-builtin}create_info${}().imageType ${vu-operator}==${} VK_IMAGE_TYPE_1D:
      ${vu-keyword}for${} region${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pRegions:
        ${vu-builtin}require${}(region${vu-value}{{@%)" PRIu32 R"(}}${}.imageOffset.y${vu-value}{{%)" PRId32 R"(}}${} ${vu-operator}==${} ${vu-number}0${})
        ${vu-builtin}require${}(region${vu-value}{{@%)" PRIu32 R"(}}${}.imageExtent.height${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}==${} ${vu-number}1${})${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                            report_data->FormatHandle(dstImage).c_str(),
                            i3,
                            i3,
                            region_0.imageOffset.y,
                            i3,
                            region_0.imageExtent.height);
                    }

                }
            }

        }

    }
    return skip;
}

bool ExplicitValidation::PreCallValidateCmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions) const
{
    auto srcImage_ = Get<IMAGE_STATE>(srcImage);
    auto dstBuffer_ = Get<BUFFER_STATE>(dstBuffer);
    bool skip = false;

    {
        if ((Builtin_create_info(srcImage_).imageType == VK_IMAGE_TYPE_1D))
        {
            for (uint32_t i3 = 0; i3 < regionCount; ++i3)
            {
                const VkBufferImageCopy &region_0 = pRegions[i3];
                {
                    if (!((region_0.imageOffset.y == 0)))
                    {
                        const LogObjectList objlist{srcImage};
                        skip |= LogFail(objlist, "VUID-vkCmdCopyImageToBuffer-srcImage-00199",
                            R"(    ${vu-keyword}if${} srcImage${vu-value}{{%s}}${}.${vu-builtin}create_info${}().imageType ${vu-operator}==${} VK_IMAGE_TYPE_1D:
      ${vu-keyword}for${} region${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pRegions:
        ${vu-builtin}require${}(region${vu-value}{{@%)" PRIu32 R"(}}${}.imageOffset.y${vu-value}{{%)" PRId32 R"(}}${} ${vu-operator}==${} ${vu-number}0${})${vu-fail} <-- Failing condition (Values captured at this instant)${}
        ${vu-builtin}require${}(region.imageExtent.height ${vu-operator}==${} ${vu-number}1${}))",
                            report_data->FormatHandle(srcImage).c_str(),
                            i3,
                            i3,
                            region_0.imageOffset.y);
                    }

                    if (!((region_0.imageExtent.height == 1)))
                    {
                        const LogObjectList objlist{srcImage};
                        skip |= LogFail(objlist, "VUID-vkCmdCopyImageToBuffer-srcImage-00199",
                            R"(    ${vu-keyword}if${} srcImage${vu-value}{{%s}}${}.${vu-builtin}create_info${}().imageType ${vu-operator}==${} VK_IMAGE_TYPE_1D:
      ${vu-keyword}for${} region${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pRegions:
        ${vu-builtin}require${}(region${vu-value}{{@%)" PRIu32 R"(}}${}.imageOffset.y${vu-value}{{%)" PRId32 R"(}}${} ${vu-operator}==${} ${vu-number}0${})
        ${vu-builtin}require${}(region${vu-value}{{@%)" PRIu32 R"(}}${}.imageExtent.height${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}==${} ${vu-number}1${})${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                            report_data->FormatHandle(srcImage).c_str(),
                            i3,
                            i3,
                            region_0.imageOffset.y,
                            i3,
                            region_0.imageExtent.height);
                    }

                }
            }

        }

    }
    return skip;
}

bool ExplicitValidation::PreCallValidateCopyBufferToImageInfo2(VkStructureType sType, const void* pNext, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy2* pRegions) const
{
    auto srcBuffer_ = Get<BUFFER_STATE>(srcBuffer);
    auto dstImage_ = Get<IMAGE_STATE>(dstImage);
    bool skip = false;

    {
        if ((Builtin_create_info(dstImage_).imageType == VK_IMAGE_TYPE_1D))
        {
            for (uint32_t i3 = 0; i3 < regionCount; ++i3)
            {
                const VkBufferImageCopy2 &region_0 = pRegions[i3];
                {
                    if (!((region_0.imageOffset.y == 0)))
                    {
                        const LogObjectList objlist{dstImage};
                        skip |= LogFail(objlist, "VUID-VkCopyBufferToImageInfo2-srcImage-00199",
                            R"(    ${vu-keyword}if${} dstImage${vu-value}{{%s}}${}.${vu-builtin}create_info${}().imageType ${vu-operator}==${} VK_IMAGE_TYPE_1D:
      ${vu-keyword}for${} region${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pRegions:
        ${vu-builtin}require${}(region${vu-value}{{@%)" PRIu32 R"(}}${}.imageOffset.y${vu-value}{{%)" PRId32 R"(}}${} ${vu-operator}==${} ${vu-number}0${})${vu-fail} <-- Failing condition (Values captured at this instant)${}
        ${vu-builtin}require${}(region.imageExtent.height ${vu-operator}==${} ${vu-number}1${}))",
                            report_data->FormatHandle(dstImage).c_str(),
                            i3,
                            i3,
                            region_0.imageOffset.y);
                    }

                    if (!((region_0.imageExtent.height == 1)))
                    {
                        const LogObjectList objlist{dstImage};
                        skip |= LogFail(objlist, "VUID-VkCopyBufferToImageInfo2-srcImage-00199",
                            R"(    ${vu-keyword}if${} dstImage${vu-value}{{%s}}${}.${vu-builtin}create_info${}().imageType ${vu-operator}==${} VK_IMAGE_TYPE_1D:
      ${vu-keyword}for${} region${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pRegions:
        ${vu-builtin}require${}(region${vu-value}{{@%)" PRIu32 R"(}}${}.imageOffset.y${vu-value}{{%)" PRId32 R"(}}${} ${vu-operator}==${} ${vu-number}0${})
        ${vu-builtin}require${}(region${vu-value}{{@%)" PRIu32 R"(}}${}.imageExtent.height${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}==${} ${vu-number}1${})${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                            report_data->FormatHandle(dstImage).c_str(),
                            i3,
                            i3,
                            region_0.imageOffset.y,
                            i3,
                            region_0.imageExtent.height);
                    }

                }
            }

        }

    }
    return skip;
}

bool ExplicitValidation::PreCallValidateCopyImageToBufferInfo2(VkStructureType sType, const void* pNext, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy2* pRegions) const
{
    auto srcImage_ = Get<IMAGE_STATE>(srcImage);
    auto dstBuffer_ = Get<BUFFER_STATE>(dstBuffer);
    bool skip = false;

    {
        if ((Builtin_create_info(srcImage_).imageType == VK_IMAGE_TYPE_1D))
        {
            for (uint32_t i3 = 0; i3 < regionCount; ++i3)
            {
                const VkBufferImageCopy2 &region_0 = pRegions[i3];
                {
                    if (!((region_0.imageOffset.y == 0)))
                    {
                        const LogObjectList objlist{srcImage};
                        skip |= LogFail(objlist, "VUID-VkCopyImageToBufferInfo2-srcImage-00199",
                            R"(    ${vu-keyword}if${} srcImage${vu-value}{{%s}}${}.${vu-builtin}create_info${}().imageType ${vu-operator}==${} VK_IMAGE_TYPE_1D:
      ${vu-keyword}for${} region${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pRegions:
        ${vu-builtin}require${}(region${vu-value}{{@%)" PRIu32 R"(}}${}.imageOffset.y${vu-value}{{%)" PRId32 R"(}}${} ${vu-operator}==${} ${vu-number}0${})${vu-fail} <-- Failing condition (Values captured at this instant)${}
        ${vu-builtin}require${}(region.imageExtent.height ${vu-operator}==${} ${vu-number}1${}))",
                            report_data->FormatHandle(srcImage).c_str(),
                            i3,
                            i3,
                            region_0.imageOffset.y);
                    }

                    if (!((region_0.imageExtent.height == 1)))
                    {
                        const LogObjectList objlist{srcImage};
                        skip |= LogFail(objlist, "VUID-VkCopyImageToBufferInfo2-srcImage-00199",
                            R"(    ${vu-keyword}if${} srcImage${vu-value}{{%s}}${}.${vu-builtin}create_info${}().imageType ${vu-operator}==${} VK_IMAGE_TYPE_1D:
      ${vu-keyword}for${} region${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pRegions:
        ${vu-builtin}require${}(region${vu-value}{{@%)" PRIu32 R"(}}${}.imageOffset.y${vu-value}{{%)" PRId32 R"(}}${} ${vu-operator}==${} ${vu-number}0${})
        ${vu-builtin}require${}(region${vu-value}{{@%)" PRIu32 R"(}}${}.imageExtent.height${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}==${} ${vu-number}1${})${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                            report_data->FormatHandle(srcImage).c_str(),
                            i3,
                            i3,
                            region_0.imageOffset.y,
                            i3,
                            region_0.imageExtent.height);
                    }

                }
            }

        }

    }
    return skip;
}

bool ExplicitValidation::PreCallValidateDescriptorSetLayoutCreateInfo(VkStructureType sType, const void* pNext, VkDescriptorSetLayoutCreateFlags flags, uint32_t bindingCount, const VkDescriptorSetLayoutBinding* pBindings) const
{
    bool skip = false;

    {
        for (uint32_t i2 = 0; i2 < bindingCount; ++i2)
        {
            const VkDescriptorSetLayoutBinding &binding_0 = pBindings[i2];
            {
                for (uint32_t i4 = 0; i4 < bindingCount; ++i4)
                {
                    const VkDescriptorSetLayoutBinding &binding2_1 = pBindings[i4];
                    {
                        if ((i4 >= i2))
                        {
                            break;
                        }

                        if (!((binding_0.binding != binding2_1.binding)))
                        {
                            const LogObjectList objlist{};
                            skip |= LogFail(objlist, "VUID-VkDescriptorSetLayoutCreateInfo-binding-00279",
                                R"(    ${vu-keyword}for${} binding${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pBindings:
      ${vu-keyword}for${} binding2${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pBindings:
        ${vu-keyword}if${} ${vu-builtin}loop_index${}(binding2${vu-value}{{@%)" PRIu32 R"(}}${}) ${vu-operator}>=${} ${vu-builtin}loop_index${}(binding${vu-value}{{@%)" PRIu32 R"(}}${}):
          ${vu-keyword}break${}
        ${vu-builtin}require${}(binding${vu-value}{{@%)" PRIu32 R"(}}${}.binding${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}!=${} binding2${vu-value}{{@%)" PRIu32 R"(}}${}.binding${vu-value}{{%)" PRIu32 R"(}}${})${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                                i2,
                                i4,
                                i4,
                                i2,
                                i2,
                                binding_0.binding,
                                i4,
                                binding2_1.binding);
                        }

                    }
                }

                if ((binding_0.descriptorType == VK_DESCRIPTOR_TYPE_MUTABLE_EXT))
                {
                    if (!(Builtin_has_pnext<VkMutableDescriptorTypeCreateInfoEXT>(pNext)))
                    {
                        const LogObjectList objlist{};
                        skip |= LogFail(objlist, "VUID-VkDescriptorSetLayoutCreateInfo-pBindings-07303",
                            R"(    ${vu-keyword}for${} binding${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pBindings:
      ${vu-keyword}if${} binding${vu-value}{{@%)" PRIu32 R"(}}${}.descriptorType ${vu-operator}==${} VK_DESCRIPTOR_TYPE_MUTABLE_EXT:
        ${vu-builtin}require${}(${vu-builtin}has_pnext${}(VkMutableDescriptorTypeCreateInfoEXT)${vu-value}{{%s}}${})${vu-fail} <-- Failing condition (Values captured at this instant)${}
        mutableCount ${vu-operator}=${} ${vu-builtin}pnext${}(VkMutableDescriptorTypeCreateInfoEXT).mutableDescriptorTypeListCount
        ${vu-builtin}require${}(mutableCount ${vu-operator}>${} ${vu-builtin}loop_index${}(binding)))",
                            i2,
                            i2,
                            (Builtin_has_pnext<VkMutableDescriptorTypeCreateInfoEXT>(pNext)) ? "true" : "false");
                    }

                    uint32_t mutableCount_9=Builtin_pnext<VkMutableDescriptorTypeCreateInfoEXT>(pNext)->mutableDescriptorTypeListCount;
                    if (!((mutableCount_9 > i2)))
                    {
                        const LogObjectList objlist{};
                        skip |= LogFail(objlist, "VUID-VkDescriptorSetLayoutCreateInfo-pBindings-07303",
                            R"(    ${vu-keyword}for${} binding${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pBindings:
      ${vu-keyword}if${} binding${vu-value}{{@%)" PRIu32 R"(}}${}.descriptorType ${vu-operator}==${} VK_DESCRIPTOR_TYPE_MUTABLE_EXT:
        ${vu-builtin}require${}(${vu-builtin}has_pnext${}(VkMutableDescriptorTypeCreateInfoEXT)${vu-value}{{%s}}${})
        mutableCount${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}=${} ${vu-builtin}pnext${}(VkMutableDescriptorTypeCreateInfoEXT).mutableDescriptorTypeListCount${vu-value}{{%)" PRIu32 R"(}}${}
        ${vu-builtin}require${}(mutableCount${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}>${} ${vu-builtin}loop_index${}(binding${vu-value}{{@%)" PRIu32 R"(}}${}))${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                            i2,
                            i2,
                            (Builtin_has_pnext<VkMutableDescriptorTypeCreateInfoEXT>(pNext)) ? "true" : "false",
                            mutableCount_9,
                            Builtin_pnext<VkMutableDescriptorTypeCreateInfoEXT>(pNext)->mutableDescriptorTypeListCount,
                            mutableCount_9,
                            i2);
                    }

                }

            }
        }

        if (Builtin_has_bit(flags, VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR))
        {
            if (!(!(Builtin_has_bit(flags, VK_DESCRIPTOR_SET_LAYOUT_CREATE_HOST_ONLY_POOL_BIT_EXT))))
            {
                const LogObjectList objlist{};
                skip |= LogFail(objlist, "VUID-VkDescriptorSetLayoutCreateInfo-flags-04590",
                    R"(    ${vu-keyword}if${} flags${vu-value}{{%#)" PRIx32 R"(}}${}.${vu-builtin}has_bit${}(VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR)${vu-value}{{%s}}${}:
      ${vu-builtin}require${}(${vu-operator}not${} flags${vu-value}{{%#)" PRIx32 R"(}}${}.${vu-builtin}has_bit${}(VK_DESCRIPTOR_SET_LAYOUT_CREATE_HOST_ONLY_POOL_BIT_EXT)${vu-value}{{%s}}${})${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                    flags,
                    (Builtin_has_bit(flags, VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR)) ? "true" : "false",
                    flags,
                    (Builtin_has_bit(flags, VK_DESCRIPTOR_SET_LAYOUT_CREATE_HOST_ONLY_POOL_BIT_EXT)) ? "true" : "false");
            }

            for (uint32_t i3 = 0; i3 < bindingCount; ++i3)
            {
                const VkDescriptorSetLayoutBinding &binding_2 = pBindings[i3];
                {
                    if (!(((binding_2.descriptorType != VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC)&&(binding_2.descriptorType != VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC))))
                    {
                        const LogObjectList objlist{};
                        skip |= LogFail(objlist, "VUID-VkDescriptorSetLayoutCreateInfo-flags-00280",
                            R"(    ${vu-keyword}if${} flags${vu-value}{{%#)" PRIx32 R"(}}${}.${vu-builtin}has_bit${}(VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR)${vu-value}{{%s}}${}:
      ${vu-keyword}for${} binding${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pBindings:
        ${vu-builtin}require${}(binding${vu-value}{{@%)" PRIu32 R"(}}${}.descriptorType ${vu-operator}!=${} VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC ${vu-operator}and${}
            binding${vu-value}{{@%)" PRIu32 R"(}}${}.descriptorType ${vu-operator}!=${} VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC)${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                            flags,
                            (Builtin_has_bit(flags, VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR)) ? "true" : "false",
                            i3,
                            i3,
                            i3);
                    }

                    if (!((binding_2.descriptorType != VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK)))
                    {
                        const LogObjectList objlist{};
                        skip |= LogFail(objlist, "VUID-VkDescriptorSetLayoutCreateInfo-flags-02208",
                            R"(    ${vu-keyword}if${} flags${vu-value}{{%#)" PRIx32 R"(}}${}.${vu-builtin}has_bit${}(VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR)${vu-value}{{%s}}${}:
      ${vu-keyword}for${} binding${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pBindings:
        ${vu-builtin}require${}(binding${vu-value}{{@%)" PRIu32 R"(}}${}.descriptorType ${vu-operator}!=${} VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK)${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                            flags,
                            (Builtin_has_bit(flags, VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR)) ? "true" : "false",
                            i3,
                            i3);
                    }

                    if (!((binding_2.descriptorType != VK_DESCRIPTOR_TYPE_MUTABLE_EXT)))
                    {
                        const LogObjectList objlist{};
                        skip |= LogFail(objlist, "VUID-VkDescriptorSetLayoutCreateInfo-flags-04591",
                            R"(    ${vu-keyword}if${} flags${vu-value}{{%#)" PRIx32 R"(}}${}.${vu-builtin}has_bit${}(VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR)${vu-value}{{%s}}${}:
      ${vu-keyword}for${} binding${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pBindings:
        ${vu-builtin}require${}(binding${vu-value}{{@%)" PRIu32 R"(}}${}.descriptorType ${vu-operator}!=${} VK_DESCRIPTOR_TYPE_MUTABLE_EXT)${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                            flags,
                            (Builtin_has_bit(flags, VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR)) ? "true" : "false",
                            i3,
                            i3);
                    }

                }
            }

        }

        if (Builtin_has_pnext<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT>(pNext))
        {
            const VkDescriptorSetLayoutBindingFlagsCreateInfoEXT *bindingFlagsCreateInfo_5=Builtin_pnext<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT>(pNext);
            bool hasUpdateAfterBind_6=false;
            for (uint32_t i3 = 0; i3 < bindingCount; ++i3)
            {
                const VkDescriptorBindingFlags &bindingFlags_7 = bindingFlagsCreateInfo_5->pBindingFlags[i3];
                {
                    if (Builtin_has_bit(bindingFlags_7, VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT))
                    {
                        hasUpdateAfterBind_6=true;
                        break;
                    }

                }
            }

            if (hasUpdateAfterBind_6)
            {
                if (!(Builtin_has_bit(flags, VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT)))
                {
                    const LogObjectList objlist{};
                    skip |= LogFail(objlist, "VUID-VkDescriptorSetLayoutCreateInfo-flags-03000",
                        R"(    ${vu-keyword}if${} ${vu-builtin}has_pnext${}(VkDescriptorSetLayoutBindingFlagsCreateInfoEXT)${vu-value}{{%s}}${}:
      bindingFlagsCreateInfo ${vu-operator}=${} ${vu-builtin}pnext${}(VkDescriptorSetLayoutBindingFlagsCreateInfoEXT)
      hasUpdateAfterBind${vu-value}{{%s}}${} ${vu-operator}=${} ${vu-number}False${}
      ${vu-keyword}for${} bindingFlags ${vu-operator}in${} bindingFlagsCreateInfo.pBindingFlags:
        ${vu-keyword}if${} bindingFlags.${vu-builtin}has_bit${}(VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT):
          hasUpdateAfterBind ${vu-operator}=${} ${vu-number}True${}
          ${vu-keyword}break${}
      ${vu-keyword}if${} hasUpdateAfterBind${vu-value}{{%s}}${}:
        ${vu-builtin}require${}(flags${vu-value}{{%#)" PRIx32 R"(}}${}.${vu-builtin}has_bit${}(VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT)${vu-value}{{%s}}${})${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                        (Builtin_has_pnext<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT>(pNext)) ? "true" : "false",
                        (hasUpdateAfterBind_6) ? "true" : "false",
                        (hasUpdateAfterBind_6) ? "true" : "false",
                        flags,
                        (Builtin_has_bit(flags, VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT)) ? "true" : "false");
                }

            }

        }

    }
    return skip;
}

bool ExplicitValidation::PreCallValidateDeviceCreateInfo(VkStructureType sType, const void* pNext, VkDeviceCreateFlags flags, uint32_t queueCreateInfoCount, const VkDeviceQueueCreateInfo* pQueueCreateInfos, uint32_t enabledLayerCount, const char* const* ppEnabledLayerNames, uint32_t enabledExtensionCount, const char* const* ppEnabledExtensionNames, const VkPhysicalDeviceFeatures* pEnabledFeatures) const
{
    bool skip = false;

    {
        for (uint32_t i2 = 0; i2 < queueCreateInfoCount; ++i2)
        {
            const VkDeviceQueueCreateInfo &queue_0 = pQueueCreateInfos[i2];
            {
                for (uint32_t i4 = 0; i4 < queueCreateInfoCount; ++i4)
                {
                    const VkDeviceQueueCreateInfo &queue2_1 = pQueueCreateInfos[i4];
                    {
                        if ((i4 >= i2))
                        {
                            break;
                        }

                        if (!((queue_0.queueFamilyIndex != queue2_1.queueFamilyIndex)))
                        {
                            const LogObjectList objlist{};
                            skip |= LogFail(objlist, "VUID-VkDeviceCreateInfo-queueFamilyIndex-00372",
                                R"(    ${vu-keyword}for${} queue${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pQueueCreateInfos:
      ${vu-keyword}for${} queue2${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pQueueCreateInfos:
        ${vu-keyword}if${} ${vu-builtin}loop_index${}(queue2${vu-value}{{@%)" PRIu32 R"(}}${}) ${vu-operator}>=${} ${vu-builtin}loop_index${}(queue${vu-value}{{@%)" PRIu32 R"(}}${}):
          ${vu-keyword}break${}
        ${vu-builtin}require${}(queue${vu-value}{{@%)" PRIu32 R"(}}${}.queueFamilyIndex${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}!=${} queue2${vu-value}{{@%)" PRIu32 R"(}}${}.queueFamilyIndex${vu-value}{{%)" PRIu32 R"(}}${})${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                                i2,
                                i4,
                                i4,
                                i2,
                                i2,
                                queue_0.queueFamilyIndex,
                                i4,
                                queue2_1.queueFamilyIndex);
                        }

                    }
                }

                for (uint32_t i4 = 0; i4 < queueCreateInfoCount; ++i4)
                {
                    const VkDeviceQueueCreateInfo &queue2_3 = pQueueCreateInfos[i4];
                    {
                        if ((i4 >= i2))
                        {
                            break;
                        }

                        bool protected_4=Builtin_has_bit(queue_0.flags, VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT);
                        bool protected2_5=Builtin_has_bit(queue2_3.flags, VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT);
                        if (!(((queue_0.queueFamilyIndex != queue2_3.queueFamilyIndex)||(protected_4 != protected2_5))))
                        {
                            const LogObjectList objlist{};
                            skip |= LogFail(objlist, "VUID-VkDeviceCreateInfo-queueFamilyIndex-02802",
                                R"(    ${vu-keyword}for${} queue${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pQueueCreateInfos:
      ${vu-keyword}for${} queue2${vu-value}{{@%)" PRIu32 R"(}}${} ${vu-operator}in${} pQueueCreateInfos:
        ${vu-keyword}if${} ${vu-builtin}loop_index${}(queue2${vu-value}{{@%)" PRIu32 R"(}}${}) ${vu-operator}>=${} ${vu-builtin}loop_index${}(queue${vu-value}{{@%)" PRIu32 R"(}}${}):
          ${vu-keyword}break${}
        protected${vu-value}{{%s}}${} ${vu-operator}=${} queue${vu-value}{{@%)" PRIu32 R"(}}${}.flags${vu-value}{{%#)" PRIx32 R"(}}${}.${vu-builtin}has_bit${}(VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT)${vu-value}{{%s}}${}
        protected2${vu-value}{{%s}}${} ${vu-operator}=${} queue2${vu-value}{{@%)" PRIu32 R"(}}${}.flags${vu-value}{{%#)" PRIx32 R"(}}${}.${vu-builtin}has_bit${}(VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT)${vu-value}{{%s}}${}
        ${vu-builtin}require${}(queue${vu-value}{{@%)" PRIu32 R"(}}${}.queueFamilyIndex${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}!=${} queue2${vu-value}{{@%)" PRIu32 R"(}}${}.queueFamilyIndex${vu-value}{{%)" PRIu32 R"(}}${} ${vu-operator}or${}
            protected${vu-value}{{%s}}${} ${vu-operator}!=${} protected2${vu-value}{{%s}}${})${vu-fail} <-- Failing condition (Values captured at this instant)${})",
                                i2,
                                i4,
                                i4,
                                i2,
                                (protected_4) ? "true" : "false",
                                i2,
                                queue_0.flags,
                                (Builtin_has_bit(queue_0.flags, VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT)) ? "true" : "false",
                                (protected2_5) ? "true" : "false",
                                i4,
                                queue2_3.flags,
                                (Builtin_has_bit(queue2_3.flags, VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT)) ? "true" : "false",
                                i2,
                                queue_0.queueFamilyIndex,
                                i4,
                                queue2_3.queueFamilyIndex,
                                (protected_4) ? "true" : "false",
                                (protected2_5) ? "true" : "false");
                        }

                    }
                }

            }
        }

    }
    return skip;
}

