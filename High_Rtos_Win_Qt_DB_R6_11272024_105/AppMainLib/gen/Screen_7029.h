// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_7029_H
#define SCREEN_7029_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_7029 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_7029(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_keep_looking_btn{"grp_keep_looking_btn","img_keep_looking_btn"};
    	widget_properties::GroupImageWidget GroupImage_img_park_in_vehicle_btn{"grp_park_in_vehicle_btn","img_park_in_vehicle_btn"};
    	widget_properties::GroupImageWidget GroupImage_img_supervise_remotely_btn{"grp_supervise_remotely_btn","img_supervise_remotely_btn"};
    	widget_properties::GroupLabelWidget GroupLabel_apa_4_4_KeepLooking_csm{"grp_keep_looking_btn","apa_4_4_KeepLooking_csm"};
    	widget_properties::GroupLabelWidget GroupLabel_apa_4_4_ParkInVehicle_csm{"grp_park_in_vehicle_btn","apa_4_4_ParkInVehicle_csm"};
    	widget_properties::GroupLabelWidget GroupLabel_apa_4_4_ParkRemotely_csm{"grp_supervise_remotely_btn","apa_4_4_ParkRemotely_csm"};
    	widget_properties::GroupWidget Group_grp_exit_apa_btn{"grp_exit_apa_btn"};
    	widget_properties::GroupWidget Group_grp_exit_apa_btn_mfc{"grp_exit_apa_btn_mfc"};
    	widget_properties::GroupWidget Group_grp_keep_looking_btn{"grp_keep_looking_btn"};
    	widget_properties::GroupWidget Group_grp_park_in_vehicle_btn{"grp_park_in_vehicle_btn"};
    	widget_properties::GroupWidget Group_grp_supervise_remotely_btn{"grp_supervise_remotely_btn"};
    	widget_properties::ImageWidget Image_img_apa_exit_btn{"img_apa_exit_btn"};
    	std::array<BindingId, 12> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_7029_H
