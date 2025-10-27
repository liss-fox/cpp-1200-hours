## 📄 Summary: 1.2 — Comments

**Comments** are programmer-readable notes inserted directly into the source code. They are **ignored by the compiler** and exist solely for human documentation.

---

### 1. Comment Styles

C++ supports two main types of comments:

| Style | Symbols | Usage | Nesting |
| :--- | :--- | :--- | :--- |
| **Single-line** | `//` | Ignores everything from `//` to the end of the line. | Can be wrapped within a multi-line comment. |
| **Multi-line (C-style)** | `/* ... */` | Ignores everything between `/*` and the first `*/`. | **Cannot be nested** (e.g., `/* /* comment */ */` fails). |

**Readability Tip:** For comments about a specific line, they can be placed to the right if lines are short, or **above** the code line if lines are long, to maintain code readability.

---

### 2. Proper Use of Comments (What, How, Why)

Comments should be written clearly, as if speaking to someone unfamiliar with the code.

| Level | Purpose | Focus | Example |
| :--- | :--- | :--- | :--- |
| **High-Level** (File/Function) | Describe **WHAT** the code/function does. | The program's goal. | `// This function uses Newton's method to approximate the root.` |
| **Mid-Level** (Inside Function) | Describe **HOW** the code accomplishes the goal. | The steps/algorithm used. | `/* To calculate the final grade, we sum all weighted scores... */` |
| **Statement-Level** (Specific Line) | Describe **WHY** the code is doing something. | Rationale or constraints. | `sight = 0; // The player just drank a potion of blindness` |

**Warning:** **Bad statement comments** simply state *what* the code does (e.g., `// Set sight to 0`). Good code should be readable enough that a comment isn't needed for the action itself.

---

### 3. Commenting Out Code

* **Definition:** **Commenting out** code is the process of temporarily converting active code into a comment, excluding it from compilation.
* **Methods:** Use `//` on single lines or `/* */` for a block of code.
* **Use Cases:**
    * Temporarily disable code that **won't compile** or is **broken**.
    * Isolate the source of a **bug** (disabling parts of the code to see which section is causing the issue).
    * Retain old code for **reference** while implementing a replacement.
* **IDE Support:** Most IDEs offer hotkeys (e.g., Ctrl-/) to easily comment out a highlighted section.