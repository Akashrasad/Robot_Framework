// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_8012_H
#define SCREEN_8012_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_8012 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_8012(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupWidget Group_grp_img_exit{"grp_img_exit"};
    	widget_properties::ImageWidget Image_img_bg_black{"img_bg_black"};
    	widget_properties::ImageWidget Image_img_btn_camerabowldiagram{"img_btn_camerabowldiagram"};
    	widget_properties::ImageWidget Image_img_btn_touchpoint_1{"img_btn_touchpoint_1"};
    	widget_properties::ImageWidget Image_img_btn_touchpoint_1_mfc{"img_btn_touchpoint_1_mfc"};
    	widget_properties::ImageWidget Image_img_btn_touchpoint_2{"img_btn_touchpoint_2"};
    	widget_properties::ImageWidget Image_img_btn_touchpoint_2_mfc{"img_btn_touchpoint_2_mfc"};
    	widget_properties::ImageWidget Image_img_btn_touchpoint_3{"img_btn_touchpoint_3"};
    	widget_properties::ImageWidget Image_img_btn_touchpoint_3_mfc{"img_btn_touchpoint_3_mfc"};
    	widget_properties::ImageWidget Image_img_btn_touchpoint_4{"img_btn_touchpoint_4"};
    	widget_properties::ImageWidget Image_img_btn_touchpoint_4_mfc{"img_btn_touchpoint_4_mfc"};
    	widget_properties::ImageWidget Image_img_btn_touchpoint_5{"img_btn_touchpoint_5"};
    	widget_properties::ImageWidget Image_img_btn_touchpoint_5_mfc{"img_btn_touchpoint_5_mfc"};
    	widget_properties::ImageWidget Image_img_btn_touchpoint_6{"img_btn_touchpoint_6"};
    	widget_properties::ImageWidget Image_img_btn_touchpoint_6_mfc{"img_btn_touchpoint_6_mfc"};
    	widget_properties::ImageWidget Image_img_btn_touchpoint_7{"img_btn_touchpoint_7"};
    	widget_properties::ImageWidget Image_img_btn_touchpoint_7_mfc{"img_btn_touchpoint_7_mfc"};
    	widget_properties::ImageWidget Image_img_btn_touchpoint_8{"img_btn_touchpoint_8"};
    	widget_properties::ImageWidget Image_img_btn_touchpoint_8_mfc{"img_btn_touchpoint_8_mfc"};
    	widget_properties::ImageWidget Image_img_exit_btn_mfc_camera{"img_exit_btn_mfc_camera"};
    	widget_properties::ImageWidget Image_img_exit_camera{"img_exit_camera"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_1_exitBtn_csm{"virtualcontrols_1_1_exitBtn_csm"};
    	std::array<BindingId, 30> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_8012_H
