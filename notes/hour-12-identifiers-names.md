## 📄 Summary: 1.7 — Keywords and Naming Identifiers

This lesson covers the reserved words in C++ and the rules and conventions for naming identifiers (variables, functions, etc.).

---

### 1. Keywords (Reserved Words)

* **Definition:** **Keywords** are a set of over 90 words (as of C++23) reserved by the C++ language for special, predefined meanings (e.g., `int`, `return`, `if`, `class`).
* **Special Identifiers:** Words like `override`, `final`, `import`, and `module` have specific meaning in certain contexts but are not globally reserved.
* **Rule:** You **cannot** use a keyword as the name for any identifier (variable, function, etc.) in your program.

---

### 2. Identifier Naming Rules

An **identifier** is a name you give to a variable, function, or other item. C++ has strict rules for valid identifier names:

1.  **Must not be a keyword.**
2.  **Allowed Characters:** Can only contain **letters** (a-z, A-Z), **numbers** (0-9), and the **underscore** (`_`). Whitespace and other symbols are disallowed.
3.  **Starting Character:** Must begin with a **letter** or an **underscore**. It cannot start with a number.
4.  **Case Sensitive:** C++ is **case sensitive**. `Value` is a different identifier from `value`.

---

### 3. Naming Best Practices (Conventions)

While the rules above are mandatory, the following are conventions to improve code readability:

| Item to Name | Convention | Example |
| :--- | :--- | :--- |
| **Variables** | Start with a **lowercase** letter. | `int value;` |
| **Functions** | Usually start with a **lowercase** letter. | `int calculateScore();` |
| **Types** (Classes, Structs, Enums) | Start with a **Capital** letter. | `class PlayerData;` |

#### Multi-Word Naming Styles

For identifiers made of multiple words, two styles are conventional:

* **`snake_case`:** Words separated by underscores. Used frequently in the C++ Standard Library. (e.g., `my_variable_name`)
* **`camelCase` (Intercapped):** The first word is lowercase, and subsequent words start with a capital letter. (e.g., `myVariableName`)

#### Readability and Clarity

* **Descriptive Names:** Identifier names should be descriptive and clearly indicate their purpose and, if applicable, their units.
    * **Good:** `int monstersKilled;`
    * **Bad:** `int x;` (unless the usage is trivial)
* **Length:** Make the length of the name proportional to its scope and specificity. Short-lived or trivial variables (like loop counters) can have short names (`i`); globally accessible or specific variables should have longer, clearer names (`totalIncomeDollars`).
* **Underscores:** **Avoid** starting identifiers with an underscore (`_`), as these are often reserved for system, compiler, or library use.
* **Existing Code:** If working in an existing codebase, **match the existing naming style** rather than rigidly applying modern conventions.