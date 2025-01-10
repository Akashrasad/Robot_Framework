#include "Screen_7031.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7031::onScreenHide()
{
    Image_img_apa_bg.State.unBind(gm::csm::Data_APA_BG_UPDATE, mBindingsIds[0]);
}

void Screen_7031::onScreenShow()
{
    mBindingsIds[0] = Image_img_apa_bg.State.bind(gm::csm::Data_APA_BG_UPDATE);
}


}//namespace csm
}//namespace gm
