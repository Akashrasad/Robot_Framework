// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_8009_H
#define SCREEN_8009_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_8009 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_8009(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ImageWidget Image_img_btn_camera_wash{"img_btn_camera_wash"};
    	widget_properties::ImageWidget Image_img_btn_camera_zoom_in_out{"img_btn_camera_zoom_in_out"};
    	widget_properties::ImageWidget Image_img_btn_close_active{"img_btn_close_active"};
    	std::array<BindingId, 4> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_8009_H
