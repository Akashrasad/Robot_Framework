// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_7030.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7030::onScreenHide()
{
    Image_img_park_left_parallel.mState.unBind(gm::csm::Data_APA_LEFT_PARK_INSTRUCTION, mBindingsIds[0U]);
    Image_img_apa_exit_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[1U]);
    Group_grp_exit_apa_btn_mfc.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[2U]);
    Image_img_park_left_perp.mState.unBind(gm::csm::Data_APA_LEFT_PARK_INSTRUCTION, mBindingsIds[3U]);
    Image_img_park_right_parallel.mState.unBind(gm::csm::Data_APA_RIGHT_PARK_INSTRUCTION, mBindingsIds[4U]);
    Group_grp_exit_apa_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[5U]);
    Image_img_park_right_perp.mState.unBind(gm::csm::Data_APA_RIGHT_PARK_INSTRUCTION, mBindingsIds[6U]);
}

void Screen_7030::onScreenShow()
{
    mBindingsIds[0U] = Image_img_park_left_parallel.mState.bind(gm::csm::Data_APA_LEFT_PARK_INSTRUCTION);
    mBindingsIds[1U] = Image_img_apa_exit_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[2U] = Group_grp_exit_apa_btn_mfc.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[3U] = Image_img_park_left_perp.mState.bind(gm::csm::Data_APA_LEFT_PARK_INSTRUCTION);
    mBindingsIds[4U] = Image_img_park_right_parallel.mState.bind(gm::csm::Data_APA_RIGHT_PARK_INSTRUCTION);
    mBindingsIds[5U] = Group_grp_exit_apa_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[6U] = Image_img_park_right_perp.mState.bind(gm::csm::Data_APA_RIGHT_PARK_INSTRUCTION);
}


} // namespace csm
} // namespace gm
