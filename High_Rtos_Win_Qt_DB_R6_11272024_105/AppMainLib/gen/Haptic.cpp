#include "Haptic.h"


namespace gen 
{

static const std::map<int32_t , std::map<std::string, std::map<int32_t,std::map<std::pair<int32_t,int32_t>,std::pair<int32_t,int32_t>>>>> &screen_haptic_map_data() 
{
    static const std::map<int32_t , std::map<std::string, std::map<int32_t,std::map<std::pair<int32_t,int32_t>,std::pair<int32_t,int32_t>>>>> screen_haptic_map
    {
    };
    return screen_haptic_map;
}

std::map<std::string, std::map<int32_t,std::map<std::pair<int32_t,int32_t>,std::pair<int32_t,int32_t>>>> GetScreenHapticData(int32_t screen_id)
{
    auto it = screen_haptic_map_data().find(screen_id);

    if(it != screen_haptic_map_data().end())
	{
    	return it->second;
	}
    else
	{
		return {};
	}
}


}//namespace gen
