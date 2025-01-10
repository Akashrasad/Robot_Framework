// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6134.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6134::onScreenHide()
{
    Label_dyn_aux_name_csm.mText.unBind(gm::csm::Data_VIRTUAL_CONTROLS_AUX_NAME, mBindingsIds[0U]);
    Image_img_check_box_held_down.mState.unBind(gm::csm::Data_VIRTUALCONTROLS_AUX_MOMONTARY_LATCH_SWITCH_INTERNAL, mBindingsIds[1U]);
    Image_img_text_box.mState.unBind(gm::csm::Data_VIRTUAL_CONTROL_ENABLE_EDIT_OPTION_STATE, mBindingsIds[2U]);
    Label_dyn_lbl_aux_edit.mText.unBind(gm::csm::Data_VIRTUAL_CONTROLS_AUX_NAME, mBindingsIds[3U]);
    Label_dyn_lbl_aux_edit.mState.unBind(gm::csm::Data_VIRTUAL_CONTROL_ENABLE_EDIT_OPTION_STATE, mBindingsIds[4U]);
    Label_virtualcontrols_1_8_1_v_held_csm.mState.unBind(gm::csm::Data_VIRTUALCONTROLS_AUX_MOMONTARY_LATCH_SWITCH_INTERNAL, mBindingsIds[5U]);
    Image_img_check_box_switch_On.mState.unBind(gm::csm::Data_VIRTUALCONTROLS_AUX_LIGHTBAR_SWITCH_INTERNAL, mBindingsIds[6U]);
    Label_virtualcontrols_1_8_1_v_parking_csm.mState.unBind(gm::csm::Data_VIRTUALCONTROLS_AUX_LIGHTBAR_SWITCH_INTERNAL, mBindingsIds[7U]);
}

void Screen_6134::onScreenShow()
{
    mBindingsIds[0U] = Label_dyn_aux_name_csm.mText.bind(gm::csm::Data_VIRTUAL_CONTROLS_AUX_NAME);
    mBindingsIds[1U] = Image_img_check_box_held_down.mState.bind(gm::csm::Data_VIRTUALCONTROLS_AUX_MOMONTARY_LATCH_SWITCH_INTERNAL);
    mBindingsIds[2U] = Image_img_text_box.mState.bind(gm::csm::Data_VIRTUAL_CONTROL_ENABLE_EDIT_OPTION_STATE);
    mBindingsIds[3U] = Label_dyn_lbl_aux_edit.mText.bind(gm::csm::Data_VIRTUAL_CONTROLS_AUX_NAME);
    mBindingsIds[4U] = Label_dyn_lbl_aux_edit.mState.bind(gm::csm::Data_VIRTUAL_CONTROL_ENABLE_EDIT_OPTION_STATE);
    mBindingsIds[5U] = Label_virtualcontrols_1_8_1_v_held_csm.mState.bind(gm::csm::Data_VIRTUALCONTROLS_AUX_MOMONTARY_LATCH_SWITCH_INTERNAL);
    mBindingsIds[6U] = Image_img_check_box_switch_On.mState.bind(gm::csm::Data_VIRTUALCONTROLS_AUX_LIGHTBAR_SWITCH_INTERNAL);
    mBindingsIds[7U] = Label_virtualcontrols_1_8_1_v_parking_csm.mState.bind(gm::csm::Data_VIRTUALCONTROLS_AUX_LIGHTBAR_SWITCH_INTERNAL);
}


} // namespace csm
} // namespace gm
