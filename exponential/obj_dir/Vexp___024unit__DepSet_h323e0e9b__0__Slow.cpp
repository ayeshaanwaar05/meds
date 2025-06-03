// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexp.h for the primary calling header

#include "Vexp__pch.h"
#include "Vexp___024unit.h"

VL_ATTR_COLD void Vexp___024unit___ctor_var_reset(Vexp___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vexp___024unit___ctor_var_reset\n"); );
    Vexp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->compute_exp__Vstatic__sum = 0;
    vlSelf->compute_exp__Vstatic__term_idx = 0;
    vlSelf->pow__Vstatic__result1 = 0;
    vlSelf->pow__Vstatic__p = 0;
    vlSelf->fact__Vstatic__result2 = 0;
    vlSelf->fact__Vstatic__j = 0;
}
