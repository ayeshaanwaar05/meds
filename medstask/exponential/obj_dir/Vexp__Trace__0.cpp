// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexp__Syms.h"


void Vexp___024root__trace_chg_0_sub_0(Vexp___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vexp___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp___024root__trace_chg_0\n"); );
    // Init
    Vexp___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexp___024root*>(voidSelf);
    Vexp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vexp___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vexp___024root__trace_chg_0_sub_0(Vexp___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp___024root__trace_chg_0_sub_0\n"); );
    Vexp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgDouble(oldp+0,(vlSymsp->TOP____024unit.compute_exp__Vstatic__sum));
        bufp->chgIData(oldp+2,(vlSymsp->TOP____024unit.compute_exp__Vstatic__term_number),32);
        bufp->chgDouble(oldp+3,(vlSymsp->TOP____024unit.pow__Vstatic__result1));
        bufp->chgIData(oldp+5,(vlSymsp->TOP____024unit.pow__Vstatic__p),32);
        bufp->chgDouble(oldp+6,(vlSymsp->TOP____024unit.fact__Vstatic__result2));
        bufp->chgIData(oldp+8,(vlSymsp->TOP____024unit.fact__Vstatic__j),32);
    }
    bufp->chgDouble(oldp+9,(vlSelfRef.input_val));
    bufp->chgDouble(oldp+11,(vlSelfRef.output_val));
}

void Vexp___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp___024root__trace_cleanup\n"); );
    // Init
    Vexp___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexp___024root*>(voidSelf);
    Vexp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
