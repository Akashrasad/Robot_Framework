#ifndef SCREEN_6059_H
#define SCREEN_6059_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6059 : public BindableScreenLogic
{
    std::array<BindingId, 13> mBindingsIds;
    
    public:
    Screen_6059();
    
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6059_H
