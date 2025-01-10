// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_9026.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_9026::onScreenHide()
{
    Image_img_btn_left_seat_heat_b_c.mState.unBind(gm::csm::Data_HVAC_LEFT_HEATED_SEAT_BK_AND_CUSION, mBindingsIds[0U]);
    Image_img_btn_left_seat_heat_back.mState.unBind(gm::csm::Data_HVAC_LEFT_HEATED_SEAT, mBindingsIds[1U]);
}

void Screen_9026::onScreenShow()
{
    mBindingsIds[0U] = Image_img_btn_left_seat_heat_b_c.mState.bind(gm::csm::Data_HVAC_LEFT_HEATED_SEAT_BK_AND_CUSION);
    mBindingsIds[1U] = Image_img_btn_left_seat_heat_back.mState.bind(gm::csm::Data_HVAC_LEFT_HEATED_SEAT);
}


} // namespace csm
} // namespace gm
