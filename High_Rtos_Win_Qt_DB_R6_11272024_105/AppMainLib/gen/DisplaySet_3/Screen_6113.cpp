#include "Screen_6113.h"

#include "RTOS_InternalData.h"
#include "StringData.h"
#include "WidgetData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_6113::Widget_Logic_Visibility_img_transparent_bg()
{
    const auto var_002 = gm::csm::SMARTCONTROLS_TIMER_LIST_ENABLE.data();
    const auto var_001 = !(var_002);
    
    Image_img_transparent_bg.Visibility = var_001;
}

void Screen_6113::Label_virtualcontrols_1_14_2_percentMile_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_2_percentMile_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_PERCENT_TEXT));
    FindReplaceString(text,"%2$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_RANGE_MILEAGE_NUMBER_VALUE));
    Label_virtualcontrols_1_14_2_percentMile_csm = text.c_str();
}

void Screen_6113::Label_virtualcontrols_1_14_body_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_body_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_OUTLET_HEADER));
    Label_virtualcontrols_1_14_body_csm = text.c_str();
}

void Screen_6113::Label_virtualcontrols_1_14_header_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_header_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_OUTLET_HEADER));
    Label_virtualcontrols_1_14_header_csm = text.c_str();
}

void Screen_6113::Label_virtualcontrols_1_14_primaryButton_csm_bindings()
{
    std::string text = Label_virtualcontrols_1_14_primaryButton_csm.Text.getLanguageText();

    FindReplaceString(text,"%1$s",ramp::to_string(gm::csm::SMARTCONTRSOLS_OUTLET_HEADER));
    Label_virtualcontrols_1_14_primaryButton_csm = text.c_str();
}

void Screen_6113::onScreenHide()
{
    Label_virtualcontrols_1_14_2_percentMile_csm.State.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[3]);
    GroupImage_img_keep_on_btn.State.unBind(gm::csm::SMARTCONTROLS_OUTLET_POWERBASE_STATUS, mBindingsIds[4]);
    Image_img_timer_toggle_btn.State.unBind(gm::csm::SMARTCONTROLS_OUTLET_TIMER_ENABLE, mBindingsIds[5]);
    Image_img_range_reserve_icon.State.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[6]);
    Label_virtualcontrols_1_14_rangeReserve_csm.State.unBind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO, mBindingsIds[7]);
    Label_virtualcontrols_1_14_hours_csm.State.unBind(gm::csm::SMARTCONTROLS_OUTLET_TIMER_ENABLE, mBindingsIds[10]);
}

void Screen_6113::onScreenShow()
{
    addDependency(this, &Screen_6113::Label_virtualcontrols_1_14_primaryButton_csm_bindings,gm::csm::SMARTCONTRSOLS_OUTLET_HEADER);
    addDependency(this, &Screen_6113::Widget_Logic_Visibility_img_transparent_bg, gm::csm::SMARTCONTROLS_TIMER_LIST_ENABLE);
    mBindingsIds[3] = Label_virtualcontrols_1_14_2_percentMile_csm.State.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    addDependency(this, &Screen_6113::Label_virtualcontrols_1_14_2_percentMile_csm_bindings,gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_PERCENT_TEXT , gm::csm::SMARTCONTRSOLS_RANGE_MILEAGE_NUMBER_VALUE);
    mBindingsIds[4] = GroupImage_img_keep_on_btn.State.bind(gm::csm::SMARTCONTROLS_OUTLET_POWERBASE_STATUS);
    mBindingsIds[5] = Image_img_timer_toggle_btn.State.bind(gm::csm::SMARTCONTROLS_OUTLET_TIMER_ENABLE);
    mBindingsIds[6] = Image_img_range_reserve_icon.State.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    mBindingsIds[7] = Label_virtualcontrols_1_14_rangeReserve_csm.State.bind(gm::csm::SMARTCONTRSOLS_RANGE_RESERVE_ZERO);
    addDependency(this, &Screen_6113::Label_virtualcontrols_1_14_header_csm_bindings,gm::csm::SMARTCONTRSOLS_OUTLET_HEADER);
    addDependency(this, &Screen_6113::Label_virtualcontrols_1_14_body_csm_bindings,gm::csm::SMARTCONTRSOLS_OUTLET_HEADER);
    mBindingsIds[10] = Label_virtualcontrols_1_14_hours_csm.State.bind(gm::csm::SMARTCONTROLS_OUTLET_TIMER_ENABLE);
}


}//namespace csm
}//namespace gm
