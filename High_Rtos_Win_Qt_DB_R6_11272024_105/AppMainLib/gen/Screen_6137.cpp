// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6137.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6137::Widget_Logic_Visibility_virtualcontrols_1_3_speedLimiterSelectManual_csm() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_001 = !(var_002);
    
    Label_virtualcontrols_1_3_speedLimiterSelectManual_csm.mVisibility = var_001;
}

void Screen_6137::Widget_Logic_Visibility_img_controls_icn_speed_limiter() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_003 = !(var_004);
    
    Image_img_controls_icn_speed_limiter.mVisibility = var_003;
}

void Screen_6137::onScreenHide()
{
    Label_virtualcontrols_1_3_9_f_cardSpeedLimiter_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[0U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[1U]);
    GroupLabel_dyn_speed_limiter_status.mState.unBind(gm::csm::Data_VIRTUALCONTROLS_SPEEDLIMITER_STATE_INTERNAL, mBindingsIds[2U]);
}

void Screen_6137::onScreenShow()
{
    mBindingsIds[0U] = Label_virtualcontrols_1_3_9_f_cardSpeedLimiter_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    mBindingsIds[1U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6137::Widget_Logic_Visibility_virtualcontrols_1_3_speedLimiterSelectManual_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6137::Widget_Logic_Visibility_img_controls_icn_speed_limiter, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[2U] = GroupLabel_dyn_speed_limiter_status.mState.bind(gm::csm::Data_VIRTUALCONTROLS_SPEEDLIMITER_STATE_INTERNAL);
}


} // namespace csm
} // namespace gm
