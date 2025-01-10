#ifndef SCREEN_6041_H
#define SCREEN_6041_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6041 : public BindableScreenLogic
{
    std::array<BindingId, 4> mBindingsIds;
    
    public:
    Screen_6041();
    
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen();
    private:
    void Widget_Logic_Visibility_img_close();
    private:
    void Widget_Logic_Visibility_apa_3_0_Exit_f_csm();
    private:
    void Label_virtualcontrols_1_5_6_1_OptionCharCount_csm_bindings();
    private:
    void Label_virtualcontrols_1_5_6_1_OptionNameTitle_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6041_H
