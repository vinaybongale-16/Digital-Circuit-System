# Digital Circuit System

A C-based implementation of fundamental **Combinational** and **Sequential Digital Circuits**.

This project demonstrates the working and logic of commonly used digital circuits through a menu-driven C program. It also includes separate standalone programs for individual circuits.

---

## 📌 Features

* Menu-driven Digital Circuit System
* Implementation using the C programming language
* Separate modules for combinational and sequential circuits
* Header files for function declarations
* Binary input validation
* State-based implementation for sequential circuits
* Clock-pulse-based counters
* Separate standalone programs for individual circuits

---

## 🔷 Combinational Circuits

The project includes the following combinational circuits:

* Half Adder
* Full Adder
* Half Subtractor
* Full Subtractor
* 2:1 Multiplexer
* 4:1 Multiplexer
* 1:4 Demultiplexer
* 2:4 Decoder
* 4:2 Encoder
* 1-Bit Comparator

---

## 🔶 Sequential Circuits

The project includes the following sequential circuits:

* SR Flip-Flop
* JK Flip-Flop
* D Flip-Flop
* T Flip-Flop
* 4-Bit Register
* 4-Bit Up Counter
* 4-Bit Down Counter

---

## 📂 Project Structure

```text
Digital-Circuit-System/
│
├── Combinational-Circuits/
│   ├── comparator_1bit.c
│   ├── decoder_2to4.c
│   ├── demux_1to4.c
│   ├── encoder_4to2.c
│   ├── full_adder.c
│   ├── full_subtractor.c
│   ├── half_adder.c
│   ├── half_subtractor.c
│   ├── mux_2to1.c
│   └── mux_4to1.c
│
├── Sequential-Circuits/
│   ├── d_flipflop.c
│   ├── down_counter_4bit.c
│   ├── jk_flipflop.c
│   ├── register_4bit.c
│   ├── sr_flipflop.c
│   ├── t_flipflop.c
│   └── up_counter_4bit.c
│
├── include/
│   ├── combinational.h
│   └── sequential.h
│
├── src/
│   ├── combinational.c
│   ├── main.c
│   └── sequential.c
│
├── .gitignore
├── LICENSE
└── README.md
```

---

## ⚙️ Compilation

To compile the complete Digital Circuit System, open a terminal in the project directory and run:

```bash
gcc src/main.c src/combinational.c src/sequential.c -Iinclude -o digital_circuit_system
```

---

## ▶️ Running the Program

### On Windows

```bash
digital_circuit_system.exe
```

### On Linux/macOS

```bash
./digital_circuit_system
```

---

## 🖥️ Main Menu

When the program runs, the user can choose between:

```text
=============================================
           DIGITAL CIRCUIT SYSTEM
=============================================

1. Combinational Circuits
2. Sequential Circuits
3. Exit
```

Each section provides a separate menu for selecting the required digital circuit.

---

## 🧠 Project Concepts

### Combinational Circuits

The output of a combinational circuit depends only on the current input values.

Examples include:

* Adders
* Subtractors
* Multiplexers
* Demultiplexers
* Encoders
* Decoders
* Comparators

### Sequential Circuits

The output of a sequential circuit depends on the current inputs as well as the previous state.

Examples include:

* Flip-Flops
* Registers
* Counters

---

## 📚 Learning Outcomes

This project helped in understanding:

* Digital logic fundamentals
* Combinational circuit operations
* Sequential circuit operations
* Flip-Flops and state behavior
* Registers and counters
* Modular programming in C
* Header files and function declarations
* Multi-file C projects
* Menu-driven program design

---

## 🚀 Future Improvements

Possible future improvements include:

* Additional digital circuits
* More types of registers
* Additional counters
* Priority encoder implementation
* Multi-bit comparator
* Improved input handling
* Graphical user interface

---

## 🛠️ Technologies Used

* C Programming Language
* GCC Compiler
* Visual Studio Code
* GitHub

---

## 👨‍💻 Author

**Vinay Bongale**

Electronics and Communication Engineering Student

---

## 📄 License

This project is licensed under the MIT License.
