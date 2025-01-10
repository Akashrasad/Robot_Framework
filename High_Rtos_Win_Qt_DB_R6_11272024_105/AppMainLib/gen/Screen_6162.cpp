// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6162.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6162::Widget_Logic_Visibility_virtualcontrols_1_8_1_h_textRcc_csm() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_001 = !(var_002);
    
    Label_virtualcontrols_1_8_1_h_textRcc_csm.mVisibility = var_001;
}

void Screen_6162::Widget_Logic_Visibility_img_controls_icn_rearcontrollock() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_003 = !(var_004);
    
    Image_img_controls_icn_rearcontrollock.mVisibility = var_003;
}

void Screen_6162::onScreenHide()
{
    Label_virtualcontrols_1_2_0_1_ChildOff_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_REAR_CONTROL_LOCK_INTERNAL, mBindingsIds[0U]);
    Image_img_radio_button_on.mState.unBind(gm::csm::VIRTUALCONTROLS_REAR_CONTROL_LOCK_INTERNAL, mBindingsIds[1U]);
    Label_virtualcontrols_1_8_1_F_RCCLockTitle_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[2U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[3U]);
    Label_virtualcontrols_1_2_0_1_ChildOn_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_REAR_CONTROL_LOCK_INTERNAL, mBindingsIds[4U]);
    Image_img_radio_button_off.mState.unBind(gm::csm::VIRTUALCONTROLS_REAR_CONTROL_LOCK_INTERNAL, mBindingsIds[5U]);
}

void Screen_6162::onScreenShow()
{
    mBindingsIds[0U] = Label_virtualcontrols_1_2_0_1_ChildOff_csm.mState.bind(gm::csm::VIRTUALCONTROLS_REAR_CONTROL_LOCK_INTERNAL);
    mBindingsIds[1U] = Image_img_radio_button_on.mState.bind(gm::csm::VIRTUALCONTROLS_REAR_CONTROL_LOCK_INTERNAL);
    mBindingsIds[2U] = Label_virtualcontrols_1_8_1_F_RCCLockTitle_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    addDependency(this, &Screen_6162::Widget_Logic_Visibility_virtualcontrols_1_8_1_h_textRcc_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[3U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[4U] = Label_virtualcontrols_1_2_0_1_ChildOn_csm.mState.bind(gm::csm::VIRTUALCONTROLS_REAR_CONTROL_LOCK_INTERNAL);
    mBindingsIds[5U] = Image_img_radio_button_off.mState.bind(gm::csm::VIRTUALCONTROLS_REAR_CONTROL_LOCK_INTERNAL);
    addDependency(this, &Screen_6162::Widget_Logic_Visibility_img_controls_icn_rearcontrollock, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
}


} // namespace csm
} // namespace gm
