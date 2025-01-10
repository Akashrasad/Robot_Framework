// Copyright (C) GM Global Technology Operations LLC 2024.
// All Rights Reserved.
// GM Confidential Restricted.
// 
// Designed and Developed by Rampgroup, © 2024 People Tech Group all rights reserved.

#include "BindableDataApi.h"

#include "RhmiHelpers.h"

extern "C" { 
namespace gm
{
namespace csm
{

DECL_DLL_SPEC
void showScreen_Helper(const char_t* value)
{
    ramp::ShowScreenProxy(value, 0);
}

DECL_DLL_SPEC
void hideScreen_Helper(const char_t* value)
{
    ramp::HideScreenProxy(value);
}

DECL_DLL_SPEC
void setData_bool(uint32_t id, bool value)
{
    mBindables_bool.at(id)->set(value);
}

DECL_DLL_SPEC
void setData_double_t(uint32_t id, double_t value)
{
    mBindables_double_t.at(id)->set(value);
}

DECL_DLL_SPEC
void setData_float_t(uint32_t id, float_t value)
{
    mBindables_float_t.at(id)->set(value);
}

DECL_DLL_SPEC
void setData_int32_t(uint32_t id, int32_t value)
{
    mBindables_int32_t.at(id)->set(value);
}

DECL_DLL_SPEC
void setData_CString_13(uint32_t id, ramp::CString<13> value)
{
    mBindables_CString_13.at(id)->set(value);
}

DECL_DLL_SPEC
void setData_string(uint32_t id, const char_t* value)
{
    mBindables_string.at(id)->set(value);
}

DECL_DLL_SPEC
void setData_uint16_t(uint32_t id, uint16_t value)
{
    mBindables_uint16_t.at(id)->set(value);
}

DECL_DLL_SPEC
void setData_uint32_t(uint32_t id, uint32_t value)
{
    mBindables_uint32_t.at(id)->set(value);
}

DECL_DLL_SPEC
void setData_uint8_t(uint32_t id, uint8_t value)
{
    mBindables_uint8_t.at(id)->set(value);
}

} // namespace csm
} // namespace gm
}
