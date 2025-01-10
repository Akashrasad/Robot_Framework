// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_7014_H
#define SCREEN_7014_H

#include "BindableScreenLogic.h"
#include "StringData.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_7014 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_7014(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupImageWidget GroupImage_img_exit_again_btn{"grp_exit_again_btn","img_exit_again_btn"};
    	widget_properties::GroupImageWidget GroupImage_img_try_again_btn{"grp_try_again_btn","img_try_again_btn"};
    	widget_properties::GroupLabelWidget GroupLabel_apa_14_2f_ParkInVehicle_csm{"grp_exit_again_btn","apa_14_2f_ParkInVehicle_csm"};
    	widget_properties::GroupLabelWidget GroupLabel_apa_4_13_TryAgain_csm{"grp_try_again_btn","apa_4_13_TryAgain_csm"};
    	widget_properties::GroupWidget Group_grp_exit_again_btn{"grp_exit_again_btn"};
    	widget_properties::GroupWidget Group_grp_exit_apa_btn{"grp_exit_apa_btn"};
    	widget_properties::GroupWidget Group_grp_exit_apa_btn_mfc{"grp_exit_apa_btn_mfc"};
    	widget_properties::GroupWidget Group_grp_try_again_btn{"grp_try_again_btn"};
    	widget_properties::ImageWidget Image_img_apa_exit_btn{"img_apa_exit_btn"};
    	widget_properties::LabelWidget Label_apa_4_13_UnableToConnectDesc_csm{"apa_4_13_UnableToConnectDesc_csm"};
    	widget_properties::LabelWidget Label_apa_4_1_selectedbuttonPerpRight_csm{"apa_4_1_selectedbuttonPerpRight_csm"};
    	std::array<BindingId, 11> mBindingsIds;
    private:
    void Label_apa_4_13_UnableToConnectDesc_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_7014_H
