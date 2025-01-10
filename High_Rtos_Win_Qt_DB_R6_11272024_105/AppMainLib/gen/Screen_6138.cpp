// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6138.h"

#include "RTOS_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6138::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_005 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_004 = !(var_005);
    
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_003 = var_004;
    const bool var_001 = var_002 && var_003;
    
    Image_img_close.mVisibility = var_001;
}

void Screen_6138::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept
{
    const bool var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_006 = !(var_007);
    
    GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm.mVisibility = var_006;
}

void Screen_6138::Widget_Logic_Visibility_img_charge_port_door_release() noexcept
{
    const bool var_009 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_008 = !(var_009);
    
    Image_img_charge_port_door_release.mVisibility = var_008;
}

void Screen_6138::Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept
{
    const bool var_011 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_010 = !(var_011);
    
    GroupImage_img_placeholder_WakeScreen.mVisibility = var_010;
}

void Screen_6138::Widget_Logic_Visibility_virtualcontrols_1_2_5_1F_ChargePort_csm() noexcept
{
    const bool var_013 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_012 = !(var_013);
    
    Label_virtualcontrols_1_2_5_1F_ChargePort_csm.mVisibility = var_012;
}

void Screen_6138::Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept
{
    const bool var_015 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_014 = !(var_015);
    
    Group_grp_placeholder_WakeScreen.mVisibility = var_014;
}

void Screen_6138::onScreenHide()
{
    GroupLabel_dyn_charge_port_status.mState.unBind(gm::csm::VIRTUALCONTROLS_CHARGE_PORT_CURRENT_STATUS, mBindingsIds[0U]);
    GroupImage_img_placeholder_WakeScreen.mState.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[1U]);
    Label_virtualcontrols_1_2_5_F_ChargePortDoorTitle_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[2U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[3U]);
}

void Screen_6138::onScreenShow()
{
    mBindingsIds[0U] = GroupLabel_dyn_charge_port_status.mState.bind(gm::csm::VIRTUALCONTROLS_CHARGE_PORT_CURRENT_STATUS);
    addDependency(this, &Screen_6138::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6138::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6138::Widget_Logic_Visibility_img_charge_port_door_release, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6138::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[1U] = GroupImage_img_placeholder_WakeScreen.mState.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    addDependency(this, &Screen_6138::Widget_Logic_Visibility_virtualcontrols_1_2_5_1F_ChargePort_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6138::Widget_Logic_Visibility_grp_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[2U] = Label_virtualcontrols_1_2_5_F_ChargePortDoorTitle_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    mBindingsIds[3U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
}


} // namespace csm
} // namespace gm
