#include "Screen_8011.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8011::onScreenHide()
{
    Label_dyn_lbl_time.Text.unBind(gm::csm::Data_ICS_TIME_INTERNAL, mBindingsIds[0]);
    Label_dyn_lbl_temp.Text.unBind(gm::csm::Data_ICS_TEMP_INTERNAL, mBindingsIds[1]);
}

void Screen_8011::onScreenShow()
{
    mBindingsIds[0] = Label_dyn_lbl_time.Text.bind(gm::csm::Data_ICS_TIME_INTERNAL);
    mBindingsIds[1] = Label_dyn_lbl_temp.Text.bind(gm::csm::Data_ICS_TEMP_INTERNAL);
}


}//namespace csm
}//namespace gm
