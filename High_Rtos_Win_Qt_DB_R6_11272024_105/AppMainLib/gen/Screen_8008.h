// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_8008_H
#define SCREEN_8008_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_8008 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_8008(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_btn_close_active{"grp_img_exit","img_btn_close_active"};
    	widget_properties::GroupWidget Group_grp_img_exit{"grp_img_exit"};
    	widget_properties::ImageWidget Image_img_bg_black{"img_bg_black"};
    	widget_properties::ImageWidget Image_img_exit_camera{"img_exit_camera"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_1_exitBtn_csm{"virtualcontrols_1_1_exitBtn_csm"};
    	std::array<BindingId, 5> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_8008_H
