#ifndef SCREEN_6033_H
#define SCREEN_6033_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6033 : public BindableScreenLogic
{
    std::array<BindingId, 1> mBindingsIds;
    
    public:
    Screen_6033();
    
    private:
    void Widget_Logic_Visibility_img_close();
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen();
    private:
    void Widget_Logic_Visibility_apa_3_0_Exit_f_csm();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6033_H
