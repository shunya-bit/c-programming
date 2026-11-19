# C Programming Notes: Functions in C

## 1. What is a Function?
* **Functions** are used to divide a large C program into smaller, manageable pieces.
* A function can be called multiple times to provide **reusability** and **modularity** to a C program.
* Also known as a **procedure** or **subroutine**.

---

## 2. Basic Syntax
```c
return_type function_name(data_type parameter1, data_type parameter2, ...) {
    // code to be executed
}
```

### Board Examples
* `int printstar()` (Function returning an `int` with no parameters)
* `int sum(int a, int b)` (Function returning an `int` taking two `int` parameters)

---

## 3. Advantages of C Functions
1. **Avoid Repetition:** We can avoid rewriting the same logic over and over through functions.
2. **Team Collaboration:** We can divide work easily among multiple programmers using functions.
3. **Easier Debugging:** We can easily isolate and debug errors in a program by testing individual functions.

---

## 4. Declaration, Definition, and Call
1. **Function Declaration (Prototype):** A function is declared to tell the compiler about its existence (its name, return type, and parameters) before it is used.
   ```c
   int sum(int a, int b); // Declaration
   ```
2. **Function Definition:** A function is defined to provide the actual body/logic to get a specific task done.
   ```c
   int sum(int a, int b) {
       return a + b;      // Definition
   }
   ```
3. **Function Call:** A function is called inside `main()` (or another function) in order to execute and use it.
   ```c
   int result = sum(5, 10); // Call
   ```

---

## 5. Types of Functions in C

```
                 [ C Functions ]
                   /         \
                  v           v
     [ Library Functions ]   [ User-Defined Functions ]
```

1. **Library Functions:** Pre-built functions included in C header files (e.g., `printf()`, `scanf()` in `<stdio.h>`).
2. **User-Defined Functions:** Custom functions created by the C programmer to reduce the complexity of a program and organize logic.

---

## 6. Four Categories of Function Examples
Depending on whether a function accepts inputs (**arguments**) and sends back an output (**return value**), user-defined functions fall into four categories:

1. **Without arguments and without return value** (`void func(void)`)
2. **Without arguments and with return value** (`int func(void)`)
3. **With arguments and without return value** (`void func(int a, int b)`)
4. **With arguments and with return value** (`int func(int a, int b)`)