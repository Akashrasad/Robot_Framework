#include "Screen_7001.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7001::onScreenHide()
{
    Image_img_park_right_perp.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[0]);
    Image_img_park_right_parallel.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[1]);
    Label_apa_3_0_PerpRight_csm.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[2]);
    GroupImage_btn_tab_two.State.unBind(APA_EXIT_PARK_DRAWER_REQUEST, mBindingsIds[3]);
    Image_img_park_left_parallel.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[4]);
    GroupLabel_apa_dyn_3_0_Exit_f_csm.State.unBind(APA_EXIT_PARK_DRAWER_REQUEST, mBindingsIds[5]);
    Label_apa_3_0_ParaRight_csm.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[6]);
    Label_apa_3_0_PerpLeft_csm.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[7]);
    Label_apa_3_0_ParaLeft_csm.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[8]);
    Group_grp_tab_two.Visibility.unBind(gm::csm::APA_EXIT_PARK_DRAWER_VISIBILITY_INTERNAL, mBindingsIds[9]);
    Label_apa_3_0_WhatTypePark_csm.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[10]);
    Label_apa_dyn_3_0_ToExitDrawer_csm.State.unBind(APA_EXIT_PARK_DRAWER_REQUEST, mBindingsIds[11]);
    Image_img_park_left_perp.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[12]);
}

void Screen_7001::onScreenShow()
{
    mBindingsIds[0] = Image_img_park_right_perp.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[1] = Image_img_park_right_parallel.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[2] = Label_apa_3_0_PerpRight_csm.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[3] = GroupImage_btn_tab_two.State.bind(APA_EXIT_PARK_DRAWER_REQUEST);
    mBindingsIds[4] = Image_img_park_left_parallel.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[5] = GroupLabel_apa_dyn_3_0_Exit_f_csm.State.bind(APA_EXIT_PARK_DRAWER_REQUEST);
    mBindingsIds[6] = Label_apa_3_0_ParaRight_csm.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[7] = Label_apa_3_0_PerpLeft_csm.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[8] = Label_apa_3_0_ParaLeft_csm.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[9] = Group_grp_tab_two.Visibility.bind(gm::csm::APA_EXIT_PARK_DRAWER_VISIBILITY_INTERNAL);
    mBindingsIds[10] = Label_apa_3_0_WhatTypePark_csm.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[11] = Label_apa_dyn_3_0_ToExitDrawer_csm.State.bind(APA_EXIT_PARK_DRAWER_REQUEST);
    mBindingsIds[12] = Image_img_park_left_perp.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
}


}//namespace csm
}//namespace gm
