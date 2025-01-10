// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_7013_H
#define SCREEN_7013_H

#include "BindableScreenLogic.h"
#include "StringData.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_7013 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_7013(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ActivityIndicatorWidget ActivityIndicator_img_progress_activity{"img_progress_activity"};
    	widget_properties::GroupWidget Group_grp_exit_apa_btn{"grp_exit_apa_btn"};
    	widget_properties::GroupWidget Group_grp_exit_apa_btn_mfc{"grp_exit_apa_btn_mfc"};
    	widget_properties::ImageWidget Image_img_apa_exit_btn{"img_apa_exit_btn"};
    	widget_properties::LabelWidget Label_apa_4_12_Connecting_csm{"apa_4_12_Connecting_csm"};
    	widget_properties::LabelWidget Label_apa_4_1_selectedbuttonPerpRight_csm{"apa_4_1_selectedbuttonPerpRight_csm"};
    	std::array<BindingId, 6> mBindingsIds;
    private:
    void Label_apa_4_12_Connecting_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_7013_H
