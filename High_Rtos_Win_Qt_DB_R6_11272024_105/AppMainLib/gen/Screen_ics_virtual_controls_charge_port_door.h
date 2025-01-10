#ifndef SCREEN_ICS_VIRTUAL_CONTROLS_CHARGE_PORT_DOOR_H
#define SCREEN_ICS_VIRTUAL_CONTROLS_CHARGE_PORT_DOOR_H

#include "BindableScreenLogic.h"
#include "WidgetProperties.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_ics_virtual_controls_charge_port_door : public BindableScreenLogic
{
    public:
    Screen_ics_virtual_controls_charge_port_door(const std::string&  screen_id)  
    : BindableScreenLogic(screen_id)
    {
    }
    
    private:
    	widget_properties::GroupLabelWidget GroupLabel_dyn_charge_port_status{"grp_img_launch_btn","dyn_charge_port_status"};
    	widget_properties::ImageWidget Image_img_charge_port_door_release{"img_charge_port_door_release"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_2_5_1F_ChargePort_csm{"virtualcontrols_1_2_5_1F_ChargePort_csm"};
    	widget_properties::LabelWidget Label_virtualcontrols_1_3_h_chargeDoor_csm{"virtualcontrols_1_3_h_chargeDoor_csm"};
    	std::array<BindingId, 2> mBindingsIds;
    private:
    void Widget_Logic_Visibility_img_charge_port_door_release() noexcept;
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_2_5_1F_ChargePort_csm() noexcept;
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};
} // namespace csm
} // namespace gm

#endif // SCREEN_ICS_VIRTUAL_CONTROLS_CHARGE_PORT_DOOR_H
