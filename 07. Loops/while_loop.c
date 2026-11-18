#include <stdio.h>

int main() {
  int i = 0; // Initialization

  printf("--- While loop (0 to 30) ---\n");

  // Condition check before execution
  while (i <= 30) {
    printf("%d ", i);
    i = i + 1; // update experession
  }
  printf("\n\n");

  return 0;
}
