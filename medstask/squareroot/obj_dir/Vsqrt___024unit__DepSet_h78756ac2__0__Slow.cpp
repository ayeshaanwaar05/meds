// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsqrt.h for the primary calling header

#include "Vsqrt__pch.h"
#include "Vsqrt___024unit.h"

VL_ATTR_COLD void Vsqrt___024unit___ctor_var_reset(Vsqrt___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsqrt___024unit___ctor_var_reset\n"); );
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->squareroot__Vstatic__x = 0;
    vlSelf->squareroot__Vstatic__tolerance = 0;
}
