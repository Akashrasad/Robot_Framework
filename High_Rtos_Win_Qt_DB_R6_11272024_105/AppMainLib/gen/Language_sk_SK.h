// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef LANGUAGE_SK_SK_H
#define LANGUAGE_SK_SK_H

#include "LangTable.h"
#include "RampTypes.h"
#include <array>
#include <map>
#include <string>


namespace gen 
{

std::map<std::string , std::map<gen::LangId , const char_t*>*> get_Theme_Language_sk_SK();
const std::array<const char_t*, 18774> &Language_sk_SK_data();
const std::map<std::string, std::array<std::string, 6>> &Language_sk_SK_map_data();

}//namespace gen

#endif // LANGUAGE_SK_SK_H
