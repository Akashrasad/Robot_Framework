#ifndef SCREEN_8013_H
#define SCREEN_8013_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_8013 : public BindableScreenLogic
{
    std::array<BindingId, 25> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_8013_H
