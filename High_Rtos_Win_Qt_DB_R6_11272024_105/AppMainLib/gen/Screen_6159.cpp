// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6159.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6159::Widget_Logic_Visibility_virtualcontrols_1_3_10_v_rearSteering_csm() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_001 = !(var_002);
    
    Label_virtualcontrols_1_3_10_v_rearSteering_csm.mVisibility = var_001;
}

void Screen_6159::Widget_Logic_Visibility_img_controls_icn_rear_steering() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_003 = !(var_004);
    
    Image_img_controls_icn_rear_steering.mVisibility = var_003;
}

void Screen_6159::Label_virtualcontrols_1_3_10_v_rearSteering_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_3_10_v_rearSteering_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::Data_VIRTUAL_CONTROLS_REARSTEERING_STRING_UPDATE));
    Label_virtualcontrols_1_3_10_v_rearSteering_csm = text.c_str();
}

void Screen_6159::onScreenHide()
{
    GroupImage_img_rearsteering_btn.mState.unBind(gm::csm::VIRTUALCONTROLS_REAR_STEERING_STATUS_INTERNAL, mBindingsIds[1U]);
    GroupImage_img_launch_btn_crab.mState.unBind(gm::csm::VIRTUALCONTROLS_REAR_STEERING_STATUS_INTERNAL, mBindingsIds[2U]);
    Group_grp_img_crab_btn.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CRAB_WALK_VISIBILITY, mBindingsIds[3U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[4U]);
}

void Screen_6159::onScreenShow()
{
    addDependency(this, &Screen_6159::Widget_Logic_Visibility_virtualcontrols_1_3_10_v_rearSteering_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6159::Label_virtualcontrols_1_3_10_v_rearSteering_csm_bindings,gm::csm::Data_VIRTUAL_CONTROLS_REARSTEERING_STRING_UPDATE);
    mBindingsIds[1U] = GroupImage_img_rearsteering_btn.mState.bind(gm::csm::VIRTUALCONTROLS_REAR_STEERING_STATUS_INTERNAL);
    mBindingsIds[2U] = GroupImage_img_launch_btn_crab.mState.bind(gm::csm::VIRTUALCONTROLS_REAR_STEERING_STATUS_INTERNAL);
    mBindingsIds[3U] = Group_grp_img_crab_btn.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CRAB_WALK_VISIBILITY);
    mBindingsIds[4U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6159::Widget_Logic_Visibility_img_controls_icn_rear_steering, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
}


} // namespace csm
} // namespace gm
