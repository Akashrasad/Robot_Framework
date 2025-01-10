#ifndef SCREEN_6116_H
#define SCREEN_6116_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6116 : public BindableScreenLogic
{
    std::array<BindingId, 6> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Label_virtualcontrols_1_14_5_header_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_5_powerUsedNumber_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_5_rangeUsedNumber_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_5_sessionTime_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6116_H
