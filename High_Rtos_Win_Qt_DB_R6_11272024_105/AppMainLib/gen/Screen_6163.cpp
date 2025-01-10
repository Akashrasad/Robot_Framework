// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6163.h"

#include "RTOS_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6163::Widget_Logic_Visibility_img_power_assist() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_001 = !(var_002);
    
    Image_img_power_assist.mVisibility = var_001;
}

void Screen_6163::Widget_Logic_Visibility_virtualcontrols_1_9h_powerAssistSteps_csm() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_003 = !(var_004);
    
    Label_virtualcontrols_1_9h_powerAssistSteps_csm.mVisibility = var_003;
}

void Screen_6163::onScreenHide()
{
    Label_virtualcontrols_1_9_g_stepsOff_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_DEPLOY_AVAILABLE_FLAG1, mBindingsIds[0U]);
    Image_img_radio_btn_power_assist_on.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_DEPLOY_AVAILABLE_FLAG2, mBindingsIds[1U]);
    Image_img_radio_btn_power_assist_on.mState.unBind(gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_SELECTION_INTERNAL, mBindingsIds[2U]);
    Label_virtualcontrols_1_9_g_stepsOn_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_DEPLOY_AVAILABLE_FLAG2, mBindingsIds[3U]);
    Image_img_power_assist_on_divider.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_DEPLOY_AVAILABLE_FLAG2, mBindingsIds[4U]);
    Group_grp_img_deploy_btn.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_POWERASSIST_MANUAL_DEPLOY_AVAILABLE_FLAG2, mBindingsIds[5U]);
    Group_grp_img_stow_btn.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_POWERASSIST_MANUAL_DEPLOY_AVAILABLE_FLAG1, mBindingsIds[6U]);
    Image_img_power_assist_off_divider.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_DEPLOY_AVAILABLE_FLAG1, mBindingsIds[7U]);
    Image_img_radio_btn_power_assist_off.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_DEPLOY_AVAILABLE_FLAG1, mBindingsIds[8U]);
    Image_img_radio_btn_power_assist_off.mState.unBind(gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_SELECTION_INTERNAL, mBindingsIds[9U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[10U]);
}

void Screen_6163::onScreenShow()
{
    mBindingsIds[0U] = Label_virtualcontrols_1_9_g_stepsOff_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_DEPLOY_AVAILABLE_FLAG1);
    mBindingsIds[1U] = Image_img_radio_btn_power_assist_on.mVisibility.bind(gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_DEPLOY_AVAILABLE_FLAG2);
    mBindingsIds[2U] = Image_img_radio_btn_power_assist_on.mState.bind(gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_SELECTION_INTERNAL);
    mBindingsIds[3U] = Label_virtualcontrols_1_9_g_stepsOn_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_DEPLOY_AVAILABLE_FLAG2);
    addDependency(this, &Screen_6163::Widget_Logic_Visibility_img_power_assist, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[4U] = Image_img_power_assist_on_divider.mVisibility.bind(gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_DEPLOY_AVAILABLE_FLAG2);
    mBindingsIds[5U] = Group_grp_img_deploy_btn.mVisibility.bind(gm::csm::VIRTUALCONTROLS_POWERASSIST_MANUAL_DEPLOY_AVAILABLE_FLAG2);
    mBindingsIds[6U] = Group_grp_img_stow_btn.mVisibility.bind(gm::csm::VIRTUALCONTROLS_POWERASSIST_MANUAL_DEPLOY_AVAILABLE_FLAG1);
    mBindingsIds[7U] = Image_img_power_assist_off_divider.mVisibility.bind(gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_DEPLOY_AVAILABLE_FLAG1);
    mBindingsIds[8U] = Image_img_radio_btn_power_assist_off.mVisibility.bind(gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_DEPLOY_AVAILABLE_FLAG1);
    mBindingsIds[9U] = Image_img_radio_btn_power_assist_off.mState.bind(gm::csm::VIRTUALCONTROLS_POWERASSIST_AUTO_SELECTION_INTERNAL);
    addDependency(this, &Screen_6163::Widget_Logic_Visibility_virtualcontrols_1_9h_powerAssistSteps_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[10U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
}


} // namespace csm
} // namespace gm
