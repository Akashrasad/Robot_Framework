#include "Screen_9004.h"

#include "RTOS_InternalData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_9004::onScreenHide()
{
    Image_img_hvac_airflow_foot.State.unBind(gm::csm::Data_HVAC_AIRCONDITION, mBindingsIds[0]);
    Image_img_hvac_airflow_face.State.unBind(gm::csm::Data_HVAC_AIRCONDITION, mBindingsIds[1]);
    Image_img_hvac_airflow_windshield.State.unBind(gm::csm::Data_HVAC_AIRCONDITION, mBindingsIds[2]);
}

void Screen_9004::onScreenShow()
{
    mBindingsIds[0] = Image_img_hvac_airflow_foot.State.bind(gm::csm::Data_HVAC_AIRCONDITION);
    mBindingsIds[1] = Image_img_hvac_airflow_face.State.bind(gm::csm::Data_HVAC_AIRCONDITION);
    mBindingsIds[2] = Image_img_hvac_airflow_windshield.State.bind(gm::csm::Data_HVAC_AIRCONDITION);
}


}//namespace csm
}//namespace gm
