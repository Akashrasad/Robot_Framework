#ifndef SCREEN_6016_H
#define SCREEN_6016_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6016 : public BindableScreenLogic
{
    std::array<BindingId, 7> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_3_0_3_park_csm();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6016_H
