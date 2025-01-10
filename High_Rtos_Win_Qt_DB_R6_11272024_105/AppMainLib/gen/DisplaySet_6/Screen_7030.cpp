#include "Screen_7030.h"

#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7030::onScreenHide()
{
    Label_apa_3_0_ParaRight_csm.State.unBind(gm::csm::Data_APA_RIGHT_PARK_INSTRUCTION, mBindingsIds[0]);
    Image_img_park_left_parallel.State.unBind(gm::csm::Data_APA_LEFT_PARK_INSTRUCTION, mBindingsIds[1]);
    Image_img_park_right_perp.State.unBind(gm::csm::Data_APA_RIGHT_PARK_INSTRUCTION, mBindingsIds[2]);
    Image_img_park_left_perp.State.unBind(gm::csm::Data_APA_LEFT_PARK_INSTRUCTION, mBindingsIds[3]);
    Label_apa_4_0_changeselection_f_csm.State.unBind(APA_PARK_INSTRUCTIONS_INTERNAL, mBindingsIds[4]);
    Label_apa_3_0_ParaLeft_csm.State.unBind(gm::csm::Data_APA_LEFT_PARK_INSTRUCTION, mBindingsIds[5]);
    Label_apa_3_0_PerpLeft_csm.State.unBind(gm::csm::Data_APA_LEFT_PARK_INSTRUCTION, mBindingsIds[6]);
    Image_img_park_right_parallel.State.unBind(gm::csm::Data_APA_RIGHT_PARK_INSTRUCTION, mBindingsIds[7]);
    Label_apa_3_0_PerpRight_csm.State.unBind(gm::csm::Data_APA_RIGHT_PARK_INSTRUCTION, mBindingsIds[8]);
}

void Screen_7030::onScreenShow()
{
    mBindingsIds[0] = Label_apa_3_0_ParaRight_csm.State.bind(gm::csm::Data_APA_RIGHT_PARK_INSTRUCTION);
    mBindingsIds[1] = Image_img_park_left_parallel.State.bind(gm::csm::Data_APA_LEFT_PARK_INSTRUCTION);
    mBindingsIds[2] = Image_img_park_right_perp.State.bind(gm::csm::Data_APA_RIGHT_PARK_INSTRUCTION);
    mBindingsIds[3] = Image_img_park_left_perp.State.bind(gm::csm::Data_APA_LEFT_PARK_INSTRUCTION);
    mBindingsIds[4] = Label_apa_4_0_changeselection_f_csm.State.bind(APA_PARK_INSTRUCTIONS_INTERNAL);
    mBindingsIds[5] = Label_apa_3_0_ParaLeft_csm.State.bind(gm::csm::Data_APA_LEFT_PARK_INSTRUCTION);
    mBindingsIds[6] = Label_apa_3_0_PerpLeft_csm.State.bind(gm::csm::Data_APA_LEFT_PARK_INSTRUCTION);
    mBindingsIds[7] = Image_img_park_right_parallel.State.bind(gm::csm::Data_APA_RIGHT_PARK_INSTRUCTION);
    mBindingsIds[8] = Label_apa_3_0_PerpRight_csm.State.bind(gm::csm::Data_APA_RIGHT_PARK_INSTRUCTION);
}


}//namespace csm
}//namespace gm
