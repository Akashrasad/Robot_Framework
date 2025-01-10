#include "Screen_8009.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


Screen_8009::Screen_8009():BindableScreenLogic("8009")
{
}

void Screen_8009::onScreenHide()
{
    Image_img_btn_close_active.Visibility.unBind(Data_Close_Button_Visibility, mBindingsIds[0]);
}

void Screen_8009::onScreenShow()
{
    mBindingsIds[0] = Image_img_btn_close_active.Visibility.bind(Data_Close_Button_Visibility);
}


}//namespace csm
}//namespace gm
