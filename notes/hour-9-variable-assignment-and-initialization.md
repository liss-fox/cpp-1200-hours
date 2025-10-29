## 📄 Summary: 1.4 — Variable Assignment and Initialization

This lesson details how to assign and provide initial values to variables in C++.

-----

### 1\. Variable Assignment

  * **Assignment:** The process of giving an existing variable a new value using the **assignment operator** (`=`).
  * **Copy-Assignment:** By default, assignment copies the value from the right-hand side to the variable on the left-hand side, overwriting any prior value.
  * **Warning:** Do not confuse the assignment operator (`=`) with the equality operator (`==`), which is used for testing if two values are equal.

<!-- end list -->

```cpp
int width; // Define
width = 5; // Assignment (sets value to 5)
width = 7; // Assignment (overwrites 5 with 7)
```

### 2\. Variable Initialization

  * **Initialization:** The process of providing an **initial value** for an object at the time it is defined, combining two steps into one.

| Initialization Form | Syntax | Description | Status |
| :--- | :--- | :--- | :--- |
| **Default-initialization** | `int a;` | No initializer provided; often results in an indeterminate ("garbage") value. | **Avoid** |
| **Copy-initialization** | `int b = 5;` | Initial value after an equals sign. | Traditional |
| **Direct-initialization** | `int c(6);` | Initial value in parentheses. | Traditional |
| **Direct-list-initialization** | `int d { 7 };` | Initial value in curly braces (Modern). | **Preferred** |
| **Value-initialization** | `int e {};` | Empty curly braces (Modern). | **Preferred** |

-----

### 3\. List-Initialization (Modern Forms)

**List-initialization** (using curly braces, `{}`) is the preferred method in modern C++ due to its consistency and safety features.

#### A. Disallowing Narrowing Conversions

  * List-initialization is required to produce a compile-time error if a **narrowing conversion** is attempted (e.g., initializing an integer with a floating-point value, which would cause data loss).
    ```cpp
    int w1 { 4.5 }; // Compile ERROR (Disallowed)
    int w2 = 4.5;   // Compiles, silently drops .5 (Often Undesired)
    ```

#### B. Value-Initialization vs. Direct-List-Initialization

  * **`int x { 0 };` (Direct-list-initialization):** Use when the initial value of `0` is actually meaningful and will be used (e.g., printing it or using it in a calculation).
  * **`int x {};` (Value-initialization):** Use when the object will be immediately replaced (e.g., receiving user input via `std::cin`), making the explicit initial `0` redundant. Value-initialization typically initializes the variable to zero.

**Best Practice:** **Initialize your variables upon creation** using direct-list-initialization (`{ 5 }`) or value-initialization (`{}`).

-----

### 4\. Instantiation and Unused Variables

  * **Instantiation:** A term meaning a variable has been created (**allocated**) and **initialized**.
  * **Unused Variables:** Modern compilers typically issue warnings or errors if a variable is defined and initialized but never used.
      * **Fix 1:** Remove or comment out the variable definition if it's not needed.
      * **Fix 2:** Use the variable somewhere in the code.
      * **C++17 Solution:** The **`[[maybe_unused]]`** attribute tells the compiler not to issue a warning for a specific variable that may not be used in every compilation unit (e.g., a list of constants).

<!-- end list -->

```cpp
[[maybe_unused]] double gravity { 9.8 }; // Compiler ignores warning if 'gravity' isn't used
```