// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_8008.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8008::onScreenHide()
{
    Image_img_exit_camera.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[0U]);
    Image_img_bg_black.mState.unBind(gm::csm::Data_RHD_CAMERA_BG_ENABLED, mBindingsIds[1U]);
    Group_grp_img_exit.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[2U]);
    Label_virtualcontrols_1_1_exitBtn_csm.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[3U]);
    GroupImage_img_btn_close_active.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[4U]);
}

void Screen_8008::onScreenShow()
{
    mBindingsIds[0U] = Image_img_exit_camera.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[1U] = Image_img_bg_black.mState.bind(gm::csm::Data_RHD_CAMERA_BG_ENABLED);
    mBindingsIds[2U] = Group_grp_img_exit.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[3U] = Label_virtualcontrols_1_1_exitBtn_csm.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[4U] = GroupImage_img_btn_close_active.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
}


} // namespace csm
} // namespace gm
