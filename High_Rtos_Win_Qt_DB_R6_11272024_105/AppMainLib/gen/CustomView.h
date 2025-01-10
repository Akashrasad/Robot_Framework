// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef CUSTOMVIEW_H
#define CUSTOMVIEW_H

#include <RhmiHelpers.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>


namespace gen 
{


class CustomLocation final
{
    public:
    CustomLocation( ) noexcept 
    : mLocationX(-1)
    , mLocationY(-1)
    {
    }
    
    public:
    	 CustomLocation( int32_t x, int32_t y) noexcept : mLocationX(x), mLocationY(y){} ;
    	 CustomLocation( int32_t x, int32_t y, std::vector<std::pair<std::string,std::pair<std::string , std::pair<std::string , std::pair<int32_t , int32_t>>>>> layout) : mLayout(layout), mLocationX(x), mLocationY(y) {};
    private:
    	std::vector<std::pair<std::string,std::pair<std::string , std::pair<std::string , std::pair<int32_t , int32_t>>>>> mLayout;
    	int32_t mLocationX;
    	int32_t mLocationY;
    public:
    int32_t getLocationX() const noexcept;
    public:
    int32_t getLocationY() const noexcept;
    public:
    std::vector<std::pair<std::string,std::pair<std::string , std::pair<std::string , std::pair<int32_t , int32_t>>>>> getLayout() const noexcept;
};

std::multimap<std::string, std::map<std::string , CustomLocation>> getCustomViewLocationMap();

int32_t CustomisedSetA3dURL(std::string theme_id, uint32_t cal_id);

int32_t setThemeViewLocation(std::string active_theme_id);

int32_t setThmeAlphaOverride(std::string theme_id);

}//namespace gen

#endif // CUSTOMVIEW_H
