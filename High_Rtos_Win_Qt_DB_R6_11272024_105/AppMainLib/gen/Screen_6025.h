// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6025_H
#define SCREEN_6025_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6025 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6025(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_placeholder_WakeScreen{"grp_placeholder_WakeScreen","img_placeholder_WakeScreen"};
    	widget_properties::GroupLabelWidget GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm{"grp_placeholder_WakeScreen_mfc","virtualcontrols_1_0_4_wakeScreenExit_csm"};
    	widget_properties::GroupWidget Group_grp_placeholder_WakeScreen{"grp_placeholder_WakeScreen"};
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::ImageWidget Image_img_controls_icn_fog_front{"img_controls_icn_fog_front"};
    	widget_properties::ImageWidget Image_img_radio_button_Both_Off{"img_radio_button_Both_Off"};
    	widget_properties::ImageWidget Image_img_radio_button_Both_On{"img_radio_button_Both_On"};
    	widget_properties::ImageWidget Image_img_radio_button_Front_On{"img_radio_button_Front_On"};
    	widget_properties::ImageWidget Image_img_radio_button_Rear_On{"img_radio_button_Rear_On"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_7_fog_front_rear_both_off_csm{"virtualcontrols_1_4_0_7_fog_front_rear_both_off_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_7_fog_front_rear_both_on_csm{"virtualcontrols_1_4_0_7_fog_front_rear_both_on_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_7_fog_front_rear_csm{"virtualcontrols_1_4_0_7_fog_front_rear_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_7_fog_front_rear_front_on_csm{"virtualcontrols_1_4_0_7_fog_front_rear_front_on_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_7_fog_front_rear_rear_on_csm{"virtualcontrols_1_4_0_7_fog_front_rear_rear_on_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_fog_csm{"virtualcontrols_1_4_fog_csm"};
    	std::array<BindingId, 11> mBindingsIds;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_4_0_7_fog_front_rear_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    private:
    void Widget_Logic_Visibility_img_controls_icn_fog_front() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6025_H
