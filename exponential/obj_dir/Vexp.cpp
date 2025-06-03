// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vexp__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vexp::Vexp(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vexp__Syms(contextp(), _vcname__, this)}
    , input_val{vlSymsp->TOP.input_val}
    , output_val{vlSymsp->TOP.output_val}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vexp::Vexp(const char* _vcname__)
    : Vexp(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vexp::~Vexp() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vexp___024root___eval_debug_assertions(Vexp___024root* vlSelf);
#endif  // VL_DEBUG
void Vexp___024root___eval_static(Vexp___024root* vlSelf);
void Vexp___024root___eval_initial(Vexp___024root* vlSelf);
void Vexp___024root___eval_settle(Vexp___024root* vlSelf);
void Vexp___024root___eval(Vexp___024root* vlSelf);

void Vexp::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vexp::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vexp___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vexp___024root___eval_static(&(vlSymsp->TOP));
        Vexp___024root___eval_initial(&(vlSymsp->TOP));
        Vexp___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vexp___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vexp::eventsPending() { return false; }

uint64_t Vexp::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vexp::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vexp___024root___eval_final(Vexp___024root* vlSelf);

VL_ATTR_COLD void Vexp::final() {
    Vexp___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vexp::hierName() const { return vlSymsp->name(); }
const char* Vexp::modelName() const { return "Vexp"; }
unsigned Vexp::threads() const { return 1; }
void Vexp::prepareClone() const { contextp()->prepareClone(); }
void Vexp::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vexp::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vexp___024root__trace_decl_types(VerilatedVcd* tracep);

void Vexp___024root__trace_init_top(Vexp___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vexp___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexp___024root*>(voidSelf);
    Vexp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vexp___024root__trace_decl_types(tracep);
    Vexp___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vexp___024root__trace_register(Vexp___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vexp::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vexp::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vexp___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
