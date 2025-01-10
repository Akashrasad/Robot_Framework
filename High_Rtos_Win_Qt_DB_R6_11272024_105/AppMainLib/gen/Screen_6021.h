// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6021_H
#define SCREEN_6021_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6021 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6021(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_placeholder_WakeScreen{"grp_placeholder_WakeScreen","img_placeholder_WakeScreen"};
    	widget_properties::GroupLabelWidget GroupLabel_virtualcontrols_1_0_4_wakeScreenExit_csm{"grp_placeholder_WakeScreen_mfc","virtualcontrols_1_0_4_wakeScreenExit_csm"};
    	widget_properties::GroupWidget Group_grp_placeholder_WakeScreen{"grp_placeholder_WakeScreen"};
    	widget_properties::ImageWidget Image_img_close{"img_close"};
    	widget_properties::ImageWidget Image_img_controls_icn_high_auto_beam{"img_controls_icn_high_auto_beam"};
    	widget_properties::ImageWidget Image_img_radio_button_Off{"img_radio_button_Off"};
    	widget_properties::ImageWidget Image_img_radio_button_on{"img_radio_button_on"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_3_BeamsOff_csm{"virtualcontrols_1_4_0_3_BeamsOff_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_3_BeamsOn_csm{"virtualcontrols_1_4_0_3_BeamsOn_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_0_3_beams_csm{"virtualcontrols_1_4_0_3_beams_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_4_beams_csm{"virtualcontrols_1_4_beams_csm"};
    	std::array<BindingId, 7> mBindingsIds;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept;
    private:
    void Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept;
    private:
    void Widget_Logic_Visibility_img_controls_icn_high_auto_beam() noexcept;
    private:
    void Widget_Logic_Visibility_img_close() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_4_0_3_beams_csm() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6021_H
