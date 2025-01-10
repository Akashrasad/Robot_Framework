#ifndef SCREEN_6022_H
#define SCREEN_6022_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6022 : public BindableScreenLogic
{
    std::array<BindingId, 6> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen();
    private:
    void Widget_Logic_Visibility_img_close();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_4_0_6_fog_csm();
    private:
    void Widget_Logic_Visibility_img_controls_icn_fog_front();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm();
    private:
    void Widget_Logic_Visibility_grp_img_close();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6022_H
