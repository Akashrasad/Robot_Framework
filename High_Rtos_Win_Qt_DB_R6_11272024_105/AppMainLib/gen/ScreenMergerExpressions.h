// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef SCREENMERGEREXPRESSIONS_H
#define SCREENMERGEREXPRESSIONS_H

#include "RampTypes.h"
#include <array>


namespace screens 
{

 constexpr static size_t TotalScreens = 2;
 constexpr static const char_t* const ics_development_home = "70000";
 constexpr static const char_t* const ics_development_home_off_cut = "70001";

std::array<const char_t*, TotalScreens> screenMergerList_data();

std::array<const char_t*, TotalScreens> screenNameMergerList_data();

} // namespace screens

#endif // SCREENMERGEREXPRESSIONS_H
