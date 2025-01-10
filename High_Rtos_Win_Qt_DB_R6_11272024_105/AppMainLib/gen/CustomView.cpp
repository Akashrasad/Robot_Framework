// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "CustomView.h"

#include "ViewExpressions.h"
#include <map>


namespace gen 
{


int32_t CustomLocation::getLocationX() const noexcept
{
    return mLocationX;
}

int32_t CustomLocation::getLocationY() const noexcept
{
    return mLocationY;
}

std::vector<std::pair<std::string,std::pair<std::string , std::pair<std::string , std::pair<int32_t , int32_t>>>>> CustomLocation::getLayout() const noexcept
{
    return mLayout;
}


static const std::map<std::string , const std::map<std::string, std::pair<int32_t, int32_t>>*> &LayoutSpecificViewLocationsMap_data() 
{
    static const std::map<std::string , const std::map<std::string, std::pair<int32_t, int32_t>>*> LayoutSpecificViewLocationsMap
    {
    };
    return LayoutSpecificViewLocationsMap;
}

static const std::multimap<std::string , std::map<std::string , CustomLocation>> custom_map
{
    {views::virtual_controls_view_3950_1320, { { "9" , { 5010 , 0 ,{ { } } } } } },
    {views::ics_snackbar_1line_view_2138_184, { { "9" , { 3831 , 900 ,{ { } } } } } },
    {views::ics_notification_view_2138_820, { { "9" , { 3831 , 256 ,{ { } } } } } },
    {views::ics_apa_park_view_3950_1320, { { "9" , { 5010 , 0 ,{ { } } } } } },
    {views::main_view_34, { { "9" , { 5010 , 0 ,{ { } } } } } },
    {views::animation_view, { { "9" , { 5010 , 0 ,{ { } } } } } },
    {views::ics_vc_statusbar_notification_view, { { "9" , { 4930 , 1094 ,{ { } } } } } },
    {views::ics_snackbar_2line_view_2138_294, { { "9" , { 3831 , 850 ,{ { } } } } } },
    {views::ics_notification_view_2138_602, { { "9" , { 3831 , 482 ,{ { } } } } } },
    {views::ics_generic_keyboard_view, { { "9" , { 5010 , 0 ,{ { } } } } } },
    {views::ics_keyboard_popup_view, { { "9" , { 5010 , 0 ,{ { } } } } } },
    {views::ics_apa_park_view_bg_3950_1320, { { "9" , { 5010 , 0 ,{ { } } } } } },
    {views::virtual_controls_view_bg_3950_1320, { { "9" , { 5010 , 0 ,{ { } } } } } },
    {views::virtual_controls_scroll_view_2930_1320, { { "9" , { 5010 , 0 ,{ { } } } } } },
    {views::ics_dev_bottom_view, { { "9" , { 5010 , 0 ,{ { } } } } } },
    {views::ics_notification_simple_dialog_dissmiss_view, { { "9" , { 3831 , 482 ,{ { } } } } } },
    {views::ics_camera_single_image_vpm_view, { { "9" , { 4542 , 0 ,{ { } } } } } },
    {views::ics_virtual_controls_opd_view, { { "9" , { 5010 , 0 ,{ { } } } } } },
    {views::ics_ppm_smart_controls_view, { { "9" , { 4411 , 1158 ,{ { } } } } } },
    {views::ics_camera_smart_control_view, { { "9" , { 4537 , 1137 ,{ { } } } } } },
    {views::virtual_controls_full_notification_view, { { "9" , { 5010 , 0 ,{ { } } } } } },
    {views::ics_ppm_smart_controls_camera_view, { { "9" , { 4500 , 1118 ,{ { } } } } } },
    {views::ics_persistent_smart_controls_pop_up_view, { { "9" , { 5010 , 0 ,{ { } } } } } },
    {views::ics_snackbar_3line_view, { { "9" , { 3811 , 681 ,{ { } } } } } },
    {views::ics_pts_view, { { "9" , { 5010 , 0 ,{ { } } } } } },
    {views::ics_camera_upa_symbols_view, { { "9" , { 5010 , 0 ,{ { } } } } } },
    {views::ics_virtual_china_regulation_view, { { "9" , { 4537 , 1137 ,{ { } } } } } },
    {views::ics_hvac_bottom_bar_time_view, { { "14" , { 2607 , 1021 ,{ { } } } } } },
};

static const std::map<std::string , std::pair<std::string, CustomLocation>> &themes_view_location_map_data() 
{
    static const std::map<std::string , std::pair<std::string, CustomLocation>> themes_view_location_map
    {
    };
    return themes_view_location_map;
}

static const std::multimap<std::string , std::pair<std::string, uint32_t>> &alpha_override_map_data() 
{
    static const std::multimap<std::string , std::pair<std::string, uint32_t>> alpha_override_map
    {
    };
    return alpha_override_map;
}

static const std::multimap<uint32_t , std::multimap<std::string,std::pair<std::string,std::string>>> &a3d_url_map_data() 
{
    static const std::multimap<uint32_t , std::multimap<std::string,std::pair<std::string,std::string>>> a3d_url_map
    {
    };
    return a3d_url_map;
}

std::multimap<std::string, std::map<std::string , CustomLocation>> getCustomViewLocationMap()
{
    return custom_map;
}

int32_t CustomisedSetA3dURL(std::string theme_id, uint32_t cal_id)
{
    for (const auto& item : a3d_url_map_data())
    {
        if(item.first == cal_id)
        {
            for (const auto& row : item.second)
            {
                if(row.first == theme_id)
                {
                    auto set_a3durl_result = ramp::GetRhmiApi()->setA3dUrl(row.second.first.c_str(),theme_id.c_str(),row.second.second.c_str());

                    ramp::GetRhmiApi()->inspectResult(set_a3durl_result, "setA3dUrl", "Failed");

                }
            }
        }
    }
    return 0;
}

int32_t setThemeViewLocation(std::string active_theme_id)
{
    for (auto it = gen::themes_view_location_map_data().begin(); it != gen::themes_view_location_map_data().end(); it++)
    {
        if(active_theme_id == it->first)
        {
            auto Result = ramp::GetRhmiApi()->setViewLocation(it->second.first.c_str(), it->second.second.getLocationX(), it->second.second.getLocationY());

            ramp::GetRhmiApi()->inspectResult(Result, "setViewLocation", "Failed");
        }
    }

    return 0;
}

int32_t setThmeAlphaOverride(std::string theme_id)
{
    std::multimap<std::string, std::pair< std::string,uint32_t>>::const_iterator itr;

    for (itr = alpha_override_map_data().begin(); itr != alpha_override_map_data().end(); itr++)
    {
        if(theme_id == itr->first)
        {
            auto set_widget_result = ramp::GetRhmiApi()->setWidgetAlpha(itr->second.first.c_str(),itr->second.second);

            ramp::GetRhmiApi()->inspectResult(set_widget_result, "setWidgetAlpha", "Failed");
        }

    }

    return 0;
}


}//namespace gen
