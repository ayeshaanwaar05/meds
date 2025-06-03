// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vexp.h for the primary calling header

#ifndef VERILATED_VEXP___024UNIT_H_
#define VERILATED_VEXP___024UNIT_H_  // guard

#include "verilated.h"


class Vexp__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vexp___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ compute_exp__Vstatic__term_idx;
    IData/*31:0*/ pow__Vstatic__p;
    IData/*31:0*/ fact__Vstatic__j;
    double compute_exp__Vstatic__sum;
    double pow__Vstatic__result1;
    double fact__Vstatic__result2;

    // INTERNAL VARIABLES
    Vexp__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vexp___024unit(Vexp__Syms* symsp, const char* v__name);
    ~Vexp___024unit();
    VL_UNCOPYABLE(Vexp___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
