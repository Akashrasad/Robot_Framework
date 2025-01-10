#include "Screen_7050.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7050::onScreenHide()
{
    Image_img_safety_icons.Visibility.unBind(gm::csm::ICS_SAFTEY_ICON_VISIBILITY, mBindingsIds[0]);
    Image_img_safety_icons.State.unBind(ICS_SAFTEY_ICON_TYPE, mBindingsIds[1]);
    Image_img_headlight.Visibility.unBind(gm::csm::ICS_HEADLIGHTS_ICON_VISIBILITY, mBindingsIds[2]);
    Image_img_headlight.State.unBind(gm::csm::ICS_HEADLIGHTS_ICON_TYPE, mBindingsIds[3]);
}

void Screen_7050::onScreenShow()
{
    mBindingsIds[0] = Image_img_safety_icons.Visibility.bind(gm::csm::ICS_SAFTEY_ICON_VISIBILITY);
    mBindingsIds[1] = Image_img_safety_icons.State.bind(ICS_SAFTEY_ICON_TYPE);
    mBindingsIds[2] = Image_img_headlight.Visibility.bind(gm::csm::ICS_HEADLIGHTS_ICON_VISIBILITY);
    mBindingsIds[3] = Image_img_headlight.State.bind(gm::csm::ICS_HEADLIGHTS_ICON_TYPE);
}


}//namespace csm
}//namespace gm
