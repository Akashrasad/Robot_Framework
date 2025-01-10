// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6005.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6005::Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_001 = !(var_002);
    
    Group_grp_placeholder_WakeScreen.mVisibility = var_001;
}

void Screen_6005::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_006 = !(var_007);
    
    const bool var_004 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_005 = var_006;
    const bool var_003 = var_004 && var_005;
    
    Image_img_close.mVisibility = var_003;
}

void Screen_6005::Widget_Logic_Visibility_icn_controls_child() noexcept
{
    const bool var_009 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_008 = !(var_009);
    
    Image_icn_controls_child.mVisibility = var_008;
}

void Screen_6005::Widget_Logic_Visibility_img_control_lockout() noexcept
{
    const bool var_011 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_010 = !(var_011);
    
    Image_img_control_lockout.mVisibility = var_010;
}

void Screen_6005::Widget_Logic_Visibility_virtualcontrols_1_2_0_1_child_csm() noexcept
{
    const bool var_013 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_012 = !(var_013);
    
    Label_virtualcontrols_1_2_0_1_child_csm.mVisibility = var_012;
}

void Screen_6005::onScreenHide()
{
    Label_virtualcontrols_1_2_0_1_ChildOff_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_CHILDSAFETYLOCKS_STATE_INTERNAL, mBindingsIds[0U]);
    Label_virtualcontrols_1_2_card_child_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[1U]);
    Image_img_radio_button_on.mState.unBind(gm::csm::VIRTUALCONTROLS_CHILDSAFETYLOCKS_STATE_INTERNAL, mBindingsIds[2U]);
    GroupImage_img_placeholder_WakeScreen.mState.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[3U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[4U]);
    Label_virtualcontrols_1_2_0_1_ChildOn_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_CHILDSAFETYLOCKS_STATE_INTERNAL, mBindingsIds[5U]);
    Image_img_radio_button_off.mState.unBind(gm::csm::VIRTUALCONTROLS_CHILDSAFETYLOCKS_STATE_INTERNAL, mBindingsIds[6U]);
}

void Screen_6005::onScreenShow()
{
    addDependency(this, &Screen_6005::Widget_Logic_Visibility_grp_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[0U] = Label_virtualcontrols_1_2_0_1_ChildOff_csm.mState.bind(gm::csm::VIRTUALCONTROLS_CHILDSAFETYLOCKS_STATE_INTERNAL);
    addDependency(this, &Screen_6005::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[1U] = Label_virtualcontrols_1_2_card_child_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    addDependency(this, &Screen_6005::Widget_Logic_Visibility_icn_controls_child, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6005::Widget_Logic_Visibility_img_control_lockout, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[2U] = Image_img_radio_button_on.mState.bind(gm::csm::VIRTUALCONTROLS_CHILDSAFETYLOCKS_STATE_INTERNAL);
    mBindingsIds[3U] = GroupImage_img_placeholder_WakeScreen.mState.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    mBindingsIds[4U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[5U] = Label_virtualcontrols_1_2_0_1_ChildOn_csm.mState.bind(gm::csm::VIRTUALCONTROLS_CHILDSAFETYLOCKS_STATE_INTERNAL);
    addDependency(this, &Screen_6005::Widget_Logic_Visibility_virtualcontrols_1_2_0_1_child_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[6U] = Image_img_radio_button_off.mState.bind(gm::csm::VIRTUALCONTROLS_CHILDSAFETYLOCKS_STATE_INTERNAL);
}


} // namespace csm
} // namespace gm
