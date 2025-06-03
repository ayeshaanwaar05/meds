// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VExponential__Syms.h"


VL_ATTR_COLD void VExponential___024root__trace_init_sub__TOP____024unit__0(VExponential___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VExponential___024root__trace_init_sub__TOP__0(VExponential___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_init_sub__TOP__0\n"); );
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    VExponential___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declDouble(c+9,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+11,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("Exponential", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+9,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+11,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void VExponential___024root__trace_init_sub__TOP____024unit__0(VExponential___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_init_sub__TOP____024unit__0\n"); );
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+13,0,"exp__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+1,0,"exp__Vstatic__result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+3,0,"power__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+4,0,"power__Vstatic__result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+6,0,"factorial__Vstatic__fact",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+8,0,"factorial__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void VExponential___024root__trace_init_top(VExponential___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_init_top\n"); );
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VExponential___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VExponential___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VExponential___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VExponential___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VExponential___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VExponential___024root__trace_register(VExponential___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_register\n"); );
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VExponential___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VExponential___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VExponential___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VExponential___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VExponential___024root__trace_const_0_sub_0(VExponential___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VExponential___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_const_0\n"); );
    // Init
    VExponential___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VExponential___024root*>(voidSelf);
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VExponential___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VExponential___024root__trace_const_0_sub_0(VExponential___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_const_0_sub_0\n"); );
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+13,(0x15U),32);
}

VL_ATTR_COLD void VExponential___024root__trace_full_0_sub_0(VExponential___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VExponential___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_full_0\n"); );
    // Init
    VExponential___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VExponential___024root*>(voidSelf);
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VExponential___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VExponential___024root__trace_full_0_sub_0(VExponential___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_full_0_sub_0\n"); );
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullDouble(oldp+1,(vlSymsp->TOP____024unit.exp__Vstatic__result));
    bufp->fullIData(oldp+3,(vlSymsp->TOP____024unit.power__Vstatic__i),32);
    bufp->fullDouble(oldp+4,(vlSymsp->TOP____024unit.power__Vstatic__result));
    bufp->fullDouble(oldp+6,(vlSymsp->TOP____024unit.factorial__Vstatic__fact));
    bufp->fullIData(oldp+8,(vlSymsp->TOP____024unit.factorial__Vstatic__i),32);
    bufp->fullDouble(oldp+9,(vlSelfRef.x));
    bufp->fullDouble(oldp+11,(vlSelfRef.y));
}
