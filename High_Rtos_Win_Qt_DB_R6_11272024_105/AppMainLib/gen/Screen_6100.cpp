// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6100.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6100::onScreenHide()
{
    Image_img_bg_vc_black.mVisibility.unBind(gm::csm::Data_IS_FULL_BG_IMAGE_ENABLED, mBindingsIds[0U]);
    Image_img_bg_vc_black.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[1U]);
    Image_img_bg_half_black.mVisibility.unBind(gm::csm::Data_IS_HALF_BG_IMAGE_ENABLED, mBindingsIds[2U]);
}

void Screen_6100::onScreenShow()
{
    mBindingsIds[0U] = Image_img_bg_vc_black.mVisibility.bind(gm::csm::Data_IS_FULL_BG_IMAGE_ENABLED);
    mBindingsIds[1U] = Image_img_bg_vc_black.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    mBindingsIds[2U] = Image_img_bg_half_black.mVisibility.bind(gm::csm::Data_IS_HALF_BG_IMAGE_ENABLED);
}


} // namespace csm
} // namespace gm
