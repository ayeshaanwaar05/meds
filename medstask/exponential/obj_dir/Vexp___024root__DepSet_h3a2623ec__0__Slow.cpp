// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexp.h for the primary calling header

#include "Vexp__pch.h"
#include "Vexp__Syms.h"
#include "Vexp___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexp___024root___dump_triggers__stl(Vexp___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vexp___024root___eval_triggers__stl(Vexp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp___024root___eval_triggers__stl\n"); );
    Vexp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vexp___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vexp___024root___stl_sequent__TOP__0(Vexp___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexp___024root___stl_sequent__TOP__0\n"); );
    Vexp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    double __Vfunc_compute_exp__0__Vfuncout;
    __Vfunc_compute_exp__0__Vfuncout = 0;
    double __Vfunc_compute_exp__0__z;
    __Vfunc_compute_exp__0__z = 0;
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
    __Vfunc_compute_exp__0__z = vlSelfRef.input_val;
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = (0.0 + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 0U;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                  / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 0U;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel1;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel1: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    __Vtemp_5 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                 + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 1U;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                    / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 1U;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel2;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel2: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_5;
    __Vtemp_10 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                  + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 2U;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 2U;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel3;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel3: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_10;
    __Vtemp_15 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                  + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 3U;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 3U;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel4;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel4: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_15;
    __Vtemp_20 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                  + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 4U;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 4U;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel5;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel5: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_20;
    __Vtemp_25 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                  + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 5U;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 5U;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel6;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel6: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_25;
    __Vtemp_30 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                  + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 6U;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 6U;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel7;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel7: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_30;
    __Vtemp_35 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                  + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 7U;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 7U;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel8;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel8: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_35;
    __Vtemp_40 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                  + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 8U;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 8U;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel9;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel9: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_40;
    __Vtemp_45 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                  + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 9U;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 9U;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel10;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel10: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_45;
    __Vtemp_50 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                  + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 0xaU;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 0xaU;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel11;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel11: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_50;
    __Vtemp_55 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                  + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 0xbU;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 0xbU;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel12;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel12: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_55;
    __Vtemp_60 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                  + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 0xcU;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 0xcU;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel13;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel13: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_60;
    __Vtemp_65 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                  + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 0xdU;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 0xdU;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel14;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel14: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_65;
    __Vtemp_70 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                  + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 0xeU;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 0xeU;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel15;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel15: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_70;
    __Vtemp_75 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                  + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 0xfU;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 0xfU;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel16;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel16: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_75;
    __Vtemp_80 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                  + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 0x10U;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 0x10U;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel17;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel17: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_80;
    __Vtemp_85 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                  + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 0x11U;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 0x11U;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel18;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel18: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_85;
    __Vtemp_90 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                  + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 0x12U;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 0x12U;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel19;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel19: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_90;
    __Vtemp_95 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                  + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 0x13U;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                     / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 0x13U;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel20;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel20: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_95;
    __Vtemp_100 = (vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
                   + (([&]() {
                    vlSelfRef.__Vfunc_pow__1__base 
                        = __Vfunc_compute_exp__0__z;
                    vlSymsp->TOP____024unit.pow__Vstatic__result1 = 1.0;
                    vlSymsp->TOP____024unit.pow__Vstatic__p = 0x14U;
                    while (VL_LTS_III(32, 0U, vlSymsp->TOP____024unit.pow__Vstatic__p)) {
                        vlSymsp->TOP____024unit.pow__Vstatic__result1 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__result1 
                               * vlSelfRef.__Vfunc_pow__1__base);
                        vlSymsp->TOP____024unit.pow__Vstatic__p 
                            = (vlSymsp->TOP____024unit.pow__Vstatic__p 
                               - (IData)(1U));
                    }
                    vlSelfRef.__Vfunc_pow__1__Vfuncout 
                        = vlSymsp->TOP____024unit.pow__Vstatic__result1;
                }(), vlSelfRef.__Vfunc_pow__1__Vfuncout) 
                      / ([&]() {
                    vlSelfRef.__Vfunc_fact__2__num = 0x14U;
                    {
                        if (((0U == vlSelfRef.__Vfunc_fact__2__num) 
                             | (1U == vlSelfRef.__Vfunc_fact__2__num))) {
                            vlSelfRef.__Vfunc_fact__2__Vfuncout = 1.0;
                            goto __Vlabel21;
                        }
                        vlSymsp->TOP____024unit.fact__Vstatic__result2 = 1.0;
                        vlSymsp->TOP____024unit.fact__Vstatic__j = 2U;
                        while (VL_LTES_III(32, vlSymsp->TOP____024unit.fact__Vstatic__j, vlSelfRef.__Vfunc_fact__2__num)) {
                            vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                = (vlSymsp->TOP____024unit.fact__Vstatic__result2 
                                   * VL_ISTOR_D_I(32, vlSymsp->TOP____024unit.fact__Vstatic__j));
                            vlSymsp->TOP____024unit.fact__Vstatic__j 
                                = ((IData)(1U) + vlSymsp->TOP____024unit.fact__Vstatic__j);
                        }
                        vlSelfRef.__Vfunc_fact__2__Vfuncout 
                            = vlSymsp->TOP____024unit.fact__Vstatic__result2;
                        __Vlabel21: ;
                    }
                }(), vlSelfRef.__Vfunc_fact__2__Vfuncout)));
    vlSymsp->TOP____024unit.compute_exp__Vstatic__sum 
        = __Vtemp_100;
    vlSymsp->TOP____024unit.compute_exp__Vstatic__term_number = 0x15U;
    __Vfunc_compute_exp__0__Vfuncout = vlSymsp->TOP____024unit.compute_exp__Vstatic__sum;
    vlSelfRef.output_val = __Vfunc_compute_exp__0__Vfuncout;
}
