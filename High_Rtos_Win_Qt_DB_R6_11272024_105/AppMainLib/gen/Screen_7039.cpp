// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_7039.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7039::onScreenHide()
{
    Group_grp_exit_apa_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[0U]);
    Group_grp_exit_apa_btn_mfc.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[1U]);
    Image_img_park_right_parallel.mState.unBind(gm::csm::Data_APA_RIGHT_PARK_INSTRUCTION, mBindingsIds[2U]);
    Image_img_apa_exit_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[3U]);
    Image_img_park_left_parallel.mState.unBind(gm::csm::Data_APA_LEFT_PARK_INSTRUCTION, mBindingsIds[4U]);
}

void Screen_7039::onScreenShow()
{
    mBindingsIds[0U] = Group_grp_exit_apa_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[1U] = Group_grp_exit_apa_btn_mfc.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[2U] = Image_img_park_right_parallel.mState.bind(gm::csm::Data_APA_RIGHT_PARK_INSTRUCTION);
    mBindingsIds[3U] = Image_img_apa_exit_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[4U] = Image_img_park_left_parallel.mState.bind(gm::csm::Data_APA_LEFT_PARK_INSTRUCTION);
}


} // namespace csm
} // namespace gm
