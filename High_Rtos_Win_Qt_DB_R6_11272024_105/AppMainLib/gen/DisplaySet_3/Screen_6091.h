#ifndef SCREEN_6091_H
#define SCREEN_6091_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6091 : public BindableScreenLogic
{
    std::array<BindingId, 26> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Label_virtualcontrols_1_0_TimerExpired_csm_bindings();
    private:
    void Label_virtualcontrols_1_1_IncorrectPasscode_csm_bindings();
    private:
    void Label_virtualcontrols_1_2_TooManyAttempts_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6091_H
