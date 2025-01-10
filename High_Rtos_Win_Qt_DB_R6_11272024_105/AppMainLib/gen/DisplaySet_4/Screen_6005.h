#ifndef SCREEN_6005_H
#define SCREEN_6005_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6005 : public BindableScreenLogic
{
    std::array<BindingId, 6> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen();
    private:
    void Widget_Logic_Visibility_img_close();
    private:
    void Widget_Logic_Visibility_img_control_lockout();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_2_0_1_child_csm();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6005_H
