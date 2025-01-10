#ifndef SCREEN_6024_H
#define SCREEN_6024_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6024 : public BindableScreenLogic
{
    std::array<BindingId, 6> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Widget_Logic_Visibility_img_controls_icn_fog_rear();
    private:
    void Widget_Logic_Visibility_img_close();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_4_0_6_fog_csm();
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6024_H
