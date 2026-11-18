# C Programming Notes: `goto` Statement

## 1. Overview
* Also known as a **jump statement** in C.
* Used to unconditionally transfer program control to a predefined **label** within the same function.

## 2. Syntax
```c
// Jumping forward or backward to a label
goto label;

// ... intermediate code ...

label:
    // code to execute after jump
```

## 3. When to Use (and Avoid) `goto`
* **Why it is generally avoided:** Overusing `goto` makes code difficult to trace and causes confusion for fellow programmers trying to understand the program's execution flow (often called "spaghetti code").
* **When it is preferable:** The `goto` statement is genuinely useful when you need to **break out of multiple nested loops using a single statement** at the same time (since a standard `break` only exits the innermost loop).

### Nested Loop Exit Example
```c
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        if (i == 2 && j == 3) {
            goto exit_loops; // Breaks out of both loops at once
        }
    }
}

exit_loops:
    printf("Exited both loops!\n");
```