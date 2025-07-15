# 🧮 ALU – Arithmetic Logic Unit (C++ Model)

This folder contains a **C++ implementation of a 32-bit Arithmetic Logic Unit (ALU)**. It mimics the behavior of a hardware ALU and is useful for standalone simulation, learning, or using as a golden reference model in verification workflows.

---

## ⚙️ Supported Operations

The ALU supports the following 4-bit control codes:

| ALU Control | Operation  | Description                                |
|-------------|------------|--------------------------------------------|
| `0000`      | AND        | Bitwise AND                                |
| `0001`      | OR         | Bitwise OR                                 |
| `0010`      | ADD        | Addition                                   |
| `0011`      | XOR        | Bitwise XOR                                |
| `0100`      | SLL        | Shift Left Logical                         |
| `0101`      | SRL        | Shift Right Logical                        |
| `0110`      | SUB        | Subtraction                                |
| `0111`      | SRA        | Shift Right Arithmetic                     |
| `1000`      | SLT        | Set if Less Than (signed)                  |
| `1001`      | SLTU       | Set if Less Than (unsigned)                |

The result is returned as a struct containing:
- `result` (32-bit unsigned integer)
- `zeroFlag` (true if result == 0)

---

## 📁 Files

- `main.cpp` — Contains the complete ALU implementation and test driver.

---

## 🧪 Running the Code

### 🔧 Prerequisites
- C++ compiler (GCC or Clang recommended)

### ▶️ Compile & Run (Terminal)
1. Clone the repository and navigate to the project folder:
   ```bash
    g++ -std=c++17 main.cpp -o alu_test
    ./alu_test

2. You can also open the files in Code::Blocks:
- Create a new console project
- Add  main.cpp to the project
- Build and run from the IDE

---

## 💡To-Do / Ideas

- Add unit tests using C++ testing frameworks (like Google Test)
- Extend to 64-bit support
- Wrap in a class for better modularity
- Create a CMake build setup (optional)

---

## 📬 Contact

Questions or feedback?
📧 sridurgaraju07@gmail.com
