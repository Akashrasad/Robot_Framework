// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6019.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6019::Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_001 = !(var_002);
    
    GroupImage_img_placeholder_WakeScreen.mVisibility = var_001;
}

void Screen_6019::Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_003 = !(var_004);
    
    Group_grp_placeholder_WakeScreen.mVisibility = var_003;
}

void Screen_6019::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept
{
    const bool var_006 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_005 = !(var_006);
    
    GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm.mVisibility = var_005;
}

void Screen_6019::Widget_Logic_Visibility_img_control_icn_dome() noexcept
{
    const bool var_008 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_007 = !(var_008);
    
    Image_img_control_icn_dome.mVisibility = var_007;
}

void Screen_6019::Widget_Logic_Visibility_virtualcontrols_1_4_0_1_dome_csm() noexcept
{
    const bool var_010 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_009 = !(var_010);
    
    Label_virtualcontrols_1_4_0_1_dome_csm.mVisibility = var_009;
}

void Screen_6019::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_015 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_014 = !(var_015);
    
    const bool var_012 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_013 = var_014;
    const bool var_011 = var_012 && var_013;
    
    Image_img_close.mVisibility = var_011;
}

void Screen_6019::onScreenHide()
{
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[0U]);
    Image_img_Dome_light_auto_divider.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_DOME_AUTO_VISIBILITY, mBindingsIds[1U]);
    Label_virtualcontrols_1_4_dome_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[2U]);
    GroupImage_img_placeholder_WakeScreen.mState.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[3U]);
    Image_img_auto_divider.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_DOME_AUTO_VISIBILITY, mBindingsIds[4U]);
    Image_img_radio_button_on.mState.unBind(gm::csm::VIRTUALCONTROLS_DOMELIGHT_STATE_INTERNAL, mBindingsIds[5U]);
    Label_virtualcontrols_1_4_0_1_DomeOn_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_DOMELIGHT_STATE_INTERNAL, mBindingsIds[6U]);
    Label_virtualcontrols_1_4_0_1_DomeOff_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_DOMELIGHT_STATE_INTERNAL, mBindingsIds[7U]);
    Image_img_radio_button_Off.mState.unBind(gm::csm::VIRTUALCONTROLS_DOMELIGHT_STATE_INTERNAL, mBindingsIds[8U]);
    Label_virtualcontrols_1_4_0_1_dome_auto_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_DOME_AUTO_VISIBILITY, mBindingsIds[9U]);
    Label_virtualcontrols_1_4_0_1_dome_auto_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_DOMEDEFEAT_STATE_INTERNAL, mBindingsIds[10U]);
    Image_img_check_box_auto.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_DOME_AUTO_VISIBILITY, mBindingsIds[11U]);
    Image_img_check_box_auto.mState.unBind(gm::csm::VIRTUALCONTROLS_DOMEDEFEAT_STATE_INTERNAL, mBindingsIds[12U]);
}

void Screen_6019::onScreenShow()
{
    mBindingsIds[0U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[1U] = Image_img_Dome_light_auto_divider.mVisibility.bind(gm::csm::VIRTUALCONTROLS_DOME_AUTO_VISIBILITY);
    mBindingsIds[2U] = Label_virtualcontrols_1_4_dome_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    addDependency(this, &Screen_6019::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[3U] = GroupImage_img_placeholder_WakeScreen.mState.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    mBindingsIds[4U] = Image_img_auto_divider.mVisibility.bind(gm::csm::VIRTUALCONTROLS_DOME_AUTO_VISIBILITY);
    addDependency(this, &Screen_6019::Widget_Logic_Visibility_grp_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[5U] = Image_img_radio_button_on.mState.bind(gm::csm::VIRTUALCONTROLS_DOMELIGHT_STATE_INTERNAL);
    mBindingsIds[6U] = Label_virtualcontrols_1_4_0_1_DomeOn_csm.mState.bind(gm::csm::VIRTUALCONTROLS_DOMELIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6019::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[7U] = Label_virtualcontrols_1_4_0_1_DomeOff_csm.mState.bind(gm::csm::VIRTUALCONTROLS_DOMELIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6019::Widget_Logic_Visibility_img_control_icn_dome, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6019::Widget_Logic_Visibility_virtualcontrols_1_4_0_1_dome_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[8U] = Image_img_radio_button_Off.mState.bind(gm::csm::VIRTUALCONTROLS_DOMELIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6019::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[9U] = Label_virtualcontrols_1_4_0_1_dome_auto_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_DOME_AUTO_VISIBILITY);
    mBindingsIds[10U] = Label_virtualcontrols_1_4_0_1_dome_auto_csm.mState.bind(gm::csm::VIRTUALCONTROLS_DOMEDEFEAT_STATE_INTERNAL);
    mBindingsIds[11U] = Image_img_check_box_auto.mVisibility.bind(gm::csm::VIRTUALCONTROLS_DOME_AUTO_VISIBILITY);
    mBindingsIds[12U] = Image_img_check_box_auto.mState.bind(gm::csm::VIRTUALCONTROLS_DOMEDEFEAT_STATE_INTERNAL);
}


} // namespace csm
} // namespace gm
