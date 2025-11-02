## 📄 Summary: 2.3 — Void Functions (Non-Value Returning Functions)

This lesson clarifies the use and behavior of **void functions**, which are functions designed to execute a sequence of statements (side effects) without passing any data back to the caller.

-----

### 1\. The `void` Return Type

  * **Definition:** A function with a **`void` return type** is a **non-value returning function** (or **void function**). It tells the compiler that the function will **not** return a value to the caller.
  * **Purpose:** Void functions are called solely for their side effects—the actions they perform (e.g., printing to the console, writing to a file, modifying an object).
    ```cpp
    // void means no value is returned
    void printHi() { 
        std::cout << "Hi" << '\n'; // Side effect: prints text
    }
    ```

-----

### 2\. `return` Statement in Void Functions

  * **Automatic Return:** A void function automatically returns control to the caller when execution reaches the end of the function body. **No `return` statement is required.**
  * **Optional Explicit Return:** An empty `return;` statement can be used to exit the function early at a specific point.
      * *Best Practice:* Avoid placing a redundant `return;` at the very end of a void function.
  * **Compile Error:** Attempting to return a value from a void function (e.g., `return 5;`) will result in a **compilation error**.

-----

### 3\. Usage Context

The ability to call a function depends on whether the context expects a return value:

| Context | Action | Function Type Allowed | Example |
| :--- | :--- | :--- | :--- |
| **Standalone Call** | Called only for its behavior (side effects). | **Void** or **Value-Returning** (value is ignored). | `printHi();` `returnFive();` |
| **Value Required** | Used as part of an expression (e.g., assignment, printing). | **Only Value-Returning** (non-`void`). | `std::cout << returnFive();` |

  * **Compile Error:** You **cannot** use a void function in a context that requires a value.
    ```cpp
    std::cout << printHi(); // Compile error: printHi() returns void (no value)
    ```