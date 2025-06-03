// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExponential.h for the primary calling header

#include "VExponential__pch.h"
#include "VExponential__Syms.h"
#include "VExponential___024root.h"

void VExponential___024root___ctor_var_reset(VExponential___024root* vlSelf);

VExponential___024root::VExponential___024root(VExponential__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VExponential___024root___ctor_var_reset(this);
}

void VExponential___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VExponential___024root::~VExponential___024root() {
}
