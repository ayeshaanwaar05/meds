// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VExponential.h for the primary calling header

#ifndef VERILATED_VEXPONENTIAL___024UNIT_H_
#define VERILATED_VEXPONENTIAL___024UNIT_H_  // guard

#include "verilated.h"


class VExponential__Syms;

class alignas(VL_CACHE_LINE_BYTES) VExponential___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ power__Vstatic__i;
    IData/*31:0*/ factorial__Vstatic__i;
    double exp__Vstatic__result;
    double power__Vstatic__result;
    double factorial__Vstatic__fact;

    // INTERNAL VARIABLES
    VExponential__Syms* const vlSymsp;

    // CONSTRUCTORS
    VExponential___024unit(VExponential__Syms* symsp, const char* v__name);
    ~VExponential___024unit();
    VL_UNCOPYABLE(VExponential___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
