// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VExponential.h for the primary calling header

#ifndef VERILATED_VEXPONENTIAL___024ROOT_H_
#define VERILATED_VEXPONENTIAL___024ROOT_H_  // guard

#include "verilated.h"
class VExponential___024unit;


class VExponential__Syms;

class alignas(VL_CACHE_LINE_BYTES) VExponential___024root final : public VerilatedModule {
  public:
    // CELLS
    VExponential___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __Vfunc_power__1__pow;
    IData/*31:0*/ __Vfunc_factorial__2__x;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    double x;
    double y;
    double __Vfunc_power__1__Vfuncout;
    double __Vfunc_power__1__x;
    double __Vfunc_factorial__2__Vfuncout;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VExponential__Syms* const vlSymsp;

    // CONSTRUCTORS
    VExponential___024root(VExponential__Syms* symsp, const char* v__name);
    ~VExponential___024root();
    VL_UNCOPYABLE(VExponential___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
