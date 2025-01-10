#include "Screen_8008.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8008::onScreenHide()
{
    Group_grp_img_exit.Visibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[0]);
    Image_img_btn_close_active.Visibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[1]);
}

void Screen_8008::onScreenShow()
{
    mBindingsIds[0] = Group_grp_img_exit.Visibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[1] = Image_img_btn_close_active.Visibility.bind(gm::csm::Data_Close_Button_Visibility);
}


}//namespace csm
}//namespace gm
