#ifndef SCREEN_6028_H
#define SCREEN_6028_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6028 : public BindableScreenLogic
{
    std::array<BindingId, 2> mBindingsIds;
    
    public:
    Screen_6028();
    
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen();
    private:
    void Widget_Logic_Visibility_img_close();
    private:
    void Widget_Logic_Visibility_apa_3_0_Exit_f_csm();
    private:
    void Label_virtualcontrols_1_5_UGDO_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6028_H
