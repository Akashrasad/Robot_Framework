#include "Screen_7002.h"

#include "RTOS_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7002::onScreenHide()
{
    Label_apa_3_0_ParaLeft_csm.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[0]);
    Label_apa_3_0_ParaRight_csm.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[1]);
    Image_img_park_right_parallel.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[2]);
    Image_img_park_left_perp.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[3]);
    Label_apa_3_1_ToParkDrawer_csm.State.unBind(gm::csm::APA_EXIT_PARK_DRAWER_REQUEST, mBindingsIds[4]);
    Label_apa_3_1_WhatTypeExit_csm.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[5]);
    Image_img_park_left_parallel.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[6]);
    Label_apa_3_0_PerpRight_csm.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[7]);
    Label_apa_3_0_PerpLeft_csm.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[8]);
    Image_img_btn_back.Visibility.unBind(gm::csm::APA_EXIT_PARK_DRAWER_VISIBILITY_INTERNAL, mBindingsIds[9]);
    Image_img_btn_back.State.unBind(gm::csm::APA_EXIT_PARK_DRAWER_REQUEST, mBindingsIds[10]);
    Image_img_park_right_perp.State.unBind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[11]);
}

void Screen_7002::onScreenShow()
{
    mBindingsIds[0] = Label_apa_3_0_ParaLeft_csm.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[1] = Label_apa_3_0_ParaRight_csm.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[2] = Image_img_park_right_parallel.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[3] = Image_img_park_left_perp.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[4] = Label_apa_3_1_ToParkDrawer_csm.State.bind(gm::csm::APA_EXIT_PARK_DRAWER_REQUEST);
    mBindingsIds[5] = Label_apa_3_1_WhatTypeExit_csm.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[6] = Image_img_park_left_parallel.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[7] = Label_apa_3_0_PerpRight_csm.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[8] = Label_apa_3_0_PerpLeft_csm.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[9] = Image_img_btn_back.Visibility.bind(gm::csm::APA_EXIT_PARK_DRAWER_VISIBILITY_INTERNAL);
    mBindingsIds[10] = Image_img_btn_back.State.bind(gm::csm::APA_EXIT_PARK_DRAWER_REQUEST);
    mBindingsIds[11] = Image_img_park_right_perp.State.bind(gm::csm::APA_PARK_INSTRUCTIONS_INTERNAL);
}


}//namespace csm
}//namespace gm
