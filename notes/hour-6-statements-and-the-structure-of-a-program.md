## 📄 Summary: 1.1 — Statements and the Structure of a Program

This lesson introduces the fundamental building blocks of C++ programs: statements, functions, and the basic structure of the "Hello world" application.

-----

### 1\. Statements

  * **Definition:** A **statement** is the smallest independent unit of computation in C++ that causes the program to perform an action (similar to a sentence in natural language).
  * **Syntax:** Most statements in C++ end with a **semicolon** (`;`).
  * A single C++ statement can translate into many machine language instructions.

-----

### 2\. Functions and the `main` Function

  * **Function:** A collection of statements that are executed sequentially (top to bottom). Functions are the primary organizing tool in C++.
  * **Rule:** Every C++ program **must** have a special function named **`main`** (all lowercase).
  * **Execution Flow:** When a program runs, the statements inside `main` are executed in order. The program typically terminates after the last statement in `main` runs.
  * **Nomenclature:** Appending parentheses (e.g., `main()`) is common shorthand to differentiate a function from other entities (like variables).
  * **Identifier:** The name of a function or other entity is called its **identifier**.

-----

### 3\. Characters and Text

  * **Character:** The most basic unit of written communication (a letter, digit, symbol, e.g., `a`, `2`, `$`).
  * **Text (String):** A sequence of characters.
  * **Plain Text:** Text that only contains characters found on a standard keyboard, without special formatting or styling (C++ source code is written as plain text).

-----

### 4\. Dissecting "Hello World\!"

The standard "Hello world" program illustrates the basic C++ structure:

```cpp
#include <iostream>

int main()
{
   std::cout << "Hello world!";
   return 0;
}
```

  * **`#include <iostream>`:** A **preprocessor directive** that tells the compiler to include the contents of the `iostream` library (needed for input/output, like printing text).
  * **`int main()`:** The **function definition** where program execution begins. The `int` indicates the function returns an integer value.
  * **`{}` (Curly Braces):** Define the **function body**—all statements within the braces belong to `main`.
  * **`std::cout << "Hello world!";`:** The primary statement that displays text on the console (`std::cout` stands for "character output").
  * **`return 0;`:** A **return statement** that sends the integer value `0` back to the operating system, indicating successful execution.

-----

### 5\. Syntax and Syntax Errors

  * **Syntax:** The set of strict grammatical rules that define how elements in a program must be written and arranged to be considered valid by the language (like grammar in English).
  * **Syntax Error:** Occurs when the program deviates from C++ syntax (e.g., omitting a semicolon). The compiler halts compilation and reports the error.
  * **Key Insight:** Compilers sometimes report an error on the line **after** the one where the fix should conventionally be made. If an error isn't clear on the indicated line, **check the preceding line**.