#include "Screen_6114.h"

#include "RTOS_InternalData.h"
#include "StringData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6114::Label_virtualcontrols_1_14_2V_dynamicMileageNumber_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_2V_dynamicMileageNumber_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_RANGE_MILEAGE_NUMBER_VALUE));
    Label_virtualcontrols_1_14_2V_dynamicMileageNumber_csm = text.c_str();
}

void Screen_6114::Label_virtualcontrols_1_14_2V_measureOfDistance_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_2V_measureOfDistance_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_RANGE_MEASURE_OF_DISTANCE));
    Label_virtualcontrols_1_14_2V_measureOfDistance_csm = text.c_str();
}

void Screen_6114::Label_virtualcontrols_1_14_2V_rangeReservePercent_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_2V_rangeReservePercent_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_PERCENT_TEXT));
    Label_virtualcontrols_1_14_2V_rangeReservePercent_csm = text.c_str();
}

void Screen_6114::Label_virtualcontrols_1_14_2_body_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_2_body_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_OUTLET_HEADER));
    Label_virtualcontrols_1_14_2_body_csm = text.c_str();
}

void Screen_6114::Label_virtualcontrols_1_14_2_percentMile_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_2_percentMile_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_PERCENT_TEXT));
    FindReplaceString(text,"%2$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_RANGE_MILEAGE_NUMBER_VALUE));
    Label_virtualcontrols_1_14_2_percentMile_csm = text.c_str();
}

void Screen_6114::onScreenHide()
{
    Label_virtualcontrols_1_14_2_descriptor_csm.State.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[0]);
    Image_img_up_arrow.State.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_UP_ARROW, mBindingsIds[1]);
    Label_virtualcontrols_1_14_2V_measureOfDistance_csm.State.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[3]);
    Image_img_down_arrow.State.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_DOWN_ARROW, mBindingsIds[4]);
    Label_virtualcontrols_1_14_2V_dynamicMileageNumber_csm.State.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[6]);
    Label_virtualcontrols_1_14_2_percentMile_csm.State.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[9]);
    Label_virtualcontrols_1_14_2V_rangeReservePercent_csm.State.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[12]);
    Label_virtualcontrols_1_14_2V_header_csm.State.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[13]);
    ProgressBar_6114_img_battery_level_progressbar.ProgressBarValue.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_PERCENT_VALUE, mBindingsIds[14]);
}

void Screen_6114::onScreenShow()
{
    mBindingsIds[0] = Label_virtualcontrols_1_14_2_descriptor_csm.State.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    mBindingsIds[1] = Image_img_up_arrow.State.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_UP_ARROW);
    mBindingsIds[3] = Label_virtualcontrols_1_14_2V_measureOfDistance_csm.State.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    addDependency(this, &Screen_6114::Label_virtualcontrols_1_14_2V_measureOfDistance_csm_bindings,gm::csm::SMARTCONTRSOLS_RANGE_MEASURE_OF_DISTANCE);
    mBindingsIds[4] = Image_img_down_arrow.State.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_DOWN_ARROW);
    mBindingsIds[6] = Label_virtualcontrols_1_14_2V_dynamicMileageNumber_csm.State.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    addDependency(this, &Screen_6114::Label_virtualcontrols_1_14_2V_dynamicMileageNumber_csm_bindings,gm::csm::SMARTCONTRSOLS_RANGE_MILEAGE_NUMBER_VALUE);
    mBindingsIds[9] = Label_virtualcontrols_1_14_2_percentMile_csm.State.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    addDependency(this, &Screen_6114::Label_virtualcontrols_1_14_2_percentMile_csm_bindings,gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_PERCENT_TEXT , gm::csm::SMARTCONTRSOLS_RANGE_MILEAGE_NUMBER_VALUE);
    addDependency(this, &Screen_6114::Label_virtualcontrols_1_14_2_body_csm_bindings,gm::csm::SMARTCONTRSOLS_OUTLET_HEADER);
    mBindingsIds[12] = Label_virtualcontrols_1_14_2V_rangeReservePercent_csm.State.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    addDependency(this, &Screen_6114::Label_virtualcontrols_1_14_2V_rangeReservePercent_csm_bindings,gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_PERCENT_TEXT);
    mBindingsIds[13] = Label_virtualcontrols_1_14_2V_header_csm.State.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    mBindingsIds[14] = ProgressBar_6114_img_battery_level_progressbar.ProgressBarValue.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_PERCENT_VALUE);
}


}//namespace csm
}//namespace gm
