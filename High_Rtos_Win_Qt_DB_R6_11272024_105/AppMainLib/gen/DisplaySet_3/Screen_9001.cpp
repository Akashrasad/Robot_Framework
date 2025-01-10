#include "Screen_9001.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_9001::Data_HVAC_FRONT_SYNC_bindings()
{
    const auto int_val = atoi(gm::csm::Data_HVAC_FRONT_SYNC.data().c_str());
    Image_img_btn_Sync.State = int_val;
}

void Screen_9001::onScreenHide()
{
    Image_img_btn_Right_Heated_Seat.Visibility.unBind(gm::csm::Data_HVAC_SEAT_BOTTOM_BAR_VISIBILITY, mBindingsIds[0]);
    Image_img_btn_Right_Heated_Seat.State.unBind(gm::csm::Data_HVAC_RIGHT_SEAT_BOTTOM_BAR, mBindingsIds[1]);
    Label_dyn_lbl_lefttemp.Text.unBind(gm::csm::Data_HVAC_FRONT_LEFTSETTEMP, mBindingsIds[2]);
    Image_img_fan_down_normal.State.unBind(Data_HVAC_FRONT_FANSPEED, mBindingsIds[3]);
    Image_img_circulate_suv_normal.State.unBind(Data_HVAC_RECIRCULATE_VALUE, mBindingsIds[4]);
    Image_img_fan_speed_level_4_selected.State.unBind(Data_HVAC_FRONT_LEVEL_FANSPEED, mBindingsIds[5]);
    Label_dyn_lbl_righttemp.Text.unBind(gm::csm::Data_HVAC_FRONT_RIGHTSETTEMP, mBindingsIds[6]);
    Image_img_btn_Left_Heated_Seat.Visibility.unBind(gm::csm::Data_HVAC_SEAT_BOTTOM_BAR_VISIBILITY, mBindingsIds[7]);
    Image_img_btn_Left_Heated_Seat.State.unBind(gm::csm::Data_HVAC_LEFT_SEAT_BOTTOM_BAR, mBindingsIds[8]);
    Image_img_air_foot_selected.State.unBind(Data_HVAC_DOWN_BLOWERMODE, mBindingsIds[9]);
    Image_img_air_face_selected.State.unBind(Data_HVAC_FRONT_BLOWERMODE, mBindingsIds[10]);
    Image_img_btn_ac.State.unBind(gm::csm::Data_HVAC_AIRCONDITION_VALUE, mBindingsIds[11]);
    Image_img_fan_up_normal.State.unBind(Data_HVAC_FRONT_FANSPEED, mBindingsIds[13]);
}

void Screen_9001::onScreenShow()
{
    mBindingsIds[0] = Image_img_btn_Right_Heated_Seat.Visibility.bind(gm::csm::Data_HVAC_SEAT_BOTTOM_BAR_VISIBILITY);
    mBindingsIds[1] = Image_img_btn_Right_Heated_Seat.State.bind(gm::csm::Data_HVAC_RIGHT_SEAT_BOTTOM_BAR);
    mBindingsIds[2] = Label_dyn_lbl_lefttemp.Text.bind(gm::csm::Data_HVAC_FRONT_LEFTSETTEMP);
    mBindingsIds[3] = Image_img_fan_down_normal.State.bind(Data_HVAC_FRONT_FANSPEED);
    mBindingsIds[4] = Image_img_circulate_suv_normal.State.bind(Data_HVAC_RECIRCULATE_VALUE);
    mBindingsIds[5] = Image_img_fan_speed_level_4_selected.State.bind(Data_HVAC_FRONT_LEVEL_FANSPEED);
    mBindingsIds[6] = Label_dyn_lbl_righttemp.Text.bind(gm::csm::Data_HVAC_FRONT_RIGHTSETTEMP);
    mBindingsIds[7] = Image_img_btn_Left_Heated_Seat.Visibility.bind(gm::csm::Data_HVAC_SEAT_BOTTOM_BAR_VISIBILITY);
    mBindingsIds[8] = Image_img_btn_Left_Heated_Seat.State.bind(gm::csm::Data_HVAC_LEFT_SEAT_BOTTOM_BAR);
    mBindingsIds[9] = Image_img_air_foot_selected.State.bind(Data_HVAC_DOWN_BLOWERMODE);
    mBindingsIds[10] = Image_img_air_face_selected.State.bind(Data_HVAC_FRONT_BLOWERMODE);
    mBindingsIds[11] = Image_img_btn_ac.State.bind(gm::csm::Data_HVAC_AIRCONDITION_VALUE);
    addDependency(this, &Screen_9001::Data_HVAC_FRONT_SYNC_bindings, gm::csm::Data_HVAC_FRONT_SYNC);
    mBindingsIds[13] = Image_img_fan_up_normal.State.bind(Data_HVAC_FRONT_FANSPEED);
}


}//namespace csm
}//namespace gm
