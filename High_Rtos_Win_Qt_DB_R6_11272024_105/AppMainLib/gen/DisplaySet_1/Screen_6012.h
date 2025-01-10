#ifndef SCREEN_6012_H
#define SCREEN_6012_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6012 : public BindableScreenLogic
{
    std::array<BindingId, 12> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Widget_Logic_Visibility_img_close();
    private:
    void Widget_Logic_Visibility_img_traction_control();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_1_exitBtn_csm();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_3_0_1_traction_csm();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6012_H
