// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_600101.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_600101::Widget_Logic_Visibility_img_controls_controls_home_close() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_001 = !(var_002);
    
    Image_img_controls_controls_home_close.mVisibility = var_001;
}

void Screen_600101::onScreenHide()
{
    Image_img_control_progress_bar_pointer.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR1, mBindingsIds[0U]);
    Image_img_control_progress_bar_pointer.mState.unBind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE1, mBindingsIds[1U]);
    Image_img_pintostart.mVisibility.unBind(gm::csm::Data_PINTOSTART_VISIBILITY, mBindingsIds[2U]);
    Image_img_control_progress_bar_pointer2.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR1, mBindingsIds[3U]);
    Image_img_control_progress_bar_pointer2.mState.unBind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE2, mBindingsIds[4U]);
}

void Screen_600101::onScreenShow()
{
    mBindingsIds[0U] = Image_img_control_progress_bar_pointer.mVisibility.bind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR1);
    mBindingsIds[1U] = Image_img_control_progress_bar_pointer.mState.bind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE1);
    mBindingsIds[2U] = Image_img_pintostart.mVisibility.bind(gm::csm::Data_PINTOSTART_VISIBILITY);
    mBindingsIds[3U] = Image_img_control_progress_bar_pointer2.mVisibility.bind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR1);
    mBindingsIds[4U] = Image_img_control_progress_bar_pointer2.mState.bind(gm::csm::VIRTUALCONTROLS_DATA_SCROLLPAGE_INDICATOR_STATE2);
    addDependency(this, &Screen_600101::Widget_Logic_Visibility_img_controls_controls_home_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
}


} // namespace csm
} // namespace gm
