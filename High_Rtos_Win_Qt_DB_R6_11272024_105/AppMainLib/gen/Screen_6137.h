// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6137_H
#define SCREEN_6137_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6137 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6137(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupLabelWidget GroupLabel_dyn_speed_limiter_status{"grp_img_launch_btn","dyn_speed_limiter_status"};
    	widget_properties::ImageWidget Image_img_controls_icn_speed_limiter{"img_controls_icn_speed_limiter"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_9_f_cardSpeedLimiter_csm{"virtualcontrols_1_3_9_f_cardSpeedLimiter_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_speedLimiterSelectManual_csm{"virtualcontrols_1_3_speedLimiterSelectManual_csm"};
    	std::array<BindingId, 3> mBindingsIds;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_3_speedLimiterSelectManual_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_controls_icn_speed_limiter() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6137_H
