# Digital Circuit System

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c">
  <img src="https://img.shields.io/badge/Project-Digital%20Circuit%20System-green?style=for-the-badge">
  <img src="https://img.shields.io/badge/Circuits-Combinational%20%26%20Sequential-orange?style=for-the-badge">
  <img src="https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge">
</p>

A C-based implementation of **Combinational and Sequential Digital Circuits**.

This project demonstrates the working of commonly used digital circuits using the **C programming language**. It provides a menu-driven Digital Circuit System and also includes separate standalone programs for individual circuits.

---

## 🚀 Features

* Menu-driven Digital Circuit System
* Implementation of combinational circuits
* Implementation of sequential circuits
* Modular programming using multiple C files
* Header files for function declarations
* Separate standalone programs for individual circuits
* Binary input validation
* State-based behavior for sequential circuits
* Simple and easy-to-understand implementation

---

## 🔷 Combinational Circuits

The following combinational circuits are implemented:

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

The following sequential circuits are implemented:

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

Open the terminal in the project directory and compile the complete program using:

```bash
gcc src/main.c src/combinational.c src/sequential.c -Iinclude -o digital_circuit_system
```

---

## ▶️ Running the Program

### Windows

```bash
digital_circuit_system.exe
```

### Linux/macOS

```bash
./digital_circuit_system
```

---

## 🖥️ Program Menu

```text
=============================================
           DIGITAL CIRCUIT SYSTEM
=============================================

1. Combinational Circuits
2. Sequential Circuits
3. Exit
```

The user can select a circuit category and then choose the required digital circuit from the corresponding menu.

---

## 🖼️ Program Preview

### Main Menu

![Main Menu](images/main_menu.png)

### Combinational Circuits

![Combinational Circuits](images/combinational_menu.png)

### Sequential Circuits

![Sequential Circuits](images/sequential_menu.png)

### Half Adder

![Half Adder](images/half_adder.png)

### JK Flip-Flop

![JK Flip-Flop](images/jk_flipflop.png)

### 4-Bit Up Counter

![4-Bit Up Counter](images/up_counter.png)

---

## 🧠 Concepts Used

### Combinational Circuits

The output of a combinational circuit depends only on the **present input values**.

Examples include:

* Adders
* Subtractors
* Multiplexers
* Demultiplexers
* Encoders
* Decoders
* Comparators

### Sequential Circuits

The output of a sequential circuit depends on the **present input values and previous state**.

Examples include:

* Flip-Flops
* Registers
* Counters

---

## 📚 Learning Outcomes

Through this project, the following concepts were implemented and understood:

* Digital logic fundamentals
* Combinational circuit operations
* Sequential circuit operations
* Flip-Flop behavior
* Registers and counters
* Modular programming in C
* Header files and function declarations
* Multi-file C programming
* Menu-driven application development

---

## 🛠️ Technologies Used

* C Programming Language
* GCC Compiler
* Visual Studio Code
* GitHub

---

## 🚀 Future Improvements

* Add more digital circuits
* Implement additional types of registers
* Add more types of counters
* Implement priority encoder
* Implement multi-bit comparator
* Improve input validation
* Add a graphical user interface

---

## 👨‍💻 Author

**Vinay Bongale**

Electronics and Communication Engineering Student

---

## 📄 License

This project is licensed under the MIT License.
