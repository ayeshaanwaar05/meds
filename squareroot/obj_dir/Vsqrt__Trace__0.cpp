// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsqrt__Syms.h"


void Vsqrt___024root__trace_chg_0_sub_0(Vsqrt___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsqrt___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root__trace_chg_0\n"); );
    // Init
    Vsqrt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsqrt___024root*>(voidSelf);
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsqrt___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsqrt___024root__trace_chg_0_sub_0(Vsqrt___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root__trace_chg_0_sub_0\n"); );
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgDouble(oldp+0,(vlSymsp->TOP____024unit.squareroot__Vstatic__start_pt));
        bufp->chgDouble(oldp+2,(vlSymsp->TOP____024unit.squareroot__Vstatic__end_pt));
        bufp->chgDouble(oldp+4,(vlSymsp->TOP____024unit.squareroot__Vstatic__mid_pt));
        bufp->chgDouble(oldp+6,(vlSymsp->TOP____024unit.squareroot__Vstatic__tolerance));
        bufp->chgDouble(oldp+8,(vlSymsp->TOP____024unit.squareroot__Vstatic__difference));
    }
    bufp->chgDouble(oldp+10,(vlSelfRef.input_value));
    bufp->chgDouble(oldp+12,(vlSelfRef.result));
}

void Vsqrt___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root__trace_cleanup\n"); );
    // Init
    Vsqrt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsqrt___024root*>(voidSelf);
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
