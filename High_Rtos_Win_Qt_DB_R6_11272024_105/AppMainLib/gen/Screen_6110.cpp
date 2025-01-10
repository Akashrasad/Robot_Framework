// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6110.h"

#include "RTOS_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6110::Widget_Logic_Visibility_choreography_9_4F_PressStartStopButton_csm() noexcept
{
    const bool var_004 = gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_REQUESTED.data();
    const bool var_005 = gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_REDUNDANT_REQUESTED.data();
    const bool var_003 = var_004 || var_005;
    
    const bool var_002 = var_003;
    const bool var_001 = !(var_002);
    
    Label_choreography_9_4F_PressStartStopButton_csm.mVisibility = var_001;
}

void Screen_6110::Widget_Logic_Visibility_choreography_9_3F_PressStartStopButton_csm() noexcept
{
    const bool var_007 = gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_REQUESTED.data();
    const bool var_008 = gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_REDUNDANT_REQUESTED.data();
    const bool var_006 = var_007 || var_008;
    
    Label_choreography_9_3F_PressStartStopButton_csm.mVisibility = var_006;
}

void Screen_6110::onScreenHide()
{
    ProgressBar_6110_img_progressbar.mProgressBarValue.unBind(gm::csm::PINTOSTART_REMAINING_SCREEN_SPECIFIC_TIME_INTERNAL, mBindingsIds[0U]);
}

void Screen_6110::onScreenShow()
{
    addDependency(this, &Screen_6110::Widget_Logic_Visibility_choreography_9_4F_PressStartStopButton_csm, gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_REQUESTED,gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_REDUNDANT_REQUESTED);
    mBindingsIds[0U] = ProgressBar_6110_img_progressbar.mProgressBarValue.bind(gm::csm::PINTOSTART_REMAINING_SCREEN_SPECIFIC_TIME_INTERNAL);
    addDependency(this, &Screen_6110::Widget_Logic_Visibility_choreography_9_3F_PressStartStopButton_csm, gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_REQUESTED,gm::csm::SMARTCONTROLS_PASSIVE_POWER_MODE_REDUNDANT_REQUESTED);
}


} // namespace csm
} // namespace gm
