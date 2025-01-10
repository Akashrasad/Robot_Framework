// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_7015.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7015::Widget_Logic_Visibility_7015_img_pogressbar() noexcept
{
    const bool var_002 = gm::csm::APA_CANCELED_VISIBILITY_INTERNAL.data();
    const bool var_001 = !(var_002);
    
    ProgressBar_7015_img_pogressbar.mVisibility = var_001;
}

void Screen_7015::onScreenHide()
{
    Image_img_apa_exit_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[0U]);
    Group_grp_exit_apa_btn.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[1U]);
    Image_img_CameraViews.mVisibility.unBind(gm::csm::APA_CANCELED_VISIBILITY_INTERNAL, mBindingsIds[2U]);
    Image_img_auto_steering.mVisibility.unBind(gm::csm::Data_APA_AUTO_STEERING_ICON_VISIBILITY, mBindingsIds[3U]);
    Image_img_upa_warning.mVisibility.unBind(gm::csm::Data_APA_CAMERA_ERROR_ICON_VISIBILITY, mBindingsIds[4U]);
    ProgressBar_7015_img_pogressbar.mProgressBarValue.unBind(gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL, mBindingsIds[5U]);
    Image_img_icn_cameraerror.mVisibility.unBind(gm::csm::Data_APA_CAMERA_ERROR_ICON_VISIBILITY, mBindingsIds[6U]);
    Group_grp_exit_apa_btn_mfc.mVisibility.unBind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA, mBindingsIds[7U]);
    ProgressBar_7015_img_pogressbar_green.mVisibility.unBind(gm::csm::APA_MANUER_PROGRESSBAR_GREEN_VISIBILITY_INTERNAL, mBindingsIds[8U]);
    ProgressBar_7015_img_pogressbar_green.mProgressBarValue.unBind(gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL, mBindingsIds[9U]);
    ProgressBar_7015_img_pogressbar_amber.mVisibility.unBind(gm::csm::APA_MANUER_PROGRESSBAR_AMBER_VISIBILITY_INTERNAL, mBindingsIds[10U]);
    ProgressBar_7015_img_pogressbar_amber.mProgressBarValue.unBind(gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL, mBindingsIds[11U]);
    Label_apa_5_1_maneuvermessaging1_csm.mState.unBind(gm::csm::Data_Apa_Camera_Internal, mBindingsIds[12U]);
}

void Screen_7015::onScreenShow()
{
    mBindingsIds[0U] = Image_img_apa_exit_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[1U] = Group_grp_exit_apa_btn.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[2U] = Image_img_CameraViews.mVisibility.bind(gm::csm::APA_CANCELED_VISIBILITY_INTERNAL);
    mBindingsIds[3U] = Image_img_auto_steering.mVisibility.bind(gm::csm::Data_APA_AUTO_STEERING_ICON_VISIBILITY);
    mBindingsIds[4U] = Image_img_upa_warning.mVisibility.bind(gm::csm::Data_APA_CAMERA_ERROR_ICON_VISIBILITY);
    addDependency(this, &Screen_7015::Widget_Logic_Visibility_7015_img_pogressbar, gm::csm::APA_CANCELED_VISIBILITY_INTERNAL);
    mBindingsIds[5U] = ProgressBar_7015_img_pogressbar.mProgressBarValue.bind(gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL);
    mBindingsIds[6U] = Image_img_icn_cameraerror.mVisibility.bind(gm::csm::Data_APA_CAMERA_ERROR_ICON_VISIBILITY);
    mBindingsIds[7U] = Group_grp_exit_apa_btn_mfc.mVisibility.bind(gm::csm::EXIT_BUTTON_AVAILABLE_IN_APA);
    mBindingsIds[8U] = ProgressBar_7015_img_pogressbar_green.mVisibility.bind(gm::csm::APA_MANUER_PROGRESSBAR_GREEN_VISIBILITY_INTERNAL);
    mBindingsIds[9U] = ProgressBar_7015_img_pogressbar_green.mProgressBarValue.bind(gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL);
    mBindingsIds[10U] = ProgressBar_7015_img_pogressbar_amber.mVisibility.bind(gm::csm::APA_MANUER_PROGRESSBAR_AMBER_VISIBILITY_INTERNAL);
    mBindingsIds[11U] = ProgressBar_7015_img_pogressbar_amber.mProgressBarValue.bind(gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL);
    mBindingsIds[12U] = Label_apa_5_1_maneuvermessaging1_csm.mState.bind(gm::csm::Data_Apa_Camera_Internal);
}


} // namespace csm
} // namespace gm
