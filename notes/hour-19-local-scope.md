## 📄 Summary: 2.5 — Introduction to Local Scope

This lesson explores **local variables**, their **lifetime** (runtime property), and their **scope** (compile-time property), which together define when a variable is created, where it can be used, and when it is destroyed.

---

### 1. Local Variables and Scope

* **Local Variable:** A variable defined inside the body of a function. **Function parameters** are generally included as local variables.
* **Scope (Block Scope):** A compile-time property that determines where an identifier can be seen and used in the source code.
* **Local Scope:** An identifier with local scope is usable from the **point of definition** to the **end of the innermost pair of curly braces** (`{}`) containing the identifier (or the end of the function for parameters).

> **Key Insight:** Local variables in one function are completely separate from local variables in another, even if they share the same name. This allows functions to be developed independently (**functional separation**).

---

### 2. Variable Lifetime

* **Lifetime:** A runtime property defined as the time between an object's **creation** (instantiation) and its **destruction**.
* **Creation:**
    * **Function Parameters:** Created and initialized when the function is entered.
    * **Local Variables (in body):** Created and initialized at their point of definition.
* **Destruction:** Local variables are destroyed (deallocated) in the **reverse order of creation** at the **end of the curly braces** that define their scope.
    * Using an object after its destruction results in **undefined behavior**.

| Property | Description | Timing |
| :--- | :--- | :--- |
| **Scope** | Where the variable name can be legally accessed. | **Compile-time** |
| **Lifetime** | When the variable object exists in memory. | **Run-time** |

---

### 3. Best Practices and Temporaries

#### Defining Local Variables
* **Best Practice:** Define local variables as **close to their first use as reasonable**. This makes code easier to read and allows for immediate initialization with the intended value.

#### Function Parameters vs. Local Variables
Use the following rule to decide between a parameter and a local variable:

* **Function Parameter:** Use when the **caller** is expected to provide the initial value as an argument.
* **Local Variable:** Use otherwise (e.g., if the value is calculated or retrieved *inside* the function, like user input via `std::cin`).

#### Temporary Objects
* **Definition:** An **unnamed object** created by the compiler to hold a value that is only needed for a short time (e.g., the return value of a function that isn't immediately assigned to a named variable).
* **Lifetime:** Temporary objects are destroyed at the end of the **full expression** in which they were created.
* **Example:** In `std::cout << getValueFromUser() << '\n';`, the return value is held in a temporary object, which is passed to `std::cout` and then destroyed once the entire statement finishes execution. Modern C++ compilers often optimize away these temporaries.