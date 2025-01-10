// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6019_H
#define SCREEN_6019_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6019 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6019(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_placeholder_WakeScreen{"grp_placeholder_WakeScreen","img_placeholder_WakeScreen"};
    	widget_properties::GroupLabelWidget GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm{"grp_placeholder_WakeScreen_mfc","virtualcontrols_1_0_4_wakeScreenExit_csm"};
    	widget_properties::GroupWidget Group_grp_placeholder_WakeScreen{"grp_placeholder_WakeScreen"};
    	widget_properties::ImageWidget Image_img_Dome_light_auto_divider{"img_Dome_light_auto_divider"};
    	widget_properties::ImageWidget Image_img_auto_divider{"img_auto_divider"};
    	widget_properties::ImageWidget Image_img_check_box_auto{"img_check_box_auto"};
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::ImageWidget Image_img_control_icn_dome{"img_control_icn_dome"};
    	widget_properties::ImageWidget Image_img_radio_button_Off{"img_radio_button_Off"};
    	widget_properties::ImageWidget Image_img_radio_button_on{"img_radio_button_on"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_1_DomeOff_csm{"virtualcontrols_1_4_0_1_DomeOff_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_1_DomeOn_csm{"virtualcontrols_1_4_0_1_DomeOn_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_1_dome_auto_csm{"virtualcontrols_1_4_0_1_dome_auto_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_1_dome_csm{"virtualcontrols_1_4_0_1_dome_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_dome_csm{"virtualcontrols_1_4_dome_csm"};
    	std::array<BindingId, 13> mBindingsIds;
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_control_icn_dome() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_4_0_1_dome_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6019_H
