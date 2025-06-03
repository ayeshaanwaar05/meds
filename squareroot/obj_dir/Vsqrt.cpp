// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsqrt__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsqrt::Vsqrt(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsqrt__Syms(contextp(), _vcname__, this)}
    , input_value{vlSymsp->TOP.input_value}
    , result{vlSymsp->TOP.result}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsqrt::Vsqrt(const char* _vcname__)
    : Vsqrt(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsqrt::~Vsqrt() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsqrt___024root___eval_debug_assertions(Vsqrt___024root* vlSelf);
#endif  // VL_DEBUG
void Vsqrt___024root___eval_static(Vsqrt___024root* vlSelf);
void Vsqrt___024root___eval_initial(Vsqrt___024root* vlSelf);
void Vsqrt___024root___eval_settle(Vsqrt___024root* vlSelf);
void Vsqrt___024root___eval(Vsqrt___024root* vlSelf);

void Vsqrt::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsqrt::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsqrt___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsqrt___024root___eval_static(&(vlSymsp->TOP));
        Vsqrt___024root___eval_initial(&(vlSymsp->TOP));
        Vsqrt___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsqrt___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsqrt::eventsPending() { return false; }

uint64_t Vsqrt::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsqrt::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsqrt___024root___eval_final(Vsqrt___024root* vlSelf);

VL_ATTR_COLD void Vsqrt::final() {
    Vsqrt___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsqrt::hierName() const { return vlSymsp->name(); }
const char* Vsqrt::modelName() const { return "Vsqrt"; }
unsigned Vsqrt::threads() const { return 1; }
void Vsqrt::prepareClone() const { contextp()->prepareClone(); }
void Vsqrt::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsqrt::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsqrt___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsqrt___024root__trace_init_top(Vsqrt___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsqrt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsqrt___024root*>(voidSelf);
    Vsqrt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsqrt___024root__trace_decl_types(tracep);
    Vsqrt___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsqrt___024root__trace_register(Vsqrt___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsqrt::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsqrt::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsqrt___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
