# Digital Design and Computer Architecture: Key Takeaways (L1–L6)
----
## Lecture 1: What Makes a Computer Work?

### 1. Overview
This lecture introduces what a computer really is and breaks down the core components and ideas behind computer architecture. It also covers the types of computers, key building blocks, and how simple transistors form the foundation of logic.

---

### 2. Key Concepts

- **Computer Architecture** is the **science and art** of designing, selecting, and connecting hardware components, and creating the interface between hardware and software to build a computing system that meets goals like performance, energy efficiency, cost, and functionality.
- A computer performs three main functions:
  - **Computation** – processing data and executing instructions.
  - **Communication** – transferring data internally and externally.
  - **Storage/Memory** – storing instructions and data temporarily or permanently.
- **General-purpose systems**: Flexible machines that can run many types of software — e.g., personal computers, smartphones, and servers.
- **Special-purpose systems**: Built for specific tasks — e.g., machine learning accelerators for fast matrix/vector operations, digital signal processors, or Bitcoin mining chips.
- **Transformation Hierarchy** of computing systems:
  - **Problem** → **Algorithm** → **Programming Language** → **System Software** → **Hardware/Software Interface** → **Microarchitecture** → **Logic Circuits** → **Devices** → **Electrons**
  - Each level transforms the problem into a lower-level representation, eventually reaching physical hardware.

---

### 3. Important Components or Structures

- **Building blocks of a computer**:
  - Everything starts from **transistors**, which act like tiny electronic switches.
  - Transistors are used to build **logic gates** like AND, OR, NOT.
  - Logic gates are combined to build more complex digital circuits.
- Types of hardware implementation:
  - **Microprocessors (MPs)**: Flexible and programmable.
  - **Field Programmable Gate Arrays (FPGAs)**: Reconfigurable hardware.
  - **Application-Specific Integrated Circuits (ASICs)**: Custom, fixed-function hardware, often faster and more power-efficient.

---


### 4. Examples or Illustrations

- An **AND gate** only outputs 1 if both inputs are 1 — it's built using multiple transistors.
- **General-purpose system example**: Laptops and smartphones, which can run many types of programs like web browsers, games, or development tools.
- **Special-purpose system example**: A machine learning accelerator chip designed specifically for fast matrix and vector multiplication commonly used in AI models.


---


### 5. What I Learned

This lecture helped me understand that a computer is not just a machine that calculates, it’s a complete system made of carefully designed components that work together. I found it fascinating how something as small as a transistor plays such a huge role in building powerful systems. I also learned that hardware isn't one-size-fits-all. We choose between processors, FPGAs, and ASICs depending on the use case.

It also gave us a broader vision of the computing world by showing how different technologies like CPUs, GPUs, and custom chips are used across systems. We saw examples from companies like Microsoft, Google, Intel, and AMD, showing how real-world products are shaped by architectural choices.


---


## Lecture 2: Boolean Logic & Combinational Circuits

---

### 1. Logic Circuit Types

Digital systems are built using two main kinds of logic:

- **Combinational logic**: These circuits produce output purely based on current inputs. They don’t remember past inputs. Examples include logic gates like AND, OR, and NOT.
- **Sequential logic**: These circuits have memory. Their output depends on both current and past inputs. Flip-flops and registers fall into this category.

---

### 2. What is a Functional Specification?

This refers to defining the behavior of a circuit as a function from inputs to outputs. It’s:
- **Deterministic** – same inputs always produce the same outputs
- **Stateless** – no internal memory

A common example is a 1-bit full adder, which outputs a sum and carry based on three input bits.

---

### 3. Basics of Boolean Algebra

Boolean algebra helps in designing and analyzing logic circuits using:
- NOT (~), AND (•), and OR (+) operations  
- Expressions can be written using **literals** (like A or A̅), **implicants** (ANDed literals), and complete forms like **minterms** (full combinations that make the output true) or **maxterms** (combinations that make it false).

---

### 4. Canonical Forms & Simplification

There are two standard ways to express Boolean logic:

- **Sum of Products (SOP)**: A series of AND terms combined with OR.
- **Product of Sums (POS)**: A series of OR terms combined with AND.

Using Boolean rules (like De Morgan’s laws), we can **simplify** expressions to make hardware smaller and faster. For example:  
`A'BC + AB'C + ABC' + ABC` simplifies to just `A + BC`.

---

### 5. From Problem to Electrons

One key insight was the **transformation hierarchy** showing how high-level problems eventually become hardware instructions:

> Problem → Algorithm → Programming Language → System Software → Software/Hardware Interface → Microarchitecture → Logic → Devices → Electrons

This helps appreciate how deep and layered computer design really is.

---

### 6. Combinational Logic Blocks

#### Decoders

Decoders are used to identify specific input patterns. For n inputs, they generate 2ⁿ outputs, with only one active at a time (one-hot encoding). They are widely used for memory selection and instruction decoding.

#### Multiplexers (MUX)

MUXes act like digital switches that select one of many inputs based on control signals. They're useful in routing data and implementing logic functions using fewer components.

#### Adders

- **Full Adders**: Handle 1-bit binary addition with carry-in and carry-out.
- **Ripple-Carry Adders**: Chain multiple full adders but are slow due to carry delay.
- **Carry-Lookahead Adders**: Speed things up by computing carry signals in parallel.

#### PLAs (Programmable Logic Arrays)

PLAs are reconfigurable logic devices that implement SOP expressions using an array of AND gates followed by OR gates. They are versatile and can implement a variety of digital functions.

---

### 7. Arithmetic Logic Unit (ALU)

The ALU is a central hardware block in processors that performs:
- Arithmetic (like addition and subtraction)
- Logical operations (AND, OR, XOR)
- Comparisons

It uses shared logic resources and selects the operation via control signals.

---

### What I Learned

This lecture gave me a solid starting point in understanding how digital systems work. I learned how basic building blocks like logic gates can be combined to create more useful parts like decoders, multiplexers, and ALUs.

It also helped me see how we go from simple logic ideas to actual hardware in a computer. I now better understand how computers use these building blocks to make decisions and do calculations.

Overall, this lecture helped me see how important combinational logic is for building fast and smart computers. It gave me a clearer picture of how math and logic work together to make modern computing possible.

---
# Lecture 3: Digital Logic and Sequential Circuits

## 1. Combinational Logic Overview
- **Basic Gates**: AND, OR, NOT, NAND, NOR, XOR.
- **Important Components**:
  - **Decoder**: Converts n inputs into 2ⁿ outputs.
  - **Multiplexer (MUX)**: Selects one input out of many using select lines.
  - **PLA**: Flexible logic unit based on AND-OR structure.
- **Logical Completeness**: All Boolean functions can be built using {AND, OR, NOT}, or just NAND/NOR.
---
## 2. Advanced Logic Blocks
- **Comparator**: Uses XOR and AND to compare bit values.
- **ALU (Arithmetic Logic Unit)**: Performs arithmetic and logical operations based on control inputs.
- **Tri-State Buffer**: Acts like a switch; allows shared communication lines.
---
## 3. Memory Design Basics
- **Registers**: Built using D latches; stores bits in parallel.
- **Memory Arrays**:
  - Use address decoding to select memory locations.
  - Multiplexers for reading, decoders for writing.
---
## 4. Sequential Logic Intro
- **Key Concept**: Output depends on both current inputs and previous state.
- **Storage Elements**:
  - **RS Latch**: Basic 1-bit storage using cross-coupled gates.
  - **Gated D Latch**: Stores value only when enabled.
  - **D Flip-Flop**: Edge-triggered; stores value on clock edge.
---
## 5. Finite State Machines (FSMs)
- **Parts**:
  - State Register: Remembers current state.
  - Next-State Logic: Determines next state.
  - Output Logic:
    - **Moore**: Output depends only on current state.
    - **Mealy**: Output depends on current state and inputs.
- **Design Steps**: Define states → Encode → Create logic.
---
## 6. Clocks and Timing
- **Clock**: Periodic signal for syncing state changes.
- **Synchronous Systems**: Use clock for reliable operation.
- **Timing Constraints**: Clock period must cover logic delay.

---
## 7. Other Important Topics
- **Metastability**: Happens when timing constraints are violated.
- **Storage Hierarchy**: Flip-flops (fastest, costly) → SRAM → DRAM → Flash (slowest, dense).
- **LUTs**: Used in FPGAs to implement logic functions.

---
## What I Learned 
In this lecture, I learned how basic logic gates like AND, OR, and NOT are the building blocks of digital systems. I saw how components like decoders, multiplexers, and PLAs help create useful logic functions, and how even complex functions can be built using just NAND or NOR gates. I understood how comparators check if values are equal, how ALUs handle arithmetic and logic, and how tri-state buffers help with shared data lines. I learned how memory works using registers and address decoding, and how sequential circuits use flip-flops and latches to remember past inputs. I was introduced to Finite State Machines (FSMs), which change behavior based on current inputs and stored states, with two main types: Moore and Mealy. I also realized how important clock signals are for controlling timing in systems, and I learned about problems like metastability and the different types of memory used in computers. Finally, I found out that FPGAs use lookup tables (LUTs) to build any logic function, making them powerful and flexible. This lecture helped me see how digital systems are designed to process and control information.

---
# Lecture 4: Understanding Finite State Machines (FSM) and Flip-Flops



## Finite State Machine (FSM) Components

An FSM has a finite number of states (like S0, S1, etc.) and communicates with external inputs and outputs. The next state depends on the current state and inputs, described by a function:  
**next_state = f(current_state, inputs)**.

There are two types of FSM output logic:  
- **Moore machines:** Outputs depend only on the current state.  
- **Mealy machines:** Outputs depend on both current state and inputs.
---
## FSM State Encoding Methods

States can be represented in different ways:  
- **Binary encoding:** Uses the fewest flip-flops but has more complex logic. For example, four states can be encoded as 00, 01, 10, 11.  
- **One-Hot encoding:** Uses one flip-flop per state, making logic simpler but requires more flip-flops. Example: 0001, 0010, 0100, 1000.  
- **Output-Encoded:** Encodes outputs into state bits, mainly used with Moore machines. Example: 001(Green), 010(Yellow), 100(Red).
---
## Synchronous vs. Asynchronous FSM

- **Synchronous FSM:** State changes happen only at clock edges. This makes design easier, especially for large systems like CPUs and RAM.  
- **Asynchronous FSM:** State changes immediately based on input events without waiting for a clock. It can be more efficient but is more complex, used in systems like combination locks.
----
## FSM Design Procedure

1. **Define States:** Decide all possible states (e.g., IDLE, CAL, DONE).  
2. **Draw State Diagram:** Represent states as circles and transitions as arrows labeled with inputs and outputs.  
3. **Choose State Encoding:** Pick binary for fewer flip-flops or one-hot for simpler logic.  
4. **Implement in Verilog:** For example,  
   ```verilog
   always @(posedge clk) begin
     if (reset)
       state <= IDLE;
     else
       state <= next_state;
   end
---
## What I Learned

In this lecture, I understood how FSMs are essential for designing digital systems by controlling states and transitions based on inputs and outputs. I learned different ways to encode states, balancing the use of hardware and logic complexity. I also learned the difference between synchronous and asynchronous FSMs and their applications. The step-by-step design process, from defining states to implementing Verilog code, helped me grasp practical FSM creation. Studying flip-flops, especially the contrast between latches and flip-flops, clarified how memory elements manage timing and store states. Lastly, comparing Moore and Mealy machines showed how output logic influences the number of states and response time. This lecture deepened my understanding of designing reliable digital state machines.

---
# Lecture 5 – Introduction to Verilog and HDL Basics

## 1. What is an HDL?

We began the lecture by understanding what Hardware Description Languages (HDLs) are. They are special languages used to describe how digital circuits work. HDLs are used for designing both combinational logic (like adders, muxes) and sequential logic (like flip-flops and state machines). They support features like concurrency (parallel execution) and hierarchy (modules inside modules). The two most popular HDLs are **Verilog** and **VHDL**, but in this course, we are mainly using **Verilog**.

---

## 2. Verilog Module Basics

A Verilog module is the basic building block of a design. It includes inputs, outputs, and logic. Inputs can be simple wires or buses (like `[3:0]` for 4-bit inputs). Outputs can be `wire`, `reg`, or `logic`. The `reg` type is used inside `always` blocks, and doesn’t always mean a physical register. In SystemVerilog, `logic` is often used because it combines the behavior of `wire` and `reg` for simpler syntax.

Here’s a basic Verilog module example:
```verilog
module Example(
  input wire a, b,
  input wire [3:0] c,
  output reg y
);
// Implementation goes here
endmodule
```
---

## 3. Structural vs Behavioral Modeling

There are two main coding styles in Verilog.

### A. Structural Modeling

Describes how components are connected.

#### Example using gates:
```verilog
and g1(y, a, b);  // y = a AND 
```
### B. Behavioral Modeling

Describes what the circuit should do, not how it’s built.

#### Example using `assign`:
```verilog
assign y = (a & b) | (c ^ d);
```
#### Example using `always block`:

```
always @(*) begin
  case(sel)
    2'b00: out = in0;
    2'b01: out = in1;
    default: out = 4'b0;
  endcase
end
```
## 4. Sequential Logic and Assignments
Used to describe logic that depends on a clock, like flip-flops and registers.

####  Flip-Flop Example:
```

always @(posedge clk) begin
  q <= d;
end
```
#### Types of Assignments
`Blocking (=)`: Executes step-by-step, used for combinational logic.
`Non-blocking (<=)`: Executes in parallel, used for sequential logic.
#### Blocking example:

```
a = 5;
b = a; // b gets new value of a
```
#### Non-blocking example:

```
a <= 5;
b <= a; // b gets old value of a
```
Never mix both in the same always block.


#### Example:
```
always @ (posedge clk) begin
  a <= 2'b01;
  b <= a; // b gets the previous value of a
end
```

#### 🚫 Do not mix = and <= in the same block!

#### State Machines
We use FSMs (Finite State Machines) to control the flow in digital systems.

#### Example: Moore Machine
```
reg [1:0] state, next_state;

always @(posedge clk or posedge reset) begin
  if (reset)
    state <= 2'b00;
  else
    state <= next_state;
end

always @(*) begin
  case (state)
    2'b00: next_state = start ? 2'b01 : 2'b00;
    2'b01: next_state = done ? 2'b10 : 2'b01;
    2'b10: next_state = 2'b00;
  endcase
end
```
Moore machines depend only on the current state for outputs, while Mealy machines depend on both state and inputs.




#### Writing a Testbench
To verify our design, we write a testbench that provides inputs and checks outputs.

#### Basic structure:

```
module testbench;
  reg clk, rst;
  wire out;

  my_module uut (.clk(clk), .rst(rst), .out(out));

  initial begin
    clk = 0;
    forever #5 clk = ~clk;
  end

  initial begin
    rst = 1;
    #10 rst = 0;
    #100 $finish;
  end
endmodule
```
#### Design Practices
`Use hierarchy`: Split designs into smaller modules

`Avoid latches` by assigning all outputs in all conditions

`Register` outputs for better timing

`Use clear` and consistent naming

`One always block` per state machine is a good habit

#### Top-Down vs Bottom-Up Design
`Top-Down`: Start from a high-level idea and break it into submodules

Good for new projects

`Bottom-Up`: Start from smaller blocks and build up to the full system

Useful when reusing existing components
Each approach has its strengths, and in practice, we often use a mix of both.

#### What I Learned
This lecture helped me understand how to write and organize Verilog code, the difference between modeling styles, and how to build and simulate sequential logic like FSMs. I also learned best practices to keep designs clean and reliable, and how to test them using testbenches.

---
# Lecture 6 

## 1. Combinational Circuit Timing

In digital circuits, delay can come from many places such as how fast transistors switch, delays from resistance and capacitance (RC), wire length, changes in temperature or voltage, and aging of components. These factors can cause the output to take more or less time to change when the input changes.

There are two main types of delays:
- **Contamination Delay (t_cd):** The shortest time after an input changes before the output starts changing.
- **Propagation Delay (t_pd):** The longest time it takes for the output to become stable after an input change.

Sometimes circuits produce short wrong outputs called **glitches** because different paths have different delays. If the final output is correct, these glitches are usually ignored.

The **critical path** is the slowest path through the circuit. It decides the fastest speed the system can run. While tools can measure these delays, engineers also need to check edge cases manually.

---

## 2. Sequential Circuit Timing

Sequential circuits use **flip-flops** to store data. These flip-flops also have timing requirements:

- **Setup Time (t_setup):** Data must be ready before the clock signal arrives.
- **Hold Time (t_hold):** Data must stay stable after the clock signal.
- **Clock-to-Q Delay (t_clkq):** The time it takes for the output to respond after a clock edge.

A problem called **clock skew** can happen when the clock signal reaches different flip-flops at different times. This can make timing worse and cause errors. One way to fix this is to design the clock tree carefully so all parts get the clock at the same time.

---

## 3. Timing Violations and How to Fix Them

### Setup Violation
- **Cause:** The logic between flip-flops is too slow.
- **Fixes:** Lower the clock speed, make logic faster, or break the path into smaller parts using pipelining.

### Hold Violation
- **Cause:** The logic is too fast, and the signal changes before it should.
- **Fix:** Add delay buffers to slow down the signal. This won’t affect setup timing.

---

## 4. Circuit Verification

Making sure the design works is a big part of digital design. There are different types of verification:

- **Functional Verification:** This checks if the logic behaves correctly.
  - Manual testbenches test inputs and outputs.
  - Self-checking testbenches automatically compare actual and expected outputs.

- **Timing Verification:** This includes simulation with delays and tools like Static Timing Analysis (STA), which checks all timing paths quickly.

- **Post-Synthesis Simulation:** Uses actual gate-level delays after synthesis.

- **Formal Verification:** Uses math to prove the circuit works correctly. One method is using **SystemVerilog Assertions (SVA)** to define rules that must always be true.

---

## 5. Good Design Practices

To make a strong and reliable design, engineers follow these principles:

- **Optimize Critical Path:** Make the longest delay path as short as possible to increase the speed.
- **Balanced Design:** Spread delays evenly to prevent bottlenecks.
- **Common-Case Optimization:** Focus on making the most frequent operations faster.
- **Plan for Aging and Variations:** Design circuits that can still work well even when temperature, voltage, or transistor quality changes over time.

---

## What I Learned

This lecture showed that timing is crucial in digital circuits. It affects how fast and how reliably a circuit works. Problems like setup and hold violations can be fixed with pipelining or adding delays. Verification is necessary and can be done through simulation or formal proofs. Lastly, a good design is one that is fast, balanced, and strong enough to handle real-world changes.
## References

- https://www.youtube.com/watch?v=ubhxKNlOlRg&list=PL5Q2soXY2Zi9Eo29LMgKVcaydS7V1zZW3&index=1

- https://www.youtube.com/watch?v=U-4jmbm8inw&list=PL5Q2soXY2Zi9Eo29LMgKVcaydS7V1zZW3&index=2

- https://www.youtube.com/watch?v=smHJ1W7S-2Q&list=PL5Q2soXY2Zi9Eo29LMgKVcaydS7V1zZW3&index=3

- https://www.youtube.com/watch?v=KcP1ky8_U7w&list=PL5Q2soXY2Zi9Eo29LMgKVcaydS7V1zZW3&index=6

- https://www.youtube.com/watch?v=3Sqt0GIFPbc&list=PL5Q2soXY2Zi9Eo29LMgKVcaydS7V1zZW3&index=7

- https://www.youtube.com/watch?v=DBsDuQwpPsI&list=PL5Q2soXY2Zi9Eo29LMgKVcaydS7V1zZW3&index=8

