#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int number) {
  // Base case: factorial of 0 or 1 is 1
  if (number == 1 || number == 0) {
    return 1;
  }
  // Recursive case: n* factorial(n-1)
  else {
    return number * factorial(number - 1);
  }
}

int main() {
  int num;

  printf("Enter the number you want factorial of: ");
  scanf("%d", &num);

  if (num < 0) {
    printf("Factorial is not defined for negative numbers.\n");
  } else {
    printf("The factorial of %d is %d\n", num, factorial(num));
  }

  return 0;
}
