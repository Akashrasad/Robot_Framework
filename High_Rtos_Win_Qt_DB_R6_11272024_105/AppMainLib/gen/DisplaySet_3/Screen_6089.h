#ifndef SCREEN_6089_H
#define SCREEN_6089_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_6089 : public BindableScreenLogic
{
    std::array<BindingId, 1> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_6089_H
