# Exercise 03: Fibonacci Series Using a Function in C

## Problem Statement

Write a C program that uses a **user-defined function** to generate and display the **Fibonacci series** up to a given number of terms $n$ entered by the user.

### What is the Fibonacci Series?

The Fibonacci sequence is a series of numbers in which each term is the sum of the two preceding terms, starting from $0$ and $1$:

$$
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, \dots
$$

Mathematically, the $k^{\text{th}}$ term is defined as:

$$
F(0) = 0, \quad F(1) = 1, \quad F(k) = F(k - 1) + F(k - 2) \text{ for } k \ge 2
$$

## Program Requirements

1. Prompt the user to enter a positive integer $n$ representing the number of terms to print.
2. Validate that $n > 0$ (display an appropriate message if $n \le 0$).
3. Create a separate user-defined function (e.g., `void print_fibonacci(int terms)`) to compute and print the first $n$ terms of the series.
4. *(Bonus)* Also write a recursive function `int fib_recursive(int n)` to find the $n^{\text{th}}$ Fibonacci number and compare its performance with the iterative loop approach.

## Sample Output

```text
=== Exercise 03: Fibonacci Series ===
Enter the number of terms: 8
Fibonacci Series: 0 1 1 2 3 5 8 13
```