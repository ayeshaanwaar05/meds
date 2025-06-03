// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VExponential__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VExponential::VExponential(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VExponential__Syms(contextp(), _vcname__, this)}
    , x{vlSymsp->TOP.x}
    , y{vlSymsp->TOP.y}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VExponential::VExponential(const char* _vcname__)
    : VExponential(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VExponential::~VExponential() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VExponential___024root___eval_debug_assertions(VExponential___024root* vlSelf);
#endif  // VL_DEBUG
void VExponential___024root___eval_static(VExponential___024root* vlSelf);
void VExponential___024root___eval_initial(VExponential___024root* vlSelf);
void VExponential___024root___eval_settle(VExponential___024root* vlSelf);
void VExponential___024root___eval(VExponential___024root* vlSelf);

void VExponential::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VExponential::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VExponential___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VExponential___024root___eval_static(&(vlSymsp->TOP));
        VExponential___024root___eval_initial(&(vlSymsp->TOP));
        VExponential___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VExponential___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VExponential::eventsPending() { return false; }

uint64_t VExponential::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VExponential::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VExponential___024root___eval_final(VExponential___024root* vlSelf);

VL_ATTR_COLD void VExponential::final() {
    VExponential___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VExponential::hierName() const { return vlSymsp->name(); }
const char* VExponential::modelName() const { return "VExponential"; }
unsigned VExponential::threads() const { return 1; }
void VExponential::prepareClone() const { contextp()->prepareClone(); }
void VExponential::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VExponential::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VExponential___024root__trace_decl_types(VerilatedVcd* tracep);

void VExponential___024root__trace_init_top(VExponential___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VExponential___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VExponential___024root*>(voidSelf);
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VExponential___024root__trace_decl_types(tracep);
    VExponential___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VExponential___024root__trace_register(VExponential___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VExponential::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VExponential::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VExponential___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
