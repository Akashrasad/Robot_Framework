// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_7001.h"

#include "APA_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7001::onScreenHide()
{
    Image_img_park_right_perp.mState.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[0U]);
    Image_img_apa_exit_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[1U]);
    Image_img_park_right_parallel.mState.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[2U]);
    Group_grp_exit_apa_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[3U]);
    Label_apa_3_0F_HowtoPark_csm.mState.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[4U]);
    GroupImage_btn_tab_two.mState.unBind(gm::csm::APA_EXIT_PARK_DRAWER_REQUEST, mBindingsIds[5U]);
    Image_img_park_left_parallel.mState.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[6U]);
    GroupLabel_apa_dyn_3_0_Exit_f_csm.mState.unBind(gm::csm::APA_EXIT_PARK_DRAWER_REQUEST, mBindingsIds[7U]);
    Group_grp_exit_apa_btn_mfc.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[8U]);
    Group_grp_tab_two.mVisibility.unBind(gm::csm::APA_EXIT_PARK_DRAWER_VISIBILITY_INTERNAL, mBindingsIds[9U]);
    Label_apa_dyn_3_0_ToExitDrawer_csm.mState.unBind(gm::csm::APA_EXIT_PARK_DRAWER_REQUEST, mBindingsIds[10U]);
    Image_img_park_left_perp.mState.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[11U]);
}

void Screen_7001::onScreenShow()
{
    mBindingsIds[0U] = Image_img_park_right_perp.mState.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[1U] = Image_img_apa_exit_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[2U] = Image_img_park_right_parallel.mState.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[3U] = Group_grp_exit_apa_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[4U] = Label_apa_3_0F_HowtoPark_csm.mState.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[5U] = GroupImage_btn_tab_two.mState.bind(gm::csm::APA_EXIT_PARK_DRAWER_REQUEST);
    mBindingsIds[6U] = Image_img_park_left_parallel.mState.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[7U] = GroupLabel_apa_dyn_3_0_Exit_f_csm.mState.bind(gm::csm::APA_EXIT_PARK_DRAWER_REQUEST);
    mBindingsIds[8U] = Group_grp_exit_apa_btn_mfc.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[9U] = Group_grp_tab_two.mVisibility.bind(gm::csm::APA_EXIT_PARK_DRAWER_VISIBILITY_INTERNAL);
    mBindingsIds[10U] = Label_apa_dyn_3_0_ToExitDrawer_csm.mState.bind(gm::csm::APA_EXIT_PARK_DRAWER_REQUEST);
    mBindingsIds[11U] = Image_img_park_left_perp.mState.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
}


} // namespace csm
} // namespace gm
