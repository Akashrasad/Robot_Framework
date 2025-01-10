// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6008_H
#define SCREEN_6008_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6008 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6008(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_placeholder_WakeScreen{"grp_placeholder_WakeScreen","img_placeholder_WakeScreen"};
    	widget_properties::GroupLabelWidget GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm{"grp_placeholder_WakeScreen_mfc","virtualcontrols_1_0_4_wakeScreenExit_csm"};
    	widget_properties::GroupWidget Group_grp_placeholder_WakeScreen{"grp_placeholder_WakeScreen"};
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::ImageWidget Image_img_liftgate{"img_liftgate"};
    	widget_properties::ImageWidget Image_img_radio_button_Off_manual{"img_radio_button_Off_manual"};
    	widget_properties::ImageWidget Image_img_radio_button_custom{"img_radio_button_custom"};
    	widget_properties::ImageWidget Image_img_radio_button_maxopen{"img_radio_button_maxopen"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_1_exitBtn_csm{"virtualcontrols_1_1_exitBtn_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_0_4_LiftgateTitle_csm{"virtualcontrols_1_2_0_4_LiftgateTitle_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_0_4_liftgate_csm{"virtualcontrols_1_2_0_4_liftgate_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_0_4_liftgate_custom_csm{"virtualcontrols_1_2_0_4_liftgate_custom_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_0_4_liftgate_max_csm{"virtualcontrols_1_2_0_4_liftgate_max_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_0_4_liftgate_off_csm{"virtualcontrols_1_2_0_4_liftgate_off_csm"};
    	std::array<BindingId, 9> mBindingsIds;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_2_0_4_liftgate_csm() noexcept;
    private:
    void Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_img_liftgate() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6008_H
