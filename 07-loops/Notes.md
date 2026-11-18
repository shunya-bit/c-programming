# C Programming Notes: Loops in C

## 1. Why Use Loops?

Instead of writing repetitive code manually (e.g., typing `printf` 10,000 times to print numbers from `1` to `10000`), loops allow a block of code to execute repeatedly until a specified condition fails to satisfy.

### Advantages of Using Loops
1. **Code reusability:** Write the logic once and reuse it across multiple iterations.
2. **Saves time:** Dramatically reduces development time and lines of code.
3. **Traversing:** Makes it easy to iterate through elements in data structures like arrays and linked lists.

---

## 2. Basic Loop Execution Flow

```text
[ Initialize: int i = 0 ]
          |
          v
    ( Loop Starts )
          |
          v
< Check Condition: i < 10 > ---- False ----> [ Exit the loop ]
          |
         True
          |
          v
  [ Execute loop body ]
  [ Update: i = i + 1 ]
          |
          +-----------------> (Repeat check until condition is false, e.g., 10 < 10)
```

---

## 3. Types of Loops in C

1. **`do-while` loop**
2. **`while` loop**
3. **`for` loop**

---

## 4. `do-while` Loop

* **Key Feature:** A `do-while` loop **executes at least once**, even if the condition is false on the very first check, because the condition is evaluated *after* the loop body runs.

### Syntax
```c
do {
    // code to be executed
} while (condition);
```

### Board Example
```c
int i = 0;

do {
    i = i + 1;
    printf("%d\n", i);
} while (i < 10);
```
* **Output:** Prints numbers from `1` to `10`.

---

## 5. `while` Loop

* **Key Feature:** Evaluates the condition *before* executing the loop body. If the condition is false initially, the loop body will not execute at all.

### Syntax
```c
while (condition) {
    // code to be executed
}
```

### Board Example
```c
int i = 0;

while (i < 30) {
    printf("%d\n", i);
    i = i + 1;
}
```
* **Output:** Prints numbers from `0` to `29`.

---

## 6. `for` Loop

### Why Use a `for` Loop?
* Used to iterate statements or a part of the program several times.
* Commonly used to traverse data structures like arrays and linked lists.
* Has a more compact syntax compared to `while` and `do-while` loops by grouping initialization, condition, and update together.

### Syntax
```c
for (Expression 1; Expression 2; Expression 3) {
    // code to be run
}
```

### Board Example
*(Note: `i++;` is shorthand for `i = i + 1;`)*

```c
int i;

for (i = 0; i < 5; i++) {
    printf("%d", i);
}
```
* **Output:** `01234`

---

## 7. Properties of `for` Loop Expressions

### Properties of Expression 1 (Initialization)
* Represents the initialization of the loop variable.
* We can initialize **more than one variable** in Expression 1 (separated by commas, e.g., `i = 0, j = 0`).
* Expression 1 is **optional** (can be omitted if the variable is already initialized before the loop).

### Properties of Expression 2 (Condition)
* It is a conditional expression that checks for a specific condition to be satisfied. If false, the loop terminates.
* It can have **more than one condition**. However, the loop iterates until the **last condition** becomes false; earlier conditions are treated as statements.
* Expression 2 is **optional** (if omitted, it defaults to true, creating an infinite loop unless broken internally).
* Expression 2 can perform the tasks of Expression 1 and Expression 3 (initializing and updating the loop variable inside Expression 2 itself).
* We can pass zero or non-zero values: in C, **any non-zero value is true**, and **zero (`0`) is false** by default.

### Properties of Expression 3 (Update)
* Used to update (increment or decrement) the loop variable.
* We can update **more than one variable** at the same time (e.g., `i++, j--`).
* Expression 3 is **optional** (can be omitted if the variable is updated inside the loop body).