// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "Screen_6150.h"

#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6150::Widget_Logic_Visibility_img_close() noexcept
{
    const bool var_005 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const bool var_004 = !(var_005);
    
    const bool var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_003 = var_004;
    const bool var_001 = var_002 && var_003;
    
    Image_img_close.mVisibility = var_001;
}

void Screen_6150::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm() noexcept
{
    const bool var_007 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_006 = !(var_007);
    
    Label_virtualcontrols_1_0_4_wakeScreenExit_csm.mVisibility = var_006;
}

void Screen_6150::Widget_Logic_Visibility_img_placeholder_WakeScreen() noexcept
{
    const bool var_009 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_008 = !(var_009);
    
    Image_img_placeholder_WakeScreen.mVisibility = var_008;
}

void Screen_6150::Widget_Logic_Visibility_grp_placeholder_WakeScreen() noexcept
{
    const bool var_011 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const bool var_010 = !(var_011);
    
    Group_grp_placeholder_WakeScreen.mVisibility = var_010;
}

void Screen_6150::Widget_Logic_Visibility_img_control_lka_bzsa_and_holca() noexcept
{
    const bool var_013 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_012 = !(var_013);
    
    Image_img_control_lka_bzsa_and_holca.mVisibility = var_012;
}

void Screen_6150::Widget_Logic_Visibility_virtualcontrols_1_3_7_u_desc_csm() noexcept
{
    const bool var_015 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_014 = !(var_015);
    
    Label_virtualcontrols_1_3_7_u_desc_csm.mVisibility = var_014;
}

void Screen_6150::onScreenHide()
{
    Image_img_radio_button_lane_off.mState.unBind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL, mBindingsIds[0U]);
    Image_img_placeholder_WakeScreen.mState.unBind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE, mBindingsIds[1U]);
    Image_img_checkbox_bzsa.mVisibility.unBind(gm::csm::Data_ENABLE_BZSA_OPTIONS, mBindingsIds[2U]);
    Image_img_checkbox_bzsa.mState.unBind(gm::csm::Data_BZSA_CHECKBOX_SELECTION_STATE, mBindingsIds[3U]);
    Label_virtualcontrols_1_4_0_1_DomeOn_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL, mBindingsIds[4U]);
    Label_virtualcontrols_1_3_7_u_centering_csm.mVisibility.unBind(gm::csm::Data_ENABLE_LCA_OPTIONS, mBindingsIds[5U]);
    Label_virtualcontrols_1_3_7_u_centering_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL, mBindingsIds[6U]);
    Label_virtualcontrols_1_4_0_1_DomeOff_csm.mState.unBind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL, mBindingsIds[7U]);
    Image_img_radio_button_lane_on.mState.unBind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL, mBindingsIds[8U]);
    Image_img_checkbox_lca.mVisibility.unBind(gm::csm::Data_ENABLE_LCA_OPTIONS, mBindingsIds[9U]);
    Image_img_checkbox_lca.mState.unBind(gm::csm::Data_LCA_CHECKBOX_SELECTION_STATE, mBindingsIds[10U]);
    Image_img_bzsa_divider.mVisibility.unBind(gm::csm::Data_ENABLE_BZSA_OPTIONS, mBindingsIds[11U]);
    Label_virtualcontrols_1_3_h_cardLKA_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[12U]);
    Label_dyn_bzsa_lable.mVisibility.unBind(gm::csm::Data_ENABLE_BZSA_OPTIONS, mBindingsIds[13U]);
    Label_dyn_bzsa_lable.mState.unBind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL, mBindingsIds[14U]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[15U]);
    Image_img_lca_divider.mVisibility.unBind(gm::csm::Data_ENABLE_LCA_OPTIONS, mBindingsIds[16U]);
}

void Screen_6150::onScreenShow()
{
    addDependency(this, &Screen_6150::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY,gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[0U] = Image_img_radio_button_lane_off.mState.bind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL);
    addDependency(this, &Screen_6150::Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6150::Widget_Logic_Visibility_img_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[1U] = Image_img_placeholder_WakeScreen.mState.bind(gm::csm::VIRTUALCONTROLS_WAKESCREEN_ANDROID_BUTTON_STATE);
    mBindingsIds[2U] = Image_img_checkbox_bzsa.mVisibility.bind(gm::csm::Data_ENABLE_BZSA_OPTIONS);
    mBindingsIds[3U] = Image_img_checkbox_bzsa.mState.bind(gm::csm::Data_BZSA_CHECKBOX_SELECTION_STATE);
    mBindingsIds[4U] = Label_virtualcontrols_1_4_0_1_DomeOn_csm.mState.bind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL);
    mBindingsIds[5U] = Label_virtualcontrols_1_3_7_u_centering_csm.mVisibility.bind(gm::csm::Data_ENABLE_LCA_OPTIONS);
    mBindingsIds[6U] = Label_virtualcontrols_1_3_7_u_centering_csm.mState.bind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL);
    mBindingsIds[7U] = Label_virtualcontrols_1_4_0_1_DomeOff_csm.mState.bind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL);
    mBindingsIds[8U] = Image_img_radio_button_lane_on.mState.bind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL);
    mBindingsIds[9U] = Image_img_checkbox_lca.mVisibility.bind(gm::csm::Data_ENABLE_LCA_OPTIONS);
    mBindingsIds[10U] = Image_img_checkbox_lca.mState.bind(gm::csm::Data_LCA_CHECKBOX_SELECTION_STATE);
    mBindingsIds[11U] = Image_img_bzsa_divider.mVisibility.bind(gm::csm::Data_ENABLE_BZSA_OPTIONS);
    mBindingsIds[12U] = Label_virtualcontrols_1_3_h_cardLKA_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    mBindingsIds[13U] = Label_dyn_bzsa_lable.mVisibility.bind(gm::csm::Data_ENABLE_BZSA_OPTIONS);
    mBindingsIds[14U] = Label_dyn_bzsa_lable.mState.bind(gm::csm::VIRTUALCONTROLS_LANEKEEPASSIST_STATE_INTERNAL);
    addDependency(this, &Screen_6150::Widget_Logic_Visibility_grp_placeholder_WakeScreen, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6150::Widget_Logic_Visibility_img_control_lka_bzsa_and_holca, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6150::Widget_Logic_Visibility_virtualcontrols_1_3_7_u_desc_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[15U] = Label_virtualcontrols_0_0_detailsUnavailable_csm.mVisibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[16U] = Image_img_lca_divider.mVisibility.bind(gm::csm::Data_ENABLE_LCA_OPTIONS);
}


} // namespace csm
} // namespace gm
