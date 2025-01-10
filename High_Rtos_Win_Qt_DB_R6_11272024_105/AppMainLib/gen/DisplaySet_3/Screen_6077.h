#ifndef SCREEN_6077_H
#define SCREEN_6077_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6077 : public BindableScreenLogic
{
    std::array<BindingId, 0> mBindingsIds;
    
    public:
    Screen_6077();
    
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_4_wakeScreenExit_csm();
    private:
    void Widget_Logic_Visibility_img_close();
    private:
    void Widget_Logic_Visibility_img_settings_selector();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6077_H
