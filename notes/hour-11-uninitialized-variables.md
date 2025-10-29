## 📄 Summary: 1.6 — Uninitialized Variables and Undefined Behavior

This lesson explains the critical consequences of using variables that have not been assigned a known value.

---

### 1. Uninitialized Variables

* **Default Behavior:** C++ does **not** automatically initialize most variables (unlike some languages, it won't set them to `0`). This is a performance optimization inherited from C.
* **Uninitialized Variable:** A variable that has not been given a known value through initialization (at definition) or assignment (later).
* **Garbage Value:** An uninitialized variable holds whatever random "garbage" value happens to already reside in its allocated memory location. This value is unpredictable and can change every time the program runs.
* **Compiler Warnings:** Most modern compilers will detect the use of an uninitialized variable and issue a warning or error.

**Best Practice:** **Always initialize your variables upon creation.**

---

### 2. Undefined Behavior (UB)

* **Definition:** **Undefined Behavior (UB)** is the result of executing code whose behavior is **not specified** by the C++ language standard. Using the value of an uninitialized variable is the first example of UB.
* **Symptoms of UB:** UB is highly unpredictable and can manifest in many ways:
    * The program produces different results on every run.
    * The program consistently produces the same incorrect result.
    * The program crashes immediately or later.
    * The program works on one compiler but not another.
    * *Note:* The program might even appear to work correctly "for now," which makes UB bugs especially hard to track down.

**Rule:** Take great care to **avoid all situations that result in undefined behavior.**

---

### 3. Other Behavior Types

While Undefined Behavior is the most critical to avoid, C++ also defines two other types of less-critical unpredictable behavior:

* **Implementation-Defined Behavior:** Behavior that the C++ standard allows the specific compiler and library (the **implementation**) to define. This behavior **must be documented and consistent** for that implementation.
    * *Example:* The exact number of bytes an `int` takes (`sizeof(int)`).
* **Unspecified Behavior:** Behavior that is left up to the implementation, but the implementation is **not required to document** it.

It's generally recommended to avoid implementation-defined and unspecified behavior when portability across different compilers or platforms is required.