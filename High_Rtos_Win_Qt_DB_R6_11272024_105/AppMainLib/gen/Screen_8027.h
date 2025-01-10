// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_8027_H
#define SCREEN_8027_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_8027 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_8027(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupWidget Group_grp_img_exit_trailer{"grp_img_exit_trailer"};
    	widget_properties::ImageWidget Image_img_exit_btn_mfc_camera{"img_exit_btn_mfc_camera"};
    	widget_properties::ImageWidget Image_img_zoom_in{"img_zoom_in"};
    	widget_properties::ImageWidget Image_img_zoom_out{"img_zoom_out"};
    	std::array<BindingId, 4> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_8027_H
