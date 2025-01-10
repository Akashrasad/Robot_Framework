// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "ScreenVariant.h"

#include <ScreenExperssions.h>


namespace gen 
{

static const ScreenOverride &ScreenOverride_T1UGF_data() 
{
    static const ScreenOverride ScreenOverride_T1UGF
    {
        {screens::ics_virtual_controls_controls_home,screens::ics_virtual_controls_controls_home_t1ugf},
    };
    return ScreenOverride_T1UGF;
}

static const ScreenOverride &ScreenOverride_T1XG_data() 
{
    static const ScreenOverride ScreenOverride_T1XG
    {
        {screens::ics_virtual_controls_controls_home,screens::ics_virtual_controls_controls_home_t1ugf},
    };
    return ScreenOverride_T1XG;
}

static const ScreenOverride &ScreenOverride_T1YGF_data() 
{
    static const ScreenOverride ScreenOverride_T1YGF
    {
        {screens::ics_virtual_controls_controls_home,screens::ics_virtual_controls_controls_home_t1ugf},
    };
    return ScreenOverride_T1YGF;
}

static const std::map<std::string , const ScreenOverride*> &ScreenThemeOverrides_data() 
{
    static const std::map<std::string , const ScreenOverride*> ScreenThemeOverrides
    {
        {"T1UGF",&ScreenOverride_T1UGF_data()},
        {"T1XG",&ScreenOverride_T1XG_data()},
        {"T1YGF",&ScreenOverride_T1YGF_data()},
    };
    return ScreenThemeOverrides;
}

static const std::map<std::string , const ThemeScreenOverride*> &ViewScreenOverrides_data() 
{
    static const std::map<std::string , const ThemeScreenOverride*> ViewScreenOverrides
    {
    };
    return ViewScreenOverrides;
}

static const std::map<std::string , const ThemeOverride*> &ScreenOverrides_data() 
{
    static const std::map<std::string , const ThemeOverride*> ScreenOverrides
    {
    };
    return ScreenOverrides;
}

static const std::map<std::string , const IncludeScreen*> &ThemeIncludeScreensMap_data() 
{
    static const std::map<std::string , const IncludeScreen*> ThemeIncludeScreensMap
    {
    };
    return ThemeIncludeScreensMap;
}

const std::map<std::string, const ThemeOverride *>* ScreenOverrides_map_data()
{
    return &ScreenOverrides_data();
}

const std::map<std::string , const ScreenOverride*>* ScreenThemeOverrides_map_data()
{
    return &ScreenThemeOverrides_data();
}

const std::map<std::string, const ThemeScreenOverride*>* ViewScreenOverrides_map_data()
{
    return &ViewScreenOverrides_data();
}


}//namespace gen
