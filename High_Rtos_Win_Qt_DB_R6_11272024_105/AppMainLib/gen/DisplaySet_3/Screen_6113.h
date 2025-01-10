#ifndef SCREEN_6113_H
#define SCREEN_6113_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6113 : public BindableScreenLogic
{
    std::array<BindingId, 11> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Widget_Logic_Visibility_img_transparent_bg();
    private:
    void Label_virtualcontrols_1_14_2_percentMile_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_body_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_header_csm_bindings();
    private:
    void Label_virtualcontrols_1_14_primaryButton_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6113_H
