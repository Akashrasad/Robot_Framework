// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6114_H
#define SCREEN_6114_H

#include "BindableScreenLogic.h"
#include "StringData.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6114 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6114(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ImageWidget Image_img_down_arrow{"img_down_arrow"};
    	widget_properties::ImageWidget Image_img_up_arrow{"img_up_arrow"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_2V_dynamicMileageNumber_csm{"virtualcontrols_1_14_2V_dynamicMileageNumber_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_2V_header_csm{"virtualcontrols_1_14_2V_header_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_2V_measureOfDistance_csm{"virtualcontrols_1_14_2V_measureOfDistance_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_2V_rangeReservePercent_csm{"virtualcontrols_1_14_2V_rangeReservePercent_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_2V_rangeReserve_csm{"virtualcontrols_1_14_2V_rangeReserve_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_2_body_csm{"virtualcontrols_1_14_2_body_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_2_descriptor_csm{"virtualcontrols_1_14_2_descriptor_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_14_2_percentMile_csm{"virtualcontrols_1_14_2_percentMile_csm"};
    	widget_properties::ProgressBarWidget ProgressBar_6114_img_battery_level_progressbar{"6114_img_battery_level_progressbar"};
    	std::array<BindingId, 15> mBindingsIds;
    private:
    void Label_virtualcontrols_1_14_2V_dynamicMileageNumber_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_2V_rangeReservePercent_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_2_body_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_2_percentMile_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6114_H
