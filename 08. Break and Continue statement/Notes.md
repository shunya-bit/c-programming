# C Programming Notes: `break` and `continue` Statements

## 1. The `break` Statement

* **Purpose:** Used to immediately bring the program control **out of a loop** or a **`switch` statement**.
* **Where it can be used:**
  1. Loops (`do-while`, `while`, `for`)
  2. `switch-case` expressions

### Syntax & Board Example
```c
while (condition) {
    // User enters input & keeps playing until game over
    if (/* exit condition met */) {
        break; // Immediately exits the loop
    }
}
```

---

## 2. The `continue` Statement

* **Purpose:** Used to bring the program control directly to the **next iteration** of the loop.
* **Behavior:** It skips the remaining lines of code inside the loop body for the current iteration and jumps straight to the next cycle.
* **Common Use Case:** Mainly paired with an `if` condition so you can bypass specific code whenever a particular condition is met.

### Syntax
```c
for (int i = 0; i < 10; i++) {
    if (condition) {
        continue; // Skips the rest of the code below for this iteration
    }
    // Code here is skipped when condition is true
}
```