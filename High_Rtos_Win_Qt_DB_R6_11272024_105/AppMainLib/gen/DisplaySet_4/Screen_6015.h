#ifndef SCREEN_6015_H
#define SCREEN_6015_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6015 : public BindableScreenLogic
{
    std::array<BindingId, 12> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_3_OPDHighplus_csm();
    private:
    void Widget_Logic_Visibility_img_close();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_3_0_5_opd_csm();
    private:
    void Widget_Logic_Visibility_img_driving_pedal();
    private:
    void Widget_Logic_Visibility_img_radio_button_enhanced();
    private:
    void Widget_Logic_Visibility_img_parking_divider();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6015_H
