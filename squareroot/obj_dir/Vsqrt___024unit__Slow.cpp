// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsqrt.h for the primary calling header

#include "Vsqrt__pch.h"
#include "Vsqrt__Syms.h"
#include "Vsqrt___024unit.h"

void Vsqrt___024unit___ctor_var_reset(Vsqrt___024unit* vlSelf);

Vsqrt___024unit::Vsqrt___024unit(Vsqrt__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsqrt___024unit___ctor_var_reset(this);
}

void Vsqrt___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsqrt___024unit::~Vsqrt___024unit() {
}
