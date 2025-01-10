// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_7001_H
#define SCREEN_7001_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_7001 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_7001(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_btn_tab_two{"grp_tab_two","btn_tab_two"};
    	widget_properties::GroupLabelWidget GroupLabel_apa_dyn_3_0_Exit_f_csm{"grp_tab_two","apa_dyn_3_0_Exit_f_csm"};
    	widget_properties::GroupWidget Group_grp_exit_apa_btn{"grp_exit_apa_btn"};
    	widget_properties::GroupWidget Group_grp_exit_apa_btn_mfc{"grp_exit_apa_btn_mfc"};
    	widget_properties::GroupWidget Group_grp_tab_two{"grp_tab_two"};
    	widget_properties::ImageWidget Image_img_apa_exit_btn{"img_apa_exit_btn"};
    	widget_properties::ImageWidget Image_img_park_left_parallel{"img_park_left_parallel"};
    	widget_properties::ImageWidget Image_img_park_left_perp{"img_park_left_perp"};
    	widget_properties::ImageWidget Image_img_park_right_parallel{"img_park_right_parallel"};
    	widget_properties::ImageWidget Image_img_park_right_perp{"img_park_right_perp"};
    	widget_properties::LabelWidget Label_apa_3_0F_HowtoPark_csm{"apa_3_0F_HowtoPark_csm"};
    	widget_properties::LabelWidget Label_apa_dyn_3_0_ToExitDrawer_csm{"apa_dyn_3_0_ToExitDrawer_csm"};
    	std::array<BindingId, 12> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_7001_H
