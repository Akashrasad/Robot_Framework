// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6092.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6092::Widget_Logic_Visibility_apa_3_0_Exit_f_csm() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_001 = !(var_002);
    
    Label_apa_3_0_Exit_f_csm.mVisibility = var_001;
}

void Screen_6092::Widget_Logic_Visibility_virtualcontrols_1_3_7_u_desc_csm() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_003 = !(var_004);
    
    Label_virtualcontrols_1_3_7_u_desc_csm.mVisibility = var_003;
}

void Screen_6092::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_006 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_005 = !(var_006);
    
    Image_img_close.mVisibility = var_005;
}

void Screen_6092::Widget_Logic_Visibility_img_lane_keep_assist_normal() noexcept
{
    const bool var_008 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_007 = !(var_008);
    
    Image_img_lane_keep_assist_normal.mVisibility = var_007;
}

void Screen_6092::onScreenHide()
{
    Image_img_radio_button_laneKeepAssist_Off.mState.unBind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL, mBindingsIds[0U]);
    Label_virtualcontrols_1_4_0_1_DomeOff_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL, mBindingsIds[1U]);
    Image_img_radio_button_laneKeepAssist_On.mState.unBind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL, mBindingsIds[2U]);
    Label_virtualcontrols_1_4_0_1_DomeOn_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL, mBindingsIds[3U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[4U]);
    Label_virtualcontrols_1_3_card_lka_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[5U]);
}

void Screen_6092::onScreenShow()
{
    mBindingsIds[0U] = Image_img_radio_button_laneKeepAssist_Off.mState.bind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL);
    addDependency(this, &Screen_6092::Widget_Logic_Visibility_apa_3_0_Exit_f_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[1U] = Label_virtualcontrols_1_4_0_1_DomeOff_csm.mState.bind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL);
    mBindingsIds[2U] = Image_img_radio_button_laneKeepAssist_On.mState.bind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL);
    mBindingsIds[3U] = Label_virtualcontrols_1_4_0_1_DomeOn_csm.mState.bind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL);
    addDependency(this, &Screen_6092::Widget_Logic_Visibility_virtualcontrols_1_3_7_u_desc_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[4U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6092::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6092::Widget_Logic_Visibility_img_lane_keep_assist_normal, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[5U] = Label_virtualcontrols_1_3_card_lka_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
}


} // namespace csm
} // namespace gm
