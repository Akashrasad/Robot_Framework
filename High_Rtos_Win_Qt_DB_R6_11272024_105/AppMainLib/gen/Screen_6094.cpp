// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6094.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6094::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_001 = !(var_002);
    
    Image_img_close.mVisibility = var_001;
}

void Screen_6094::Widget_Logic_Visibility_img_lane_centering_icon() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_003 = !(var_004);
    
    Image_img_lane_centering_icon.mVisibility = var_003;
}

void Screen_6094::Widget_Logic_Visibility_virtualcontrols_1_3_7_u_desc_csm() noexcept
{
    const bool var_006 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_005 = !(var_006);
    
    Label_virtualcontrols_1_3_7_u_desc_csm.mVisibility = var_005;
}

void Screen_6094::Widget_Logic_Visibility_apa_3_0_Exit_f_csm() noexcept
{
    const bool var_008 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_007 = !(var_008);
    
    Label_apa_3_0_Exit_f_csm.mVisibility = var_007;
}

void Screen_6094::onScreenHide()
{
    Label_virtualcontrols_1_3_7_v_lkaOn_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_BLINDZONESTEERINGASSIST_STATE_INTERNAL, mBindingsIds[0U]);
    Image_img_radio_button_Off.mState.unBind(gm::csm::VIRTUALCONTROLS_BLINDZONESTEERINGASSIST_STATE_INTERNAL, mBindingsIds[1U]);
    Label_virtualcontrols_1_3_7_v_lkaOff_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_BLINDZONESTEERINGASSIST_STATE_INTERNAL, mBindingsIds[2U]);
    Image_img_radio_button_on.mState.unBind(gm::csm::VIRTUALCONTROLS_BLINDZONESTEERINGASSIST_STATE_INTERNAL, mBindingsIds[3U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[4U]);
    Label_virtualcontrols_1_3_ah_cardLKA_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[5U]);
}

void Screen_6094::onScreenShow()
{
    addDependency(this, &Screen_6094::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[0U] = Label_virtualcontrols_1_3_7_v_lkaOn_csm.mState.bind(gm::csm::VIRTUALCONTROLS_BLINDZONESTEERINGASSIST_STATE_INTERNAL);
    mBindingsIds[1U] = Image_img_radio_button_Off.mState.bind(gm::csm::VIRTUALCONTROLS_BLINDZONESTEERINGASSIST_STATE_INTERNAL);
    mBindingsIds[2U] = Label_virtualcontrols_1_3_7_v_lkaOff_csm.mState.bind(gm::csm::VIRTUALCONTROLS_BLINDZONESTEERINGASSIST_STATE_INTERNAL);
    mBindingsIds[3U] = Image_img_radio_button_on.mState.bind(gm::csm::VIRTUALCONTROLS_BLINDZONESTEERINGASSIST_STATE_INTERNAL);
    addDependency(this, &Screen_6094::Widget_Logic_Visibility_img_lane_centering_icon, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6094::Widget_Logic_Visibility_virtualcontrols_1_3_7_u_desc_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6094::Widget_Logic_Visibility_apa_3_0_Exit_f_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[4U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[5U] = Label_virtualcontrols_1_3_ah_cardLKA_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
}


} // namespace csm
} // namespace gm
