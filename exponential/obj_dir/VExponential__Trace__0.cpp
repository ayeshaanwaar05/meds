// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VExponential__Syms.h"


void VExponential___024root__trace_chg_0_sub_0(VExponential___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VExponential___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_chg_0\n"); );
    // Init
    VExponential___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VExponential___024root*>(voidSelf);
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VExponential___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VExponential___024root__trace_chg_0_sub_0(VExponential___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_chg_0_sub_0\n"); );
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgDouble(oldp+0,(vlSymsp->TOP____024unit.exp__Vstatic__result));
        bufp->chgIData(oldp+2,(vlSymsp->TOP____024unit.power__Vstatic__i),32);
        bufp->chgDouble(oldp+3,(vlSymsp->TOP____024unit.power__Vstatic__result));
        bufp->chgDouble(oldp+5,(vlSymsp->TOP____024unit.factorial__Vstatic__fact));
        bufp->chgIData(oldp+7,(vlSymsp->TOP____024unit.factorial__Vstatic__i),32);
    }
    bufp->chgDouble(oldp+8,(vlSelfRef.x));
    bufp->chgDouble(oldp+10,(vlSelfRef.y));
}

void VExponential___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_cleanup\n"); );
    // Init
    VExponential___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VExponential___024root*>(voidSelf);
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
