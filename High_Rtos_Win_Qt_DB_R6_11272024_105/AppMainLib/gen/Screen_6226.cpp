// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6226.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6226::onScreenHide()
{
    Image_img_radio_button_headlight_auto.mState.unBind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL, mBindingsIds[0U]);
    Image_img_radio_button_headlight_off.mState.unBind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL, mBindingsIds[1U]);
    Label_virtualcontrols_1_0_u_PersHeadlightsOff_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL, mBindingsIds[2U]);
    Image_img_headlight_on.mState.unBind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL, mBindingsIds[3U]);
    Image_img_headlight_parking.mState.unBind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL, mBindingsIds[4U]);
    Label_virtualcontrols_1_0_u_PersHeadlightsAuto_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL, mBindingsIds[5U]);
    Image_img_radio_button_headlight_on.mState.unBind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL, mBindingsIds[6U]);
    Image_img_radio_button_headlight_parking.mState.unBind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL, mBindingsIds[7U]);
}

void Screen_6226::onScreenShow()
{
    mBindingsIds[0U] = Image_img_radio_button_headlight_auto.mState.bind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL);
    mBindingsIds[1U] = Image_img_radio_button_headlight_off.mState.bind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL);
    mBindingsIds[2U] = Label_virtualcontrols_1_0_u_PersHeadlightsOff_csm.mState.bind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL);
    mBindingsIds[3U] = Image_img_headlight_on.mState.bind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL);
    mBindingsIds[4U] = Image_img_headlight_parking.mState.bind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL);
    mBindingsIds[5U] = Label_virtualcontrols_1_0_u_PersHeadlightsAuto_csm.mState.bind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL);
    mBindingsIds[6U] = Image_img_radio_button_headlight_on.mState.bind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL);
    mBindingsIds[7U] = Image_img_radio_button_headlight_parking.mState.bind(gm::csm::VIRTUALCONTROLS_HEADLIGHT_STATE_INTERNAL);
}


} // namespace csm
} // namespace gm
