#include "Screen_7050.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


Screen_7050::Screen_7050():BindableScreenLogic("7050")
{
}

void Screen_7050::onScreenHide()
{
    Image_img_safety_icons.Visibility.unBind(ICS_SAFTEY_ICON_VISIBILITY, mBindingsIds[0]);
    Image_img_safety_icons.State.unBind(ICS_SAFTEY_ICON_TYPE, mBindingsIds[1]);
}

void Screen_7050::onScreenShow()
{
    mBindingsIds[0] = Image_img_safety_icons.Visibility.bind(ICS_SAFTEY_ICON_VISIBILITY);
    mBindingsIds[1] = Image_img_safety_icons.State.bind(ICS_SAFTEY_ICON_TYPE);
}


}//namespace csm
}//namespace gm
