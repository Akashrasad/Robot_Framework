// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREEN_6042_H
#define SCREEN_6042_H

#include "BindableScreenLogic.h"
#include "StringData.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6042 : public ::ramp::BindableScreenLogic
{
    public:
    Screen_6042(const std::string&  screen_id)  
    : ::ramp::BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::ImageWidget Image_img_check_box_auto_close{"img_check_box_auto_close"};
    	widget_properties::ImageWidget Image_img_check_box_auto_open{"img_check_box_auto_open"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_0_4_wakeScreenExit_csm{"virtualcontrols_1_0_4_wakeScreenExit_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_5_3_2_UGDORange_csm{"virtualcontrols_1_5_3_2_UGDORange_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_5_6_2_RemoteAutoTitle_csm{"virtualcontrols_1_5_6_2_RemoteAutoTitle_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_5_6_3_UGDOAutoClose_csm{"virtualcontrols_1_5_6_3_UGDOAutoClose_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_5_6_3_UGDOAutoOpen_csm{"virtualcontrols_1_5_6_3_UGDOAutoOpen_csm"};
    	widget_properties::ListWidget List_6042_ics_vc_options_auto_selected_list{"6042_ics_vc_options_auto_selected_list"};
    	widget_properties::ListRow List_Row_6042_ics_vc_options_auto_selected_list{"6042_ics_vc_options_auto_selected_list",1};
    	std::array<BindingId, 7> mBindingsIds;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept;
    private:
    void Label_virtualcontrols_1_5_6_2_RemoteAutoTitle_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_6042_H
