#ifndef SCREEN_6114_H
#define SCREEN_6114_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6114 : public BindableScreenLogic
{
    std::array<BindingId, 15> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Label_virtualcontrols_1_14_2V_dynamicMileageNumber_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_2V_measureOfDistance_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_2V_rangeReservePercent_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_2_body_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_2_percentMile_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6114_H
