// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6016.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6016::Widget_Logic_Visibility_img_park_assist() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_001 = !(var_002);
    
    Image_img_park_assist.mVisibility = var_001;
}

void Screen_6016::Widget_Logic_Visibility_virtualcontrols_1_7_F_ParkAssist_csm() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_003 = !(var_004);
    
    Label_virtualcontrols_1_7_F_ParkAssist_csm.mVisibility = var_003;
}

void Screen_6016::onScreenHide()
{
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[0U]);
    Label_virtualcontrols_1_3_card_park_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[1U]);
    GroupLabel_dyn_park_assist_status.mText.unBind(gm::csm::Data_VIRTUAL_CONTROLS_UPDATE_PARK_ASSIST_LABEL_TEXT, mBindingsIds[2U]);
    Image_img_close.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE, mBindingsIds[3U]);
}

void Screen_6016::onScreenShow()
{
    mBindingsIds[0U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[1U] = Label_virtualcontrols_1_3_card_park_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    addDependency(this, &Screen_6016::Widget_Logic_Visibility_img_park_assist, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[2U] = GroupLabel_dyn_park_assist_status.mText.bind(gm::csm::Data_VIRTUAL_CONTROLS_UPDATE_PARK_ASSIST_LABEL_TEXT);
    addDependency(this, &Screen_6016::Widget_Logic_Visibility_virtualcontrols_1_7_F_ParkAssist_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[3U] = Image_img_close.mVisibility.bind(gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
}


} // namespace csm
} // namespace gm
