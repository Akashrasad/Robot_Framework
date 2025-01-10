#ifndef SCREEN_6017_H
#define SCREEN_6017_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6017 : public BindableScreenLogic
{
    std::array<BindingId, 1> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Widget_Logic_Visibility_img_close();
    private:
    void Widget_Logic_Visibility_img_settings_selector();
    private:
    void Widget_Logic_Visibility_img_placeholder_WakeScreen();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6017_H
