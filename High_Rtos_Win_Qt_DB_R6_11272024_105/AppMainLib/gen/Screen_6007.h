// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6007_H
#define SCREEN_6007_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6007 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6007(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_placeholder_WakeScreen{"grp_placeholder_WakeScreen","img_placeholder_WakeScreen"};
    	widget_properties::GroupLabelWidget GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm{"grp_placeholder_WakeScreen_mfc","virtualcontrols_1_0_4_wakeScreenExit_csm"};
    	widget_properties::GroupWidget Group_grp_placeholder_WakeScreen{"grp_placeholder_WakeScreen"};
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::ImageWidget Image_img_motion_sensor{"img_motion_sensor"};
    	widget_properties::ImageWidget Image_img_radio_button_sensor_off{"img_radio_button_sensor_off"};
    	widget_properties::ImageWidget Image_img_radio_button_sensor_on{"img_radio_button_sensor_on"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_1_exitBtn_csm{"virtualcontrols_1_1_exitBtn_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_0_3_MotionOff_csm{"virtualcontrols_1_2_0_3_MotionOff_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_0_3_MotionOn_csm{"virtualcontrols_1_2_0_3_MotionOn_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_0_3_motion_csm{"virtualcontrols_1_2_0_3_motion_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_card_motion_csm{"virtualcontrols_1_2_card_motion_csm"};
    	std::array<BindingId, 7> mBindingsIds;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_2_0_3_motion_csm() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    private:
    void Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_img_motion_sensor() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6007_H
