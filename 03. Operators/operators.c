#include <stdio.h>

int main() {
  // 1. Arithmetic Operators
  int a = 10, b = 3;
  printf("--- 1. Arithmetic Operators ---\n");
  printf("a + b = %d\n", a + b);    // Addition
  printf("a - b = %d\n", a - b);    // Subtraction
  printf("a * b = %d\n", a * b);    // Multiplication
  printf("a / b = %d\n", a / b);    // Division
  printf("a %% b = %d\n\n", a % b); // Modulus

  // 2. Relational Operators
  printf("--- 2. Relational Operators ---\n");
  printf("a == b : %d\n", a == b);   // Is equal to
  printf("a != b : %d\n", a != b);   // Is not equal to
  printf("a > b  : %d\n", a > b);    // Greater than
  printf("a < b  : %d\n", a < b);    // Less than
  printf("a >= b : %d\n", a >= b);   // Greater than or equal to
  printf("a <= b : %d\n\n", a <= b); // Less than or equal to

  // 3. Logical Operators
  int cond1 = 1; // True (non-zero)
  int cond2 = 0; // False (zero)
  printf("--- 3. Logical Operators ---\n");
  // Logical AND: true if both are non-zero
  printf("cond1 && cond2 : %d\n", cond1 && cond2);
  // Logical OR: true if any operand is non-zero
  printf("cond1 || cond2 : %d\n", cond1 || cond2);
  // Logical NOT: reverses the logical state
  printf("!cond1 : %d\n\n", !cond1);

  // 4. Bitwise Operators
  unsigned int x = 5; // Binary: 0101
  unsigned int y = 1; // Binary: 0001
  printf("--- 4. Bitwise Operators ---\n");
  printf("x & y (Bitwise AND) = %u\n", x & y);
  printf("x | y (Bitwise OR)  = %u\n", x | y);
  printf("x ^ y (Bitwise XOR) = %u\n", x ^ y);
  printf("~x (One's Complement) = %u\n", ~x);
  printf("x << 1 (Left Shift)   = %u\n", x << 1);
  printf("x >> 1 (Right Shift)  = %u\n", x >> 1);
  printf("\n");

  // 5. Assignment Operators
  int c = 10;
  printf("--- 5. Assignment Operators ---\n");
  c += 5; // Adds 5 to c and assigns result back to c
  printf("c += 5 -> c = %d\n", c);
  c *= 2; // Multiplies c by 2 and assigns result back
  printf("c *= 2 -> c = %d\n", c);
  printf("\n");

  // 6. Miscellaneous Operators
  printf("--- 6. Miscellaneous Operators ---\n");
  // sizeof() returns the size of a variable[cite: 14]
  printf("Size of variable 'a': %lu bytes\n", sizeof(a));
  // & returns the actual memory address of a variable[cite: 14]
  printf("Address of variable 'a': %p\n", (void *)&a);

  // Conditional Expression (Ternary Operator)[cite: 14]
  // Syntax: Condition ? value_if_true : value_if_false
  int max = (a > b) ? a : b;
  printf("Max between a and b using ?: is %d\n", max);

  return 0;
}
