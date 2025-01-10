// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_7006_H
#define SCREEN_7006_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_7006 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_7006(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupWidget Group_grp_exit_apa_btn{"grp_exit_apa_btn"};
    	widget_properties::GroupWidget Group_grp_exit_apa_btn_mfc{"grp_exit_apa_btn_mfc"};
    	widget_properties::ImageWidget Image_img_apa_exit_btn{"img_apa_exit_btn"};
    	std::array<BindingId, 3> mBindingsIds;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_7006_H
