// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_8014.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8014::onScreenHide()
{
    Image_img_exit_camera.mVisibility.unBind(gm::csm::Data_Exit_Button_Visibility, mBindingsIds[0U]);
    Image_img_exit.mVisibility.unBind(gm::csm::Data_Exit_Button_Visibility, mBindingsIds[1U]);
    Image_img_exit_btn_mfc_camera.mVisibility.unBind(gm::csm::Data_Exit_Button_Visibility, mBindingsIds[2U]);
}

void Screen_8014::onScreenShow()
{
    mBindingsIds[0U] = Image_img_exit_camera.mVisibility.bind(gm::csm::Data_Exit_Button_Visibility);
    mBindingsIds[1U] = Image_img_exit.mVisibility.bind(gm::csm::Data_Exit_Button_Visibility);
    mBindingsIds[2U] = Image_img_exit_btn_mfc_camera.mVisibility.bind(gm::csm::Data_Exit_Button_Visibility);
}


} // namespace csm
} // namespace gm
