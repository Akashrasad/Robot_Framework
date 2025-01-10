// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6159_H
#define SCREEN_6159_H

#include "BindableScreenLogic.h"
#include "StringData.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6159 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6159(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_launch_btn_crab{"grp_img_crab_btn","img_launch_btn_crab"};
    	widget_properties::GroupImageWidget GroupImage_img_rearsteering_btn{"grp_rearsteering_btn","img_rearsteering_btn"};
    	widget_properties::GroupWidget Group_grp_img_crab_btn{"grp_img_crab_btn"};
    	widget_properties::ImageWidget Image_img_controls_icn_rear_steering{"img_controls_icn_rear_steering"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_10_v_rearSteering_csm{"virtualcontrols_1_3_10_v_rearSteering_csm"};
    	std::array<BindingId, 5> mBindingsIds;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_3_10_v_rearSteering_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_controls_icn_rear_steering() noexcept;
    private:
    void Label_virtualcontrols_1_3_10_v_rearSteering_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6159_H
