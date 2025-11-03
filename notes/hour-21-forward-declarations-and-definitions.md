## 📄 Summary: 2.7 — Forward Declarations and Definitions

This lesson explains the fundamental difference between **declarations** and **definitions** in C++ and introduces **forward declarations** (function prototypes) as a solution for compilation order issues.

-----

### 1\. The Compilation Order Problem

The C++ compiler processes code files **sequentially** (from top to bottom).

  * **Problem:** If a function (e.g., `main()`) calls another function (e.g., `add()`) that has not yet been defined later in the file, the compiler will generate an "identifier not found" error because it doesn't know what `add()` is when it encounters the call.

### 2\. Solutions to Compilation Order

There are two ways to fix the issue:

#### Option 1: Reorder the Definitions

  * Define all functions **before** they are called (e.g., define `add()` before `main()`).
  * **Limitation:** This is not always feasible for large programs or when functions call each other recursively (circular dependencies, like Function A calls B, and B calls A).

#### Option 2: Use a Forward Declaration (Function Prototype)

  * A **forward declaration** tells the compiler about the **existence** and **signature** of an identifier *before* the compiler encounters its full definition.
  * **Function Declaration (or Function Prototype):** The form of a forward declaration for a function. It consists of the function's return type, name, and parameter types, terminated by a **semicolon**. **It does not include the function body.**

<!-- end list -->

```cpp
int add(int x, int y); // Forward declaration/Function prototype for add()

int main() {
    // The compiler knows 'add' exists and takes two ints, so this compiles
    std::cout << add(3, 4) << '\n'; 
    return 0;
} 

int add(int x, int y) { // Function definition (body) is here
    return x + y;
}
```

| Component | Required? | Best Practice |
| :--- | :--- | :--- |
| **Return Type** | Yes | |
| **Function Name** | Yes | |
| **Parameter Types** | Yes | |
| **Parameter Names** | Optional | **Keep them** for documentation and readability. |
| **Function Body** | No | |
| **Semicolon** | Yes | |

### 3\. Declaration vs. Definition

These two terms are often used loosely, but they have distinct technical meanings:

| Term | Technical Meaning | Common Use | Example |
| :--- | :--- | :--- | :--- |
| **Declaration** | Tells the **compiler** about the **existence** and type of an identifier. | Usually refers to a **pure declaration** (no body/instantiation). | `int add(int, int);` |
| **Definition** | A declaration that actually **implements** (for functions/types) or **instantiates** (for variables) the identifier. | Used for declarations that implement or instantiate. | `int add() { ... }` or `int x;` |
| **Pure Declaration** | A declaration that is **not** a definition (e.g., a forward declaration). | | `int add(int, int);` |

### 4\. The Linker and Missing Definitions

  * **Compiler Success:** If you forward-declare a function but never call it, the program compiles fine.
  * **Linker Error:** If you forward-declare a function and **call it**, but the function **is never defined** anywhere in the entire program, the compiler will pass, but the **linker** will fail with an **unresolved external symbol** error (e.g., `LNK2001`). The linker is responsible for finding the actual implementation (definition).

### 5\. The One Definition Rule (ODR)

The ODR is a core rule governing C++ programs:

  * **Rule (Simplified):** Within a given scope (e.g., inside a function or globally), every function or variable can have **only one definition** in the entire program.
  * **Violations:**
      * Defining the same function/variable twice in the same file/scope violates the ODR and causes a **compiler error** (redefinition).
      * Defining the same global function/variable twice across different code files violates the ODR and causes a **linker error**.