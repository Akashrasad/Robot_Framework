// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6020_H
#define SCREEN_6020_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6020 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6020(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_placeholder_WakeScreen{"grp_placeholder_WakeScreen","img_placeholder_WakeScreen"};
    	widget_properties::GroupLabelWidget GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm{"grp_placeholder_WakeScreen_mfc","virtualcontrols_1_0_4_wakeScreenExit_csm"};
    	widget_properties::GroupWidget Group_grp_placeholder_WakeScreen{"grp_placeholder_WakeScreen"};
    	widget_properties::ImageWidget Image_img_checkbox{"img_checkbox"};
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::ImageWidget Image_img_controls_icn_headlights_u550{"img_controls_icn_headlights_u550"};
    	widget_properties::ImageWidget Image_img_headlights_on{"img_headlights_on"};
    	widget_properties::ImageWidget Image_img_headlights_parking_lights{"img_headlights_parking_lights"};
    	widget_properties::ImageWidget Image_img_radio_button_headlight_auto{"img_radio_button_headlight_auto"};
    	widget_properties::ImageWidget Image_img_radio_button_headlight_off{"img_radio_button_headlight_off"};
    	widget_properties::ImageWidget Image_img_radio_button_headlight_on{"img_radio_button_headlight_on"};
    	widget_properties::ImageWidget Image_img_radio_button_headlight_parking{"img_radio_button_headlight_parking"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_headlights_csm{"virtualcontrols_0_0_headlights_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_2_HeadlightsAuto_csm{"virtualcontrols_1_4_0_2_HeadlightsAuto_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_2_HeadlightsOn_csm{"virtualcontrols_1_4_0_2_HeadlightsOn_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_2_HeadlightsParking_csm{"virtualcontrols_1_4_0_2_HeadlightsParking_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_2_HeadlightsReminder_csm{"virtualcontrols_1_4_0_2_HeadlightsReminder_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_2_headlightsOff_csm{"virtualcontrols_1_4_0_2_headlightsOff_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_2_headlights_csm{"virtualcontrols_1_4_0_2_headlights_csm"};
    	std::array<BindingId, 15> mBindingsIds;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_img_controls_icn_headlights_u550() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_4_0_2_headlights_csm() noexcept;
    private:
    void Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6020_H
