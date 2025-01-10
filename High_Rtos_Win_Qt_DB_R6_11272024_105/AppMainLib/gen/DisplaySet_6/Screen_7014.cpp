#include "Screen_7014.h"

#include "RTOS_InternalData.h"
#include "StringData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7014::Label_apa_4_13_UnableToConnectDesc_csm_bindings()
{
    std::string text = Label_apa_4_13_UnableToConnectDesc_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::DATA_REMOTE_PARK_DYNAMIC_LABEL));
    Label_apa_4_13_UnableToConnectDesc_csm = text.c_str();
}

void Screen_7014::onScreenHide()
{
    Group_grp_try_again_btn.Visibility.unBind(gm::csm::Data_APA_UNABLE_TRY_AGAIN_VISIBILITY, mBindingsIds[0]);
    GroupLabel_apa_4_13_TryAgain_csm.State.unBind(gm::csm::Data_APA_SELECTION_TRY_AGAIN_STATE, mBindingsIds[2]);
    GroupImage_img_exit_again_btn.State.unBind(gm::csm::Data_APA_SELECTION_EXIT_OUT_STATE, mBindingsIds[3]);
    Group_grp_exit_again_btn.Visibility.unBind(gm::csm::Data_APA_UNABLE_EXIT_VISIBILITY, mBindingsIds[4]);
    GroupImage_img_try_again_btn.State.unBind(gm::csm::Data_APA_SELECTION_TRY_AGAIN_STATE, mBindingsIds[5]);
}

void Screen_7014::onScreenShow()
{
    mBindingsIds[0] = Group_grp_try_again_btn.Visibility.bind(gm::csm::Data_APA_UNABLE_TRY_AGAIN_VISIBILITY);
    addDependency(this, &Screen_7014::Label_apa_4_13_UnableToConnectDesc_csm_bindings,gm::csm::DATA_REMOTE_PARK_DYNAMIC_LABEL);
    mBindingsIds[2] = GroupLabel_apa_4_13_TryAgain_csm.State.bind(gm::csm::Data_APA_SELECTION_TRY_AGAIN_STATE);
    mBindingsIds[3] = GroupImage_img_exit_again_btn.State.bind(gm::csm::Data_APA_SELECTION_EXIT_OUT_STATE);
    mBindingsIds[4] = Group_grp_exit_again_btn.Visibility.bind(gm::csm::Data_APA_UNABLE_EXIT_VISIBILITY);
    mBindingsIds[5] = GroupImage_img_try_again_btn.State.bind(gm::csm::Data_APA_SELECTION_TRY_AGAIN_STATE);
}


}//namespace csm
}//namespace gm
