// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6162_H
#define SCREEN_6162_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6162 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6162(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ImageWidget Image_img_controls_icn_rearcontrollock{"img_controls_icn_rearcontrollock"};
    	widget_properties::ImageWidget Image_img_radio_button_off{"img_radio_button_off"};
    	widget_properties::ImageWidget Image_img_radio_button_on{"img_radio_button_on"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_0_1_ChildOff_csm{"virtualcontrols_1_2_0_1_ChildOff_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_0_1_ChildOn_csm{"virtualcontrols_1_2_0_1_ChildOn_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_8_1_F_RCCLockTitle_csm{"virtualcontrols_1_8_1_F_RCCLockTitle_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_8_1_h_textRcc_csm{"virtualcontrols_1_8_1_h_textRcc_csm"};
    	std::array<BindingId, 6> mBindingsIds;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_8_1_h_textRcc_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_controls_icn_rearcontrollock() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6162_H
