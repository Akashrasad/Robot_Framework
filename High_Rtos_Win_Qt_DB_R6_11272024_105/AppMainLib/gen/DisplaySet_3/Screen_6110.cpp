#include "Screen_6110.h"

#include "RTOS_InternalData.h"
#include "StringData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6110::Label_dyn_lbl_PressStartStopButton_csm_bindings()
{
    std::string text = Label_dyn_lbl_PressStartStopButton_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::Data_PINTOSTART_REMAINING_SCREEN_SPECIFIC_TIME_TEXT));
    Label_dyn_lbl_PressStartStopButton_csm = text.c_str();
}

void Screen_6110::onScreenHide()
{
    ProgressBar_6110_img_progressbar.ProgressBarValue.unBind(gm::csm::PINTOSTART_REMAINING_SCREEN_SPECIFIC_TIME_INTERNAL, mBindingsIds[1]);
}

void Screen_6110::onScreenShow()
{
    addDependency(this, &Screen_6110::Label_dyn_lbl_PressStartStopButton_csm_bindings,gm::csm::Data_PINTOSTART_REMAINING_SCREEN_SPECIFIC_TIME_TEXT);
    mBindingsIds[1] = ProgressBar_6110_img_progressbar.ProgressBarValue.bind(gm::csm::PINTOSTART_REMAINING_SCREEN_SPECIFIC_TIME_INTERNAL);
}


}//namespace csm
}//namespace gm
