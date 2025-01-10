// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_9002.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_9002::onScreenHide()
{
    Image_img_fan_single_zone.mVisibility.unBind(gm::csm::Data_HVAC_SIZGLE_ZONE_FAN_SPEED__DIVIDER_VISIBILITY, mBindingsIds[0U]);
    Image_img_btn_right_seat_cool_b_c.mVisibility.unBind(gm::csm::Data_HVAC_COOL_SEAT_VISIBLE, mBindingsIds[1U]);
    Image_img_left_coolseat_divider.mVisibility.unBind(gm::csm::DATA_Climate_Seats_Divider_Visibility, mBindingsIds[2U]);
    Image_img_hvac_modeman_auto.mVisibility.unBind(gm::csm::Data_HVAC_AIR_DIS_AUTO_VISIBILITY, mBindingsIds[3U]);
    Image_img_right_cool_seat_divider.mVisibility.unBind(gm::csm::DATA_Climate_Seats_Divider_Visibility, mBindingsIds[4U]);
    Image_img_btn_left_seat_cool_b_c.mVisibility.unBind(gm::csm::Data_HVAC_COOL_SEAT_VISIBLE, mBindingsIds[5U]);
    Group_grp_auto_single_zone.mVisibility.unBind(gm::csm::Data_HVAC_AIR_DIS_AUTO_VISIBILITY, mBindingsIds[6U]);
    Image_img_hvac_bottombar_right_seat_divider.mVisibility.unBind(gm::csm::Data_HVAC_LAUNCHER_ICON_VISIBILITY, mBindingsIds[7U]);
    Image_img_hvac_bottom_tab_bg.mState.unBind(gm::csm::Data_HVAC_BOTTOM_BAR_BG_TYPE, mBindingsIds[8U]);
    Image_img_hvac_launcher_expand_full.mVisibility.unBind(gm::csm::Data_HVAC_LAUNCHER_ICON_VISIBILITY, mBindingsIds[9U]);
}

void Screen_9002::onScreenShow()
{
    mBindingsIds[0U] = Image_img_fan_single_zone.mVisibility.bind(gm::csm::Data_HVAC_SIZGLE_ZONE_FAN_SPEED__DIVIDER_VISIBILITY);
    mBindingsIds[1U] = Image_img_btn_right_seat_cool_b_c.mVisibility.bind(gm::csm::Data_HVAC_COOL_SEAT_VISIBLE);
    mBindingsIds[2U] = Image_img_left_coolseat_divider.mVisibility.bind(gm::csm::DATA_Climate_Seats_Divider_Visibility);
    mBindingsIds[3U] = Image_img_hvac_modeman_auto.mVisibility.bind(gm::csm::Data_HVAC_AIR_DIS_AUTO_VISIBILITY);
    mBindingsIds[4U] = Image_img_right_cool_seat_divider.mVisibility.bind(gm::csm::DATA_Climate_Seats_Divider_Visibility);
    mBindingsIds[5U] = Image_img_btn_left_seat_cool_b_c.mVisibility.bind(gm::csm::Data_HVAC_COOL_SEAT_VISIBLE);
    mBindingsIds[6U] = Group_grp_auto_single_zone.mVisibility.bind(gm::csm::Data_HVAC_AIR_DIS_AUTO_VISIBILITY);
    mBindingsIds[7U] = Image_img_hvac_bottombar_right_seat_divider.mVisibility.bind(gm::csm::Data_HVAC_LAUNCHER_ICON_VISIBILITY);
    mBindingsIds[8U] = Image_img_hvac_bottom_tab_bg.mState.bind(gm::csm::Data_HVAC_BOTTOM_BAR_BG_TYPE);
    mBindingsIds[9U] = Image_img_hvac_launcher_expand_full.mVisibility.bind(gm::csm::Data_HVAC_LAUNCHER_ICON_VISIBILITY);
}


} // namespace csm
} // namespace gm
