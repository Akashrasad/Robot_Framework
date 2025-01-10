// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_8013_H
#define SCREEN_8013_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_8013 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_8013(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupWidget Group_grp_img_exit{"grp_img_exit"};
    	widget_properties::ImageWidget Image_img_bg_black{"img_bg_black"};
    	widget_properties::ImageWidget Image_img_exit_btn_mfc_camera{"img_exit_btn_mfc_camera"};
    	widget_properties::ImageWidget Image_img_exit_camera{"img_exit_camera"};
    	widget_properties::ImageWidget Image_img_icn_camera_error{"img_icn_camera_error"};
    	widget_properties::ImageWidget Image_img_icn_cameraerror{"img_icn_cameraerror"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_1_exitBtn_csm{"virtualcontrols_1_1_exitBtn_csm"};
    	std::array<BindingId, 7> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_8013_H
