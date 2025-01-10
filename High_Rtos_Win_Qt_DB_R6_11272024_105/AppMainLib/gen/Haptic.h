#ifndef HAPTIC_H
#define HAPTIC_H

#include <map>
#include <string>
#include <vector>


namespace gen 
{

std::map<std::string, std::map<int32_t,std::map<std::pair<int32_t,int32_t>,std::pair<int32_t,int32_t>>>> GetScreenHapticData(int32_t screen_id);

}//namespace gen

#endif // HAPTIC_H
