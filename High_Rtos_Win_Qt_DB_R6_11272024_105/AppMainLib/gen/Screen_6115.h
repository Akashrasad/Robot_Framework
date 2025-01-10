// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6115_H
#define SCREEN_6115_H

#include "BindableScreenLogic.h"
#include "StringData.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6115 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6115(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_add_1hour_btn{"grp_add_1hour_button","img_add_1hour_btn"};
    	widget_properties::GroupWidget Group_grp_add_1hour_button{"grp_add_1hour_button"};
    	widget_properties::ImageWidget Image_img_charge_port_icon{"img_charge_port_icon"};
    	widget_properties::ImageWidget Image_img_icon{"img_icon"};
    	widget_properties::LabelWidget Label_dyn_lbl_virtualcontrols_1_14_4_timerEnding_csm{"dyn_lbl_virtualcontrols_1_14_4_timerEnding_csm"};
    	widget_properties::LabelWidget Label_dyn_virtualcontrols_1_14_4_status_chargerport_csm{"dyn_virtualcontrols_1_14_4_status_chargerport_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_4_chargePort_csm{"virtualcontrols_1_14_4_chargePort_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_4_header_csm{"virtualcontrols_1_14_4_header_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_4_powerLimitNumber1_csm{"virtualcontrols_1_14_4_powerLimitNumber1_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_4_powerLimit_csm{"virtualcontrols_1_14_4_powerLimit_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_4_rangeUsed_csm{"virtualcontrols_1_14_4_rangeUsed_csm"};
    	widget_properties::ProgressBarWidget ProgressBar_6115_img_charge_port_pogressbar{"6115_img_charge_port_pogressbar"};
    	std::array<BindingId, 16> mBindingsIds;
    private:
    void Label_virtualcontrols_1_14_4_header_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_4_powerLimitNumber1_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_4_rangeUsed_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6115_H
