#include "Screen_ics_virtual_controls_charge_port_door.h"

#include "RTOS_CustomDataPool.h"
#include "RTOS_InternalData.h"
#include <cstdlib>

namespace gm
{
namespace csm
{


void Screen_ics_virtual_controls_charge_port_door::Widget_Logic_Visibility_img_charge_port_door_release() noexcept
{
    const bool var_002 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_001 = !(var_002);
    
    Image_img_charge_port_door_release.mVisibility = var_001;
}

void Screen_ics_virtual_controls_charge_port_door::Widget_Logic_Visibility_virtualcontrols_1_2_5_1F_ChargePort_csm() noexcept
{
    const bool var_004 = gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL.data();
    const bool var_003 = !(var_004);
    
    Label_virtualcontrols_1_2_5_1F_ChargePort_csm.mVisibility = var_003;
}

void Screen_ics_virtual_controls_charge_port_door::onScreenHide()
{
    GroupLabel_dyn_charge_port_status.mState.unBind(gm::csm::VIRTUALCONTROLS_CHARGE_PORT_CURRENT_STATUS, mBindingsIds[0U]);
    Label_virtualcontrols_1_3_h_chargeDoor_csm.mState.unBind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE, mBindingsIds[1U]);
}

void Screen_ics_virtual_controls_charge_port_door::onScreenShow()
{
    mBindingsIds[0U] = GroupLabel_dyn_charge_port_status.mState.bind(gm::csm::VIRTUALCONTROLS_CHARGE_PORT_CURRENT_STATUS);
    addDependency(this, &Screen_ics_virtual_controls_charge_port_door::Widget_Logic_Visibility_img_charge_port_door_release, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
    mBindingsIds[1U] = Label_virtualcontrols_1_3_h_chargeDoor_csm.mState.bind(gm::csm::Data_RHD_TITLE_ALIGNMENT_STATE);
    addDependency(this, &Screen_ics_virtual_controls_charge_port_door::Widget_Logic_Visibility_virtualcontrols_1_2_5_1F_ChargePort_csm, gm::csm::VIRTUALCONTROLS_CONTROL_PAGE_WHILE_DRIVING_INTERNAL);
}


} // namespace csm
} // namespace gm
