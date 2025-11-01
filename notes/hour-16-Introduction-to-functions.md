## 📄 Summary: 2.1 — Introduction to Functions

This lesson introduces the updated definition of a function and explains how functions allow programs to be organized into modular, reusable components.

-----

### 1\. Function Definition and Purpose

  * **Definition:** A function is a **reusable sequence of statements** designed to perform a particular job.
  * **Modularity:** Functions allow you to break long programs into small, modular chunks that are easier to manage, test, and reuse.
  * **User-Defined Functions:** Functions written by the programmer, as opposed to those provided by the C++ Standard Library.
  * **`main()`:** Every executable C++ program must have a `main()` function, where execution begins.

-----

### 2\. Function Execution Flow

When a program encounters a **function call**:

1.  **Interruption:** The execution of the current function (the **caller**) is suspended.
2.  **Execution:** The CPU jumps to the called function (the **callee**) and executes its statements sequentially.
3.  **Return:** When the callee finishes, execution automatically returns to the caller, resuming at the point immediately following the function call. (This is often compared to placing a **bookmark** in a book.)

-----

### 3\. Function Structure and Syntax

A user-defined function has two main parts: the header and the body.

| Part | Description | Example (Function `doPrint`) |
| :--- | :--- | :--- |
| **Header** | The first line; informs the compiler about the function's return type and name. | `void doPrint()` |
| **Body** | The statements enclosed in curly braces (`{}`) that define what the function does. | `{ std::cout << "In doPrint()\n"; }` |

#### Defining and Calling

1.  **Definition:** A function must be defined (its code provided) before it is called.
    ```cpp
    void doPrint() { // Definition (header + body)
        std::cout << "Hello\n";
    }
    ```
2.  **Call:** Use the function's name followed by parentheses `()`.
    ```cpp
    int main() {
        doPrint(); // Function Call
        return 0;
    }
    ```
      * **Warning:** Forgetting the parentheses (`doPrint;`) will result in an error or will not call the function.

#### Function Chaining

Functions can call other functions, creating a nested execution flow (e.g., `main()` calls `doA()`, which calls `doB()`).

#### Nested Functions (Not Supported)

C++ **does not support nested functions**. A function definition cannot be placed inside the body of another function. All functions must be defined independently (at the global scope).

> **Nomenclature Note:** Placeholder names like `foo`, `bar`, and `baz` are commonly used in programming examples when the name itself is unimportant.