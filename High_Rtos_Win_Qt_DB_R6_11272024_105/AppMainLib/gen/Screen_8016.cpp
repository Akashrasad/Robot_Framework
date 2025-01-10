// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_8016.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8016::onScreenHide()
{
    Image_img_icn_cameraerror.mVisibility.unBind(gm::csm::Data_VPM_CAMERA_ERROR_ICON_VISIBILITY, mBindingsIds[0U]);
    Group_grp_img_exit.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[1U]);
    Image_img_exit_btn_mfc_camera.mVisibility.unBind(gm::csm::Data_VPM_CAMERA_ERROR_ICON_VISIBILITY, mBindingsIds[2U]);
    Image_img_bg_black.mState.unBind(gm::csm::Data_RHD_CAMERA_BG_ENABLED, mBindingsIds[3U]);
    Label_virtualcontrols_1_1_exitBtn_csm.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[4U]);
    Image_img_exit_camera.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[5U]);
    Image_img_icn_camera_error.mVisibility.unBind(gm::csm::Data_VPM_CAMERA_ERROR_ICON_VISIBILITY, mBindingsIds[6U]);
}

void Screen_8016::onScreenShow()
{
    mBindingsIds[0U] = Image_img_icn_cameraerror.mVisibility.bind(gm::csm::Data_VPM_CAMERA_ERROR_ICON_VISIBILITY);
    mBindingsIds[1U] = Group_grp_img_exit.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[2U] = Image_img_exit_btn_mfc_camera.mVisibility.bind(gm::csm::Data_VPM_CAMERA_ERROR_ICON_VISIBILITY);
    mBindingsIds[3U] = Image_img_bg_black.mState.bind(gm::csm::Data_RHD_CAMERA_BG_ENABLED);
    mBindingsIds[4U] = Label_virtualcontrols_1_1_exitBtn_csm.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[5U] = Image_img_exit_camera.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[6U] = Image_img_icn_camera_error.mVisibility.bind(gm::csm::Data_VPM_CAMERA_ERROR_ICON_VISIBILITY);
}


} // namespace csm
} // namespace gm
