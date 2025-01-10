// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "ScreenMergerExpressions.h"


namespace screens 
{


const std::array<const char_t*, TotalScreens> &screenMergerListArray_data()
{
    static constexpr std::array<const char_t*, TotalScreens> screenMergerListArray
    {
        {
            ics_development_home,
            ics_development_home_off_cut,
        }
    };
    return screenMergerListArray;
}

const std::array<const char_t*, TotalScreens> &screenNameMergerListArray_data()
{
    static constexpr std::array<const char_t*, TotalScreens> screenNameMergerListArray
    {
        {
            "ics_development_home",
            "ics_development_home_off_cut",
        }
    };
    return screenNameMergerListArray;
}

std::array<const char_t*, TotalScreens> screenMergerList_data()
{
    return screenMergerListArray_data();
}

std::array<const char_t*, TotalScreens> screenNameMergerList_data()
{
    return screenNameMergerListArray_data();
}


} // namespace screens
