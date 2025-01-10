#include "Screen_9003.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_9003::onScreenHide()
{
    Image_img_hvac_heated_seat_pop_up_back.State.unBind(gm::csm::Data_HVAC_RIGHT_BACK_HEATED_SEAT, mBindingsIds[0]);
    Image_img_hvac_heated_seat_pop_up.State.unBind(gm::csm::Data_HVAC_RIGHT_CUSION_HEATED_SEAT, mBindingsIds[1]);
    Image_img_hvac_vented_seat_pop_up.State.unBind(gm::csm::Data_HVAC_RIGHT_COOLED_BACK_AND_CUSION_HEATED_SEAT, mBindingsIds[2]);
    Image_img_hvac_off.State.unBind(gm::csm::Data_HVAC_RIGHT_HEATED_SEAT_OFF, mBindingsIds[3]);
    Image_img_hvac_heated_seat_back_bottom.State.unBind(gm::csm::Data_HVAC_RIGHT_BACK_AND_CUSION_HEATED_SEAT, mBindingsIds[4]);
}

void Screen_9003::onScreenShow()
{
    mBindingsIds[0] = Image_img_hvac_heated_seat_pop_up_back.State.bind(gm::csm::Data_HVAC_RIGHT_BACK_HEATED_SEAT);
    mBindingsIds[1] = Image_img_hvac_heated_seat_pop_up.State.bind(gm::csm::Data_HVAC_RIGHT_CUSION_HEATED_SEAT);
    mBindingsIds[2] = Image_img_hvac_vented_seat_pop_up.State.bind(gm::csm::Data_HVAC_RIGHT_COOLED_BACK_AND_CUSION_HEATED_SEAT);
    mBindingsIds[3] = Image_img_hvac_off.State.bind(gm::csm::Data_HVAC_RIGHT_HEATED_SEAT_OFF);
    mBindingsIds[4] = Image_img_hvac_heated_seat_back_bottom.State.bind(gm::csm::Data_HVAC_RIGHT_BACK_AND_CUSION_HEATED_SEAT);
}


}//namespace csm
}//namespace gm
