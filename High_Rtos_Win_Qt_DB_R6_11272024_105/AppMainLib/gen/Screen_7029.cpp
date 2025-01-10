// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_7029.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7029::onScreenHide()
{
    GroupImage_img_keep_looking_btn.mState.unBind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE, mBindingsIds[0U]);
    Group_grp_exit_apa_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[1U]);
    GroupLabel_apa_4_4_ParkRemotely_csm.mState.unBind(gm::csm::Data_APA_SELECTION_SUPERVISE_REMOTELY_BUTTON_STATE, mBindingsIds[2U]);
    Group_grp_exit_apa_btn_mfc.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[3U]);
    Group_grp_park_in_vehicle_btn.mVisibility.unBind(gm::csm::Data_APA_SPOT_SELENT_YES_BUTTON_VISIBILITY, mBindingsIds[4U]);
    Image_img_apa_exit_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[5U]);
    GroupImage_img_park_in_vehicle_btn.mState.unBind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE, mBindingsIds[6U]);
    GroupImage_img_supervise_remotely_btn.mState.unBind(gm::csm::Data_APA_SELECTION_SUPERVISE_REMOTELY_BUTTON_STATE, mBindingsIds[7U]);
    Group_grp_keep_looking_btn.mVisibility.unBind(gm::csm::Data_APA_SPOT_SELENT_KEEP_LKNG_BUTTON_VISIBILITY, mBindingsIds[8U]);
    GroupLabel_apa_4_4_ParkInVehicle_csm.mState.unBind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE, mBindingsIds[9U]);
    GroupLabel_apa_4_4_KeepLooking_csm.mState.unBind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE, mBindingsIds[10U]);
    Group_grp_supervise_remotely_btn.mVisibility.unBind(gm::csm::Data_APA_SPOT_SELENT_REMOTE_BUTTON_VISIBILITY, mBindingsIds[11U]);
}

void Screen_7029::onScreenShow()
{
    mBindingsIds[0U] = GroupImage_img_keep_looking_btn.mState.bind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE);
    mBindingsIds[1U] = Group_grp_exit_apa_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[2U] = GroupLabel_apa_4_4_ParkRemotely_csm.mState.bind(gm::csm::Data_APA_SELECTION_SUPERVISE_REMOTELY_BUTTON_STATE);
    mBindingsIds[3U] = Group_grp_exit_apa_btn_mfc.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[4U] = Group_grp_park_in_vehicle_btn.mVisibility.bind(gm::csm::Data_APA_SPOT_SELENT_YES_BUTTON_VISIBILITY);
    mBindingsIds[5U] = Image_img_apa_exit_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[6U] = GroupImage_img_park_in_vehicle_btn.mState.bind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE);
    mBindingsIds[7U] = GroupImage_img_supervise_remotely_btn.mState.bind(gm::csm::Data_APA_SELECTION_SUPERVISE_REMOTELY_BUTTON_STATE);
    mBindingsIds[8U] = Group_grp_keep_looking_btn.mVisibility.bind(gm::csm::Data_APA_SPOT_SELENT_KEEP_LKNG_BUTTON_VISIBILITY);
    mBindingsIds[9U] = GroupLabel_apa_4_4_ParkInVehicle_csm.mState.bind(gm::csm::Data_APA_SELECTION_YES_BUTTON_STATE);
    mBindingsIds[10U] = GroupLabel_apa_4_4_KeepLooking_csm.mState.bind(gm::csm::Data_APA_SELECTION_KEEP_LOOKING_BUTTON_STATE);
    mBindingsIds[11U] = Group_grp_supervise_remotely_btn.mVisibility.bind(gm::csm::Data_APA_SPOT_SELENT_REMOTE_BUTTON_VISIBILITY);
}


} // namespace csm
} // namespace gm
