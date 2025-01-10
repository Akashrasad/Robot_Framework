#include "Screen_8002.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8002::onScreenHide()
{
    Label_dyn_safetysystems_7_3_ParkAssistOff_f_csm.State.unBind(gm::csm::RVC_SAFETYSYSTEM_PARKASSIST, mBindingsIds[0]);
    Image_img_caution_left_Indicator.Visibility.unBind(gm::csm::Data_Left_RCTA_Visibility, mBindingsIds[1]);
    Image_img_UPA_symbol_3.Visibility.unBind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_3, mBindingsIds[2]);
    Image_img_trailer_assist.State.unBind(gm::csm::Data_RVC_TRAILER_GUIDELINE_TOGGLE, mBindingsIds[3]);
    Image_img_caution_right_Indicator.Visibility.unBind(gm::csm::Data_Right_RCTA_Visibility, mBindingsIds[4]);
    Image_img_UPA_symbol_2.Visibility.unBind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_2, mBindingsIds[5]);
    Image_img_guideliness_view.State.unBind(gm::csm::Data_RVC_STANDARD_GUIDELINE_TOGGLE, mBindingsIds[6]);
    Image_img_UPA_symbol_4.Visibility.unBind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_4, mBindingsIds[7]);
    Image_img_UPA_symbol_1.Visibility.unBind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_1, mBindingsIds[8]);
    Image_img_btn_close_active.Visibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[9]);
    RvcGuideLines_img_rvc_widget.Visibility.unBind(gm::csm::RVC_GUIDELINES_VISIBILITY, mBindingsIds[10]);
    RvcGuideLines_img_rvc_widget.WheelAngle.unBind(gm::csm::RVC_STEERINGWHEEL_ANGLE, mBindingsIds[11]);
}

void Screen_8002::onScreenShow()
{
    mBindingsIds[0] = Label_dyn_safetysystems_7_3_ParkAssistOff_f_csm.State.bind(gm::csm::RVC_SAFETYSYSTEM_PARKASSIST);
    mBindingsIds[1] = Image_img_caution_left_Indicator.Visibility.bind(gm::csm::Data_Left_RCTA_Visibility);
    mBindingsIds[2] = Image_img_UPA_symbol_3.Visibility.bind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_3);
    mBindingsIds[3] = Image_img_trailer_assist.State.bind(gm::csm::Data_RVC_TRAILER_GUIDELINE_TOGGLE);
    mBindingsIds[4] = Image_img_caution_right_Indicator.Visibility.bind(gm::csm::Data_Right_RCTA_Visibility);
    mBindingsIds[5] = Image_img_UPA_symbol_2.Visibility.bind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_2);
    mBindingsIds[6] = Image_img_guideliness_view.State.bind(gm::csm::Data_RVC_STANDARD_GUIDELINE_TOGGLE);
    mBindingsIds[7] = Image_img_UPA_symbol_4.Visibility.bind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_4);
    mBindingsIds[8] = Image_img_UPA_symbol_1.Visibility.bind(gm::csm::Data_OBSTRUCTIONFOUND_Visibility_1);
    mBindingsIds[9] = Image_img_btn_close_active.Visibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[10] = RvcGuideLines_img_rvc_widget.Visibility.bind(gm::csm::RVC_GUIDELINES_VISIBILITY);
    mBindingsIds[11] = RvcGuideLines_img_rvc_widget.WheelAngle.bind(gm::csm::RVC_STEERINGWHEEL_ANGLE);
}


}//namespace csm
}//namespace gm
