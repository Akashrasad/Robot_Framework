#ifndef CUSTOMVIEW_H
#define CUSTOMVIEW_H

#include <RhmiHelpers.h>
#include <iostream>
#include <string>


namespace gen 
{

struct CustomLocation
{
     int32_t mLocationX = -1;
     int32_t mLocationY = -1;
    

     CustomLocation( int32_t x, int32_t y) : mLocationX(x), mLocationY(y){}
};


int32_t setCustomViewLocation();


}//namespace gen

#endif // CUSTOMVIEW_H
