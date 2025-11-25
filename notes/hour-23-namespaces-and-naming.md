## 💥 Summary: 2.9 — Naming Collisions and an Introduction to Namespaces

This lesson addresses the problem of **naming collisions** that arise when multiple identifiers share the same name and introduces **namespaces** as the primary C++ mechanism for isolating and organizing code to prevent these conflicts.

-----

### 1\. Naming Collisions

A **naming collision (or conflict)** occurs when two identical identifiers are introduced into the same program in a way that the compiler or linker cannot distinguish between them. C++ requires all identifiers to be non-ambiguous.

  * **Compiler Error:** Occurs if two conflicting identifiers are introduced within the **same file** or **same scope region** (e.g., defining the same local variable twice in one function).
  * **Linker Error:** Occurs if two identically named **global variables or functions** are defined in **separate code files** belonging to the same program. The linker tries to combine them and finds two definitions for the same name, violating the **One Definition Rule (ODR)**.

-----

### 2\. Scope Regions and Namespaces

A **scope region** is an area of source code where identifiers are considered distinct from names declared in other scopes. This allows reusing names without conflict.

#### Namespaces

A **namespace** provides a type of scope region (**namespace scope**) specifically designed to group and isolate identifiers.

  * A name declared within one namespace is **distinct** from an identical name declared in another scope (including the global scope).
  * Namespaces can only contain **declarations and definitions** (e.g., variables, functions). Executable statements are not allowed outside of a function definition.
  * Namespaces are used to group related identifiers (e.g., all math functions in a `math` namespace) to prevent them from colliding with external code.

#### The Global Namespace

Any name not defined inside a class, function, or named namespace is considered part of the **global namespace** (or global scope).

  * All code examples without a namespace (like `int add(int x, int y) { ... }`) are implicitly defining names in the global namespace.
  * The naming collision example at the start of the lesson failed because both definitions of `myFcn()` were placed into the global namespace.

-----

### 3\. The `std` Namespace

The C++ standard library (which includes `cin`, `cout`, etc.) is placed inside the **`std`** (standard) namespace to prevent its identifiers from conflicting with names you define in your own code.

#### Accessing Namespace Identifiers

You must tell the compiler where the identifier is defined.

1.  **Explicit Namespace Qualifier (`::`)** (Best Practice)
    This is the safest and most recommended way to access names in a namespace. You use the **scope resolution operator (`::`)** to specify the namespace.

    ```cpp
    #include <iostream>
    int main() {
        std::cout << "Safe use."; // Specifies the 'cout' inside the 'std' namespace
        return 0;
    }
    ```

      * A name accessed this way (e.g., `std::cout`) is called a **qualified name**.

2.  **Using Directive (`using namespace std;`)** (Avoid)
    A **using-directive** makes all identifiers within a namespace accessible without the namespace prefix.

    ```cpp
    #include <iostream>
    using namespace std; // Makes all names in std available globally (BAD PRACTICE)
    int main() {
        cout << "Unsafe use."; // Compiler searches for 'cout' in the global scope
        return 0;
    }
    ```

      * **Warning:** This is highly discouraged, especially at the top of a program or in header files. It defeats the purpose of namespaces by re-introducing the potential for naming conflicts (e.g., if you define your own `cout()`, the compiler won't know if you mean yours or `std::cout`).