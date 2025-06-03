// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExponential.h for the primary calling header

#include "VExponential__pch.h"
#include "VExponential__Syms.h"
#include "VExponential___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VExponential___024root___dump_triggers__stl(VExponential___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VExponential___024root___eval_triggers__stl(VExponential___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___eval_triggers__stl\n"); );
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExponential___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
