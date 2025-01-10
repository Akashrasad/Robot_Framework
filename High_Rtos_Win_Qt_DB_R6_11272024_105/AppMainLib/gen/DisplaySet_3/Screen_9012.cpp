#include "Screen_9012.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_9012::onScreenHide()
{
    Image_img_btn_Left_Heated_Seat.Visibility.unBind(gm::csm::Data_HVAC_SEAT_BOTTOM_BAR_VISIBILITY, mBindingsIds[0]);
    Image_img_btn_Left_Heated_Seat.State.unBind(gm::csm::Data_HVAC_LEFT_SEAT_BOTTOM_BAR, mBindingsIds[1]);
    Label_dyn_lbl_lefttemp.Text.unBind(gm::csm::Data_HVAC_SINGLEZONE_SETTEMP, mBindingsIds[2]);
    Image_img_modeman_air_foot.State.unBind(gm::csm::Data_HVAC_FLOOR_SINGLE_ZONE, mBindingsIds[3]);
    Image_img_modeman_air_face.State.unBind(gm::csm::Data_HVAC_VENT_SINGLE_ZONE, mBindingsIds[4]);
    Image_img_btn_Right_Heated_Seat.Visibility.unBind(gm::csm::Data_HVAC_SEAT_BOTTOM_BAR_VISIBILITY, mBindingsIds[5]);
    Image_img_btn_Right_Heated_Seat.State.unBind(gm::csm::Data_HVAC_RIGHT_SEAT_BOTTOM_BAR, mBindingsIds[6]);
    Image_img_windshield.State.unBind(gm::csm::Data_HVAC_WINDSHIELD_SINGLE_ZONE, mBindingsIds[7]);
    Image_icn_recirculated_air_car.State.unBind(gm::csm::Data_HVAC_RECIRCULATE_SINGLE_ZONE, mBindingsIds[8]);
}

void Screen_9012::onScreenShow()
{
    mBindingsIds[0] = Image_img_btn_Left_Heated_Seat.Visibility.bind(gm::csm::Data_HVAC_SEAT_BOTTOM_BAR_VISIBILITY);
    mBindingsIds[1] = Image_img_btn_Left_Heated_Seat.State.bind(gm::csm::Data_HVAC_LEFT_SEAT_BOTTOM_BAR);
    mBindingsIds[2] = Label_dyn_lbl_lefttemp.Text.bind(gm::csm::Data_HVAC_SINGLEZONE_SETTEMP);
    mBindingsIds[3] = Image_img_modeman_air_foot.State.bind(gm::csm::Data_HVAC_FLOOR_SINGLE_ZONE);
    mBindingsIds[4] = Image_img_modeman_air_face.State.bind(gm::csm::Data_HVAC_VENT_SINGLE_ZONE);
    mBindingsIds[5] = Image_img_btn_Right_Heated_Seat.Visibility.bind(gm::csm::Data_HVAC_SEAT_BOTTOM_BAR_VISIBILITY);
    mBindingsIds[6] = Image_img_btn_Right_Heated_Seat.State.bind(gm::csm::Data_HVAC_RIGHT_SEAT_BOTTOM_BAR);
    mBindingsIds[7] = Image_img_windshield.State.bind(gm::csm::Data_HVAC_WINDSHIELD_SINGLE_ZONE);
    mBindingsIds[8] = Image_icn_recirculated_air_car.State.bind(gm::csm::Data_HVAC_RECIRCULATE_SINGLE_ZONE);
}


}//namespace csm
}//namespace gm
