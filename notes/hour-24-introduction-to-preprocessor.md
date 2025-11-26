## ⚙️ Summary: 2.10 — Introduction to the Preprocessor

This lesson introduces the **preprocessor**, a critical phase that occurs **before** compilation. The preprocessor performs text manipulations on your source code based on special instructions called **preprocessor directives**.

-----

### 1\. The Preprocessing Phase

  * **Preprocessor:** A program (often built into the compiler) that modifies the text of your source code file before the compiler sees it. It does **not** alter the original files; changes happen in-memory.
  * **Translation Unit:** The result of a code file (`.cpp`) after being processed by the preprocessor. This is the text passed to the compiler.
  * **Directives:** Instructions to the preprocessor. They start with a hash symbol (`#`) and end with a newline (no semicolon). The final output of the preprocessor contains no directives.

-----

### 2\. Key Preprocessor Directives

| Directive | Purpose | Example |
| :--- | :--- | :--- |
| **`#include`** | Replaces the directive with the **entire content** of the specified file (used for header files). | `#include <iostream>` |
| **`#define`** | Creates a **macro**—a rule for text substitution. | `#define PI 3.14159` |
| **`#ifdef` / `#ifndef`** | Conditional compilation check. Includes code if a macro **is defined** (`ifdef`) or **is NOT defined** (`ifndef`). | `#ifdef DEBUG_MODE` |
| **`#endif`** | Marks the end of a conditional compilation block. | |

#### Macro Definitions (`#define`)

Macros define how input text is converted to replacement output text. By convention, macro names are written in **`ALL_UPPERCASE`**.

1.  **Object-like Macros with Substitution Text:**

    ```cpp
    #define MY_NAME "Alex"
    // Preprocessor replaces MY_NAME with "Alex" everywhere it appears.
    ```

      * **Best Practice:** Avoid this form, as C++ provides better alternatives (like `inline` variables for constants).

2.  **Object-like Macros without Substitution Text:**

    ```cpp
    #define USE_YEN
    // Used primarily as a flag for conditional compilation checks.
    ```

      * This form is generally considered acceptable.

-----

### 3\. Conditional Compilation

These directives allow you to include or exclude blocks of code based on whether a macro has been defined. This is useful for including debug code, platform-specific code, or ensuring headers are only included once (header guards, discussed next).

```cpp
#include <iostream>

#define DEBUG // Defining the macro flag

int main() {
#ifdef DEBUG // Check: Is DEBUG defined? (Yes)
    std::cout << "Debug mode is ON.\n"; // This line will be compiled.
#endif

#if 0 // Always false, often used to temporarily comment out code blocks.
    std::cout << "This code is ignored.\n";
#endif

    return 0;
}
```

  * **`#if 0` / `#if 1`:** A common technique to "comment out" large blocks of code, even if those blocks contain multi-line comments (which cannot be nested). Change `0` to `1` to re-enable the code.

-----

### 4\. Scope of Directives

  * The preprocessor does **not understand C++ scope** (like functions or classes).
  * A directive (`#define`) is valid from the **point of definition to the end of the file** in which it appears.
  * Directives defined in one code file (`.cpp`) do **not** affect other code files, unless one file explicitly `#includes` the other (or a header that contains the directive).