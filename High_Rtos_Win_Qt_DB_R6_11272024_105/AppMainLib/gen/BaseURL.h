// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef BASEURL_H
#define BASEURL_H

#include <map>
#include <string>
#include <vector>


namespace gen 
{
const std::map<std::string , const std::vector<std::pair<std::string, int32_t>>> &base_url_map_data();
const std::map<std::string , std::string> &widget_url_map_data();

}//namespace gen

#endif // BASEURL_H
