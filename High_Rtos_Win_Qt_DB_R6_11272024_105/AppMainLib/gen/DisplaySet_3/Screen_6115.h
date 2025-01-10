#ifndef SCREEN_6115_H
#define SCREEN_6115_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6115 : public BindableScreenLogic
{
    std::array<BindingId, 15> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Label_virtualcontrols_1_14_4_charge_port_powerLimit_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_4_header_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_4_powerLimit_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_4_rangeUsed_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6115_H
