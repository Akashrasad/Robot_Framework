// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6059.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6059::Widget_Logic_Visibility_img_brightness_increment() noexcept
{
    const bool var_002 = gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL.data();
    const bool var_001 = !(var_002);
    
    Image_img_brightness_increment.mVisibility = var_001;
}

void Screen_6059::Widget_Logic_Visibility_virtualcontrols_1_1_HUDheight_csm() noexcept
{
    const bool var_004 = gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL.data();
    const bool var_003 = !(var_004);
    
    Label_virtualcontrols_1_1_HUDheight_csm.mVisibility = var_003;
}

void Screen_6059::Widget_Logic_Visibility_img_rotation_left() noexcept
{
    const bool var_006 = gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL.data();
    const bool var_005 = !(var_006);
    
    Image_img_rotation_left.mVisibility = var_005;
}

void Screen_6059::Widget_Logic_Visibility_img_brightness_decrement() noexcept
{
    const bool var_008 = gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL.data();
    const bool var_007 = !(var_008);
    
    Image_img_brightness_decrement.mVisibility = var_007;
}

void Screen_6059::Widget_Logic_Visibility_6059_img_brightness_pogressbar() noexcept
{
    const bool var_010 = gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL.data();
    const bool var_009 = !(var_010);
    
    ProgressBar_6059_img_brightness_pogressbar.mVisibility = var_009;
}

void Screen_6059::Widget_Logic_Visibility_virtualcontrols_1_1_HUDbrightness_csm() noexcept
{
    const bool var_012 = gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL.data();
    const bool var_011 = !(var_012);
    
    Label_virtualcontrols_1_1_HUDbrightness_csm.mVisibility = var_011;
}

void Screen_6059::Widget_Logic_Visibility_img_rotation_right() noexcept
{
    const bool var_014 = gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL.data();
    const bool var_013 = !(var_014);
    
    Image_img_rotation_right.mVisibility = var_013;
}

void Screen_6059::Widget_Logic_Visibility_img_height_increment() noexcept
{
    const bool var_016 = gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL.data();
    const bool var_015 = !(var_016);
    
    Image_img_height_increment.mVisibility = var_015;
}

void Screen_6059::Widget_Logic_Visibility_6059_img_rotation_pogressbar() noexcept
{
    const bool var_018 = gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL.data();
    const bool var_017 = !(var_018);
    
    ProgressBar_6059_img_rotation_pogressbar.mVisibility = var_017;
}

void Screen_6059::Widget_Logic_Visibility_6059_img_height_pogressbar() noexcept
{
    const bool var_020 = gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL.data();
    const bool var_019 = !(var_020);
    
    ProgressBar_6059_img_height_pogressbar.mVisibility = var_019;
}

void Screen_6059::Widget_Logic_Visibility_virtualcontrols_1_1_rotation_csm() noexcept
{
    const bool var_022 = gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL.data();
    const bool var_021 = !(var_022);
    
    Label_virtualcontrols_1_1_rotation_csm.mVisibility = var_021;
}

void Screen_6059::Widget_Logic_Visibility_virtualcontrols_1_1_hud_csm() noexcept
{
    const bool var_024 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_023 = !(var_024);
    
    Label_virtualcontrols_1_1_hud_csm.mVisibility = var_023;
}

void Screen_6059::Widget_Logic_Visibility_img_height_decrement() noexcept
{
    const bool var_026 = gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL.data();
    const bool var_025 = !(var_026);
    
    Image_img_height_decrement.mVisibility = var_025;
}

void Screen_6059::onScreenHide()
{
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[0U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mState.unBind(gm::csm::VIRTUAL_CONTROL_HUD_TEXT_STATE_INTERNAL, mBindingsIds[1U]);
    Label_virtualcontrols_1_1_1_hudDisabled_csm.mVisibility.unBind(gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL, mBindingsIds[2U]);
    ProgressBar_6059_img_brightness_pogressbar.mProgressBarValue.unBind(gm::csm::VIRTUAL_CONTROL_BRIGHTNESS_VALUE_UPDATE_INTERNAL, mBindingsIds[3U]);
    Image_img_controls_icn_HUD_power.mState.unBind(gm::csm::VIRTUAL_CONTROL_HUD_POWER_BUTTON_STATE_INTERNAL, mBindingsIds[4U]);
    ProgressBar_6059_img_rotation_pogressbar.mProgressBarValue.unBind(gm::csm::VIRTUAL_CONTROL_ROTATION_VALUE_UPDATE_INTERNAL, mBindingsIds[5U]);
    ProgressBar_6059_img_height_pogressbar.mProgressBarValue.unBind(gm::csm::VIRTUAL_CONTROL_HEIGHT_VALUE_UPDATE_INTERNAL, mBindingsIds[6U]);
    Label_virtualcontrols_1_1_hud_csm.mState.unBind(gm::csm::VIRTUAL_CONTROL_HUD_TEXT_STATE_INTERNAL, mBindingsIds[7U]);
}

void Screen_6059::onScreenShow()
{
    addDependency(this, &Screen_6059::Widget_Logic_Visibility_img_brightness_increment, gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL);
    addDependency(this, &Screen_6059::Widget_Logic_Visibility_virtualcontrols_1_1_HUDheight_csm, gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL);
    addDependency(this, &Screen_6059::Widget_Logic_Visibility_img_rotation_left, gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL);
    addDependency(this, &Screen_6059::Widget_Logic_Visibility_img_brightness_decrement, gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL);
    mBindingsIds[0U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[1U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mState.bind(gm::csm::VIRTUAL_CONTROL_HUD_TEXT_STATE_INTERNAL);
    mBindingsIds[2U] = Label_virtualcontrols_1_1_1_hudDisabled_csm.mVisibility.bind(gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL);
    addDependency(this, &Screen_6059::Widget_Logic_Visibility_6059_img_brightness_pogressbar, gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL);
    mBindingsIds[3U] = ProgressBar_6059_img_brightness_pogressbar.mProgressBarValue.bind(gm::csm::VIRTUAL_CONTROL_BRIGHTNESS_VALUE_UPDATE_INTERNAL);
    addDependency(this, &Screen_6059::Widget_Logic_Visibility_virtualcontrols_1_1_HUDbrightness_csm, gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL);
    addDependency(this, &Screen_6059::Widget_Logic_Visibility_img_rotation_right, gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL);
    addDependency(this, &Screen_6059::Widget_Logic_Visibility_img_height_increment, gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL);
    mBindingsIds[4U] = Image_img_controls_icn_HUD_power.mState.bind(gm::csm::VIRTUAL_CONTROL_HUD_POWER_BUTTON_STATE_INTERNAL);
    addDependency(this, &Screen_6059::Widget_Logic_Visibility_6059_img_rotation_pogressbar, gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL);
    mBindingsIds[5U] = ProgressBar_6059_img_rotation_pogressbar.mProgressBarValue.bind(gm::csm::VIRTUAL_CONTROL_ROTATION_VALUE_UPDATE_INTERNAL);
    addDependency(this, &Screen_6059::Widget_Logic_Visibility_6059_img_height_pogressbar, gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL);
    mBindingsIds[6U] = ProgressBar_6059_img_height_pogressbar.mProgressBarValue.bind(gm::csm::VIRTUAL_CONTROL_HEIGHT_VALUE_UPDATE_INTERNAL);
    addDependency(this, &Screen_6059::Widget_Logic_Visibility_virtualcontrols_1_1_rotation_csm, gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL);
    addDependency(this, &Screen_6059::Widget_Logic_Visibility_virtualcontrols_1_1_hud_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[7U] = Label_virtualcontrols_1_1_hud_csm.mState.bind(gm::csm::VIRTUAL_CONTROL_HUD_TEXT_STATE_INTERNAL);
    addDependency(this, &Screen_6059::Widget_Logic_Visibility_img_height_decrement, gm::csm::VIRTUAL_CONTROL_HUD_VISIBILITY_FEATURE_INTERNAL);
}


} // namespace csm
} // namespace gm
