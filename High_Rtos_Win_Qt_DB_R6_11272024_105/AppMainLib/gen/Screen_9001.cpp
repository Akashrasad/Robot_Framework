// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_9001.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_9001::onScreenHide()
{
    GroupImage_img_air_direction_selected.mState.unBind(gm::csm::Data_HVAC_AIRDIRECTION_VALUE, mBindingsIds[0U]);
    Label_dyn_lbl_left_temp.mText.unBind(gm::csm::Data_HVAC_TEMP_REAR, mBindingsIds[1U]);
    Image_img_right_cool_seat_divider.mVisibility.unBind(gm::csm::DATA_Climate_Seats_Divider_Visibility, mBindingsIds[2U]);
    Image_img_btn_left_seat_cool_b_c.mVisibility.unBind(gm::csm::Data_HVAC_COOL_SEAT_VISIBLE, mBindingsIds[3U]);
    Image_img_btn_right_seat_cool_b_c.mVisibility.unBind(gm::csm::Data_HVAC_COOL_SEAT_VISIBLE, mBindingsIds[4U]);
    Image_img_btn_Sync.mState.unBind(gm::csm::Data_HVAC_FRONT_SYNC, mBindingsIds[5U]);
    Image_img_left_cool_seat_divider.mVisibility.unBind(gm::csm::DATA_Climate_Seats_Divider_Visibility, mBindingsIds[6U]);
    GroupImage_img_fan_level.mState.unBind(gm::csm::Data_HVAC_FRONT_LEVEL_FANSPEED, mBindingsIds[7U]);
    Image_img_hvac_bottom_tab_bg.mState.unBind(gm::csm::Data_HVAC_BOTTOM_BAR_BG_TYPE, mBindingsIds[8U]);
}

void Screen_9001::onScreenShow()
{
    mBindingsIds[0U] = GroupImage_img_air_direction_selected.mState.bind(gm::csm::Data_HVAC_AIRDIRECTION_VALUE);
    mBindingsIds[1U] = Label_dyn_lbl_left_temp.mText.bind(gm::csm::Data_HVAC_TEMP_REAR);
    mBindingsIds[2U] = Image_img_right_cool_seat_divider.mVisibility.bind(gm::csm::DATA_Climate_Seats_Divider_Visibility);
    mBindingsIds[3U] = Image_img_btn_left_seat_cool_b_c.mVisibility.bind(gm::csm::Data_HVAC_COOL_SEAT_VISIBLE);
    mBindingsIds[4U] = Image_img_btn_right_seat_cool_b_c.mVisibility.bind(gm::csm::Data_HVAC_COOL_SEAT_VISIBLE);
    mBindingsIds[5U] = Image_img_btn_Sync.mState.bind(gm::csm::Data_HVAC_FRONT_SYNC);
    mBindingsIds[6U] = Image_img_left_cool_seat_divider.mVisibility.bind(gm::csm::DATA_Climate_Seats_Divider_Visibility);
    mBindingsIds[7U] = GroupImage_img_fan_level.mState.bind(gm::csm::Data_HVAC_FRONT_LEVEL_FANSPEED);
    mBindingsIds[8U] = Image_img_hvac_bottom_tab_bg.mState.bind(gm::csm::Data_HVAC_BOTTOM_BAR_BG_TYPE);
}


} // namespace csm
} // namespace gm
