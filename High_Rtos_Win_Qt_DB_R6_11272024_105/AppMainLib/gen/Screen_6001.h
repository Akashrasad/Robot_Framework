// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6001_H
#define SCREEN_6001_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6001 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6001(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_placeholder_WakeScreen{"grp_placeholder_WakeScreen","img_placeholder_WakeScreen"};
    	widget_properties::GroupLabelWidget GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm{"grp_placeholder_WakeScreen_mfc","virtualcontrols_1_0_4_wakeScreenExit_csm"};
    	widget_properties::GroupWidget Group_grp_placeholder_WakeScreen{"grp_placeholder_WakeScreen"};
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::ImageWidget Image_img_control_progress_bar_pointer{"img_control_progress_bar_pointer"};
    	widget_properties::ImageWidget Image_img_control_progress_bar_pointer2{"img_control_progress_bar_pointer2"};
    	widget_properties::ImageWidget Image_img_control_progress_bar_pointer3{"img_control_progress_bar_pointer3"};
    	widget_properties::ImageWidget Image_img_controls_controls_home_close{"img_controls_controls_home_close"};
    	widget_properties::ImageWidget Image_img_pintostart{"img_pintostart"};
    	widget_properties::ImageWidget Image_img_pintostart_icon{"img_pintostart_icon"};
    	widget_properties::ImageWidget Image_img_pintostart_mfc{"img_pintostart_mfc"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_0_ControlsSafety_csm{"virtualcontrols_1_0_ControlsSafety_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_1_exitBtn_csm{"virtualcontrols_1_1_exitBtn_csm"};
    	std::array<BindingId, 11> mBindingsIds;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    private:
    void Widget_Logic_Visibility_img_controls_controls_home_close() noexcept;
    private:
    void Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6001_H
