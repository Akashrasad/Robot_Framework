#ifndef SCREEN_7014_H
#define SCREEN_7014_H

#include "BindableScreenLogic.h"
#include <array>

namespace gm
{
namespace csm
{


class Screen_7014 : public BindableScreenLogic
{
    std::array<BindingId, 8> mBindingsIds;
    
    public:
    using BindableScreenLogic::BindableScreenLogic;
    
    private:
    void Label_apa_4_13_UnableToConnectDesc_csm_bindings();
    protected:
    void onScreenHide() override;
    protected:
    void onScreenShow() override;
};

}//namespace csm
}//namespace gm

#endif // SCREEN_7014_H
