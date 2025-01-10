// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_7015_H
#define SCREEN_7015_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_7015 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_7015(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupWidget Group_grp_exit_apa_btn{"grp_exit_apa_btn"};
    	widget_properties::GroupWidget Group_grp_exit_apa_btn_mfc{"grp_exit_apa_btn_mfc"};
    	widget_properties::ImageWidget Image_img_CameraViews{"img_CameraViews"};
    	widget_properties::ImageWidget Image_img_apa_exit_btn{"img_apa_exit_btn"};
    	widget_properties::ImageWidget Image_img_auto_steering{"img_auto_steering"};
    	widget_properties::ImageWidget Image_img_icn_cameraerror{"img_icn_cameraerror"};
    	widget_properties::ImageWidget Image_img_upa_warning{"img_upa_warning"};
    	widget_properties::LabelWidget Label_apa_5_1_maneuvermessaging1_csm{"apa_5_1_maneuvermessaging1_csm"};
    	widget_properties::ProgressBarWidget ProgressBar_7015_img_pogressbar{"7015_img_pogressbar"};
    	widget_properties::ProgressBarWidget ProgressBar_7015_img_pogressbar_amber{"7015_img_pogressbar_amber"};
    	widget_properties::ProgressBarWidget ProgressBar_7015_img_pogressbar_green{"7015_img_pogressbar_green"};
    	std::array<BindingId, 13> mBindingsIds;
    private:
    void Widget_Logic_Visibility_7015_img_pogressbar() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_7015_H
