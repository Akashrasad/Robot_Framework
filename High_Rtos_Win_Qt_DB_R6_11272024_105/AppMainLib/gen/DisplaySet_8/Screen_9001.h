#ifndef SCREEN_9001_H
#define SCREEN_9001_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_9001 : public BindableScreenLogic
{
    std::array<BindingId, 12> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Data_HVAC_FRONT_SYNC_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_9001_H
