#ifndef SCREEN_6110_H
#define SCREEN_6110_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6110 : public BindableScreenLogic
{
    std::array<BindingId, 2> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Label_dyn_lbl_PressStartStopButton_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6110_H
