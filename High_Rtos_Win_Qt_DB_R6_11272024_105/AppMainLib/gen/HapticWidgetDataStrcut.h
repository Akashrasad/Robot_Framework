#ifndef HAPTICWIDGETDATASTRCUT_H
#define HAPTICWIDGETDATASTRCUT_H

#include <cstdint>
#include <string>


namespace gen 
{

struct widgetdata 
{
     std::string mWidgetId;
     int32_t mLocationLX1;
     int32_t mLocationLY1;
     int32_t mLocationRX2;
     int32_t mLocationRY2;
     int32_t mHaptictype;
};

}//namespace gen

#endif // HAPTICWIDGETDATASTRCUT_H
