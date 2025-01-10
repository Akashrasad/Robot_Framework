#ifndef SCREEN_6500_H
#define SCREEN_6500_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6500 : public BindableScreenLogic
{
    std::array<BindingId, 5> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_settings_csm();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_2_WakeUGDO_csm();
    private:
    void Widget_Logic_Visibility_img_card_controls_lights();
    private:
    void Widget_Logic_Visibility_img_card_controls_settings_placeholder();
    private:
    void Widget_Logic_Visibility_img_card_controls_vehiclesettings_placeholder();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_settings_f_csm();
    private:
    void Widget_Logic_Visibility_img_card_controls_remotes_placeholder();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_ugdo_csm();
    private:
    void Widget_Logic_Visibility_virtualcontrols_1_0_2_WakeLights_csm();
    private:
    void Widget_Logic_Visibility_img_card_controls_remotes();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6500_H
