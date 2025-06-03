// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsqrt.h for the primary calling header

#ifndef VERILATED_VSQRT___024UNIT_H_
#define VERILATED_VSQRT___024UNIT_H_  // guard

#include "verilated.h"


class Vsqrt__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsqrt___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    double squareroot__Vstatic__start_pt;
    double squareroot__Vstatic__end_pt;
    double squareroot__Vstatic__mid_pt;
    double squareroot__Vstatic__tolerance;
    double squareroot__Vstatic__difference;

    // INTERNAL VARIABLES
    Vsqrt__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsqrt___024unit(Vsqrt__Syms* symsp, const char* v__name);
    ~Vsqrt___024unit();
    VL_UNCOPYABLE(Vsqrt___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
