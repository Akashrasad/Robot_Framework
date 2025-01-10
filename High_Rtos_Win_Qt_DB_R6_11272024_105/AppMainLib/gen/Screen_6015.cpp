// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6015.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6015::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm() noexcept
{
    const bool var_005 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_006 = !gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_004 = var_005 && var_006;
    
    const bool var_002 = var_004;
    const bool var_003 = gm::csm::SMARTCONTROLS_OPD_SETTINGS_INTERNAL.data();
    const bool var_001 = var_002 || var_003;
    
    Label_virtualcontrols_1_1_exitBtn_csm.mVisibility = var_001;
}

void Screen_6015::Widget_Logic_Visibility_img_parking_divider() noexcept
{
    const bool var_008 = gm::csm::OnePedal_High.data();
    const bool var_009 = gm::csm::OnePedal_Enhanced.data();
    const bool var_007 = var_008 || var_009;
    
    Image_img_parking_divider.mVisibility = var_007;
}

void Screen_6015::Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept
{
    const bool var_001 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();

    const bool var_002 = !(var_001);

    Group_grp_placeholder_WakeScreen.mVisibility = var_002;
}

void Screen_6015::Widget_Logic_Visibility_grp_placeholder_WakeScreen_mfc() noexcept
{
    const bool var_001 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();

    const bool var_002 = !(var_001);

    Group_grp_placeholder_WakeScreen_mfc.mVisibility = var_002;
}

void Screen_6015::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_014 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_015 = !gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_013 = var_014 && var_015;
    
    const bool var_011 = var_013;
    const bool var_012 = gm::csm::SMARTCONTROLS_OPD_SETTINGS_INTERNAL.data();
    const bool var_010 = var_011 || var_012;
    
    Image_img_close.mVisibility = var_010;
}

void Screen_6015::Widget_Logic_Visibility_virtualcontrols_1_3_0_5_opd_csm() noexcept
{
    const bool var_017 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_016 = !(var_017);
    
    Label_virtualcontrols_1_3_0_5_opd_csm.mVisibility = var_016;
}

void Screen_6015::Widget_Logic_Visibility_img_driving_pedal() noexcept
{
    const bool var_019 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_018 = !(var_019);
    
    Image_img_driving_pedal.mVisibility = var_018;
}

void Screen_6015::onScreenHide()
{
    Image_img_High_transparent.mVisibility.unBind(gm::csm::OnePedal_High, mBindingsIds[0U]);
    Label_virtualcontrols_1_3_4F_HomeScreen_csm.mState.unBind(gm::csm::SMARTCONTROLS_ONEPEDALDRIVE_VISIBILITY_INTERNAL, mBindingsIds[1U]);
    Image_img_radio_button_off.mState.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[2U]);
    Image_img_bg_opd_black.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[3U]);
    Image_img_checkbox.mState.unBind(gm::csm::SMARTCONTROLS_ONEPEDALDRIVE_VISIBILITY_INTERNAL, mBindingsIds[4U]);
    Label_virtualcontrols_1_3_OPDOff_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[5U]);
    
    Image_img_radio_button_enhanced.mVisibility.unBind(gm::csm::OnePedal_Enhanced, mBindingsIds[6U]);
    Image_img_radio_button_enhanced.mState.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[7U]);
    Image_img_Enhanced_transparent.mVisibility.unBind(gm::csm::OnePedal_Enhanced, mBindingsIds[8U]);
    
    Image_img_radio_button_on.mState.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[9U]);
    Label_virtualcontrols_1_3_OPDHigh_csm.mVisibility.unBind(gm::csm::OnePedal_High, mBindingsIds[10U]);
    Label_virtualcontrols_1_3_OPDHigh_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[11U]);
    Label_virtualcontrols_1_3_0_5_opd_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_LABEL_STATE_INTERNAL, mBindingsIds[12U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[13U]);
    Label_virtualcontrols_1_3_cardOPD_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[14U]);
    Label_virtualcontrols_1_3_OPDHighplus_csm.mVisibility.unBind(gm::csm::OnePedal_Enhanced, mBindingsIds[15U]);
    Label_virtualcontrols_1_3_OPDHighplus_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[16U]);
    Image_img_radio_button_high.mVisibility.unBind(gm::csm::OnePedal_High, mBindingsIds[17U]);
    Image_img_radio_button_high.mState.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[18U]);
    Label_virtualcontrols_1_3_OPDNormal_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[19U]);
}

void Screen_6015::onScreenShow()
{
    mBindingsIds[0U] = Image_img_High_transparent.mVisibility.bind(gm::csm::OnePedal_High);
    mBindingsIds[1U] = Label_virtualcontrols_1_3_4F_HomeScreen_csm.mState.bind(gm::csm::SMARTCONTROLS_ONEPEDALDRIVE_VISIBILITY_INTERNAL);
    mBindingsIds[2U] = Image_img_radio_button_off.mState.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE,gm::csm::SMARTCONTROLS_OPD_SETTINGS_INTERNAL);
    mBindingsIds[3U] = Image_img_bg_opd_black.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    mBindingsIds[4U] = Image_img_checkbox.mState.bind(gm::csm::SMARTCONTROLS_ONEPEDALDRIVE_VISIBILITY_INTERNAL);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_img_parking_divider, gm::csm::OnePedal_High,gm::csm::OnePedal_Enhanced);
    mBindingsIds[5U] = Label_virtualcontrols_1_3_OPDOff_csm.mState.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_grp_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    
    mBindingsIds[6U] = Image_img_radio_button_enhanced.mVisibility.bind(gm::csm::OnePedal_Enhanced);
    mBindingsIds[7U] = Image_img_radio_button_enhanced.mState.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    mBindingsIds[8U] = Image_img_Enhanced_transparent.mVisibility.bind(gm::csm::OnePedal_Enhanced);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_grp_placeholder_WakeScreen_mfc, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE,gm::csm::SMARTCONTROLS_OPD_SETTINGS_INTERNAL);
    mBindingsIds[9U] = Image_img_radio_button_on.mState.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    mBindingsIds[10U] = Label_virtualcontrols_1_3_OPDHigh_csm.mVisibility.bind(gm::csm::OnePedal_High);
    mBindingsIds[11U] = Label_virtualcontrols_1_3_OPDHigh_csm.mState.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_virtualcontrols_1_3_0_5_opd_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[12U] = Label_virtualcontrols_1_3_0_5_opd_csm.mState.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_LABEL_STATE_INTERNAL);
    mBindingsIds[13U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[14U] = Label_virtualcontrols_1_3_cardOPD_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    mBindingsIds[15U] = Label_virtualcontrols_1_3_OPDHighplus_csm.mVisibility.bind(gm::csm::OnePedal_Enhanced);
    mBindingsIds[16U] = Label_virtualcontrols_1_3_OPDHighplus_csm.mState.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    addDependency(this, &Screen_6015::Widget_Logic_Visibility_img_driving_pedal, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[17U] = Image_img_radio_button_high.mVisibility.bind(gm::csm::OnePedal_High);
    mBindingsIds[18U] = Image_img_radio_button_high.mState.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
    mBindingsIds[19U] = Label_virtualcontrols_1_3_OPDNormal_csm.mState.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
}


} // namespace csm
} // namespace gm
