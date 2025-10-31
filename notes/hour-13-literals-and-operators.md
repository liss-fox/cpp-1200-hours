## 📄 Summary: 1.9 — Introduction to Literals and Operators

This lesson introduces **literals** (fixed values) and **operators** (symbols that perform operations) and explains how they form the basic computational elements of C++.

---

### 1. Literals (Literal Constants)

* **Definition:** A **literal** is a fixed, constant value that is inserted directly into the source code.
* **Nature:** Unlike variables, the value of a literal is fixed and **cannot be changed** during program execution. It's essentially a constant value compiled directly into the executable.
* **Examples:**
    * `5` (Integer literal)
    * `"Hello world!"` (String literal)
* **Difference from Variables:** Both have a value and a type. A variable's value is stored in memory and can change; a literal's value is a hardcoded constant.

---

### 2. Operators and Operands

* **Operation:** A process involving input values that produces a new output value.
* **Operator:** A symbol (like `+`, `*`, `<<`) or a keyword (like `new`, `delete`) that denotes the specific operation to be performed.
* **Operand:** The input value(s) that the operator acts upon (e.g., in `2 + 3`, the literals `2` and `3` are the operands).
* **Return Value:** The output value produced by an operation.

#### Operator Arity

The number of operands an operator takes is called its **arity**:

| Arity | Operands | Example | Purpose |
| :--- | :--- | :--- | :--- |
| **Unary** | One | `-5` | Changes the sign of `5`. |
| **Binary** | Two | `3 + 4`, `std::cout << 5` | Performs addition on two numbers. |
| **Ternary** | Three | `? :` (Conditional operator, unique to C++) | Covered later. |
| **Nullary** | Zero | `throw` (Throw operator, unique to C++) | Covered later. |

*Note: Some operators, like `-`, can be both unary (negation) and binary (subtraction).*

#### Operator Chaining

Operators can be **chained** so the return value of one operation becomes the operand for the next operation.

* **Arithmetic:** `2 * 3 + 4` (Multiplication is done first, then addition). The order of execution follows standard mathematical rules (**PEMDAS**).
* **I/O:** `std::cout << "Hello " << "world!"` (The first `<<` returns `std::cout`, which is then used by the second `<<`).

---

### 3. Side Effects

* **Definition (C++ context):** A **side effect** is any observable effect of an operator ( or a function) *beyond* simply producing a return value.
* **Examples:**
    * **Assignment (`=`):** The side effect is changing the value of the variable on the left (e.g., `x = 5`).
    * **Insertion (`<<`):** The side effect is printing data to the console (e.g., `std::cout << 5`).
* In C++, operators like assignment are often used **primarily for their side effect**, with the return value being secondary (often used only for chaining).