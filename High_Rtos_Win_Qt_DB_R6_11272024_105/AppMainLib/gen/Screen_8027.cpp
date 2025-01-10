// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_8027.h"

#include "Camera_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8027::onScreenHide()
{
    Image_img_exit_btn_mfc_camera.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[0U]);
    Image_img_zoom_in.mVisibility.unBind(gm::csm::Data_VPM_TRAINSPARENT_TRAILER_AVAILABLE, mBindingsIds[1U]);
    Group_grp_img_exit_trailer.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[2U]);
    Image_img_zoom_out.mVisibility.unBind(gm::csm::Data_VPM_TRAINSPARENT_TRAILER_AVAILABLE, mBindingsIds[3U]);
}

void Screen_8027::onScreenShow()
{
    mBindingsIds[0U] = Image_img_exit_btn_mfc_camera.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[1U] = Image_img_zoom_in.mVisibility.bind(gm::csm::Data_VPM_TRAINSPARENT_TRAILER_AVAILABLE);
    mBindingsIds[2U] = Group_grp_img_exit_trailer.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[3U] = Image_img_zoom_out.mVisibility.bind(gm::csm::Data_VPM_TRAINSPARENT_TRAILER_AVAILABLE);
}


} // namespace csm
} // namespace gm
