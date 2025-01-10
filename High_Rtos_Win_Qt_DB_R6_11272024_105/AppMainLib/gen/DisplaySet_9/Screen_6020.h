#ifndef SCREEN_6020_H
#define SCREEN_6020_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6020 : public BindableScreenLogic
{
    std::array<BindingId, 11> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Widget_Logic_Visibility_img_controls_icn_headlights_u550();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_4_0_2_headlights_csm();
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen();
    private:
    void Widget_Logic_Visibility_img_close();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6020_H
