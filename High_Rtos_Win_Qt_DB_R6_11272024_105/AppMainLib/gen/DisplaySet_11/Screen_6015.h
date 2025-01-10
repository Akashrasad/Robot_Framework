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
    std::array<BindingId, 1> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Widget_Logic_Visibility_img_close();
    private:
    void Widget_Logic_Visibility_img_driving_pedal();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6015_H
