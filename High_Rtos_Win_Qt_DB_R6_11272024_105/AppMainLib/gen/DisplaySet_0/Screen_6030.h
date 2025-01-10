#ifndef SCREEN_6030_H
#define SCREEN_6030_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6030 : public BindableScreenLogic
{
    std::array<BindingId, 1> mBindingsIds;
    
    public:
    Screen_6030();
    
    private:
    void Widget_Logic_Visibility_apa_3_0_Exit_f_csm();
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen();
    private:
    void Widget_Logic_Visibility_img_close();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6030_H
