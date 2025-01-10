// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_9031.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_9031::onScreenHide()
{
    Image_img_btn_right_seat_cool_b_c.mState.unBind(gm::csm::Data_HVAC_RIGHT_COOLED_BACK_AND_CUSION_HEATED_SEAT, mBindingsIds[0U]);
    Image_img_btn_right_seat_heat_b_c.mState.unBind(gm::csm::Data_HVAC_RIGHT_BACK_AND_CUSION_HEATED_SEAT, mBindingsIds[1U]);
}

void Screen_9031::onScreenShow()
{
    mBindingsIds[0U] = Image_img_btn_right_seat_cool_b_c.mState.bind(gm::csm::Data_HVAC_RIGHT_COOLED_BACK_AND_CUSION_HEATED_SEAT);
    mBindingsIds[1U] = Image_img_btn_right_seat_heat_b_c.mState.bind(gm::csm::Data_HVAC_RIGHT_BACK_AND_CUSION_HEATED_SEAT);
}


} // namespace csm
} // namespace gm
