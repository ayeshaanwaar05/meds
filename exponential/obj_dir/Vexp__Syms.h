// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VEXP__SYMS_H_
#define VERILATED_VEXP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vexp.h"

// INCLUDE MODULE CLASSES
#include "Vexp___024root.h"
#include "Vexp___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vexp__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vexp* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vexp___024root                 TOP;
    Vexp___024unit                 TOP____024unit;

    // CONSTRUCTORS
    Vexp__Syms(VerilatedContext* contextp, const char* namep, Vexp* modelp);
    ~Vexp__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
