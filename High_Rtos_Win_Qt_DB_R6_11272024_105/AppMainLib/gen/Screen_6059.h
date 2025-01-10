// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6059_H
#define SCREEN_6059_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6059 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6059(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ImageWidget Image_img_brightness_decrement{"img_brightness_decrement"};
    	widget_properties::ImageWidget Image_img_brightness_increment{"img_brightness_increment"};
    	widget_properties::ImageWidget Image_img_controls_icn_HUD_power{"img_controls_icn_HUD_power"};
    	widget_properties::ImageWidget Image_img_height_decrement{"img_height_decrement"};
    	widget_properties::ImageWidget Image_img_height_increment{"img_height_increment"};
    	widget_properties::ImageWidget Image_img_rotation_left{"img_rotation_left"};
    	widget_properties::ImageWidget Image_img_rotation_right{"img_rotation_right"};
    	widget_properties::LabelWidget Label_virtualcontrols_0_0_detailsUnavailable_csm{"virtualcontrols_0_0_detailsUnavailable_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_1_1_hudDisabled_csm{"virtualcontrols_1_1_1_hudDisabled_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_1_HUDbrightness_csm{"virtualcontrols_1_1_HUDbrightness_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_1_HUDheight_csm{"virtualcontrols_1_1_HUDheight_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_1_hud_csm{"virtualcontrols_1_1_hud_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_1_rotation_csm{"virtualcontrols_1_1_rotation_csm"};
    	widget_properties::ProgressBarWidget ProgressBar_6059_img_brightness_pogressbar{"6059_img_brightness_pogressbar"};
    	widget_properties::ProgressBarWidget ProgressBar_6059_img_height_pogressbar{"6059_img_height_pogressbar"};
    	widget_properties::ProgressBarWidget ProgressBar_6059_img_rotation_pogressbar{"6059_img_rotation_pogressbar"};
    	std::array<BindingId, 8> mBindingsIds;
    private:
    void Widget_Logic_Visibility_img_brightness_increment() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_1_HUDheight_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_rotation_left() noexcept;
    private:
    void Widget_Logic_Visibility_img_brightness_decrement() noexcept;
    private:
    void Widget_Logic_Visibility_6059_img_brightness_pogressbar() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_1_HUDbrightness_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_rotation_right() noexcept;
    private:
    void Widget_Logic_Visibility_img_height_increment() noexcept;
    private:
    void Widget_Logic_Visibility_6059_img_rotation_pogressbar() noexcept;
    private:
    void Widget_Logic_Visibility_6059_img_height_pogressbar() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_1_rotation_csm() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_1_hud_csm() noexcept;
    private:
    void Widget_Logic_Visibility_img_height_decrement() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6059_H
