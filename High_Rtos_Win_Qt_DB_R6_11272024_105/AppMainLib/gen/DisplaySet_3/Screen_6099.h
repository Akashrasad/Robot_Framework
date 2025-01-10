#ifndef SCREEN_6099_H
#define SCREEN_6099_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6099 : public BindableScreenLogic
{
    std::array<BindingId, 2> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Label_virtualcontrols_1_6_6_4_v_Passive_Power_Mode_snackbar_Remaining_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6099_H
