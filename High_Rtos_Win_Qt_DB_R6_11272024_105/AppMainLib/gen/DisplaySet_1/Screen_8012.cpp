#include "Screen_8012.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_8012::onScreenHide()
{
    Image_img_btn_touchpoint_3.State.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[0]);
    Image_img_btn_touchpoint_6.State.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[1]);
    Image_img_btn_touchpoint_5.State.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[2]);
    Image_img_btn_touchpoint_2.State.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[3]);
    Image_img_btn_tabs_camera_bowl.State.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[4]);
    Group_grp_img_exit.Visibility.unBind(gm::csm::Data_Close_Button_Visibility, mBindingsIds[5]);
    Image_img_btn_touchpoint_7.State.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[6]);
    Image_img_btn_touchpoint_8.State.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[7]);
    Image_img_btn_touchpoint_4.State.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[8]);
    Image_img_btn_touchpoint_1.State.unBind(gm::csm::VPM_MFCBOWL, mBindingsIds[9]);
}

void Screen_8012::onScreenShow()
{
    mBindingsIds[0] = Image_img_btn_touchpoint_3.State.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[1] = Image_img_btn_touchpoint_6.State.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[2] = Image_img_btn_touchpoint_5.State.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[3] = Image_img_btn_touchpoint_2.State.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[4] = Image_img_btn_tabs_camera_bowl.State.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[5] = Group_grp_img_exit.Visibility.bind(gm::csm::Data_Close_Button_Visibility);
    mBindingsIds[6] = Image_img_btn_touchpoint_7.State.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[7] = Image_img_btn_touchpoint_8.State.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[8] = Image_img_btn_touchpoint_4.State.bind(gm::csm::VPM_MFCBOWL);
    mBindingsIds[9] = Image_img_btn_touchpoint_1.State.bind(gm::csm::VPM_MFCBOWL);
}


}//namespace csm
}//namespace gm
