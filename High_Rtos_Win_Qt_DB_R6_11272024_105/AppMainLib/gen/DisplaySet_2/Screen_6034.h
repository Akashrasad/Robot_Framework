#ifndef SCREEN_6034_H
#define SCREEN_6034_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6034 : public BindableScreenLogic
{
    std::array<BindingId, 1> mBindingsIds;
    
    public:
    Screen_6034();
    
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen();
    private:
    void Widget_Logic_Visibility_img_close();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_exit_f_csm();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6034_H
