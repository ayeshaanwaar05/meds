// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexp__Syms.h"


VL_ATTR_COLD void Vexp___024root__trace_init_sub__TOP____024unit__0(Vexp___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vexp___024root__trace_init_sub__TOP__0(Vexp___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp___024root__trace_init_sub__TOP__0\n"); );
    Vexp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vexp___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declDouble(c+10,0,"input_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+12,0,"output_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("exp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+10,0,"input_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+12,0,"output_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vexp___024root__trace_init_sub__TOP____024unit__0(Vexp___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vexp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declDouble(c+1,0,"compute_exp__Vstatic__sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+3,0,"compute_exp__Vstatic__term_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+4,0,"pow__Vstatic__result1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+6,0,"pow__Vstatic__p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declDouble(c+7,0,"fact__Vstatic__result2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+9,0,"fact__Vstatic__j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vexp___024root__trace_init_top(Vexp___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp___024root__trace_init_top\n"); );
    Vexp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vexp___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vexp___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vexp___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vexp___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vexp___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vexp___024root__trace_register(Vexp___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp___024root__trace_register\n"); );
    Vexp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vexp___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vexp___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vexp___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vexp___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vexp___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp___024root__trace_const_0\n"); );
    // Init
    Vexp___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexp___024root*>(voidSelf);
    Vexp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vexp___024root__trace_full_0_sub_0(Vexp___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vexp___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp___024root__trace_full_0\n"); );
    // Init
    Vexp___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexp___024root*>(voidSelf);
    Vexp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vexp___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vexp___024root__trace_full_0_sub_0(Vexp___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp___024root__trace_full_0_sub_0\n"); );
    Vexp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullDouble(oldp+1,(vlSymsp->TOP____024unit.compute_exp__Vstatic__sum));
    bufp->fullIData(oldp+3,(vlSymsp->TOP____024unit.compute_exp__Vstatic__term_idx),32);
    bufp->fullDouble(oldp+4,(vlSymsp->TOP____024unit.pow__Vstatic__result1));
    bufp->fullIData(oldp+6,(vlSymsp->TOP____024unit.pow__Vstatic__p),32);
    bufp->fullDouble(oldp+7,(vlSymsp->TOP____024unit.fact__Vstatic__result2));
    bufp->fullIData(oldp+9,(vlSymsp->TOP____024unit.fact__Vstatic__j),32);
    bufp->fullDouble(oldp+10,(vlSelfRef.input_val));
    bufp->fullDouble(oldp+12,(vlSelfRef.output_val));
}
