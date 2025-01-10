#include "Screen_6078.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6078::onScreenHide()
{
    Image_img_persistent_controls_voc_speed_limiter.Visibility.unBind(gm::csm::Data_PERSISTENT_CONTROL_SPEEDLIMITER_VISIBILITY, mBindingsIds[0]);
    Image_img_persistent_controls_voc_lane_keep_assist.Visibility.unBind(gm::csm::Data_PERSISTENT_CONTROL_LANEKEEPASSIST_VISIBILITY, mBindingsIds[1]);
    Image_img_persistent_controls_lights_headlights.State.unBind(gm::csm::ICS_HEADLIGHTS_ICON_TYPE, mBindingsIds[2]);
}

void Screen_6078::onScreenShow()
{
    mBindingsIds[0] = Image_img_persistent_controls_voc_speed_limiter.Visibility.bind(gm::csm::Data_PERSISTENT_CONTROL_SPEEDLIMITER_VISIBILITY);
    mBindingsIds[1] = Image_img_persistent_controls_voc_lane_keep_assist.Visibility.bind(gm::csm::Data_PERSISTENT_CONTROL_LANEKEEPASSIST_VISIBILITY);
    mBindingsIds[2] = Image_img_persistent_controls_lights_headlights.State.bind(gm::csm::ICS_HEADLIGHTS_ICON_TYPE);
}


}//namespace csm
}//namespace gm
