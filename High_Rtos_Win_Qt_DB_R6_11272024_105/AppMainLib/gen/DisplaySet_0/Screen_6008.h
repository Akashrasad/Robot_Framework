#ifndef SCREEN_6008_H
#define SCREEN_6008_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6008 : public BindableScreenLogic
{
    std::array<BindingId, 8> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Widget_Logic_Visibility_img_liftgate();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_2_0_4_liftgate_csm();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm();
    private:
    void Widget_Logic_Visibility_img_close();
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6008_H
