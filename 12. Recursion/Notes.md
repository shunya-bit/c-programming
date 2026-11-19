# C Programming Notes: Recursive Functions in C

## 1. What is a Recursive Function?

* **Recursion** is a process in which a function calls a copy of itself to work on a smaller sub-problem.
* Any function that calls itself is known as a **recursive function**.
* It simplifies complex problems by dividing a given problem into smaller, easier sub-problems.
* **Termination Condition (Base Case):** A stopping condition must be imposed on recursive functions so they do not execute copies of themselves infinitely (which would cause a stack overflow).
* **Recursion vs. Iteration:** Any problem that can be solved recursively can also be solved iteratively (using loops).

---

## 2. Why Use Recursion?

* Even though every recursive problem can be solved iteratively, certain problems are naturally cleaner and best suited to be solved using recursion.
* **Classic Examples:**
  * Tower of Hanoi
  * Fibonacci series
  * Factorial calculation ($n!$)
  * Tree and graph traversals

---

## 3. Anatomy of a Recursive Function

Every recursive function consists of two essential parts:

1. **Base Case:** The condition at which the function stops calling itself and returns a known result directly.
2. **Recursive Case:** The part where the function calls itself with a modified (smaller) argument to perform a subtask.

---

## 4. Example: Factorial Calculation ($n!$)

Mathematically, the factorial of a non-negative integer $n$ is defined as:

$$
n! = \begin{cases} 
1 & \text{if } n = 0 \text{ or } n = 1 \quad (\text{Base Case}) \\
n \times (n - 1)! & \text{if } n > 1 \quad (\text{Recursive Case})
\end{cases}
$$

### Step-by-Step Execution Trace for `Factorial(5)`

```text
Factorial(5)
 └── 5 x Factorial(4)
          └── 5 x 4 x Factorial(3)
                   └── 5 x 4 x 3 x Factorial(2)
                            └── 5 x 4 x 3 x 2 x Factorial(1)  [Base Case Reached: returns 1]
                                                    │
                                                    ▼
                                     5 x 4 x 3 x 2 x 1 = 120
```