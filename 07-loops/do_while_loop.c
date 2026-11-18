#include <stdio.h>

int main() {
  int i = 0; // Initialization

  printf("--- Do-While Loop (1 to 10) ---\n");

  do {
    i = i + 1; // Update expression first
    printf("%d ", i);
  } while (i < 10); // Condition checked after execution
  {
    printf("\n\n");
  }
  return 0;
}
