// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_7040.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7040::onScreenHide()
{
    Group_grp_exit_apa_btn_mfc.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[0U]);
    Group_grp_exit_apa_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[1U]);
    Label_apa_5_1_maneuvermessaging5_1_csm.mState.unBind(gm::csm::Data_Apa_Camera_Internal, mBindingsIds[2U]);
    Image_img_apa_exit_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[3U]);
}

void Screen_7040::onScreenShow()
{
    mBindingsIds[0U] = Group_grp_exit_apa_btn_mfc.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[1U] = Group_grp_exit_apa_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[2U] = Label_apa_5_1_maneuvermessaging5_1_csm.mState.bind(gm::csm::Data_Apa_Camera_Internal);
    mBindingsIds[3U] = Image_img_apa_exit_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
}


} // namespace csm
} // namespace gm
