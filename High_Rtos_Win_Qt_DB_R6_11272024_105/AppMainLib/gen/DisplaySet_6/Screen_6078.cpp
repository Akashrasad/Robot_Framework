#include "Screen_6078.h"

#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6078::onScreenHide()
{
    Image_img_persistent_controls_voc_speed_limiter.State.unBind(gm::csm::Data_VIRTUALCONTROLS_PERSISTENT_CONTROL_INTERNAL, mBindingsIds[0]);
}

void Screen_6078::onScreenShow()
{
    mBindingsIds[0] = Image_img_persistent_controls_voc_speed_limiter.State.bind(gm::csm::Data_VIRTUALCONTROLS_PERSISTENT_CONTROL_INTERNAL);
}


}//namespace csm
}//namespace gm
