// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_8003.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8003::onScreenHide()
{
    Image_img_bg_black.mState.unBind(gm::csm::Data_RHD_CAMERA_BG_ENABLED, mBindingsIds[0U]);
    Image_img_guideliness_view.mState.unBind(gm::csm::Data_RVC_STANDARD_GUIDELINE_TOGGLE, mBindingsIds[1U]);
    Image_img_exit_camera.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[2U]);
    Image_img_upa_warning.mVisibility.unBind(gm::csm::Data_VPM_CAMERA_ERROR_ICON_VISIBILITY, mBindingsIds[3U]);
    Group_grp_img_exit.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[4U]);
    Image_img_icn_cameraerror.mVisibility.unBind(gm::csm::Data_VPM_CAMERA_ERROR_ICON_VISIBILITY, mBindingsIds[5U]);
    Image_img_exit_btn_mfc_camera.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[6U]);
    Image_img_trailer_assist.mState.unBind(gm::csm::Data_RVC_TRAILER_GUIDELINE_TOGGLE, mBindingsIds[7U]);
    Image_img_trailer_view.mState.unBind(gm::csm::Data_RVC_STANDARD_TRAILER_TOGGLE, mBindingsIds[8U]);
    Label_virtualcontrols_1_1_exitBtn_csm.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[9U]);
    Image_img_hitch_zoom.mState.unBind(gm::csm::Data_RVC_HITCH_ZOOM_TOGGLE, mBindingsIds[10U]);
    RvcGuideLines_img_rvc_widget.mVisibility.unBind(gm::csm::RVC_GUIDELINES_VISIBILITY, mBindingsIds[11U]);
    RvcGuideLines_img_rvc_widget.mWheelAngle.unBind(gm::csm::RVC_STEERINGWHEEL_ANGLE, mBindingsIds[12U]);
    GroupImage_img_btn_close_active.mVisibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[13U]);
}

void Screen_8003::onScreenShow()
{
    mBindingsIds[0U] = Image_img_bg_black.mState.bind(gm::csm::Data_RHD_CAMERA_BG_ENABLED);
    mBindingsIds[1U] = Image_img_guideliness_view.mState.bind(gm::csm::Data_RVC_STANDARD_GUIDELINE_TOGGLE);
    mBindingsIds[2U] = Image_img_exit_camera.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[3U] = Image_img_upa_warning.mVisibility.bind(gm::csm::Data_VPM_CAMERA_ERROR_ICON_VISIBILITY);
    mBindingsIds[4U] = Group_grp_img_exit.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[5U] = Image_img_icn_cameraerror.mVisibility.bind(gm::csm::Data_VPM_CAMERA_ERROR_ICON_VISIBILITY);
    mBindingsIds[6U] = Image_img_exit_btn_mfc_camera.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[7U] = Image_img_trailer_assist.mState.bind(gm::csm::Data_RVC_TRAILER_GUIDELINE_TOGGLE);
    mBindingsIds[8U] = Image_img_trailer_view.mState.bind(gm::csm::Data_RVC_STANDARD_TRAILER_TOGGLE);
    mBindingsIds[9U] = Label_virtualcontrols_1_1_exitBtn_csm.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[10U] = Image_img_hitch_zoom.mState.bind(gm::csm::Data_RVC_HITCH_ZOOM_TOGGLE);
    mBindingsIds[11U] = RvcGuideLines_img_rvc_widget.mVisibility.bind(gm::csm::RVC_GUIDELINES_VISIBILITY);
    mBindingsIds[12U] = RvcGuideLines_img_rvc_widget.mWheelAngle.bind(gm::csm::RVC_STEERINGWHEEL_ANGLE);
    mBindingsIds[13U] = GroupImage_img_btn_close_active.mVisibility.bind(gm::csm::Data_Close_Button_Visibility);
}


} // namespace csm
} // namespace gm
