#ifndef SCREEN_7039_H
#define SCREEN_7039_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_7039 : public BindableScreenLogic
{
    std::array<BindingId, 5> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_7039_H
