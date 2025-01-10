#include "Screen_7011.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7011::onScreenHide()
{
    Label_apa_4_1_selectedbuttonPerpRight_csm.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[0]);
}

void Screen_7011::onScreenShow()
{
    mBindingsIds[0] = Label_apa_4_1_selectedbuttonPerpRight_csm.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
}


}//namespace csm
}//namespace gm
