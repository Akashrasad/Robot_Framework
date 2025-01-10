#ifndef HAPTICWIDGETDATASTRUCT_H
#define HAPTICWIDGETDATASTRUCT_H

#include <cstdint>
#include <string>


namespace gen 
{


class widgetdata
{
    public:
    int32_t mHapticType;
    int32_t mLocationLX1;
    int32_t mLocationLY1;
    int32_t mLocationRX2;
    int32_t mLocationRY2;
    std::string mWidgetId;
};

}//namespace gen

#endif // HAPTICWIDGETDATASTRUCT_H
