## 📄 Summary: 1.3 — Introduction to Objects and Variables

This lesson covers how C++ programs manage and manipulate data using memory storage.

---

### 1. Data and Values

* **Data:** Any information that can be moved, processed, or stored by a computer. Programs produce results by manipulating (reading, changing, and writing) data.
* **Value:** A single piece of data (sometimes called a data value).
    * **Numeric Values:** Written without quotes (e.g., `5`, `-6.7`).
    * **Character Values:** Placed in **single quotes** (e.g., `'H'`, `'$'`). Must be a single symbol.
    * **Text Values (Strings):** Placed in **double quotes** (e.g., `"Hello"`, `"H"`). Can contain zero or more characters.
* **Literals:** Values placed directly into the source code (read-only).

---

### 2. Random Access Memory (RAM)

* RAM is the main memory used by the computer.
* When a program runs, the operating system loads the program and reserves additional memory for the program to store data (e.g., user input, calculated results).
* In older languages, memory was accessed directly by address (like a numbered box). In C++, memory is accessed **indirectly through objects**.

---

### 3. Objects and Variables

* **Object:** Represents a region of storage (typically RAM) that can hold a value. The object abstracts away the physical memory location.
* **Variable:** An **object that has a name (identifier)**. Naming objects allows a program to refer to them later.

| Concept | Description |
| :--- | :--- |
| **Definition Statement** | Used to tell the compiler that we want to use a variable. |
| **Allocation** | The process of reserving actual storage (memory) for an object at **runtime** (when the program is loaded and run). Once allocated, the object is **created**. |

---

### 4. Data Types

* **Data Type (or Type):** Determines what kind of value an object will store (e.g., a number, a letter, text, etc.).
* **Type Constraint:** The type of an object **must be known at compile-time** and cannot be changed without recompiling.
    * *Example:* `int x;` defines `x` as an **integer variable** (a whole number without a fractional component).
    * *Example:* `double width;` defines `width` to store a floating-point number.

#### Defining Multiple Variables

* You can define multiple variables of the **same type** in a single statement, separating the names with a comma (e.g., `int a, b;`).
* **Best Practice:** Avoid defining multiple variables in one statement. Instead, define **each variable in a separate statement** on its own line for better readability and documentation.