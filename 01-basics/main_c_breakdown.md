# Hello World in C (`main.c`)

This document provides a detailed breakdown of the `main.c` program, explaining its structure, syntax, and execution flow.

## Source Code

```c
#include <stdio.h>

int main() {
  printf("Hello World\n");
  return 0;
}
```

## Overview

This is a classic **"Hello, World!"** program, typically the first program written when learning the C programming language. It demonstrates the foundational structure of a C application, including standard library inclusion, console output, and program termination.

## Line-by-Line Breakdown

### 1. Preprocessor Directive
```c
#include <stdio.h>
```
* **Type:** Preprocessor directive.
* **Purpose:** Instructs the C preprocessor to include the contents of the **St**andard **I**nput/**O**utput header file (`stdio.h`) before compilation begins. This library provides the declarations needed to use standard input and output functions like `printf`.

### 2. Main Function Definition
```c
int main()
```
* **Type:** Function definition.
* **Purpose:** Serves as the mandatory entry point for any C program. Program execution always starts inside the `main` function. The `int` keyword specifies that the function will return an integer value to the operating system upon completion.

### 3. Block Delimiters
```c
{
  // Code goes here
}
```
* **Type:** Curly braces.
* **Purpose:** Define the scope and boundaries of the `main` function's code block.

### 4. Standard Output Statement
```c
printf("Hello World\n");
```
* **Type:** Standard library function call.
* **Purpose:** Calls the `printf` function (from `stdio.h`) to display formatted text on the console.
  * `"Hello World\n"`: A string literal passed as an argument to `printf`.
  * `\n`: An escape sequence representing a **newline** character, moving the cursor to the next line after printing.
  * `;`: Every executable statement in C must end with a semicolon.

### 5. Return Statement
```c
return 0;
```
* **Type:** Return statement.
* **Purpose:** Terminates the `main` function and returns the exit status `0` to the operating system. By convention in C, returning `0` signals that the program executed successfully without errors.

## How to Compile and Run

To compile and run this program using GCC (GNU Compiler Collection) in your terminal:

1. **Compile the code:**
   ```bash
   gcc main.c -o main
   ```

2. **Run the executable:**
   ```bash
   ./main
   ```

**Expected Output:**
```text
Hello World
```