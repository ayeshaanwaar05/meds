// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexp.h for the primary calling header

#include "Vexp__pch.h"
#include "Vexp__Syms.h"
#include "Vexp___024root.h"

void Vexp___024root___ctor_var_reset(Vexp___024root* vlSelf);

Vexp___024root::Vexp___024root(Vexp__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vexp___024root___ctor_var_reset(this);
}

void Vexp___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vexp___024root::~Vexp___024root() {
}
