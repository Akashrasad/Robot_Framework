// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6170.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6170::onScreenHide()
{
    Image_img_contrast_decrease.mState.unBind(gm::csm::Data_NIGHT_VISION_CONTRAST_INTERNAL, mBindingsIds[0U]);
    Image_img_brightness_increase.mState.unBind(gm::csm::Data_NIGHT_VISION_BRIGHTNESS_INTERNAL, mBindingsIds[1U]);
    Image_img_contrast_increase.mState.unBind(gm::csm::Data_NIGHT_VISION_CONTRAST_INTERNAL, mBindingsIds[2U]);
    GroupLabel_dyn_contrast_display.mText.unBind(gm::csm::Data_NIGHT_VISION_CONTRAST_TEXT, mBindingsIds[3U]);
    GroupLabel_dyn_brightness_display.mText.unBind(gm::csm::Data_NIGHT_VISION_BRIGHTNESS_TEXT, mBindingsIds[4U]);
    Image_img_brightness_decrease.mState.unBind(gm::csm::Data_NIGHT_VISION_BRIGHTNESS_INTERNAL, mBindingsIds[5U]);
}

void Screen_6170::onScreenShow()
{
    mBindingsIds[0U] = Image_img_contrast_decrease.mState.bind(gm::csm::Data_NIGHT_VISION_CONTRAST_INTERNAL);
    mBindingsIds[1U] = Image_img_brightness_increase.mState.bind(gm::csm::Data_NIGHT_VISION_BRIGHTNESS_INTERNAL);
    mBindingsIds[2U] = Image_img_contrast_increase.mState.bind(gm::csm::Data_NIGHT_VISION_CONTRAST_INTERNAL);
    mBindingsIds[3U] = GroupLabel_dyn_contrast_display.mText.bind(gm::csm::Data_NIGHT_VISION_CONTRAST_TEXT);
    mBindingsIds[4U] = GroupLabel_dyn_brightness_display.mText.bind(gm::csm::Data_NIGHT_VISION_BRIGHTNESS_TEXT);
    mBindingsIds[5U] = Image_img_brightness_decrease.mState.bind(gm::csm::Data_NIGHT_VISION_BRIGHTNESS_INTERNAL);
}


} // namespace csm
} // namespace gm
