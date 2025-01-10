// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6133.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6133::onScreenHide()
{
    Label_dyn_virtualcontrols_1_8_v_aux2.mText.unBind(gm::csm::Data_VIRTUAL_CONTROLS_AUX2_NAME, mBindingsIds[0U]);
    Label_dyn_virtualcontrols_1_8_v_aux1.mText.unBind(gm::csm::Data_VIRTUAL_CONTROLS_AUX1_NAME, mBindingsIds[1U]);
    Label_dyn_virtualcontrols_1_8_v_aux4.mText.unBind(gm::csm::Data_VIRTUAL_CONTROLS_AUX4_NAME, mBindingsIds[2U]);
    Label_dyn_virtualcontrols_1_8_v_aux3.mText.unBind(gm::csm::Data_VIRTUAL_CONTROLS_AUX3_NAME, mBindingsIds[3U]);
    Label_dyn_virtualcontrols_1_8_v_aux6.mText.unBind(gm::csm::Data_VIRTUAL_CONTROLS_AUX6_NAME, mBindingsIds[4U]);
    Label_dyn_virtualcontrols_1_8_v_aux5.mText.unBind(gm::csm::Data_VIRTUAL_CONTROLS_AUX5_NAME, mBindingsIds[5U]);
}

void Screen_6133::onScreenShow()
{
    mBindingsIds[0U] = Label_dyn_virtualcontrols_1_8_v_aux2.mText.bind(gm::csm::Data_VIRTUAL_CONTROLS_AUX2_NAME);
    mBindingsIds[1U] = Label_dyn_virtualcontrols_1_8_v_aux1.mText.bind(gm::csm::Data_VIRTUAL_CONTROLS_AUX1_NAME);
    mBindingsIds[2U] = Label_dyn_virtualcontrols_1_8_v_aux4.mText.bind(gm::csm::Data_VIRTUAL_CONTROLS_AUX4_NAME);
    mBindingsIds[3U] = Label_dyn_virtualcontrols_1_8_v_aux3.mText.bind(gm::csm::Data_VIRTUAL_CONTROLS_AUX3_NAME);
    mBindingsIds[4U] = Label_dyn_virtualcontrols_1_8_v_aux6.mText.bind(gm::csm::Data_VIRTUAL_CONTROLS_AUX6_NAME);
    mBindingsIds[5U] = Label_dyn_virtualcontrols_1_8_v_aux5.mText.bind(gm::csm::Data_VIRTUAL_CONTROLS_AUX5_NAME);
}


} // namespace csm
} // namespace gm
