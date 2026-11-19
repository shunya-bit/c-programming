#include <stdio.h>

int main() {
  int a = 7, b = 2;
  double pi = 3.14159;

  printf("--- Explictic typecasting ---\n");

  // 1. Integer division vs. Explictic cast float division
  float without_cast = a / b;
  float with_cast = (float)a / b;

  printf("Without cast (7/2): %.2f\n", without_cast);
  printf("With cast ((float)7 / 2): %.2f\n", with_cast);

  // 2. Narrowing conversion (truncasting decimal)
  int truncasting_pi = (int)pi;
  printf("Original double: %lf | Cast to int: %d\n", pi, truncasting_pi);

  return 0;
}
