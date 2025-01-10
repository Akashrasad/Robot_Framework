// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6163_H
#define SCREEN_6163_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6163 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6163(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupWidget Group_grp_img_deploy_btn{"grp_img_deploy_btn"};
    	widget_properties::GroupWidget Group_grp_img_stow_btn{"grp_img_stow_btn"};
    	widget_properties::ImageWidget Image_img_power_assist{"img_power_assist"};
    	widget_properties::ImageWidget Image_img_power_assist_off_divider{"img_power_assist_off_divider"};
    	widget_properties::ImageWidget Image_img_power_assist_on_divider{"img_power_assist_on_divider"};
    	widget_properties::ImageWidget Image_img_radio_btn_power_assist_off{"img_radio_btn_power_assist_off"};
    	widget_properties::ImageWidget Image_img_radio_btn_power_assist_on{"img_radio_btn_power_assist_on"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_9_g_stepsOff_csm{"virtualcontrols_1_9_g_stepsOff_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_9_g_stepsOn_csm{"virtualcontrols_1_9_g_stepsOn_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_9h_powerAssistSteps_csm{"virtualcontrols_1_9h_powerAssistSteps_csm"};
    	std::array<BindingId, 11> mBindingsIds;
    private:
    void Widget_Logic_Visibility_img_power_assist() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_9h_powerAssistSteps_csm() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6163_H
