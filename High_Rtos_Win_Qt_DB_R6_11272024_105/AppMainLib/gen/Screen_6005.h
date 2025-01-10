// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6005_H
#define SCREEN_6005_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6005 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6005(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_placeholder_WakeScreen{"grp_placeholder_WakeScreen","img_placeholder_WakeScreen"};
    	widget_properties::GroupWidget Group_grp_placeholder_WakeScreen{"grp_placeholder_WakeScreen"};
    	widget_properties::ImageWidget Image_icn_controls_child{"icn_controls_child"};
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::ImageWidget Image_img_control_lockout{"img_control_lockout"};
    	widget_properties::ImageWidget Image_img_radio_button_off{"img_radio_button_off"};
    	widget_properties::ImageWidget Image_img_radio_button_on{"img_radio_button_on"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_0_1_ChildOff_csm{"virtualcontrols_1_2_0_1_ChildOff_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_0_1_ChildOn_csm{"virtualcontrols_1_2_0_1_ChildOn_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_0_1_child_csm{"virtualcontrols_1_2_0_1_child_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_card_child_csm{"virtualcontrols_1_2_card_child_csm"};
    	std::array<BindingId, 7> mBindingsIds;
    private:
    void Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    private:
    void Widget_Logic_Visibility_icn_controls_child() noexcept;
    private:
    void Widget_Logic_Visibility_img_control_lockout() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_2_0_1_child_csm() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6005_H
