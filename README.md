# Hardware-CPP-models

This repository contains **C++ implementations of hardware-inspired functional models**, primarily designed as **golden reference models** to aid in the verification of RTL designs. These models mimic hardware behavior and are suitable for standalone testing or DPI-C integration with SystemVerilog UVM testbenches.

---

## 🔍 Projects Overview

- **Arithmetic Logic Unit (ALU):**  
  A 32-bit C++ implementation of an ALU that supports basic arithmetic, logic, and shift operations. Includes a struct-based result (`result`, `zeroFlag`) and mirrors RTL behavior.  
  → See the [`ALU/`](./ALU) folder for full source and usage.

---


## 🚀 Tools & Technologies

- **Language:** C++17  
- **Tested On:** Code::Blocks, GCC (Linux/Windows)  
- **Build Tools:** `g++`, `make` (optional)

---

## 📌 Planned Additions

This repository will be expanded with:

- Register File in C++
- Simple CPU instruction decoder
- Cache Simulator (direct-mapped, set-associative)
- Branch predictor models

---

## 📬 Contact
For questions, reach out via:
📧 Email: sridurgaraju07@gmail.com
🔗 LinkedIn: https://www.linkedin.com/in/sri-durga-raju/

Happy coding!
