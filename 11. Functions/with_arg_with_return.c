#include <stdio.h>

// Function Declaration
int sum(int a, int b);

int main() {
  int x = 15, y = 25;
  printf("--- With Argument, With Return Value ---\n");

  // Function Call (passes x and y, receives result)
  int result = sum(x, y);
  printf("Sum of %d and %d is: %d\n", x, y, result);

  return 0;
}

// Function Definition
int sum(int a, int b) { return a + b; }
