// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6115.h"

#include "RTOS_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6115::Label_virtualcontrols_1_14_4_header_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_4_header_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_OUTLET_HEADER));
    Label_virtualcontrols_1_14_4_header_csm = text.c_str();
}

void Screen_6115::Label_virtualcontrols_1_14_4_powerLimitNumber1_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_4_powerLimitNumber1_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_POWER_PORT_LIMIT));
    Label_virtualcontrols_1_14_4_powerLimitNumber1_csm = text.c_str();
}

void Screen_6115::Label_virtualcontrols_1_14_4_rangeUsed_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_4_rangeUsed_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTROLS_RANGE_USED_DISCHARGE));
    Label_virtualcontrols_1_14_4_rangeUsed_csm = text.c_str();
}

void Screen_6115::onScreenHide()
{
    Label_virtualcontrols_1_14_4_chargePort_csm.mVisibility.unBind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE, mBindingsIds[0U]);
    Label_dyn_lbl_virtualcontrols_1_14_4_timerEnding_csm.mText.unBind(gm::csm::SMARTCONTROLS_PEEKIN_ENDING_TEXT, mBindingsIds[1U]);
    Image_img_charge_port_icon.mVisibility.unBind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE, mBindingsIds[2U]);
    Image_img_icon.mState.unBind(gm::csm::SMARTCONTROLS_PEEKIN_OUTLET_TOGGLE, mBindingsIds[3U]);
    Label_dyn_virtualcontrols_1_14_4_status_chargerport_csm.mVisibility.unBind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE, mBindingsIds[4U]);
    Label_dyn_virtualcontrols_1_14_4_status_chargerport_csm.mState.unBind(gm::csm::OFFBOARD_OUTLET_OPERATIONAL_STATUS, mBindingsIds[5U]);
    Label_virtualcontrols_1_14_4_powerLimitNumber1_csm.mVisibility.unBind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE, mBindingsIds[6U]);
    GroupImage_img_add_1hour_btn.mVisibility.unBind(gm::csm::SMARTCONTROLS_PEEKIN_OUTLET_TOGGLE, mBindingsIds[9U]);
    GroupImage_img_add_1hour_btn.mState.unBind(gm::csm::SMARTCONTROLS_PEEKIN_ADDHOUR_BUTTON_STATUS, mBindingsIds[10U]);
    Label_virtualcontrols_1_14_4_powerLimit_csm.mVisibility.unBind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE, mBindingsIds[11U]);
    Group_grp_add_1hour_button.mVisibility.unBind(gm::csm::SMARTCONTROLS_PEEKIN_OUTLET_TOGGLE, mBindingsIds[12U]);
    ProgressBar_6115_img_charge_port_pogressbar.mVisibility.unBind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE, mBindingsIds[13U]);
    ProgressBar_6115_img_charge_port_pogressbar.mProgressBarValue.unBind(gm::csm::OFFBOARD_OUTLETS_ELECTRICAL_ENERGY_POWER_LEVEL_PERCENT, mBindingsIds[14U]);
}

void Screen_6115::onScreenShow()
{
    mBindingsIds[0U] = Label_virtualcontrols_1_14_4_chargePort_csm.mVisibility.bind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE);
    mBindingsIds[1U] = Label_dyn_lbl_virtualcontrols_1_14_4_timerEnding_csm.mText.bind(gm::csm::SMARTCONTROLS_PEEKIN_ENDING_TEXT);
    mBindingsIds[2U] = Image_img_charge_port_icon.mVisibility.bind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE);
    mBindingsIds[3U] = Image_img_icon.mState.bind(gm::csm::SMARTCONTROLS_PEEKIN_OUTLET_TOGGLE);
    mBindingsIds[4U] = Label_dyn_virtualcontrols_1_14_4_status_chargerport_csm.mVisibility.bind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE);
    mBindingsIds[5U] = Label_dyn_virtualcontrols_1_14_4_status_chargerport_csm.mState.bind(gm::csm::OFFBOARD_OUTLET_OPERATIONAL_STATUS);
    mBindingsIds[6U] = Label_virtualcontrols_1_14_4_powerLimitNumber1_csm.mVisibility.bind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE);
    addDependency(this, &Screen_6115::Label_virtualcontrols_1_14_4_powerLimitNumber1_csm_bindings,gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_POWER_PORT_LIMIT);
    addDependency(this, &Screen_6115::Label_virtualcontrols_1_14_4_header_csm_bindings,gm::csm::SMARTCONTRSOLS_OUTLET_HEADER);
    mBindingsIds[9U] = GroupImage_img_add_1hour_btn.mVisibility.bind(gm::csm::SMARTCONTROLS_PEEKIN_OUTLET_TOGGLE);
    mBindingsIds[10U] = GroupImage_img_add_1hour_btn.mState.bind(gm::csm::SMARTCONTROLS_PEEKIN_ADDHOUR_BUTTON_STATUS);
    mBindingsIds[11U] = Label_virtualcontrols_1_14_4_powerLimit_csm.mVisibility.bind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE);
    mBindingsIds[12U] = Group_grp_add_1hour_button.mVisibility.bind(gm::csm::SMARTCONTROLS_PEEKIN_OUTLET_TOGGLE);
    mBindingsIds[13U] = ProgressBar_6115_img_charge_port_pogressbar.mVisibility.bind(gm::csm::SMARTCONTROLS_PEEKIN_CHARGE_PORT_ENABLE);
    mBindingsIds[14U] = ProgressBar_6115_img_charge_port_pogressbar.mProgressBarValue.bind(gm::csm::OFFBOARD_OUTLETS_ELECTRICAL_ENERGY_POWER_LEVEL_PERCENT);
    addDependency(this, &Screen_6115::Label_virtualcontrols_1_14_4_rangeUsed_csm_bindings,gm::csm::SMARTCONTROLS_RANGE_USED_DISCHARGE);
}


} // namespace csm
} // namespace gm
