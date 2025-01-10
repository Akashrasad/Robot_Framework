// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_7014.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7014::Label_apa_4_13_UnableToConnectDesc_csm_bindings()
{
    std::string text = Label_apa_4_13_UnableToConnectDesc_csm.mText.getLanguageText();

    ramp::FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::DATA_REMOTE_PARK_DYNAMIC_LABEL));
    Label_apa_4_13_UnableToConnectDesc_csm = text.c_str();
}

void Screen_7014::onScreenHide()
{
    Group_grp_exit_apa_btn_mfc.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[0U]);
    Label_apa_4_1_selectedbuttonPerpRight_csm.mState.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[1U]);
    Group_grp_try_again_btn.mVisibility.unBind(gm::csm::Data_APA_UNABLE_TRY_AGAIN_VISIBILITY, mBindingsIds[2U]);
    GroupLabel_apa_4_13_TryAgain_csm.mState.unBind(gm::csm::Data_APA_SELECTION_TRY_AGAIN_STATE, mBindingsIds[4U]);
    GroupImage_img_exit_again_btn.mState.unBind(gm::csm::Data_APA_SELECTION_EXIT_OUT_STATE, mBindingsIds[5U]);
    Group_grp_exit_again_btn.mVisibility.unBind(gm::csm::Data_APA_UNABLE_EXIT_VISIBILITY, mBindingsIds[6U]);
    Group_grp_exit_apa_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[7U]);
    Image_img_apa_exit_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[8U]);
    GroupImage_img_try_again_btn.mState.unBind(gm::csm::Data_APA_SELECTION_TRY_AGAIN_STATE, mBindingsIds[9U]);
    GroupLabel_apa_14_2f_ParkInVehicle_csm.mState.unBind(gm::csm::Data_APA_SELECTION_EXIT_OUT_STATE, mBindingsIds[10U]);
}

void Screen_7014::onScreenShow()
{
    mBindingsIds[0U] = Group_grp_exit_apa_btn_mfc.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[1U] = Label_apa_4_1_selectedbuttonPerpRight_csm.mState.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[2U] = Group_grp_try_again_btn.mVisibility.bind(gm::csm::Data_APA_UNABLE_TRY_AGAIN_VISIBILITY);
    addDependency(this, &Screen_7014::Label_apa_4_13_UnableToConnectDesc_csm_bindings,gm::csm::DATA_REMOTE_PARK_DYNAMIC_LABEL);
    mBindingsIds[4U] = GroupLabel_apa_4_13_TryAgain_csm.mState.bind(gm::csm::Data_APA_SELECTION_TRY_AGAIN_STATE);
    mBindingsIds[5U] = GroupImage_img_exit_again_btn.mState.bind(gm::csm::Data_APA_SELECTION_EXIT_OUT_STATE);
    mBindingsIds[6U] = Group_grp_exit_again_btn.mVisibility.bind(gm::csm::Data_APA_UNABLE_EXIT_VISIBILITY);
    mBindingsIds[7U] = Group_grp_exit_apa_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[8U] = Image_img_apa_exit_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[9U] = GroupImage_img_try_again_btn.mState.bind(gm::csm::Data_APA_SELECTION_TRY_AGAIN_STATE);
    mBindingsIds[10U] = GroupLabel_apa_14_2f_ParkInVehicle_csm.mState.bind(gm::csm::Data_APA_SELECTION_EXIT_OUT_STATE);
}


} // namespace csm
} // namespace gm
