#include <stdio.h>

int main() {
  // 1. Variable Declaration and Initialization
  // Following valid naming rules: can start with aplhabets or underscores
  int raj = 21;
  float raj123 = 99.95; // contains digits, valid name
  char _raj32 = 'A';    // starts with an underscore, valid name

  // 2. Character initialization example.
  char c = 'c'; // allocates 1 bytes = 8 bits in RAM

  // 3. Other basic data types
  double pi = 3.14159;

  // Printing variable values
  printf("--- Variable values ---");
  printf("Integer (raj): %d\n", raj);
  printf("Float (raj123): %.2f\n", raj123);
  printf("Char (_raj32): %c\n", _raj32);
  printf("Char (c): %c\n", c);
  printf("Double (pi): %.2f\n\n", pi);

  // 4. Checking Memory sizes using sizeof() operator
  printf("--- Data Type Sizes on Current Architecture ---\n");
  printf("Size of char: %lu bytes(s) [%lu bit(s)]\n", sizeof(char),
         sizeof(char) * 8);
  printf("Size of int: %lu byte(s)\n", sizeof(int));
  printf("Size of float: %lu byte(s)\n", sizeof(float));
  printf("Size of double: %lu byte(s)\n", sizeof(double));

  return 0;
}
