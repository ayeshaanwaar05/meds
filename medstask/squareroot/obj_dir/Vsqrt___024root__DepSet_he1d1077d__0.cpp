// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsqrt.h for the primary calling header

#include "Vsqrt__pch.h"
#include "Vsqrt__Syms.h"
#include "Vsqrt___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsqrt___024root___dump_triggers__ico(Vsqrt___024root* vlSelf);
#endif  // VL_DEBUG

void Vsqrt___024root___eval_triggers__ico(Vsqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root___eval_triggers__ico\n"); );
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsqrt___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vsqrt___024root___ico_sequent__TOP__0(Vsqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root___ico_sequent__TOP__0\n"); );
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    double __Vfunc_squareroot__0__val;
    __Vfunc_squareroot__0__val = 0;
    // Body
    __Vfunc_squareroot__0__val = vlSelfRef.input_value;
    {
        if (VL_UNLIKELY(((__Vfunc_squareroot__0__val 
                          < 0.0)))) {
            VL_WRITEF_NX("Error: Negative input\n",0);
            vlSelfRef.__Vfunc_squareroot__0__Vfuncout = 0.0;
            goto __Vlabel1;
        }
        if ((0.0 == __Vfunc_squareroot__0__val)) {
            vlSelfRef.__Vfunc_squareroot__0__Vfuncout = 0.0;
            goto __Vlabel1;
        }
        vlSymsp->TOP____024unit.squareroot__Vstatic__x 
            = ((__Vfunc_squareroot__0__val >= 1.0) ? 
               (__Vfunc_squareroot__0__val / 2.0) : 1.0);
        vlSymsp->TOP____024unit.squareroot__Vstatic__tolerance = 1.00000000000000002e-08;
        while ((([&]() {
                        vlSelfRef.__Vfunc_abs__1__r 
                            = ((vlSymsp->TOP____024unit.squareroot__Vstatic__x 
                                * vlSymsp->TOP____024unit.squareroot__Vstatic__x) 
                               - __Vfunc_squareroot__0__val);
                        vlSelfRef.__Vfunc_abs__1__Vfuncout 
                            = ((vlSelfRef.__Vfunc_abs__1__r 
                                < 0.0) ? (- vlSelfRef.__Vfunc_abs__1__r)
                                : vlSelfRef.__Vfunc_abs__1__r);
                    }(), vlSelfRef.__Vfunc_abs__1__Vfuncout) 
                > vlSymsp->TOP____024unit.squareroot__Vstatic__tolerance)) {
            vlSymsp->TOP____024unit.squareroot__Vstatic__x 
                = (5.00000000000000000e-01 * (vlSymsp->TOP____024unit.squareroot__Vstatic__x 
                                              + (__Vfunc_squareroot__0__val 
                                                 / vlSymsp->TOP____024unit.squareroot__Vstatic__x)));
        }
        vlSelfRef.__Vfunc_squareroot__0__Vfuncout = vlSymsp->TOP____024unit.squareroot__Vstatic__x;
        __Vlabel1: ;
    }
    vlSelfRef.result = vlSelfRef.__Vfunc_squareroot__0__Vfuncout;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsqrt___024root___dump_triggers__act(Vsqrt___024root* vlSelf);
#endif  // VL_DEBUG

void Vsqrt___024root___eval_triggers__act(Vsqrt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsqrt___024root___eval_triggers__act\n"); );
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsqrt___024root___dump_triggers__act(vlSelf);
    }
#endif
}
