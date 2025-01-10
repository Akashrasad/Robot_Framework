// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6134_H
#define SCREEN_6134_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6134 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6134(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ImageWidget Image_img_check_box_held_down{"img_check_box_held_down"};
    	widget_properties::ImageWidget Image_img_check_box_switch_On{"img_check_box_switch_On"};
    	widget_properties::ImageWidget Image_img_text_box{"img_text_box"};
    	widget_properties::LabelWidget Label_dyn_aux_name_csm{"dyn_aux_name_csm"};
    	widget_properties::LabelWidget Label_dyn_lbl_aux_edit{"dyn_lbl_aux_edit"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_8_1_v_held_csm{"virtualcontrols_1_8_1_v_held_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_8_1_v_parking_csm{"virtualcontrols_1_8_1_v_parking_csm"};
    	std::array<BindingId, 8> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6134_H
