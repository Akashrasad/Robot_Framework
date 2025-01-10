// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6165.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6165::Widget_Logic_Visibility_img_rear_auto_breaking() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_001 = !(var_002);
    
    Image_img_rear_auto_breaking.mVisibility = var_001;
}

void Screen_6165::Widget_Logic_Visibility_virtualcontrols_1_7_F_RAB_csm() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_003 = !(var_004);
    
    Label_virtualcontrols_1_7_F_RAB_csm.mVisibility = var_003;
}

void Screen_6165::Widget_Logic_Visibility_img_controls_rear_breaking_close() noexcept
{
    const bool var_006 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_005 = !(var_006);
    
    Image_img_controls_rear_breaking_close.mVisibility = var_005;
}

void Screen_6165::onScreenHide()
{
    Label_virtualcontrols_1_7_F_RABTitle_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[0U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[1U]);
    GroupLabel_dyn_rear_auto_status.mText.unBind(gm::csm::Data_VIRTUAL_CONTROLS_UPDATE_RAB_LABEL_TEXT, mBindingsIds[2U]);
}

void Screen_6165::onScreenShow()
{
    mBindingsIds[0U] = Label_virtualcontrols_1_7_F_RABTitle_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    addDependency(this, &Screen_6165::Widget_Logic_Visibility_img_rear_auto_breaking, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[1U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6165::Widget_Logic_Visibility_virtualcontrols_1_7_F_RAB_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[2U] = GroupLabel_dyn_rear_auto_status.mText.bind(gm::csm::Data_VIRTUAL_CONTROLS_UPDATE_RAB_LABEL_TEXT);
    addDependency(this, &Screen_6165::Widget_Logic_Visibility_img_controls_rear_breaking_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
}


} // namespace csm
} // namespace gm
