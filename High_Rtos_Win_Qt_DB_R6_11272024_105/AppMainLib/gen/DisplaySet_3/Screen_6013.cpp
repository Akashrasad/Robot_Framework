#include "Screen_6013.h"

#include "RTOS_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6013::Widget_Logic_Visibility_img_close()
{
    const auto var_002 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_001 = !(var_002);
    
    Image_img_close.Visibility = var_001;
}

void Screen_6013::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm()
{
    const auto var_004 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_003 = !(var_004);
    
    GroupLabel_virtualcontrols_1_1_exitBtn_csm.Visibility = var_003;
}

void Screen_6013::Widget_Logic_Visibility_img_hill()
{
    const auto var_006 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_005 = !(var_006);
    
    Image_img_hill.Visibility = var_005;
}

void Screen_6013::Widget_Logic_Visibility_virtualcontrols_1_3_0_2_hill_csm()
{
    const auto var_008 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_007 = !(var_008);
    
    Label_virtualcontrols_1_3_0_2_hill_csm.Visibility = var_007;
}

void Screen_6013::onScreenHide()
{
    Label_virtualcontrols_1_3_0_2_HillOn_csm.State.unBind(gm::csm::VIRTUALCONTROLS_HILLDESCENT_STATUS_SIGNAL, mBindingsIds[0]);
    Image_img_radio_button_Off.State.unBind(gm::csm::VIRTUALCONTROLS_HILLDESCENT_STATUS_SIGNAL, mBindingsIds[1]);
    Label_virtualcontrols_1_3_0_2_HillOff_csm.State.unBind(gm::csm::VIRTUALCONTROLS_HILLDESCENT_STATUS_SIGNAL, mBindingsIds[2]);
    Label_virtualcontrols_1_3_0_2_hill_csm.State.unBind(gm::csm::VIRTUALCONTROLS_HILLDESCENT_LANGUAGE_INTERNAL, mBindingsIds[3]);
    Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[4]);
    Image_img_radio_button_on.State.unBind(gm::csm::VIRTUALCONTROLS_HILLDESCENT_STATUS_SIGNAL, mBindingsIds[5]);
}

void Screen_6013::onScreenShow()
{
    mBindingsIds[0] = Label_virtualcontrols_1_3_0_2_HillOn_csm.State.bind(gm::csm::VIRTUALCONTROLS_HILLDESCENT_STATUS_SIGNAL);
    mBindingsIds[1] = Image_img_radio_button_Off.State.bind(gm::csm::VIRTUALCONTROLS_HILLDESCENT_STATUS_SIGNAL);
    addDependency(this, &Screen_6013::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    mBindingsIds[2] = Label_virtualcontrols_1_3_0_2_HillOff_csm.State.bind(gm::csm::VIRTUALCONTROLS_HILLDESCENT_STATUS_SIGNAL);
    addDependency(this, &Screen_6013::Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6013::Widget_Logic_Visibility_img_hill, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6013::Widget_Logic_Visibility_virtualcontrols_1_3_0_2_hill_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[3] = Label_virtualcontrols_1_3_0_2_hill_csm.State.bind(gm::csm::VIRTUALCONTROLS_HILLDESCENT_LANGUAGE_INTERNAL);
    mBindingsIds[4] = Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[5] = Image_img_radio_button_on.State.bind(gm::csm::VIRTUALCONTROLS_HILLDESCENT_STATUS_SIGNAL);
}


}//namespace csm
}//namespace gm
