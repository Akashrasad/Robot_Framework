// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#ifndef LAYOUTOVERRIDE_H
#define LAYOUTOVERRIDE_H

#include <iostream>


namespace gen 
{

enum LayoutOverrideId
{
	RHD,
	camera_view_update,
	img_location_update,
};

const char* LayoutStrings[]
{
	"RHD",
	"camera_view_update",
	"img_location_update",
};

}//namespace gen

#endif // LAYOUTOVERRIDE_H
