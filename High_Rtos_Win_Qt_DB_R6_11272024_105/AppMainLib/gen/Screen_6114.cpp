// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6114.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6114::Label_virtualcontrols_1_14_2V_dynamicMileageNumber_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_2V_dynamicMileageNumber_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_RANGE_MILEAGE_NUMBER_VALUE));
    Label_virtualcontrols_1_14_2V_dynamicMileageNumber_csm = text.c_str();
}

void Screen_6114::Label_virtualcontrols_1_14_2V_rangeReservePercent_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_2V_rangeReservePercent_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_PERCENT_TEXT));
    Label_virtualcontrols_1_14_2V_rangeReservePercent_csm = text.c_str();
}

void Screen_6114::Label_virtualcontrols_1_14_2_body_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_2_body_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_OUTLET_HEADER));
    Label_virtualcontrols_1_14_2_body_csm = text.c_str();
}

void Screen_6114::Label_virtualcontrols_1_14_2_percentMile_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_2_percentMile_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_PERCENT_TEXT));
    ramp::FindReplaceString(text,"%2$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_RANGE_MILEAGE_NUMBER_VALUE));
    Label_virtualcontrols_1_14_2_percentMile_csm = text.c_str();
}

void Screen_6114::onScreenHide()
{
    Label_virtualcontrols_1_14_2V_rangeReserve_csm.mState.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[0U]);
    Label_virtualcontrols_1_14_2_descriptor_csm.mState.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[1U]);
    Image_img_up_arrow.mState.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_UP_ARROW, mBindingsIds[2U]);
    Label_virtualcontrols_1_14_2V_measureOfDistance_csm.mState.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[3U]);
    Image_img_down_arrow.mState.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_DOWN_ARROW, mBindingsIds[4U]);
    Label_virtualcontrols_1_14_2V_dynamicMileageNumber_csm.mState.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[6U]);
    Label_virtualcontrols_1_14_2_percentMile_csm.mState.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[9U]);
    Label_virtualcontrols_1_14_2V_rangeReservePercent_csm.mState.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[12U]);
    Label_virtualcontrols_1_14_2V_header_csm.mState.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[13U]);
    ProgressBar_6114_img_battery_level_progressbar.mProgressBarValue.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_PERCENT_VALUE, mBindingsIds[14U]);
}

void Screen_6114::onScreenShow()
{
    mBindingsIds[0U] = Label_virtualcontrols_1_14_2V_rangeReserve_csm.mState.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    mBindingsIds[1U] = Label_virtualcontrols_1_14_2_descriptor_csm.mState.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    mBindingsIds[2U] = Image_img_up_arrow.mState.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_UP_ARROW);
    mBindingsIds[3U] = Label_virtualcontrols_1_14_2V_measureOfDistance_csm.mState.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    mBindingsIds[4U] = Image_img_down_arrow.mState.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_DOWN_ARROW);
    mBindingsIds[6U] = Label_virtualcontrols_1_14_2V_dynamicMileageNumber_csm.mState.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    addDependency(this, &Screen_6114::Label_virtualcontrols_1_14_2V_dynamicMileageNumber_csm_bindings,gm::csm::SMARTCONTRSOLS_RANGE_MILEAGE_NUMBER_VALUE);
    mBindingsIds[9U] = Label_virtualcontrols_1_14_2_percentMile_csm.mState.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    addDependency(this, &Screen_6114::Label_virtualcontrols_1_14_2_percentMile_csm_bindings,gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_PERCENT_TEXT , gm::csm::SMARTCONTRSOLS_RANGE_MILEAGE_NUMBER_VALUE);
    addDependency(this, &Screen_6114::Label_virtualcontrols_1_14_2_body_csm_bindings,gm::csm::SMARTCONTRSOLS_OUTLET_HEADER);
    mBindingsIds[12U] = Label_virtualcontrols_1_14_2V_rangeReservePercent_csm.mState.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    addDependency(this, &Screen_6114::Label_virtualcontrols_1_14_2V_rangeReservePercent_csm_bindings,gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_PERCENT_TEXT);
    mBindingsIds[13U] = Label_virtualcontrols_1_14_2V_header_csm.mState.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    mBindingsIds[14U] = ProgressBar_6114_img_battery_level_progressbar.mProgressBarValue.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_PERCENT_VALUE);
}


} // namespace csm
} // namespace gm
