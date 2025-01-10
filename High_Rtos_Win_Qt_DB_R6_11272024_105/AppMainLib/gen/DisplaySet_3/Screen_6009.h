#ifndef SCREEN_6009_H
#define SCREEN_6009_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6009 : public BindableScreenLogic
{
    std::array<BindingId, 1> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Widget_Logic_Visibility_img_close();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm();
    private:
    void Widget_Logic_Visibility_img_settings_selector();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6009_H
