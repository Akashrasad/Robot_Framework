// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_9028.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_9028::onScreenHide()
{
    Image_img_btn_left_seat_heat_back.mState.unBind(gm::csm::Data_HVAC_LEFT_HEATED_SEAT, mBindingsIds[0U]);
    Image_img_btn_left_seat_heat_b_c.mState.unBind(gm::csm::Data_HVAC_LEFT_HEATED_SEAT_BK_AND_CUSION, mBindingsIds[1U]);
    Image_img_btn_left_seat_cool_b_c.mState.unBind(gm::csm::Data_HVAC_LEFT_HEATED_SEAT_COOLED, mBindingsIds[2U]);
}

void Screen_9028::onScreenShow()
{
    mBindingsIds[0U] = Image_img_btn_left_seat_heat_back.mState.bind(gm::csm::Data_HVAC_LEFT_HEATED_SEAT);
    mBindingsIds[1U] = Image_img_btn_left_seat_heat_b_c.mState.bind(gm::csm::Data_HVAC_LEFT_HEATED_SEAT_BK_AND_CUSION);
    mBindingsIds[2U] = Image_img_btn_left_seat_cool_b_c.mState.bind(gm::csm::Data_HVAC_LEFT_HEATED_SEAT_COOLED);
}


} // namespace csm
} // namespace gm
