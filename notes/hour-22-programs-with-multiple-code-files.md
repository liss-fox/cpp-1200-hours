## 📂 Summary: 2.8 — Programs with Multiple Code Files

As programs grow, they are typically split into multiple code files (`.cpp`) for better organization and reusability. This lesson explains how to manage function visibility across these separate files using **forward declarations**.

---

### 1. The Multi-File Compilation Process

The C++ compiler compiles each code file (`.cpp`) **individually** and **independently**.

* **Limited Visibility:** When compiling `main.cpp`, the compiler has **no knowledge** of the contents of `add.cpp` (or any other file), even if it compiled `add.cpp` moments earlier. It **does not remember** anything seen in previously compiled files.
* **Resulting Problem:** If `main.cpp` calls `add()` but the definition of `add()` is in `add.cpp`, the compiler will fail when compiling `main.cpp` because it sees `add` as an "identifier not found."

This limited visibility is intentional because it allows for:
1.  Compiling source files in any order.
2.  Faster recompilation (only the changed file needs re-compiling).
3.  Reduced risk of naming conflicts between different files.

---

### 2. Solution: Forward Declarations

To use a function defined in a separate code file, the calling file must provide a **forward declaration** (function prototype).

| File | Content | Purpose |
| :--- | :--- | :--- |
| `add.cpp` | `int add(int x, int y) { return x + y; }` | Contains the **definition** (implementation) of the function. |
| `main.cpp` | `int add(int x, int y);` | Contains the **forward declaration** (prototype) so the compiler knows the function's signature when compiling `main.cpp`. |

When the files are compiled and the program is run:

1.  The **Compiler** processes `main.cpp` and is satisfied because the forward declaration tells it that `add` is a function taking two integers.
2.  The **Linker** takes the compiled object files (`main.obj` and `add.obj`) and connects the function call to `add` in `main.obj` to the function definition in `add.obj`. 

---

### 3. Best Practices and Pitfalls

* **Including Headers:** Any code file (`.cpp`) that uses elements from the standard library (like `std::cout` or `std::cin`) **must** `#include <iostream>` (or the relevant header) itself.
* **ODR and Definition:** The goal is for the compiler to see the **declaration** (prototype) in the file that calls the function, and for the linker to find the single **definition** (implementation) in another file.
* **DO NOT `#include "add.cpp"`:** Including one code file in another (`#include .cpp` files) is strongly discouraged, as it leads to increased risk of naming conflicts and violates the One Definition Rule (ODR) when programs become complex.
* **Linker Errors:** If you get an `unresolved external symbol` error, it means the compiler found the declaration, but the linker could not find the definition. The most common cause is failing to **add the definition file (`add.cpp`) to your project or compilation line** so that it gets compiled and linked.