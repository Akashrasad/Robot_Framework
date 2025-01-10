#ifndef SCREEN_6019_H
#define SCREEN_6019_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6019 : public BindableScreenLogic
{
    std::array<BindingId, 11> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_4_0_1_dome_csm();
    private:
    void Widget_Logic_Visibility_img_close();
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen();
    private:
    void Widget_Logic_Visibility_img_control_icn_dome();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6019_H
