## 📄 Summary: 2.2 — Function Return Values (Value-Returning Functions)

This lesson explains how functions pass data back to the calling function using **return values**, enabling modular and reusable code that adheres to the **DRY** principle.

-----

### 1\. The Need for Return Values

When a function (the **callee**) completes its task, it often needs to send data—such as a calculated result or a user input—back to the function that called it (the **caller**).

  * **Problem:** Without a return mechanism, any data generated inside a function (like a local variable) is destroyed when the function terminates, and the caller cannot access it.
  * **Solution:** A **value-returning function** uses a **return value** to copy data back to the caller.

-----

### 2\. How to Return a Value

Two things are required to create a value-returning function:

#### 1\. Define the Return Type (Function Header)

The function must specify the **type** of value it will return. This is done by placing the type before the function name. A function that returns a value has a **non-`void`** return type (e.g., `int`, `double`, `bool`).

```cpp
// int is the return type, meaning it returns an integer
int getValueFromUser() 
```

#### 2\. Use a Return Statement (Function Body)

Inside the function, the `return` keyword is used to specify the exact value to be sent back.

  * **Syntax:** `return expression;`
  * **Process (Return by Value):**
    1.  The `expression` is evaluated.
    2.  The resulting value is **copied** back to the caller (this copy is the **return value**).
    3.  The function immediately exits, and control returns to the caller.

<!-- end list -->

```cpp
int getValueFromUser(){
 	// ... code to get input
	return input; // returns a copy of the value in the 'input' variable
}
```

#### Using the Return Value in the Caller

The function call itself evaluates to the returned value, which can then be used in any expression or statement where a value of that type is expected:

```cpp
int num { getValueFromUser() }; // 'num' is initialized with the value returned by the function.
std::cout << returnFive() + 2 << '\n'; // Function call is part of an expression.
```

If the caller does not use the return value (e.g., `returnFive();` alone), the value is simply ignored and discarded.

-----

### 3\. Special Case: The `main()` Function

The `main()` function is required to return an `int`. This return value is called the **status code** (or exit code) and is passed back to the operating system.

  * **Convention:**
      * **`0` (or `EXIT_SUCCESS`)**: Indicates the program ran normally (successfully).
      * **Non-zero value (or `EXIT_FAILURE`)**: Indicates the program terminated with an error or failure.
  * **Exception:** `main()` is the only function that will implicitly return `0` if no explicit `return` statement is provided. However, explicitly returning `0` is best practice for clarity.
  * **Restriction:** Explicit function calls to `main()` within the code are disallowed in C++.

-----

### 4\. Best Practices

  * **DRY Principle ("Don’t Repeat Yourself"):** Functions are the primary tool to avoid code redundancy. If a sequence of statements needs to be executed multiple times, define it once in a function and call it multiple times.
  * **Documentation:** Always document what the function's return value represents (e.g., a status code, a calculated value, etc.) using comments.
  * **Requirement:** A value-returning function (non-`void` return type) **must** execute a `return` statement to send back a value. **Failure to return a value results in undefined behavior.**
  * **Limitation:** A function can only return **a single value** per call.