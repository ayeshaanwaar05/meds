// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsqrt.h for the primary calling header

#include "Vsqrt__pch.h"
#include "Vsqrt___024root.h"

void Vsqrt___024root___ico_sequent__TOP__0(Vsqrt___024root* vlSelf);

void Vsqrt___024root___eval_ico(Vsqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root___eval_ico\n"); );
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vsqrt___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vsqrt___024root___eval_triggers__ico(Vsqrt___024root* vlSelf);

bool Vsqrt___024root___eval_phase__ico(Vsqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root___eval_phase__ico\n"); );
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vsqrt___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vsqrt___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vsqrt___024root___eval_act(Vsqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root___eval_act\n"); );
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsqrt___024root___eval_nba(Vsqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root___eval_nba\n"); );
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsqrt___024root___eval_triggers__act(Vsqrt___024root* vlSelf);

bool Vsqrt___024root___eval_phase__act(Vsqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root___eval_phase__act\n"); );
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsqrt___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsqrt___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsqrt___024root___eval_phase__nba(Vsqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root___eval_phase__nba\n"); );
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsqrt___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsqrt___024root___dump_triggers__ico(Vsqrt___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsqrt___024root___dump_triggers__nba(Vsqrt___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsqrt___024root___dump_triggers__act(Vsqrt___024root* vlSelf);
#endif  // VL_DEBUG

void Vsqrt___024root___eval(Vsqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root___eval\n"); );
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vsqrt___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("sqrt.sv", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vsqrt___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsqrt___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sqrt.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsqrt___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sqrt.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsqrt___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsqrt___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsqrt___024root___eval_debug_assertions(Vsqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root___eval_debug_assertions\n"); );
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
