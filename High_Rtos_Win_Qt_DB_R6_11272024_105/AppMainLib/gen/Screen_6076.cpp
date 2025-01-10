// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6076.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6076::Widget_Logic_Visibility_virtualcontrols_1_3_6_V_desc_csm() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_001 = !(var_002);
    
    Label_virtualcontrols_1_3_6_V_desc_csm.mVisibility = var_001;
}

void Screen_6076::Widget_Logic_Visibility_img_controls_icn_autohold() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_003 = !(var_004);
    
    Image_img_controls_icn_autohold.mVisibility = var_003;
}

void Screen_6076::onScreenHide()
{
    Image_img_radio_button_auto_hold_always_on.mState.unBind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL, mBindingsIds[0U]);
    Image_img_radio_button_auto_hold_off.mState.unBind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL, mBindingsIds[1U]);
    Label_virtualcontrols_1_3_HillOn_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL, mBindingsIds[2U]);
    Image_img_radio_button_auto_hold_on.mState.unBind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL, mBindingsIds[3U]);
    Label_virtualcontrols_1_3_HillOff_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL, mBindingsIds[4U]);
    Label_virtualcontrols_1_3_h_hold_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[5U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[6U]);
    Label_virtualcontrols_1_4_0_1_DomeOnAlways_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL, mBindingsIds[7U]);
}

void Screen_6076::onScreenShow()
{
    mBindingsIds[0U] = Image_img_radio_button_auto_hold_always_on.mState.bind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL);
    mBindingsIds[1U] = Image_img_radio_button_auto_hold_off.mState.bind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL);
    addDependency(this, &Screen_6076::Widget_Logic_Visibility_virtualcontrols_1_3_6_V_desc_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[2U] = Label_virtualcontrols_1_3_HillOn_csm.mState.bind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL);
    mBindingsIds[3U] = Image_img_radio_button_auto_hold_on.mState.bind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL);
    mBindingsIds[4U] = Label_virtualcontrols_1_3_HillOff_csm.mState.bind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL);
    addDependency(this, &Screen_6076::Widget_Logic_Visibility_img_controls_icn_autohold, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[5U] = Label_virtualcontrols_1_3_h_hold_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    mBindingsIds[6U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[7U] = Label_virtualcontrols_1_4_0_1_DomeOnAlways_csm.mState.bind(gm::csm::VIRTUALCONTROLS_AUTO_HOLD_STATE_INTERNAL);
}


} // namespace csm
} // namespace gm
