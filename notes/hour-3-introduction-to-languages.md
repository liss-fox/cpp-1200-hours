
## 📄 Summary: 0.2 — Introduction to programs and programming languages

### 🖥️ Programs and Execution

* **Computer Program:** A sequence of instructions that directs a computer to perform actions in a specified order.
* **Programming Language:** A language designed to facilitate writing instructions for computers.
* **Running/Executing:** When a computer performs the actions described by the program instructions.
* **Hardware vs. Software:**
    * **Hardware:** Physical components (CPU, Memory, Interactive devices, Storage).
    * **Software:** Programs designed to be executed on hardware.
* **Platform:** A compatible set of hardware and software (OS, browser, etc.) that provides the environment for programs to run (e.g., Windows on x86 CPU).
* **Portability:** A program that can be easily transferred from one platform to another. **Porting** is the act of modifying a program to run on a different platform.

---

### 🧱 Language Levels

#### 1. Low-Level Languages (Machine & Assembly)

* **Machine Language (Machine Code):** The native langua📄 Summary: 0.2 — Introduction to programs and programming languages

🖥️ Programs and Execution

    Computer Program: A sequence of instructions that directs a computer to perform actions in a specified order.

    Programming Language: A language designed to facilitate writing instructions for computers.

    Running/Executing: When a computer performs the actions described by the program instructions.

    Hardware vs. Software:

        Hardware: Physical components (CPU, Memory, Interactive devices, Storage).

        Software: Programs designed to be executed on hardware.

    Platform: A compatible set of hardware and software (OS, browser, etc.) that provides the environment for programs to run (e.g., Windows on x86 CPU).

    Portability: A program that can be easily transferred from one platform to another. Porting is the act of modifying a program to run on a different platform.

🧱 Language Levels

1. Low-Level Languages (Machine & Assembly)

    Machine Language (Machine Code): The native language of the CPU, consisting of binary digits (bits, 0s and 1s). It is specific to a CPU family (Instruction Set Architecture).

        Example: 10110000 01100001

    Assembly Language: A more human-readable representation of machine language, using mnemonics (e.g., mov al, 0x61).

        Requires an assembler to translate it into machine language.

    Downsides of Low-Level Languages: Not portable, require detailed knowledge of the architecture, hard to understand, and lack complex capabilities.

    Primary Benefit: They are fast (used for performance-critical sections).

2. High-Level Languages (C, C++, Java, etc.)

    Definition: Provide a high level of abstraction from the underlying hardware architecture.

        Example: a = 97; (Abstracts away specific memory location and CPU instruction).

    Benefits:

        Portability: Easier to write cross-platform code.

        Simplicity & Readability: Instructions resemble natural language/math, requiring fewer lines of code for the same task.

        Built-in Capabilities: Include features for common tasks (e.g., text manipulation) that dramatically reduce complexity and development time.

⚙️ Translation Methods

High-level code must be translated into machine language:
Method	Program	Process	Efficiency & Dependency
Compiling	Compiler	Translates source code into machine code before execution, packaged into an executable.	Very efficient. Executable does not require the compiler to run. (Typical for C++).
Interpreting	Interpreter	Executes source code instructions directly (on the fly).	Less efficient (translation happens every time). The interpreter must be installed on every machine.

🏷️ Nomenclature (C++)

    While technically a High-Level Language, C++ is sometimes inaccurately called "low-level" compared to modern scripting languages (e.g., Python).

    Author's Note: C++ is more accurately described as a Mid-Level Language because it allows the programmer to work at both higher (convenience) and lower (performance) levels of abstraction.

⚠️ Rules, Best Practices, and Warnings

    Rule: Instructions that must be followed (required by the language); failure means the program won't work.

    Best Practice: Things that should be done (conventional or superior way of doing things).ge of the CPU, consisting of binary digits (**bits**, 0s and 1s). It is specific to a **CPU family** (**Instruction Set Architecture**).
    * *Example:* `10110000 01100001`
* **Assembly Language:** A more human-readable representation of machine language, using mnemonics (e.g., `mov al, 0x61`).
    * Requires an **assembler** to translate it into machine language.
* **Downsides of Low-Level Languages:** Not portable, require detailed knowledge of the architecture, hard to understand, and lack complex capabilities.
* **Primary Benefit:** They are **fast** (used for performance-critical sections).

#### 2. High-Level Languages (C, C++, Java, etc.)

* **Definition:** Provide a **high level of abstraction** from the underlying hardware architecture.
    * *Example:* `a = 97;` (Abstracts away specific memory location and CPU instruction).
* **Benefits:**
    * **Portability:** Easier to write **cross-platform** code.
    * **Simplicity & Readability:** Instructions resemble natural language/math, requiring fewer lines of code for the same task.
    * **Built-in Capabilities:** Include features for common tasks (e.g., text manipulation) that dramatically reduce complexity and development time.

---

### ⚙️ Translation Methods

High-level code must be translated into machine language:

| Method | Program | Process | Efficiency & Dependency |
| :--- | :--- | :--- | :--- |
| **Compiling** | **Compiler** | Translates source code into machine code **before** execution, packaged into an executable. | Very **efficient**. Executable does **not** require the compiler to run. (Typical for C++). |
| **Interpreting** | **Interpreter** | Executes source code instructions **directly** (on the fly). | Less efficient (translation happens every time). The interpreter **must** be installed on every machine. |

### 🏷️ Nomenclature (C++)

* While technically a **High-Level Language**, C++ is sometimes inaccurately called "low-level" compared to modern scripting languages (e.g., Python).
* **Author's Note:** C++ is more accurately described as a **Mid-Level Language** because it allows the programmer to work at both higher (convenience) and lower (performance) levels of abstraction.

### ⚠️ Rules, Best Practices, and Warnings

* **Rule:** Instructions that **must** be followed (required by the language); failure means the program won't work.
* **Best Practice:** Things that **should** be done (conventional or superior way of doing things).
* **Warning:** Things that **should not** be done (generally lead to unexpected results).