// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6166.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6166::Widget_Logic_Visibility_virtualcontrols_1_8_3_f_PAB_csm() noexcept
{
    const bool var_001 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();

    const bool var_002 = !(var_001);

    Label_virtualcontrols_1_8_3_f_PAB_csm.mVisibility = var_002;
}

void Screen_6166::Widget_Logic_Visibility_img_pab() noexcept
{
    const bool var_001 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();

    const bool var_002 = !(var_001);

    Image_img_pab.mVisibility = var_002;
}

void Screen_6166::onScreenHide()
{
    
    
    GroupImage_img_pab_btn.mState.unBind(gm::csm::VIRTUALCONTROLS_PASSENGER_AIR_BAG_STATE_INTERNAL, mBindingsIds[0U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[1U]);
}

void Screen_6166::onScreenShow()
{
    addDependency(this, &Screen_6166::Widget_Logic_Visibility_virtualcontrols_1_8_3_f_PAB_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    
    addDependency(this, &Screen_6166::Widget_Logic_Visibility_img_pab, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    
    mBindingsIds[0U] = GroupImage_img_pab_btn.mState.bind(gm::csm::VIRTUALCONTROLS_PASSENGER_AIR_BAG_STATE_INTERNAL);
    mBindingsIds[1U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
}


} // namespace csm
} // namespace gm
