#ifndef SCREEN_7050_H
#define SCREEN_7050_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_7050 : public BindableScreenLogic
{
    std::array<BindingId, 3> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Widget_Logic_Visibility_img_headlight();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_7050_H
