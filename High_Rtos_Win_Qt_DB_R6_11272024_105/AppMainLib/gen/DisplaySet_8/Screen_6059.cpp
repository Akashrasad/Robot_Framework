#include "Screen_6059.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6059::Widget_Logic_Visibility_virtualcontrols_1_1_hud_csm()
{
    const auto var_002 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_001 = !(var_002);
    
    Label_virtualcontrols_1_1_hud_csm.Visibility = var_001;
}

void Screen_6059::onScreenHide()
{
    Image_img_brightness_increment.State.unBind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL, mBindingsIds[0]);
    Label_virtualcontrols_1_1_HUDheight_csm.State.unBind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL, mBindingsIds[1]);
    Image_img_rotation_left.State.unBind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL, mBindingsIds[2]);
    Image_img_brightness_decrement.State.unBind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL, mBindingsIds[3]);
    ProgressBar_6059_img_brightness_pogressbar.ProgressBarValue.unBind(gm::csm::VIRTUAL_CONTROL_BRIGHTNESS_VALUE_UPDATE_INTERNAL, mBindingsIds[4]);
    Label_virtualcontrols_1_1_HUDbrightness_csm.State.unBind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL, mBindingsIds[5]);
    Image_img_rotation_right.State.unBind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL, mBindingsIds[6]);
    Image_img_height_increment.State.unBind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL, mBindingsIds[7]);
    ProgressBar_6059_img_rotation_pogressbar.ProgressBarValue.unBind(gm::csm::VIRTUAL_CONTROL_ROTATION_VALUE_UPDATE_INTERNAL, mBindingsIds[8]);
    ProgressBar_6059_img_height_pogressbar.ProgressBarValue.unBind(gm::csm::VIRTUAL_CONTROL_HEIGHT_VALUE_UPDATE_INTERNAL, mBindingsIds[9]);
    Label_virtualcontrols_1_1_rotation_csm.State.unBind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL, mBindingsIds[10]);
    Label_virtualcontrols_1_1_hud_csm.State.unBind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL, mBindingsIds[11]);
    Image_img_height_decrement.State.unBind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL, mBindingsIds[12]);
}

void Screen_6059::onScreenShow()
{
    mBindingsIds[0] = Image_img_brightness_increment.State.bind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL);
    mBindingsIds[1] = Label_virtualcontrols_1_1_HUDheight_csm.State.bind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL);
    mBindingsIds[2] = Image_img_rotation_left.State.bind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL);
    mBindingsIds[3] = Image_img_brightness_decrement.State.bind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL);
    mBindingsIds[4] = ProgressBar_6059_img_brightness_pogressbar.ProgressBarValue.bind(gm::csm::VIRTUAL_CONTROL_BRIGHTNESS_VALUE_UPDATE_INTERNAL);
    mBindingsIds[5] = Label_virtualcontrols_1_1_HUDbrightness_csm.State.bind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL);
    mBindingsIds[6] = Image_img_rotation_right.State.bind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL);
    mBindingsIds[7] = Image_img_height_increment.State.bind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL);
    mBindingsIds[8] = ProgressBar_6059_img_rotation_pogressbar.ProgressBarValue.bind(gm::csm::VIRTUAL_CONTROL_ROTATION_VALUE_UPDATE_INTERNAL);
    mBindingsIds[9] = ProgressBar_6059_img_height_pogressbar.ProgressBarValue.bind(gm::csm::VIRTUAL_CONTROL_HEIGHT_VALUE_UPDATE_INTERNAL);
    mBindingsIds[10] = Label_virtualcontrols_1_1_rotation_csm.State.bind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL);
    addDependency(this, &Screen_6059::Widget_Logic_Visibility_virtualcontrols_1_1_hud_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[11] = Label_virtualcontrols_1_1_hud_csm.State.bind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL);
    mBindingsIds[12] = Image_img_height_decrement.State.bind(gm::csm::VIRTUAL_CONTROL_HUD_DISABLE_FEATURE_INTERNAL);
}


}//namespace csm
}//namespace gm
