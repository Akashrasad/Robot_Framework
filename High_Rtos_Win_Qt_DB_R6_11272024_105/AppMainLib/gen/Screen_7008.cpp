// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_7008.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7008::onScreenHide()
{
    Group_grp_exit_apa_btn_mfc.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[0U]);
    GroupImage_img_park_in_vehicle_btn.mState.unBind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE, mBindingsIds[1U]);
    Group_grp_exit_apa_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[2U]);
    GroupLabel_apa_4_4_KeepLooking_csm.mState.unBind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE, mBindingsIds[3U]);
    GroupImage_img_keep_looking_btn.mState.unBind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE, mBindingsIds[4U]);
    GroupLabel_apa_4_4_ParkInVehicle_csm.mState.unBind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE, mBindingsIds[5U]);
    Image_img_apa_exit_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[6U]);
    Group_grp_park_in_vehicle_btn.mVisibility.unBind(gm::csm::Data_APA_SPOT_SELENT_YES_BUTTON_VISIBILITY, mBindingsIds[7U]);
    Group_grp_keep_looking_btn.mVisibility.unBind(gm::csm::Data_APA_SPOT_SELENT_KEEP_LKNG_BUTTON_VISIBILITY, mBindingsIds[8U]);
}

void Screen_7008::onScreenShow()
{
    mBindingsIds[0U] = Group_grp_exit_apa_btn_mfc.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[1U] = GroupImage_img_park_in_vehicle_btn.mState.bind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE);
    mBindingsIds[2U] = Group_grp_exit_apa_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[3U] = GroupLabel_apa_4_4_KeepLooking_csm.mState.bind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE);
    mBindingsIds[4U] = GroupImage_img_keep_looking_btn.mState.bind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE);
    mBindingsIds[5U] = GroupLabel_apa_4_4_ParkInVehicle_csm.mState.bind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE);
    mBindingsIds[6U] = Image_img_apa_exit_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[7U] = Group_grp_park_in_vehicle_btn.mVisibility.bind(gm::csm::Data_APA_SPOT_SELENT_YES_BUTTON_VISIBILITY);
    mBindingsIds[8U] = Group_grp_keep_looking_btn.mVisibility.bind(gm::csm::Data_APA_SPOT_SELENT_KEEP_LKNG_BUTTON_VISIBILITY);
}


} // namespace csm
} // namespace gm
