// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6113.h"

#include "LangTable.h"
#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6113::Widget_Logic_Visibility_img_transparent_bg() noexcept
{
    const bool var_002 = gm::csm::SMARTCONTROLS_TIMER_LIST_ENABLE.data();
    const bool var_001 = !(var_002);
    
    Image_img_transparent_bg.mVisibility = var_001;
}

void Screen_6113::Label_virtualcontrols_1_14_hours_csm_bindings() noexcept
{
    std::string text = gen::PluralsText("virtualcontrols_1_14_hours_csm", gm::csm::POWERBASE_HOURS_PLURAL_TEXT.data());

    Label_virtualcontrols_1_14_hours_csm = text.c_str();

}

void Screen_6113::GroupLabel_virtualcontrols_1_14_primaryButton_csm_bindings()
{
    std::string text = GroupLabel_virtualcontrols_1_14_primaryButton_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_OUTLET_HEADER));
    GroupLabel_virtualcontrols_1_14_primaryButton_csm = text.c_str();
}

void Screen_6113::Label_virtualcontrols_1_14_2_percentMile_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_2_percentMile_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_PERCENT_TEXT));
    ramp::FindReplaceString(text,"%2$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_RANGE_MILEAGE_NUMBER_VALUE));
    Label_virtualcontrols_1_14_2_percentMile_csm = text.c_str();
}

void Screen_6113::Label_virtualcontrols_1_14_body_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_body_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_OUTLET_HEADER));
    Label_virtualcontrols_1_14_body_csm = text.c_str();
}

void Screen_6113::onScreenHide()
{
    Label_virtualcontrols_1_14_2_header_csm.mState.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[0U]);
    GroupLabel_virtualcontrols_1_14_primaryButton_csm.mState.unBind(gm::csm::SMARTCONTROLS_OUTLET_POWERBASE_STATUS, mBindingsIds[2U]);
    Label_virtualcontrols_1_14_2_percentMile_csm.mState.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[5U]);
    GroupImage_img_keep_on_btn.mState.unBind(gm::csm::SMARTCONTROLS_OUTLET_POWERBASE_STATUS, mBindingsIds[6U]);
    Image_img_timer_toggle_btn.mState.unBind(gm::csm::SMARTCONTROLS_OUTLET_TIMER_ENABLE, mBindingsIds[7U]);
    Image_img_range_reserve_icon.mState.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[8U]);
    Image_img_btn_back_powerbase.mVisibility.unBind(gm::csm::OUTLETS_START_SCREEN_BACKBUTTON_VISIBILITY, mBindingsIds[9U]);
    Label_virtualcontrols_1_14_hours_csm.mState.unBind(gm::csm::SMARTCONTROLS_OUTLET_TIMER_ENABLE, mBindingsIds[11U]);
}

void Screen_6113::onScreenShow()
{
    mBindingsIds[0U] = Label_virtualcontrols_1_14_2_header_csm.mState.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    addDependency(this, &Screen_6113::Widget_Logic_Visibility_img_transparent_bg, gm::csm::SMARTCONTROLS_TIMER_LIST_ENABLE);
    mBindingsIds[2U] = GroupLabel_virtualcontrols_1_14_primaryButton_csm.mState.bind(gm::csm::SMARTCONTROLS_OUTLET_POWERBASE_STATUS);
    addDependency(this, &Screen_6113::GroupLabel_virtualcontrols_1_14_primaryButton_csm_bindings,gm::csm::SMARTCONTRSOLS_OUTLET_HEADER);
    mBindingsIds[5U] = Label_virtualcontrols_1_14_2_percentMile_csm.mState.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    addDependency(this, &Screen_6113::Label_virtualcontrols_1_14_2_percentMile_csm_bindings,gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_PERCENT_TEXT , gm::csm::SMARTCONTRSOLS_RANGE_MILEAGE_NUMBER_VALUE);
    mBindingsIds[6U] = GroupImage_img_keep_on_btn.mState.bind(gm::csm::SMARTCONTROLS_OUTLET_POWERBASE_STATUS);
    mBindingsIds[7U] = Image_img_timer_toggle_btn.mState.bind(gm::csm::SMARTCONTROLS_OUTLET_TIMER_ENABLE);
    mBindingsIds[8U] = Image_img_range_reserve_icon.mState.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    mBindingsIds[9U] = Image_img_btn_back_powerbase.mVisibility.bind(gm::csm::OUTLETS_START_SCREEN_BACKBUTTON_VISIBILITY);
    addDependency(this, &Screen_6113::Label_virtualcontrols_1_14_body_csm_bindings,gm::csm::SMARTCONTRSOLS_OUTLET_HEADER);
    addDependency(this, &Screen_6113::Label_virtualcontrols_1_14_hours_csm_bindings, gm::csm::POWERBASE_HOURS_PLURAL_TEXT);
    mBindingsIds[11U] = Label_virtualcontrols_1_14_hours_csm.mState.bind(gm::csm::SMARTCONTROLS_OUTLET_TIMER_ENABLE);
}


} // namespace csm
} // namespace gm
