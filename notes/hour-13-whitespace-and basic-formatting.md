## 📄 Summary: 1.8 — Whitespace and Basic Formatting

This lesson explains the role of **whitespace** (spaces, tabs, newlines) in C++ and provides basic formatting conventions to enhance code readability.

-----

### 1\. The Role of Whitespace

Whitespace characters are generally used for three purposes in C++:

1.  **Separating Language Elements (Mandatory):** Whitespace is required to separate keywords and identifiers so the compiler can distinguish them.
      * *Example:* `int x;` is mandatory; `intx;` is an error.
      * The amount of separating whitespace (one space or multiple lines) does not matter to the compiler.
      * **Exception:** Preprocessor directives (e.g., `#include`) must be on separate lines. Single-line comments are terminated by a newline.
2.  **Inside Quoted Text (Literal):** Inside double quotes (`""`), whitespace is taken literally and will be printed as shown. Newlines are generally not allowed inside quotes, but quoted text separated only by whitespace will be concatenated.
    ```cpp
    std::cout << "Hello " "world!"; // Concatenates to "Hello world!"
    ```
3.  **Formatting Code (Optional but Recommended):** C++ is a **whitespace-independent language**, meaning the compiler mostly ignores extra spaces, tabs, and newlines. This freedom allows programmers to use whitespace to structure code for better human readability.

-----

### 2\. Basic Formatting Conventions

Consistency is key; it's generally best to follow the existing style of a project. For new projects, the following conventions are recommended:

#### Indentation

  * Use either **tabs or spaces** for indentation. If using spaces, a common setting is **4 spaces** (though 3 is also common).
  * Each statement within curly braces should be indented one level from the braces.

#### Function Braces

There are two common styles:

1.  **Opening brace on the same line** (`int main() {`). (Saves vertical space.)
2.  **Opening brace on its own line** (`int main(){`). (Used in this tutorial for readability and easy brace-matching.)

#### Line Length and Wrapping

  * **Best Practice:** Keep lines to **80 characters or less** in length for readability, especially when viewing code side-by-side.
  * If a statement is split over multiple lines, indent subsequent lines with an extra tab or align them visually.
  * If a long line is split with an operator (`+`, `<<`), the operator should be placed at the **beginning of the new line** for clarity.

#### Alignment and Spacing

Use whitespace to visually align related code elements, making them easier to scan:

```cpp
// Easier to read due to alignment and blank lines
cost         = 57;
pricePerItem = 24;

std::cout << "Hello world!\n";                  // Align comments
std::cout << "It is very nice to meet you!\n";
```

#### Automatic Formatting

Most modern IDEs (like Visual Studio or Code::Blocks) include a feature to **automatically format** code, ensuring consistent style across a file or selection. Using this feature is highly recommended.