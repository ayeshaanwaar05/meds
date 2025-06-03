#include <verilated.h>
#include "Vexp.h"
#include <verilated_vcd_c.h>
#include "stdio.h"
#include "random"
#include "ctime"

vluint64_t main_time = 0;
double sc_main_timestamp(){
    return main_time;
}

int main(int argc, char** argv){
    Vexp* UUT = new Vexp;
    VerilatedVcdC* tpf = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    UUT->trace(tpf, 99);
    tpf->open("exp.vcd");
    for (double i = 0.0; i < 5; i++){
        UUT->input_val = 5 - i;
        UUT->eval();
        tpf->dump(main_time);
        printf("exp(%f) = %f\n", UUT->input_val, UUT->output_val);
        main_time += 500;
    }
    tpf->dump(main_time);
    tpf->close();
    delete UUT;
    delete tpf;
    return 0;
}