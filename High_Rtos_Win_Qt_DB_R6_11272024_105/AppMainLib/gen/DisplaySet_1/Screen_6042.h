#ifndef SCREEN_6042_H
#define SCREEN_6042_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6042 : public BindableScreenLogic
{
    std::array<BindingId, 7> mBindingsIds;
    
    public:
    Screen_6042();
    
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm();
    private:
    void Widget_Logic_Visibility_img_close();
    private:
    void Label_virtualcontrols_1_5_6_2_RemoteAutoTitle_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6042_H
