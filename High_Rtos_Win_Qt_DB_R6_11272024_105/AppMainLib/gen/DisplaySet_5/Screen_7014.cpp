#include "Screen_7014.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7014::onScreenHide()
{
    GroupLabel_apa_4_13_btn2_f_csm.State.unBind(gm::csm::Data_APA_SELECTION_EXIT_OUT_STATE, mBindingsIds[0]);
    GroupLabel_apa_4_13_TryAgain_csm.State.unBind(gm::csm::Data_APA_SELECTION_TRY_AGAIN_STATE, mBindingsIds[1]);
    GroupImage_img_exit_again_btn.State.unBind(gm::csm::Data_APA_SELECTION_EXIT_OUT_STATE, mBindingsIds[2]);
    GroupImage_img_try_again_btn.State.unBind(gm::csm::Data_APA_SELECTION_TRY_AGAIN_STATE, mBindingsIds[3]);
}

void Screen_7014::onScreenShow()
{
    mBindingsIds[0] = GroupLabel_apa_4_13_btn2_f_csm.State.bind(gm::csm::Data_APA_SELECTION_EXIT_OUT_STATE);
    mBindingsIds[1] = GroupLabel_apa_4_13_TryAgain_csm.State.bind(gm::csm::Data_APA_SELECTION_TRY_AGAIN_STATE);
    mBindingsIds[2] = GroupImage_img_exit_again_btn.State.bind(gm::csm::Data_APA_SELECTION_EXIT_OUT_STATE);
    mBindingsIds[3] = GroupImage_img_try_again_btn.State.bind(gm::csm::Data_APA_SELECTION_TRY_AGAIN_STATE);
}


}//namespace csm
}//namespace gm
