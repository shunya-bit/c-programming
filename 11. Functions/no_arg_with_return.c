#include <stdio.h>

// Function Declaration
int take_number(void);

int main() {
  printf("--- No Argument, With Return Value ---\n");

  // Function Call
  int num = take_number();
  printf("You entered: %d\n", num);

  return 0;
}

// Function Definition
int take_number(void) {
  int n;
  printf("Enter an intiger: ");
  scanf("%d", &n);
  return n;
}
