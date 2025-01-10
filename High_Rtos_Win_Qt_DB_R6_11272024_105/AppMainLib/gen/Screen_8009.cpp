// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_8009.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8009::onScreenHide()
{
    Image_img_btn_close_active.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[0U]);
    Image_img_btn_camera_wash.mVisibility.unBind(gm::csm::VPM_CAMERA_WASH_BUTTON_VISIBILITY, mBindingsIds[1U]);
    Image_img_btn_camera_zoom_in_out.mVisibility.unBind(gm::csm::VPM_CAMERA_ZOOM_BUTTON_VISIBILITY, mBindingsIds[2U]);
    Image_img_btn_camera_zoom_in_out.mState.unBind(gm::csm::VPM_CAMERA_ZOOM_BUTTON_SELECTION, mBindingsIds[3U]);
}

void Screen_8009::onScreenShow()
{
    mBindingsIds[0U] = Image_img_btn_close_active.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[1U] = Image_img_btn_camera_wash.mVisibility.bind(gm::csm::VPM_CAMERA_WASH_BUTTON_VISIBILITY);
    mBindingsIds[2U] = Image_img_btn_camera_zoom_in_out.mVisibility.bind(gm::csm::VPM_CAMERA_ZOOM_BUTTON_VISIBILITY);
    mBindingsIds[3U] = Image_img_btn_camera_zoom_in_out.mState.bind(gm::csm::VPM_CAMERA_ZOOM_BUTTON_SELECTION);
}


} // namespace csm
} // namespace gm
