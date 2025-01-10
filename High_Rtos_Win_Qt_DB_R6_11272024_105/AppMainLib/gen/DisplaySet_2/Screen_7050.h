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
    std::array<BindingId, 2> mBindingsIds;
    
    public:
    Screen_7050();
    
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_7050_H
