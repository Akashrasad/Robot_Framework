// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREENVARIANT_H
#define SCREENVARIANT_H

#include <map>
#include <string>
#include <vector>


namespace gen 
{
using ScreenOverride = std::map<std::string, std::string>;

using DriveModeOverride = std::map<std::string, std::string>;

using ViewScreenOverride = std::map<std::string, std::string>;

using ViewOverride = std::map<std::string, const DriveModeOverride*>;

using ThemeOverride = std::map<std::string, const ViewOverride*>;

using ThemeScreenOverride = std::map<std::string , const ViewScreenOverride*>;

using IncludeScreen = std::map<std::string , std::vector<std::string>>;



const std::map<std::string, const ThemeOverride *>* ScreenOverrides_map_data();

const std::map<std::string , const ScreenOverride*>* ScreenThemeOverrides_map_data();

const std::map<std::string, const ThemeScreenOverride*>* ViewScreenOverrides_map_data();

}//namespace gen

#endif // SCREENVARIANT_H
