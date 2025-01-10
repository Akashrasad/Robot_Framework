#include "Screen_7015.h"

#include "RTOS_CustomDataPool.h"
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
    Image_img_auto_steering.Visibility.unBind(gm::csm::Data_APA_AUTO_STEERING_ICON_VISIBILITY, mBindingsIds[1]);
    Image_img_upa_warning.Visibility.unBind(gm::csm::Data_APA_CAMERA_ERROR_ICON_VISIBILITY, mBindingsIds[2]);
    ProgressBar_7015_img_pogressbar.ProgressBarValue.unBind(gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL, mBindingsIds[3]);
    Image_img_icn_cameraerror.Visibility.unBind(gm::csm::Data_APA_CAMERA_ERROR_ICON_VISIBILITY, mBindingsIds[4]);
    ProgressBar_7015_img_pogressbar_green.Visibility.unBind(gm::csm::APA_MANUER_PROGRESSBAR_GREEN_VISIBILITY_INTERNAL, mBindingsIds[5]);
    ProgressBar_7015_img_pogressbar_green.ProgressBarValue.unBind(gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL, mBindingsIds[6]);
    ProgressBar_7015_img_pogressbar_amber.Visibility.unBind(gm::csm::APA_MANUER_PROGRESSBAR_AMBER_VISIBILITY_INTERNAL, mBindingsIds[7]);
    ProgressBar_7015_img_pogressbar_amber.ProgressBarValue.unBind(gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL, mBindingsIds[8]);
    Label_apa_5_1_maneuvermessaging1_csm.State.unBind(gm::csm::APA_WARNING_INDICATION_REQUEST, mBindingsIds[9]);
}

void Screen_7015::onScreenShow()
{
    mBindingsIds[0] = Image_img_CameraViews.Visibility.bind(gm::csm::APA_CANCELED_VISIBILITY_INTERNAL);
    mBindingsIds[1] = Image_img_auto_steering.Visibility.bind(gm::csm::Data_APA_AUTO_STEERING_ICON_VISIBILITY);
    mBindingsIds[2] = Image_img_upa_warning.Visibility.bind(gm::csm::Data_APA_CAMERA_ERROR_ICON_VISIBILITY);
    addDependency(this, &Screen_7015::Widget_Logic_Visibility_7015_img_pogressbar, gm::csm::APA_CANCELED_VISIBILITY_INTERNAL);
    mBindingsIds[3] = ProgressBar_7015_img_pogressbar.ProgressBarValue.bind(gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL);
    mBindingsIds[4] = Image_img_icn_cameraerror.Visibility.bind(gm::csm::Data_APA_CAMERA_ERROR_ICON_VISIBILITY);
    mBindingsIds[5] = ProgressBar_7015_img_pogressbar_green.Visibility.bind(gm::csm::APA_MANUER_PROGRESSBAR_GREEN_VISIBILITY_INTERNAL);
    mBindingsIds[6] = ProgressBar_7015_img_pogressbar_green.ProgressBarValue.bind(gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL);
    mBindingsIds[7] = ProgressBar_7015_img_pogressbar_amber.Visibility.bind(gm::csm::APA_MANUER_PROGRESSBAR_AMBER_VISIBILITY_INTERNAL);
    mBindingsIds[8] = ProgressBar_7015_img_pogressbar_amber.ProgressBarValue.bind(gm::csm::APA_PARK_MANUER_PROGRESS_INTERNAL);
    mBindingsIds[9] = Label_apa_5_1_maneuvermessaging1_csm.State.bind(gm::csm::APA_WARNING_INDICATION_REQUEST);
}


}//namespace csm
}//namespace gm
