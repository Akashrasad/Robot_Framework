// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6161_H
#define SCREEN_6161_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6161 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6161(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ImageWidget Image_img_control_lockout{"img_control_lockout"};
    	widget_properties::ImageWidget Image_img_radio_button_off{"img_radio_button_off"};
    	widget_properties::ImageWidget Image_img_radio_button_on{"img_radio_button_on"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_0_1_ChildOff_csm{"virtualcontrols_1_2_0_1_ChildOff_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_0_1_ChildOn_csm{"virtualcontrols_1_2_0_1_ChildOn_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_8_h_cardConversation_csm{"virtualcontrols_1_8_h_cardConversation_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_2_5_h_rccConversation_csm{"virtualcontrols_2_5_h_rccConversation_csm"};
    	std::array<BindingId, 6> mBindingsIds;
    private:
    void Widget_Logic_Visibility_virtualcontrols_2_5_h_rccConversation_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_control_lockout() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6161_H
