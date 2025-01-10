#include "Screen_6014.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6014::Widget_Logic_Visibility_virtualcontrols_1_3_0_4_apa_csm()
{
    const auto var_002 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_001 = !(var_002);
    
    Label_virtualcontrols_1_3_0_4_apa_csm.Visibility = var_001;
}

void Screen_6014::Widget_Logic_Visibility_img_close()
{
    const auto var_004 = gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE.data();
    const auto var_003 = !(var_004);
    
    Image_img_close.Visibility = var_003;
}

void Screen_6014::Widget_Logic_Visibility_img_auto_parking_assist()
{
    const auto var_006 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const auto var_005 = !(var_006);
    
    Image_img_auto_parking_assist.Visibility = var_005;
}

void Screen_6014::onScreenHide()
{
    Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.unBind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL, mBindingsIds[0]);
}

void Screen_6014::onScreenShow()
{
    mBindingsIds[0] = Label_virtualcontrols_0_0_detailsUnavailable_csm.Visibility.bind(gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6014::Widget_Logic_Visibility_virtualcontrols_1_3_0_4_apa_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    addDependency(this, &Screen_6014::Widget_Logic_Visibility_img_close, gm::csm::VIRTUALCONTROLS_ANDROID_NOIVI_STATE);
    addDependency(this, &Screen_6014::Widget_Logic_Visibility_img_auto_parking_assist, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
}


}//namespace csm
}//namespace gm
