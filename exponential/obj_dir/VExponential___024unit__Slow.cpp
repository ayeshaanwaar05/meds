// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExponential.h for the primary calling header

#include "VExponential__pch.h"
#include "VExponential__Syms.h"
#include "VExponential___024unit.h"

void VExponential___024unit___ctor_var_reset(VExponential___024unit* vlSelf);

VExponential___024unit::VExponential___024unit(VExponential__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VExponential___024unit___ctor_var_reset(this);
}

void VExponential___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VExponential___024unit::~VExponential___024unit() {
}
