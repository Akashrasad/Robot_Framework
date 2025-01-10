#include "Screen_7050.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7050::Widget_Logic_Visibility_img_headlight()
{
    const auto var_002 = gm::csm::VIRTUALCONTROLS_HEADLIGHT_SMARTCONTROL_VISIBILITY.data();
    const auto var_003 = gm::csm::ICS_HEADLIGHTS_ICON_VISIBILITY.data();
    const auto var_001 = var_002 && var_003;
    
    Image_img_headlight.Visibility = var_001;
}

void Screen_7050::onScreenHide()
{
    Image_img_safety_icons.Visibility.unBind(gm::csm::ICS_SAFTEY_ICON_VISIBILITY, mBindingsIds[0]);
    Image_img_safety_icons.State.unBind(ICS_SAFTEY_ICON_TYPE, mBindingsIds[1]);
    Image_img_headlight.State.unBind(gm::csm::ICS_HEADLIGHTS_ICON_TYPE, mBindingsIds[2]);
}

void Screen_7050::onScreenShow()
{
    mBindingsIds[0] = Image_img_safety_icons.Visibility.bind(gm::csm::ICS_SAFTEY_ICON_VISIBILITY);
    mBindingsIds[1] = Image_img_safety_icons.State.bind(ICS_SAFTEY_ICON_TYPE);
    addDependency(this, &Screen_7050::Widget_Logic_Visibility_img_headlight, gm::csm::VIRTUALCONTROLS_HEADLIGHT_SMARTCONTROL_VISIBILITY);
    addDependency(this, &Screen_7050::Widget_Logic_Visibility_img_headlight, gm::csm::ICS_HEADLIGHTS_ICON_VISIBILITY);
    mBindingsIds[2] = Image_img_headlight.State.bind(gm::csm::ICS_HEADLIGHTS_ICON_TYPE);
}


}//namespace csm
}//namespace gm
