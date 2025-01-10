#include "Screen_8001.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8001::onScreenHide()
{
    Image_img_guideliness_view.State.unBind(gm::csm::Data_RVC_STANDARD_GUIDELINE_TOGGLE, mBindingsIds[0]);
    Label_dyn_safetysystems_7_3_ParkAssistOff_f_csm.State.unBind(gm::csm::RVC_SAFETYSYSTEM_PARKASSIST, mBindingsIds[1]);
}

void Screen_8001::onScreenShow()
{
    mBindingsIds[0] = Image_img_guideliness_view.State.bind(gm::csm::Data_RVC_STANDARD_GUIDELINE_TOGGLE);
    mBindingsIds[1] = Label_dyn_safetysystems_7_3_ParkAssistOff_f_csm.State.bind(gm::csm::RVC_SAFETYSYSTEM_PARKASSIST);
}


}//namespace csm
}//namespace gm
