// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsqrt.h for the primary calling header

#ifndef VERILATED_VSQRT___024ROOT_H_
#define VERILATED_VSQRT___024ROOT_H_  // guard

#include "verilated.h"
class Vsqrt___024unit;


class Vsqrt__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsqrt___024root final : public VerilatedModule {
  public:
    // CELLS
    Vsqrt___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    double input_value;
    double result;
    double __Vfunc_squareroot__0__Vfuncout;
    double __Vfunc_abs__1__Vfuncout;
    double __Vfunc_abs__1__r;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsqrt__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsqrt___024root(Vsqrt__Syms* symsp, const char* v__name);
    ~Vsqrt___024root();
    VL_UNCOPYABLE(Vsqrt___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
