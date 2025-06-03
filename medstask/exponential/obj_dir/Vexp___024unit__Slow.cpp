// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexp.h for the primary calling header

#include "Vexp__pch.h"
#include "Vexp__Syms.h"
#include "Vexp___024unit.h"

void Vexp___024unit___ctor_var_reset(Vexp___024unit* vlSelf);

Vexp___024unit::Vexp___024unit(Vexp__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vexp___024unit___ctor_var_reset(this);
}

void Vexp___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vexp___024unit::~Vexp___024unit() {
}
