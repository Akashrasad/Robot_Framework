#ifndef SCREEN_6092_H
#define SCREEN_6092_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6092 : public BindableScreenLogic
{
    std::array<BindingId, 5> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Widget_Logic_Visibility_apa_3_0_Exit_f_csm();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_3_7_V_desc_csm();
    private:
    void Widget_Logic_Visibility_img_close();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6092_H
