// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6013.h"

#include "RTOS_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6013::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_001 = !(var_002);
    
    Image_img_close.mVisibility = var_001;
}

void Screen_6013::Widget_Logic_Visibility_img_hill() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_003 = !(var_004);
    
    Image_img_hill.mVisibility = var_003;
}

void Screen_6013::Widget_Logic_Visibility_dyn_HillDescent_Description_csm() noexcept
{
    const bool var_006 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_005 = !(var_006);
    
    Label_dyn_HillDescent_Description_csm.mVisibility = var_005;
}

void Screen_6013::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm() noexcept
{
    const bool var_008 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_007 = !(var_008);
    
    Label_virtualcontrols_1_1_exitBtn_csm.mVisibility = var_007;
}

void Screen_6013::onScreenHide()
{
    Label_virtualcontrols_1_3_0_2_HillOn_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_HILLDESCENT_STATUS_SIGNAL, mBindingsIds[0U]);
    Image_img_radio_button_Off.mState.unBind(gm::csm::VIRTUALCONTROLS_HILLDESCENT_STATUS_SIGNAL, mBindingsIds[1U]);
    Label_virtualcontrols_1_3_card_hill_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[2U]);
    Label_virtualcontrols_1_3_0_2_HillOff_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_HILLDESCENT_STATUS_SIGNAL, mBindingsIds[3U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[4U]);
    Image_img_radio_button_on.mState.unBind(gm::csm::VIRTUALCONTROLS_HILLDESCENT_STATUS_SIGNAL, mBindingsIds[5U]);
}

void Screen_6013::onScreenShow()
{
    mBindingsIds[0U] = Label_virtualcontrols_1_3_0_2_HillOn_csm.mState.bind(gm::csm::VIRTUALCONTROLS_HILLDESCENT_STATUS_SIGNAL);
    mBindingsIds[1U] = Image_img_radio_button_Off.mState.bind(gm::csm::VIRTUALCONTROLS_HILLDESCENT_STATUS_SIGNAL);
    mBindingsIds[2U] = Label_virtualcontrols_1_3_card_hill_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    addDependency(this, &Screen_6013::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[3U] = Label_virtualcontrols_1_3_0_2_HillOff_csm.mState.bind(gm::csm::VIRTUALCONTROLS_HILLDESCENT_STATUS_SIGNAL);
    addDependency(this, &Screen_6013::Widget_Logic_Visibility_img_hill, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6013::Widget_Logic_Visibility_dyn_HillDescent_Description_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6013::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[4U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[5U] = Image_img_radio_button_on.mState.bind(gm::csm::VIRTUALCONTROLS_HILLDESCENT_STATUS_SIGNAL);
}


} // namespace csm
} // namespace gm
