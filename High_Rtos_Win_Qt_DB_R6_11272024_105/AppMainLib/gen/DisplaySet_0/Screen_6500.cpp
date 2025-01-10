#include "Screen_6500.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_settings_csm()
{
    const auto var_005 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_004 = !(var_005);
    
    const auto var_007 = gm::csm::VIRTUALCONTROLS_UGDO_FEATURE_ENABLE.data();
    const auto var_008 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_006 = var_007 && var_008;
    
    const auto var_002 = var_004;
    const auto var_003 = var_006;
    const auto var_001 = var_002 && var_003;
    
    Label_virtualcontrols_1_0_settings_csm.Visibility = var_001;
}

void Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_2_WakeUGDO_csm()
{
    const auto var_013 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_012 = !(var_013);
    
    const auto var_010 = gm::csm::VIRTUALCONTROLS_UGDO_FEATURE_ENABLE.data();
    const auto var_011 = var_012;
    const auto var_009 = var_010 && var_011;
    
    Label_virtualcontrols_1_0_2_WakeUGDO_csm.Visibility = var_009;
}

void Screen_6500::Widget_Logic_Visibility_img_card_controls_lights()
{
    const auto var_015 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_014 = !(var_015);
    
    Image_img_card_controls_lights.Visibility = var_014;
}

void Screen_6500::Widget_Logic_Visibility_img_card_controls_settings_placeholder()
{
    const auto var_020 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_019 = !(var_020);
    
    const auto var_022 = gm::csm::VIRTUALCONTROLS_UGDO_FEATURE_ENABLE.data();
    const auto var_023 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_021 = var_022 && var_023;
    
    const auto var_017 = var_019;
    const auto var_018 = var_021;
    const auto var_016 = var_017 && var_018;
    
    Image_img_card_controls_settings_placeholder.Visibility = var_016;
}

void Screen_6500::Widget_Logic_Visibility_img_card_controls_vehiclesettings_placeholder()
{
    const auto var_028 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_027 = !(var_028);
    
    const auto var_033 = gm::csm::VIRTUALCONTROLS_UGDO_FEATURE_ENABLE.data();
    const auto var_032 = !(var_033);
    
    const auto var_030 = var_032;
    const auto var_031 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_029 = var_030 && var_031;
    
    const auto var_025 = var_027;
    const auto var_026 = var_029;
    const auto var_024 = var_025 && var_026;
    
    Image_img_card_controls_vehiclesettings_placeholder.Visibility = var_024;
}

void Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_settings_f_csm()
{
    const auto var_038 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_037 = !(var_038);
    
    const auto var_043 = gm::csm::VIRTUALCONTROLS_UGDO_FEATURE_ENABLE.data();
    const auto var_042 = !(var_043);
    
    const auto var_040 = var_042;
    const auto var_041 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_039 = var_040 && var_041;
    
    const auto var_035 = var_037;
    const auto var_036 = var_039;
    const auto var_034 = var_035 && var_036;
    
    Label_virtualcontrols_1_0_settings_f_csm.Visibility = var_034;
}

void Screen_6500::Widget_Logic_Visibility_img_card_controls_remotes_placeholder()
{
    const auto var_045 = gm::csm::VIRTUALCONTROLS_UGDO_FEATURE_ENABLE.data();
    const auto var_046 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_044 = var_045 && var_046;
    
    Image_img_card_controls_remotes_placeholder.Visibility = var_044;
}

void Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_ugdo_csm()
{
    const auto var_048 = gm::csm::VIRTUALCONTROLS_UGDO_FEATURE_ENABLE.data();
    const auto var_049 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_047 = var_048 && var_049;
    
    Label_virtualcontrols_1_0_ugdo_csm.Visibility = var_047;
}

void Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_2_WakeLights_csm()
{
    const auto var_051 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_050 = !(var_051);
    
    Label_virtualcontrols_1_0_2_WakeLights_csm.Visibility = var_050;
}

void Screen_6500::Widget_Logic_Visibility_img_card_controls_remotes()
{
    const auto var_056 = gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_055 = !(var_056);
    
    const auto var_053 = gm::csm::VIRTUALCONTROLS_UGDO_FEATURE_ENABLE.data();
    const auto var_054 = var_055;
    const auto var_052 = var_053 && var_054;
    
    Image_img_card_controls_remotes.Visibility = var_052;
}

void Screen_6500::onScreenHide()
{
    Label_virtualcontrols_1_0_LightsCard_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY, mBindingsIds[0]);
    Image_img_card_controls_drivepark_placeholder.Visibility.unBind(gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY, mBindingsIds[1]);
    Image_img_card_controls_remotes_placeholder.State.unBind(gm::csm::VIRTUALCONTROLS_DRIVING_SPEED_INTERNAL, mBindingsIds[2]);
    Image_img_card_controls_remotes.State.unBind(gm::csm::VIRTUALCONTROLS_DRIVING_SPEED_INTERNAL, mBindingsIds[3]);
    Label_virtualcontrols_1_0_DriveParkCard_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY, mBindingsIds[4]);
    Image_img_card_controls_lights_placeholder.Visibility.unBind(gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY, mBindingsIds[5]);
}

void Screen_6500::onScreenShow()
{
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_settings_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_settings_csm, gm::csm::VIRTUALCONTROLS_UGDO_FEATURE_ENABLE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_settings_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_2_WakeUGDO_csm, gm::csm::VIRTUALCONTROLS_UGDO_FEATURE_ENABLE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_2_WakeUGDO_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_lights, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_settings_placeholder, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_settings_placeholder, gm::csm::VIRTUALCONTROLS_UGDO_FEATURE_ENABLE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_settings_placeholder, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[0] = Label_virtualcontrols_1_0_LightsCard_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_vehiclesettings_placeholder, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_vehiclesettings_placeholder, gm::csm::VIRTUALCONTROLS_UGDO_FEATURE_ENABLE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_vehiclesettings_placeholder, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_settings_f_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_settings_f_csm, gm::csm::VIRTUALCONTROLS_UGDO_FEATURE_ENABLE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_settings_f_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[1] = Image_img_card_controls_drivepark_placeholder.Visibility.bind(gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_remotes_placeholder, gm::csm::VIRTUALCONTROLS_UGDO_FEATURE_ENABLE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_remotes_placeholder, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[2] = Image_img_card_controls_remotes_placeholder.State.bind(gm::csm::VIRTUALCONTROLS_DRIVING_SPEED_INTERNAL);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_ugdo_csm, gm::csm::VIRTUALCONTROLS_UGDO_FEATURE_ENABLE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_ugdo_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_2_WakeLights_csm, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_remotes, gm::csm::VIRTUALCONTROLS_UGDO_FEATURE_ENABLE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_remotes, gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[3] = Image_img_card_controls_remotes.State.bind(gm::csm::VIRTUALCONTROLS_DRIVING_SPEED_INTERNAL);
    mBindingsIds[4] = Label_virtualcontrols_1_0_DriveParkCard_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[5] = Image_img_card_controls_lights_placeholder.Visibility.bind(gm::csm::VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
}


}//namespace csm
}//namespace gm
