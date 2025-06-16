#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vsqrt.h"
#include "stdio.h"
#include "time.h"

vluint64_t main_time = 0;
double sv_main_timestamp(){
    return main_time;
}

int main(int argc, char** argv){  
    srand(time(NULL));
    Vsqrt* UUT = new Vsqrt;
    VerilatedVcdC* tpf = new VerilatedVcdC;
    Verilated::traceEverOn(true);

    UUT->trace(tpf, 1);
    tpf->open("sqrt.vcd");

    for (int i = 0; i < 5; i++){
        UUT->input_value = double(rand()) /1000;
        UUT->eval();
        tpf->dump(main_time);
        printf("Sqrt(%.10f) = %.15f\n", UUT->input_value, UUT->result);
        main_time += 5;
    }
    tpf->dump(main_time);
    tpf->close();
    delete tpf;
    delete UUT;
    return 0;
}
