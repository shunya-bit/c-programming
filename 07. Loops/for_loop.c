#include <stdio.h>

int main() {
  printf("--- For Loop (0 to 5) ---\n");

  // Syntex: for (Expression 1; Expression 2; Expression 3)
  // Exp 1: Initialization (int i = 0)
  // Exp 2: Condition (i < 5)
  // Exp 3: Update (i++)
  for (int i = 0; i <= 5; i++) {
    printf("%d ", i);
  }
  printf("\n\n");

  return 0;
}
