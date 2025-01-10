// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_9005.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_9005::onScreenHide()
{
    Label_dyn_lbl_fan_number.mVisibility.unBind(gm::csm::Data_HVAC_FANNUMBER_VISIBLITY, mBindingsIds[0U]);
    Label_dyn_lbl_fan_number.mText.unBind(gm::csm::Data_HVAC_FRONT_DYNAMIC_LEVEL_FANSPEED, mBindingsIds[1U]);
    Label_climate_5_0_AUTObtn_csm.mVisibility.unBind(gm::csm::Data_HVAC_AUTO_LBL_VISIBILITY, mBindingsIds[2U]);
    Image_img_modeman_auto.mVisibility.unBind(gm::csm::Data_HVAC_AUTO_AIRDIR_VISIBLITY, mBindingsIds[3U]);
    Image_img_modeman_fan_auto.mVisibility.unBind(gm::csm::Data_HVAC_AUTO_AIRDIR_FANSPEED_VISIBLITY, mBindingsIds[4U]);
    Image_img_fan_auto.mVisibility.unBind(gm::csm::Data_HVAC_AUTO_FANSPEED_VISIBLITY, mBindingsIds[5U]);
}

void Screen_9005::onScreenShow()
{
    mBindingsIds[0U] = Label_dyn_lbl_fan_number.mVisibility.bind(gm::csm::Data_HVAC_FANNUMBER_VISIBLITY);
    mBindingsIds[1U] = Label_dyn_lbl_fan_number.mText.bind(gm::csm::Data_HVAC_FRONT_DYNAMIC_LEVEL_FANSPEED);
    mBindingsIds[2U] = Label_climate_5_0_AUTObtn_csm.mVisibility.bind(gm::csm::Data_HVAC_AUTO_LBL_VISIBILITY);
    mBindingsIds[3U] = Image_img_modeman_auto.mVisibility.bind(gm::csm::Data_HVAC_AUTO_AIRDIR_VISIBLITY);
    mBindingsIds[4U] = Image_img_modeman_fan_auto.mVisibility.bind(gm::csm::Data_HVAC_AUTO_AIRDIR_FANSPEED_VISIBLITY);
    mBindingsIds[5U] = Image_img_fan_auto.mVisibility.bind(gm::csm::Data_HVAC_AUTO_FANSPEED_VISIBLITY);
}


} // namespace csm
} // namespace gm
