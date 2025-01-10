#ifndef SCREEN_7007_H
#define SCREEN_7007_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_7007 : public BindableScreenLogic
{
    std::array<BindingId, 6> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_7007_H
