#include "Screen_6500.h"

#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_2_WakeUGDO_csm()
{
    const auto var_005 = VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_004 = !(var_005);
    
    const auto var_002 = VIRTUALCONTROLS_UGDO_FEATURE_ENABLE.data();
    const auto var_003 = var_004;
    const auto var_001 = var_002 && var_003;
    
    Label_virtualcontrols_1_0_2_WakeUGDO_csm.Visibility = var_001;
}

void Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_settings_f_csm()
{
    const auto var_010 = VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_009 = !(var_010);
    
    const auto var_015 = VIRTUALCONTROLS_UGDO_FEATURE_ENABLE.data();
    const auto var_014 = !(var_015);
    
    const auto var_012 = var_014;
    const auto var_013 = VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_011 = var_012 && var_013;
    
    const auto var_007 = var_009;
    const auto var_008 = var_011;
    const auto var_006 = var_007 && var_008;
    
    Label_virtualcontrols_1_0_settings_f_csm.Visibility = var_006;
}

void Screen_6500::Widget_Logic_Visibility_img_card_controls_lights()
{
    const auto var_017 = VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_016 = !(var_017);
    
    Image_img_card_controls_lights.Visibility = var_016;
}

void Screen_6500::Widget_Logic_Visibility_img_card_controls_drive_placeholder()
{
    const auto var_019 = VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_018 = !(var_019);
    
    Image_img_card_controls_drive_placeholder.Visibility = var_018;
}

void Screen_6500::Widget_Logic_Visibility_img_card_controls_settings_placeholder()
{
    const auto var_024 = VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_023 = !(var_024);
    
    const auto var_026 = VIRTUALCONTROLS_UGDO_FEATURE_ENABLE.data();
    const auto var_027 = VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_025 = var_026 && var_027;
    
    const auto var_021 = var_023;
    const auto var_022 = var_025;
    const auto var_020 = var_021 && var_022;
    
    Image_img_card_controls_settings_placeholder.Visibility = var_020;
}

void Screen_6500::Widget_Logic_Visibility_img_card_controls_vehiclesettings_placeholder()
{
    const auto var_032 = VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_031 = !(var_032);
    
    const auto var_037 = VIRTUALCONTROLS_UGDO_FEATURE_ENABLE.data();
    const auto var_036 = !(var_037);
    
    const auto var_034 = var_036;
    const auto var_035 = VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_033 = var_034 && var_035;
    
    const auto var_029 = var_031;
    const auto var_030 = var_033;
    const auto var_028 = var_029 && var_030;
    
    Image_img_card_controls_vehiclesettings_placeholder.Visibility = var_028;
}

void Screen_6500::Widget_Logic_Visibility_apa_3_0_Park_f_csm()
{
    const auto var_039 = VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_038 = !(var_039);
    
    Label_apa_3_0_Park_f_csm.Visibility = var_038;
}

void Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_2_WakeLights_csm()
{
    const auto var_041 = VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_040 = !(var_041);
    
    Label_virtualcontrols_1_0_2_WakeLights_csm.Visibility = var_040;
}

void Screen_6500::Widget_Logic_Visibility_img_card_controls_remotes_placeholder()
{
    const auto var_043 = VIRTUALCONTROLS_UGDO_FEATURE_ENABLE.data();
    const auto var_044 = VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_042 = var_043 && var_044;
    
    Image_img_card_controls_remotes_placeholder.Visibility = var_042;
}

void Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_ugdo_csm()
{
    const auto var_046 = VIRTUALCONTROLS_UGDO_FEATURE_ENABLE.data();
    const auto var_047 = VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_045 = var_046 && var_047;
    
    Label_virtualcontrols_1_0_ugdo_csm.Visibility = var_045;
}

void Screen_6500::Widget_Logic_Visibility_img_card_controls_remotes()
{
    const auto var_052 = VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_051 = !(var_052);
    
    const auto var_049 = VIRTUALCONTROLS_UGDO_FEATURE_ENABLE.data();
    const auto var_050 = var_051;
    const auto var_048 = var_049 && var_050;
    
    Image_img_card_controls_remotes.Visibility = var_048;
}

void Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_settings_csm()
{
    const auto var_057 = VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_056 = !(var_057);
    
    const auto var_059 = VIRTUALCONTROLS_UGDO_FEATURE_ENABLE.data();
    const auto var_060 = VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY.data();
    const auto var_058 = var_059 && var_060;
    
    const auto var_054 = var_056;
    const auto var_055 = var_058;
    const auto var_053 = var_054 && var_055;
    
    Label_virtualcontrols_1_0_settings_csm.Visibility = var_053;
}

void Screen_6500::onScreenHide()
{
    Image_img_card_controls_park_placeholder.Visibility.unBind(VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY, mBindingsIds[0]);
    Label_virtualcontrols_1_0_LightsCard_csm.Visibility.unBind(VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY, mBindingsIds[1]);
    Label_virtualcontrols_1_0_park_csm.Visibility.unBind(VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY, mBindingsIds[2]);
    Image_img_card_controls_drivepark_placeholder.Visibility.unBind(VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY, mBindingsIds[3]);
    Image_img_card_controls_remotes_placeholder.State.unBind(VIRTUALCONTROLS_DRIVING_SPEED_INTERNAL, mBindingsIds[4]);
    Label_virtualcontrols_1_0_drive_csm.Visibility.unBind(VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY, mBindingsIds[5]);
    Image_img_card_controls_remotes.State.unBind(VIRTUALCONTROLS_DRIVING_SPEED_INTERNAL, mBindingsIds[6]);
    Label_virtualcontrols_1_0_DriveParkCard_csm.Visibility.unBind(VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY, mBindingsIds[7]);
    Image_img_card_controls_lights_placeholder.Visibility.unBind(VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY, mBindingsIds[8]);
}

void Screen_6500::onScreenShow()
{
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_2_WakeUGDO_csm, VIRTUALCONTROLS_UGDO_FEATURE_ENABLE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_2_WakeUGDO_csm, VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_settings_f_csm, VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_settings_f_csm, VIRTUALCONTROLS_UGDO_FEATURE_ENABLE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_settings_f_csm, VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_lights, VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_drive_placeholder, VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_settings_placeholder, VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_settings_placeholder, VIRTUALCONTROLS_UGDO_FEATURE_ENABLE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_settings_placeholder, VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[0] = Image_img_card_controls_park_placeholder.Visibility.bind(VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[1] = Label_virtualcontrols_1_0_LightsCard_csm.Visibility.bind(VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_vehiclesettings_placeholder, VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_vehiclesettings_placeholder, VIRTUALCONTROLS_UGDO_FEATURE_ENABLE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_vehiclesettings_placeholder, VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_apa_3_0_Park_f_csm, VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_2_WakeLights_csm, VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[2] = Label_virtualcontrols_1_0_park_csm.Visibility.bind(VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[3] = Image_img_card_controls_drivepark_placeholder.Visibility.bind(VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_remotes_placeholder, VIRTUALCONTROLS_UGDO_FEATURE_ENABLE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_remotes_placeholder, VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[4] = Image_img_card_controls_remotes_placeholder.State.bind(VIRTUALCONTROLS_DRIVING_SPEED_INTERNAL);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_ugdo_csm, VIRTUALCONTROLS_UGDO_FEATURE_ENABLE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_ugdo_csm, VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[5] = Label_virtualcontrols_1_0_drive_csm.Visibility.bind(VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_remotes, VIRTUALCONTROLS_UGDO_FEATURE_ENABLE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_img_card_controls_remotes, VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[6] = Image_img_card_controls_remotes.State.bind(VIRTUALCONTROLS_DRIVING_SPEED_INTERNAL);
    mBindingsIds[7] = Label_virtualcontrols_1_0_DriveParkCard_csm.Visibility.bind(VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_settings_csm, VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_settings_csm, VIRTUALCONTROLS_UGDO_FEATURE_ENABLE);
    addDependency(this, &Screen_6500::Widget_Logic_Visibility_virtualcontrols_1_0_settings_csm, VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
    mBindingsIds[8] = Image_img_card_controls_lights_placeholder.Visibility.bind(VIRTUALCONTROLS_ANDROID_LAUNCH_VISIBILITY);
}


}//namespace csm
}//namespace gm
