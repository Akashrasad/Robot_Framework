// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6012.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6012::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_001 = !(var_002);
    
    Image_img_close.mVisibility = var_001;
}

void Screen_6012::Widget_Logic_Visibility_img_traction_control() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_003 = !(var_004);
    
    Image_img_traction_control.mVisibility = var_003;
}

void Screen_6012::Widget_Logic_Visibility_virtualcontrols_1_3_0_1_traction_csm() noexcept
{
    const bool var_006 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_005 = !(var_006);
    
    Label_virtualcontrols_1_3_0_1_traction_csm.mVisibility = var_005;
}

void Screen_6012::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm() noexcept
{
    const bool var_008 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_007 = !(var_008);
    
    Label_virtualcontrols_1_1_exitBtn_csm.mVisibility = var_007;
}

void Screen_6012::onScreenHide()
{
    Label_virtualcontrols_1_0_e_traction_esc_off_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL, mBindingsIds[0U]);
    Label_virtualcontrols_1_0_e_traction_on_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL, mBindingsIds[1U]);
    Image_img_competetive_mode_transparent.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_COMPETITIVE_MODE_VISIBILITY, mBindingsIds[2U]);
    Image_img_radio_button_traction_Off.mState.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL, mBindingsIds[3U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[4U]);
    Label_virtualcontrols_1_3_0_1_1_TractionCompetitive_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_COMPETITIVE_MODE_VISIBILITY, mBindingsIds[5U]);
    Label_virtualcontrols_1_3_0_1_1_TractionCompetitive_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL, mBindingsIds[6U]);
    Label_virtualcontrols_1_3_0_1_TractionOff_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL, mBindingsIds[7U]);
    Image_img_radio_button_competitive_on.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_COMPETITIVE_MODE_VISIBILITY, mBindingsIds[8U]);
    Image_img_radio_button_competitive_on.mState.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL, mBindingsIds[9U]);
    Label_virtualcontrols_1_3_0_1_tractionTitle_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[10U]);
    Image_img_radio_button_traction_esc_on.mState.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL, mBindingsIds[11U]);
    Image_img_competetive_mode_divider.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_COMPETITIVE_MODE_VISIBILITY, mBindingsIds[12U]);
    Image_img_radio_button_traction_esc_off.mState.unBind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL, mBindingsIds[13U]);
}

void Screen_6012::onScreenShow()
{
    mBindingsIds[0U] = Label_virtualcontrols_1_0_e_traction_esc_off_csm.mState.bind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL);
    addDependency(this, &Screen_6012::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[1U] = Label_virtualcontrols_1_0_e_traction_on_csm.mState.bind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL);
    mBindingsIds[2U] = Image_img_competetive_mode_transparent.mVisibility.bind(gm::csm::VIRTUALCONTROLS_TRACTION_COMPETITIVE_MODE_VISIBILITY);
    mBindingsIds[3U] = Image_img_radio_button_traction_Off.mState.bind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL);
    addDependency(this, &Screen_6012::Widget_Logic_Visibility_img_traction_control, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[4U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[5U] = Label_virtualcontrols_1_3_0_1_1_TractionCompetitive_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_TRACTION_COMPETITIVE_MODE_VISIBILITY);
    mBindingsIds[6U] = Label_virtualcontrols_1_3_0_1_1_TractionCompetitive_csm.mState.bind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL);
    mBindingsIds[7U] = Label_virtualcontrols_1_3_0_1_TractionOff_csm.mState.bind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL);
    mBindingsIds[8U] = Image_img_radio_button_competitive_on.mVisibility.bind(gm::csm::VIRTUALCONTROLS_TRACTION_COMPETITIVE_MODE_VISIBILITY);
    mBindingsIds[9U] = Image_img_radio_button_competitive_on.mState.bind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL);
    addDependency(this, &Screen_6012::Widget_Logic_Visibility_virtualcontrols_1_3_0_1_traction_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[10U] = Label_virtualcontrols_1_3_0_1_tractionTitle_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    mBindingsIds[11U] = Image_img_radio_button_traction_esc_on.mState.bind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL);
    mBindingsIds[12U] = Image_img_competetive_mode_divider.mVisibility.bind(gm::csm::VIRTUALCONTROLS_TRACTION_COMPETITIVE_MODE_VISIBILITY);
    addDependency(this, &Screen_6012::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[13U] = Image_img_radio_button_traction_esc_off.mState.bind(gm::csm::VIRTUALCONTROLS_TRACTION_ESC_STATE_INTERNAL);
}


} // namespace csm
} // namespace gm
