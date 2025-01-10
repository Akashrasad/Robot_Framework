#include "Screen_7015.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_7015::Widget_Logic_Visibility_7015_img_pogressbar()
{
    const auto var_002 = gm::csm::APA_CANCELED_VISIBILITY_INTERNAL.data();
    const auto var_001 = !(var_002);
    
    ProgressBar_7015_img_pogressbar.Visibility = var_001;
}

void Screen_7015::onScreenHide()
{
    Image_img_CameraViews.Visibility.unBind(gm::csm::APA_CANCELED_VISIBILITY_INTERNAL, mBindingsIds[0]);
    ProgressBar_7015_img_pogressbar.ProgressBarValue.unBind(gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL, mBindingsIds[1]);
    ProgressBar_7015_img_pogressbar_green.Visibility.unBind(gm::csm::APA_MANUER_PROGRESSBAR_GREEN_VISIBILITY_INTERNAL, mBindingsIds[2]);
    ProgressBar_7015_img_pogressbar_green.ProgressBarValue.unBind(gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL, mBindingsIds[3]);
    ProgressBar_7015_img_pogressbar_amber.Visibility.unBind(gm::csm::APA_MANUER_PROGRESSBAR_AMBER_VISIBILITY_INTERNAL, mBindingsIds[4]);
    ProgressBar_7015_img_pogressbar_amber.ProgressBarValue.unBind(gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL, mBindingsIds[5]);
    Label_apa_5_1_maneuvermessaging1_csm.State.unBind(APA_WARNING_INDICATION_REQUEST, mBindingsIds[6]);
}

void Screen_7015::onScreenShow()
{
    mBindingsIds[0] = Image_img_CameraViews.Visibility.bind(gm::csm::APA_CANCELED_VISIBILITY_INTERNAL);
    addDependency(this, &Screen_7015::Widget_Logic_Visibility_7015_img_pogressbar, gm::csm::APA_CANCELED_VISIBILITY_INTERNAL);
    mBindingsIds[1] = ProgressBar_7015_img_pogressbar.ProgressBarValue.bind(gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL);
    mBindingsIds[2] = ProgressBar_7015_img_pogressbar_green.Visibility.bind(gm::csm::APA_MANUER_PROGRESSBAR_GREEN_VISIBILITY_INTERNAL);
    mBindingsIds[3] = ProgressBar_7015_img_pogressbar_green.ProgressBarValue.bind(gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL);
    mBindingsIds[4] = ProgressBar_7015_img_pogressbar_amber.Visibility.bind(gm::csm::APA_MANUER_PROGRESSBAR_AMBER_VISIBILITY_INTERNAL);
    mBindingsIds[5] = ProgressBar_7015_img_pogressbar_amber.ProgressBarValue.bind(gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL);
    mBindingsIds[6] = Label_apa_5_1_maneuvermessaging1_csm.State.bind(APA_WARNING_INDICATION_REQUEST);
}


}//namespace csm
}//namespace gm
