#include "CustomView.h"

#include <map>


namespace gen 
{

static std::map<const char*, CustomLocation> custom_map
{
    {"virtual_controls_view_3950_1320",{-5010,0}},
    {"ics_notification_view_2138_820",{-250,0}},
    {"ics_apa_park_view_3950_1320",{-5010,0}},
    {"main_view_34",{-5010,0}},
    {"animation_view",{-5010,0}},
    {"ics_dimming_view",{-5010,0}},
    {"ics_notification_view_2138_602",{-250,0}},
    {"ics_apa_park_view_bg_3950_1320",{-5010,0}},
    {"virtual_controls_view_bg_3950_1320",{-5010,0}},
    {"virtual_controls_scroll_view_2930_1320",{-5010,0}},
    {"animation_view",{-5010,0}},
    {"ics_dimming_view",{-5010,0}},
};

int32_t setCustomViewLocation()
{
    std::map<const char* , CustomLocation>::iterator itr;

    for (itr = custom_map.begin(); itr != custom_map.end(); itr++)
    {
       auto result = GetRhmiApi()->setViewLocation(itr->first,itr->second.mLocationX,itr->second.mLocationY);

       std::cout << itr->first << result;
    }

    return 0;
}


}//namespace gen
