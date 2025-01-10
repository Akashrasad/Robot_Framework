#include "Screen_6089.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6089::onScreenHide()
{
    Label_virtualcontrols_opd_level_csm.State.unBind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL, mBindingsIds[0]);
}

void Screen_6089::onScreenShow()
{
    mBindingsIds[0] = Label_virtualcontrols_opd_level_csm.State.bind(gm::csm::VIRTUALCONTROLS_ONEPEDALDRIVE_STATE_INTERNAL);
}


}//namespace csm
}//namespace gm
