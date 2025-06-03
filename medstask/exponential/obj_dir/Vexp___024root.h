// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vexp.h for the primary calling header

#ifndef VERILATED_VEXP___024ROOT_H_
#define VERILATED_VEXP___024ROOT_H_  // guard

#include "verilated.h"
class Vexp___024unit;


class Vexp__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vexp___024root final : public VerilatedModule {
  public:
    // CELLS
    Vexp___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __Vfunc_fact__2__num;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    double input_val;
    double output_val;
    double __Vfunc_pow__1__Vfuncout;
    double __Vfunc_pow__1__base;
    double __Vfunc_fact__2__Vfuncout;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vexp__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vexp___024root(Vexp__Syms* symsp, const char* v__name);
    ~Vexp___024root();
    VL_UNCOPYABLE(Vexp___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
