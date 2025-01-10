// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6014.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6014::Widget_Logic_Visibility_virtualcontrols_1_3_2_f_AutoParkAssist_csm() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_001 = !(var_002);
    
    Label_virtualcontrols_1_3_2_f_AutoParkAssist_csm.mVisibility = var_001;
}

void Screen_6014::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_003 = !(var_004);
    
    Image_img_close.mVisibility = var_003;
}

void Screen_6014::Widget_Logic_Visibility_img_auto_parking_assist() noexcept
{
    const bool var_006 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_005 = !(var_006);
    
    Image_img_auto_parking_assist.mVisibility = var_005;
}

void Screen_6014::onScreenHide()
{
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[0U]);
    Label_virtualcontrols_1_3_card_apa_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[1U]);
}

void Screen_6014::onScreenShow()
{
    addDependency(this, &Screen_6014::Widget_Logic_Visibility_virtualcontrols_1_3_2_f_AutoParkAssist_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[0U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[1U] = Label_virtualcontrols_1_3_card_apa_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    addDependency(this, &Screen_6014::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6014::Widget_Logic_Visibility_img_auto_parking_assist, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
}


} // namespace csm
} // namespace gm
