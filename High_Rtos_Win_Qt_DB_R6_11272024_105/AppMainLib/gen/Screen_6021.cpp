// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6021.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6021::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_001 = !(var_002);
    
    GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm.mVisibility = var_001;
}

void Screen_6021::Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_003 = !(var_004);
    
    Group_grp_placeholder_WakeScreen.mVisibility = var_003;
}

void Screen_6021::Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept
{
    const bool var_006 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_005 = !(var_006);
    
    GroupImage_img_placeholder_WakeScreen.mVisibility = var_005;
}

void Screen_6021::Widget_Logic_Visibility_img_controls_icn_high_auto_beam() noexcept
{
    const bool var_008 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_007 = !(var_008);
    
    Image_img_controls_icn_high_auto_beam.mVisibility = var_007;
}

void Screen_6021::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_013 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_012 = !(var_013);
    
    const bool var_010 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_011 = var_012;
    const bool var_009 = var_010 && var_011;
    
    Image_img_close.mVisibility = var_009;
}

void Screen_6021::Widget_Logic_Visibility_virtualcontrols_1_4_0_3_beams_csm() noexcept
{
    const bool var_015 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_014 = !(var_015);
    
    Label_virtualcontrols_1_4_0_3_beams_csm.mVisibility = var_014;
}

void Screen_6021::onScreenHide()
{
    Image_img_radio_button_Off.mState.unBind(gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_STATE_INTERNAL, mBindingsIds[0U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[1U]);
    GroupImage_img_placeholder_WakeScreen.mState.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[2U]);
    Image_img_radio_button_on.mState.unBind(gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_STATE_INTERNAL, mBindingsIds[3U]);
    Label_virtualcontrols_1_4_0_3_BeamsOff_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_STATE_INTERNAL, mBindingsIds[4U]);
    Label_virtualcontrols_1_4_0_3_BeamsOn_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_STATE_INTERNAL, mBindingsIds[5U]);
    Label_virtualcontrols_1_4_beams_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[6U]);
}

void Screen_6021::onScreenShow()
{
    addDependency(this, &Screen_6021::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[0U] = Image_img_radio_button_Off.mState.bind(gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_STATE_INTERNAL);
    mBindingsIds[1U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6021::Widget_Logic_Visibility_grp_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6021::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[2U] = GroupImage_img_placeholder_WakeScreen.mState.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    mBindingsIds[3U] = Image_img_radio_button_on.mState.bind(gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_STATE_INTERNAL);
    addDependency(this, &Screen_6021::Widget_Logic_Visibility_img_controls_icn_high_auto_beam, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[4U] = Label_virtualcontrols_1_4_0_3_BeamsOff_csm.mState.bind(gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_STATE_INTERNAL);
    mBindingsIds[5U] = Label_virtualcontrols_1_4_0_3_BeamsOn_csm.mState.bind(gm::csm::VIRTUALCONTROLS_AUTOHIGHBEAM_STATE_INTERNAL);
    addDependency(this, &Screen_6021::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[6U] = Label_virtualcontrols_1_4_beams_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    addDependency(this, &Screen_6021::Widget_Logic_Visibility_virtualcontrols_1_4_0_3_beams_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
}


} // namespace csm
} // namespace gm
