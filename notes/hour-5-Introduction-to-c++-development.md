📄 Summary: 0.4 — Introduction to C++ Development

This lesson outlines the first three steps of the simplified C++ program development cycle.

1. Step 1: Define the problem (The "What")

    This is the initial idea and the simplest stage conceptually: clearly articulate the problem you intend to solve.

        Examples: Calculating the average of many numbers, creating a 2D maze game, or predicting stock prices from a file.

2. Step 2: Determine how to solve the problem (The "How")

    This is the design stage and is often neglected. Programmers frequently skip this and start coding immediately, which often leads to a "bad" solution.

    Characteristics of a Good Solution:

        Straightforward (not overly complicated).

        Well documented (especially assumptions and limitations).

        Modular (parts can be reused or changed without affecting others).

        Can recover gracefully from unexpected events (provides useful error messages).

    Maintenance vs. Coding: Only 10–40% of a programmer's time is spent on initial coding. The majority (60–90%) is spent on maintenance (debugging, updates, enhancements).

    Conclusion: Spending extra time on solution design upfront saves significant time and trouble later in the maintenance phase.

3. Step 3: Write the program

    Requires two components: knowledge of C++ and a text editor to input the source code.

Code Editor vs. Basic Text Editor

    While any text editor works (like Notepad), you are strongly urged to use a code editor designed for programming.

    Key Code Editor Features:

        Line numbering: Essential for finding errors when the compiler reports "line 64."

        Syntax highlighting and coloring: Improves readability by visually differentiating code components.

        Unambiguous, fixed-width font (Monospace): Ensures clarity between similar characters (e.g., 0 vs O, 1 vs l).

Source Code Files

    Complex programs often contain hundreds or thousands of source code files.

    Best Practice: Name the primary source code file main.cpp.

        The .cpp extension is the de-facto standard for C++ source files (alternatives include .cc or .cxx).