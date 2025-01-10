// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_9073.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_9073::onScreenHide()
{
    Image_img_fan_speed_auto.mVisibility.unBind(gm::csm::Data_HVAC_AUTO_FANSPEED_VISIBLITY_SINGLEZONE, mBindingsIds[0U]);
    Label_dyn_lbl_fan_numeric.mVisibility.unBind(gm::csm::Data_HVAC_FANNUMBER_VISIBLITY, mBindingsIds[1U]);
    Label_dyn_lbl_fan_numeric.mText.unBind(gm::csm::Data_HVAC_FRONT_DYNAMIC_LEVEL_FANSPEED, mBindingsIds[2U]);
}

void Screen_9073::onScreenShow()
{
    mBindingsIds[0U] = Image_img_fan_speed_auto.mVisibility.bind(gm::csm::Data_HVAC_AUTO_FANSPEED_VISIBLITY_SINGLEZONE);
    mBindingsIds[1U] = Label_dyn_lbl_fan_numeric.mVisibility.bind(gm::csm::Data_HVAC_FANNUMBER_VISIBLITY);
    mBindingsIds[2U] = Label_dyn_lbl_fan_numeric.mText.bind(gm::csm::Data_HVAC_FRONT_DYNAMIC_LEVEL_FANSPEED);
}


} // namespace csm
} // namespace gm
