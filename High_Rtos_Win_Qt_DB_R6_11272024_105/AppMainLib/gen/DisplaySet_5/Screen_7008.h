#ifndef SCREEN_7008_H
#define SCREEN_7008_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_7008 : public BindableScreenLogic
{
    std::array<BindingId, 4> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_7008_H
