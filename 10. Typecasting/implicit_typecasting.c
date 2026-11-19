/*
 Implicit typecasting (Automatic type promotion)
*/

#include <stdio.h>

int main() {
  int num_int = 10;
  char letter = 'A';
  float num_float = 5.5;

  printf("--- Implicit typecasting ---\n");

  // 'letter' (char) is automatically promoted to int (65)
  int sum_int = num_int + letter;
  printf("10 + 'A' (65) = %d\n", sum_int);

  // 'num_int' (int) is automatically promoted to float (10.0)
  float sum_float = num_int + num_float;
  printf("10 + 5.5 = %.2f\n", sum_float);

  return 0;
}
