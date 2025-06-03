// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsqrt__Syms.h"


VL_ATTR_COLD void Vsqrt___024root__trace_init_sub__TOP____024unit__0(Vsqrt___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsqrt___024root__trace_init_sub__TOP__0(Vsqrt___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root__trace_init_sub__TOP__0\n"); );
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vsqrt___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declDouble(c+11,0,"input_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+13,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("sqrt", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+11,0,"input_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+13,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsqrt___024root__trace_init_sub__TOP____024unit__0(Vsqrt___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declDouble(c+1,0,"squareroot__Vstatic__start_pt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+3,0,"squareroot__Vstatic__end_pt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+5,0,"squareroot__Vstatic__mid_pt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+7,0,"squareroot__Vstatic__tolerance",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+9,0,"squareroot__Vstatic__difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
}

VL_ATTR_COLD void Vsqrt___024root__trace_init_top(Vsqrt___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root__trace_init_top\n"); );
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsqrt___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsqrt___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsqrt___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsqrt___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsqrt___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsqrt___024root__trace_register(Vsqrt___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root__trace_register\n"); );
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsqrt___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vsqrt___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vsqrt___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vsqrt___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsqrt___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root__trace_const_0\n"); );
    // Init
    Vsqrt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsqrt___024root*>(voidSelf);
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vsqrt___024root__trace_full_0_sub_0(Vsqrt___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsqrt___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root__trace_full_0\n"); );
    // Init
    Vsqrt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsqrt___024root*>(voidSelf);
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsqrt___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsqrt___024root__trace_full_0_sub_0(Vsqrt___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root__trace_full_0_sub_0\n"); );
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullDouble(oldp+1,(vlSymsp->TOP____024unit.squareroot__Vstatic__start_pt));
    bufp->fullDouble(oldp+3,(vlSymsp->TOP____024unit.squareroot__Vstatic__end_pt));
    bufp->fullDouble(oldp+5,(vlSymsp->TOP____024unit.squareroot__Vstatic__mid_pt));
    bufp->fullDouble(oldp+7,(vlSymsp->TOP____024unit.squareroot__Vstatic__tolerance));
    bufp->fullDouble(oldp+9,(vlSymsp->TOP____024unit.squareroot__Vstatic__difference));
    bufp->fullDouble(oldp+11,(vlSelfRef.input_value));
    bufp->fullDouble(oldp+13,(vlSelfRef.result));
}
