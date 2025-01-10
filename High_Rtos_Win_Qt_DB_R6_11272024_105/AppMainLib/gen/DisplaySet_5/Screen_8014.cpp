#include "Screen_8014.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8014::onScreenHide()
{
    Image_img_exit.Visibility.unBind(gm::csm::Data_Exit_Button_Visibility, mBindingsIds[0]);
}

void Screen_8014::onScreenShow()
{
    mBindingsIds[0] = Image_img_exit.Visibility.bind(gm::csm::Data_Exit_Button_Visibility);
}


}//namespace csm
}//namespace gm
