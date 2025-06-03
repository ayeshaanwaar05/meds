scale = 1ns/10ps

simulate : run_sv_impl
	gtkwave sqrt.vcd

run_sv_impl : build
	./obj_dir/Vsqrt

build : Vsqrt.o
	make -C ./obj_dir/ -f Vsqrt.mk Vsqrt

Vsqrt.o : tb_sqrt.cpp sqrt.sv
	verilator --cc $(filter %.sv, $^) --trace --exe $(filter %.cpp, $^) --timescale $(scale)