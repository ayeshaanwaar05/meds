scale = 1ns/10ps

simulate: run_sv_impl
	gtkwave exp.vcd

run_sv_impl: build
	./obj_dir/Vexp

build: Vexp.o
	make -C ./obj_dir/ -f Vexp.mk Vexp

Vexp.o: tb_exp.cpp exp.sv
	verilator --cc $(filter %.sv, $^) --trace --exe $(filter %.cpp, $^) --timescale $(scale)
