// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_8003_H
#define SCREEN_8003_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_8003 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_8003(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_btn_close_active{"grp_img_exit","img_btn_close_active"};
    	widget_properties::GroupWidget Group_grp_img_exit{"grp_img_exit"};
    	widget_properties::ImageWidget Image_img_bg_black{"img_bg_black"};
    	widget_properties::ImageWidget Image_img_exit_btn_mfc_camera{"img_exit_btn_mfc_camera"};
    	widget_properties::ImageWidget Image_img_exit_camera{"img_exit_camera"};
    	widget_properties::ImageWidget Image_img_guideliness_view{"img_guideliness_view"};
    	widget_properties::ImageWidget Image_img_hitch_zoom{"img_hitch_zoom"};
    	widget_properties::ImageWidget Image_img_icn_cameraerror{"img_icn_cameraerror"};
    	widget_properties::ImageWidget Image_img_trailer_assist{"img_trailer_assist"};
    	widget_properties::ImageWidget Image_img_trailer_view{"img_trailer_view"};
    	widget_properties::ImageWidget Image_img_upa_warning{"img_upa_warning"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_1_exitBtn_csm{"virtualcontrols_1_1_exitBtn_csm"};
    	widget_properties::RvcGuideLinesWidget RvcGuideLines_img_rvc_widget{"img_rvc_widget"};
    	std::array<BindingId, 14> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_8003_H
