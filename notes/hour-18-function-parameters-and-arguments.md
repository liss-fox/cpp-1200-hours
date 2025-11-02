## 📄 Summary: 2.4 — Introduction to Function Parameters and Arguments

This lesson introduces **function parameters** and **arguments**, the mechanisms used to pass data *into* a function, completing the ability to create truly reusable and modular functions.

-----

### 1\. Function Parameters and Arguments

  * **Need:** Functions often require external data to perform their job (e.g., a function that adds two numbers needs to know which numbers to add).
  * **Function Parameter (in the Callee):** A variable defined in the function header that receives a value from the caller. Parameters act like local variables inside the function body.
  * **Argument (in the Caller):** The value (or expression) passed from the calling function to the callee when the function is called.

| Term | Role | Location | Example in `add(int x, int y)` |
| :--- | :--- | :--- | :--- |
| **Parameter** | A variable created to store the incoming value. | Function **Header** (`int x`, `int y`) | `x` and `y` |
| **Argument** | The actual value being passed. | Function **Call** (`add(4, 5)`) | `4` and `5` |

#### Defining Parameters

Parameters are defined in the parentheses of the function header, separated by commas:

```cpp
// Function with one integer parameter named x
void printValue(int x) { ... }

// Function with two integer parameters named x and y
int add(int x, int y) { return x + y; }
```

### 2\. How Data is Passed

  * **Pass by Value:** When a function is called, the value of each argument is **copied** into the matching function parameter. Parameters that use this method are called **value parameters**.
  * **Matching:** The number of arguments in the call must match the number of parameters in the definition.
  * **Argument Type:** An argument can be any valid expression (literal, variable, or another function call) that produces a value of the correct type.

<!-- end list -->

```cpp
// Example: The value of 'a' (which is 5) is copied into both 'x' and 'y'.
int a { 5 };
std::cout << add(a, a) << '\n'; // Calls add(5, 5)
```

#### Using Return Values as Arguments (Chaining)

The return value of one function call can be used directly as an argument for another function call, creating concise chained operations:

```cpp
// 1. getValueFromUser() executes and returns a value (e.g., 8).
// 2. printDouble() is called with 8 as its argument.
printDouble(getValueFromUser()); 
```

### 3\. Unreferenced and Unnamed Parameters

  * **Unreferenced Parameter:** A parameter that is defined but never used in the function body. The compiler usually issues a warning for this.
  * **Unnamed Parameter:** To suppress the warning for an unused parameter, the parameter name can be omitted in the function definition. The type must still be included.

<!-- end list -->

```cpp
// Unnamed parameter (no warning)
void doSomething(int) { 
    // The integer argument is received but not used
}

// Optional convention: use a comment to document the intended purpose
void doSomething(int /*count*/) { }
```

  * **Reason for Unnamed Parameters:** They are most often used when a parameter is required for compatibility (e.g., to match an existing function signature) but its value is no longer needed in the current implementation.

-----

### Conclusion

Function parameters and return values are essential for **modular programming**. They allow functions to take inputs, process them, and return outputs, making the function reusable without knowing the specific data beforehand.