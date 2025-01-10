#ifndef SCREEN_8009_H
#define SCREEN_8009_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_8009 : public BindableScreenLogic
{
    std::array<BindingId, 1> mBindingsIds;
    
    public:
    Screen_8009();
    
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_8009_H
