// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_8012.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8012::onScreenHide()
{
    Image_img_btn_touchpoint_3.mState.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[0U]);
    Label_virtualcontrols_1_1_exitBtn_csm.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[1U]);
    Image_img_btn_touchpoint_6.mState.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[2U]);
    Image_img_btn_touchpoint_5.mState.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[3U]);
    Image_img_exit_camera.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[4U]);
    Image_img_btn_touchpoint_2_mfc.mVisibility.unBind(gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY, mBindingsIds[5U]);
    Image_img_btn_touchpoint_2_mfc.mState.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[6U]);
    Image_img_btn_touchpoint_5_mfc.mVisibility.unBind(gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY, mBindingsIds[7U]);
    Image_img_btn_touchpoint_5_mfc.mState.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[8U]);
    Image_img_btn_touchpoint_2.mState.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[9U]);
    Image_img_btn_touchpoint_6_mfc.mVisibility.unBind(gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY, mBindingsIds[10U]);
    Image_img_btn_touchpoint_6_mfc.mState.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[11U]);
    Group_grp_img_exit.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[12U]);
    Image_img_btn_touchpoint_7_mfc.mVisibility.unBind(gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY, mBindingsIds[13U]);
    Image_img_btn_touchpoint_7_mfc.mState.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[14U]);
    Image_img_btn_touchpoint_4_mfc.mVisibility.unBind(gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY, mBindingsIds[15U]);
    Image_img_btn_touchpoint_4_mfc.mState.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[16U]);
    Image_img_btn_touchpoint_7.mState.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[17U]);
    Image_img_btn_touchpoint_1_mfc.mVisibility.unBind(gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY, mBindingsIds[18U]);
    Image_img_btn_touchpoint_1_mfc.mState.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[19U]);
    Image_img_bg_black.mState.unBind(gm::csm::Data_RHD_CAMERA_BG_ENABLED, mBindingsIds[20U]);
    Image_img_btn_touchpoint_8.mState.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[21U]);
    Image_img_btn_touchpoint_4.mState.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[22U]);
    Image_img_btn_touchpoint_1.mState.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[23U]);
    Image_img_btn_touchpoint_3_mfc.mVisibility.unBind(gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY, mBindingsIds[24U]);
    Image_img_btn_touchpoint_3_mfc.mState.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[25U]);
    Image_img_btn_touchpoint_8_mfc.mVisibility.unBind(gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY, mBindingsIds[26U]);
    Image_img_btn_touchpoint_8_mfc.mState.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[27U]);
    Image_img_btn_camerabowldiagram.mVisibility.unBind(gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY, mBindingsIds[28U]);
    Image_img_exit_btn_mfc_camera.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[29U]);
}

void Screen_8012::onScreenShow()
{
    mBindingsIds[0U] = Image_img_btn_touchpoint_3.mState.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[1U] = Label_virtualcontrols_1_1_exitBtn_csm.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[2U] = Image_img_btn_touchpoint_6.mState.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[3U] = Image_img_btn_touchpoint_5.mState.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[4U] = Image_img_exit_camera.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[5U] = Image_img_btn_touchpoint_2_mfc.mVisibility.bind(gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY);
    mBindingsIds[6U] = Image_img_btn_touchpoint_2_mfc.mState.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[7U] = Image_img_btn_touchpoint_5_mfc.mVisibility.bind(gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY);
    mBindingsIds[8U] = Image_img_btn_touchpoint_5_mfc.mState.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[9U] = Image_img_btn_touchpoint_2.mState.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[10U] = Image_img_btn_touchpoint_6_mfc.mVisibility.bind(gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY);
    mBindingsIds[11U] = Image_img_btn_touchpoint_6_mfc.mState.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[12U] = Group_grp_img_exit.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[13U] = Image_img_btn_touchpoint_7_mfc.mVisibility.bind(gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY);
    mBindingsIds[14U] = Image_img_btn_touchpoint_7_mfc.mState.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[15U] = Image_img_btn_touchpoint_4_mfc.mVisibility.bind(gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY);
    mBindingsIds[16U] = Image_img_btn_touchpoint_4_mfc.mState.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[17U] = Image_img_btn_touchpoint_7.mState.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[18U] = Image_img_btn_touchpoint_1_mfc.mVisibility.bind(gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY);
    mBindingsIds[19U] = Image_img_btn_touchpoint_1_mfc.mState.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[20U] = Image_img_bg_black.mState.bind(gm::csm::Data_RHD_CAMERA_BG_ENABLED);
    mBindingsIds[21U] = Image_img_btn_touchpoint_8.mState.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[22U] = Image_img_btn_touchpoint_4.mState.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[23U] = Image_img_btn_touchpoint_1.mState.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[24U] = Image_img_btn_touchpoint_3_mfc.mVisibility.bind(gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY);
    mBindingsIds[25U] = Image_img_btn_touchpoint_3_mfc.mState.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[26U] = Image_img_btn_touchpoint_8_mfc.mVisibility.bind(gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY);
    mBindingsIds[27U] = Image_img_btn_touchpoint_8_mfc.mState.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[28U] = Image_img_btn_camerabowldiagram.mVisibility.bind(gm::csm::Data_VPM_CAMERA_BOWL_BG_VISIBILITY);
    mBindingsIds[29U] = Image_img_exit_btn_mfc_camera.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
}


} // namespace csm
} // namespace gm
