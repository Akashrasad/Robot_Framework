// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6027.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6027::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_001 = !(var_002);
    
    GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm.mVisibility = var_001;
}

void Screen_6027::Widget_Logic_Visibility_virtualcontrols_1_4_0_9_task_csm() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_003 = !(var_004);
    
    Label_virtualcontrols_1_4_0_9_task_csm.mVisibility = var_003;
}

void Screen_6027::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_009 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_008 = !(var_009);
    
    const bool var_006 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_007 = var_008;
    const bool var_005 = var_006 && var_007;
    
    Image_img_close.mVisibility = var_005;
}

void Screen_6027::Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept
{
    const bool var_011 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_010 = !(var_011);
    
    GroupImage_img_placeholder_WakeScreen.mVisibility = var_010;
}

void Screen_6027::Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept
{
    const bool var_013 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_012 = !(var_013);
    
    Group_grp_placeholder_WakeScreen.mVisibility = var_012;
}

void Screen_6027::Widget_Logic_Visibility_img_control_task() noexcept
{
    const bool var_015 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_014 = !(var_015);
    
    Image_img_control_task.mVisibility = var_014;
}

void Screen_6027::onScreenHide()
{
    Label_virtualcontrols_1_4_0_9_TaskLeft_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_TASKLIGHT_LEFT_STATE_INTERNAL, mBindingsIds[0U]);
    Image_img_check_box_Right_On.mState.unBind(gm::csm::VIRTUALCONTROLS_TASKLIGHT_RIGHT_STATE_INTERNAL, mBindingsIds[1U]);
    Label_virtualcontrols_1_4_task_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[2U]);
    GroupImage_img_placeholder_WakeScreen.mState.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[3U]);
    Image_img_check_box_left_On.mState.unBind(gm::csm::VIRTUALCONTROLS_TASKLIGHT_LEFT_STATE_INTERNAL, mBindingsIds[4U]);
    Label_virtualcontrols_1_4_0_9_task_right_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_TASKLIGHT_RIGHT_STATE_INTERNAL, mBindingsIds[5U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[6U]);
}

void Screen_6027::onScreenShow()
{
    mBindingsIds[0U] = Label_virtualcontrols_1_4_0_9_TaskLeft_csm.mState.bind(gm::csm::VIRTUALCONTROLS_TASKLIGHT_LEFT_STATE_INTERNAL);
    addDependency(this, &Screen_6027::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6027::Widget_Logic_Visibility_virtualcontrols_1_4_0_9_task_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[1U] = Image_img_check_box_Right_On.mState.bind(gm::csm::VIRTUALCONTROLS_TASKLIGHT_RIGHT_STATE_INTERNAL);
    mBindingsIds[2U] = Label_virtualcontrols_1_4_task_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    addDependency(this, &Screen_6027::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6027::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[3U] = GroupImage_img_placeholder_WakeScreen.mState.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    addDependency(this, &Screen_6027::Widget_Logic_Visibility_grp_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[4U] = Image_img_check_box_left_On.mState.bind(gm::csm::VIRTUALCONTROLS_TASKLIGHT_LEFT_STATE_INTERNAL);
    mBindingsIds[5U] = Label_virtualcontrols_1_4_0_9_task_right_csm.mState.bind(gm::csm::VIRTUALCONTROLS_TASKLIGHT_RIGHT_STATE_INTERNAL);
    addDependency(this, &Screen_6027::Widget_Logic_Visibility_img_control_task, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[6U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
}


} // namespace csm
} // namespace gm
