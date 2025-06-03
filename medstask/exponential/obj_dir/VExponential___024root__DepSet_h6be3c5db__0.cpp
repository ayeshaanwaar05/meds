// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExponential.h for the primary calling header

#include "VExponential__pch.h"
#include "VExponential__Syms.h"
#include "VExponential___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VExponential___024root___dump_triggers__ico(VExponential___024root* vlSelf);
#endif  // VL_DEBUG

void VExponential___024root___eval_triggers__ico(VExponential___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___eval_triggers__ico\n"); );
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExponential___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VExponential___024root___ico_sequent__TOP__0(VExponential___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___ico_sequent__TOP__0\n"); );
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    double __Vfunc_exp__0__Vfuncout;
    __Vfunc_exp__0__Vfuncout = 0;
    double __Vfunc_exp__0__x;
    __Vfunc_exp__0__x = 0;
    double __Vtemp_5;
    double __Vtemp_10;
    double __Vtemp_15;
    double __Vtemp_20;
    double __Vtemp_25;
    double __Vtemp_30;
    double __Vtemp_35;
    double __Vtemp_40;
    double __Vtemp_45;
    double __Vtemp_50;
    double __Vtemp_55;
    double __Vtemp_60;
    double __Vtemp_65;
    double __Vtemp_70;
    double __Vtemp_75;
    double __Vtemp_80;
    double __Vtemp_85;
    double __Vtemp_90;
    double __Vtemp_95;
    double __Vtemp_100;
    // Body
    __Vfunc_exp__0__x = vlSelfRef.x;
    vlSymsp->TOP____024unit.exp__Vstatic__result = 
        (0.0 + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 0U;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 0U;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    __Vtemp_5 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                 + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 1U;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                    / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 1U;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_5;
    __Vtemp_10 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                  + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 2U;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 2U;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_10;
    __Vtemp_15 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                  + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 3U;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 3U;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_15;
    __Vtemp_20 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                  + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 4U;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 4U;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_20;
    __Vtemp_25 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                  + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 5U;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 5U;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_25;
    __Vtemp_30 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                  + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 6U;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 6U;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_30;
    __Vtemp_35 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                  + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 7U;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 7U;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_35;
    __Vtemp_40 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                  + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 8U;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 8U;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_40;
    __Vtemp_45 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                  + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 9U;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 9U;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_45;
    __Vtemp_50 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                  + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 0xaU;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 0xaU;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_50;
    __Vtemp_55 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                  + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 0xbU;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 0xbU;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_55;
    __Vtemp_60 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                  + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 0xcU;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 0xcU;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_60;
    __Vtemp_65 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                  + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 0xdU;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 0xdU;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_65;
    __Vtemp_70 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                  + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 0xeU;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 0xeU;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_70;
    __Vtemp_75 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                  + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 0xfU;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 0xfU;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_75;
    __Vtemp_80 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                  + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 0x10U;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 0x10U;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_80;
    __Vtemp_85 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                  + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 0x11U;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 0x11U;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_85;
    __Vtemp_90 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                  + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 0x12U;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 0x12U;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_90;
    __Vtemp_95 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                  + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 0x13U;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 0x13U;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_95;
    __Vtemp_100 = (vlSymsp->TOP____024unit.exp__Vstatic__result 
                   + (([&]() {
                    vlSelfRef.__Vfunc_power__1__pow = 0x14U;
                    vlSelfRef.__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSymsp->TOP____024unit.power__Vstatic__result = 1.0;
                    vlSymsp->TOP____024unit.power__Vstatic__i = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP____024unit.power__Vstatic__i, vlSelfRef.__Vfunc_power__1__pow)) {
                        vlSymsp->TOP____024unit.power__Vstatic__result 
                            = (vlSymsp->TOP____024unit.power__Vstatic__result 
                               * vlSelfRef.__Vfunc_power__1__x);
                        vlSymsp->TOP____024unit.power__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.power__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_power__1__Vfuncout 
                        = vlSymsp->TOP____024unit.power__Vstatic__result;
                }(), vlSelfRef.__Vfunc_power__1__Vfuncout) 
                      / ([&]() {
                    vlSelfRef.__Vfunc_factorial__2__x = 0x14U;
                    vlSymsp->TOP____024unit.factorial__Vstatic__fact = 1.0;
                    vlSymsp->TOP____024unit.factorial__Vstatic__i = 2U;
                    while (VL_LTES_III(32, vlSymsp->TOP____024unit.factorial__Vstatic__i, vlSelfRef.__Vfunc_factorial__2__x)) {
                        vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                            = (vlSymsp->TOP____024unit.factorial__Vstatic__fact 
                               * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.factorial__Vstatic__i));
                        vlSymsp->TOP____024unit.factorial__Vstatic__i 
                            = ((IData)(1U) + vlSymsp->TOP____024unit.factorial__Vstatic__i);
                    }
                    vlSelfRef.__Vfunc_factorial__2__Vfuncout 
                        = vlSymsp->TOP____024unit.factorial__Vstatic__fact;
                }(), vlSelfRef.__Vfunc_factorial__2__Vfuncout)));
    vlSymsp->TOP____024unit.exp__Vstatic__result = __Vtemp_100;
    __Vfunc_exp__0__Vfuncout = vlSymsp->TOP____024unit.exp__Vstatic__result;
    vlSelfRef.y = __Vfunc_exp__0__Vfuncout;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExponential___024root___dump_triggers__act(VExponential___024root* vlSelf);
#endif  // VL_DEBUG

void VExponential___024root___eval_triggers__act(VExponential___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___eval_triggers__act\n"); );
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExponential___024root___dump_triggers__act(vlSelf);
    }
#endif
}
