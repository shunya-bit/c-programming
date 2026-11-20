#include <stdio.h>

int main() {
  // 1. Declaration and intex-by-index initialization
  int marks[5];
  marks[0] = 85;
  marks[1] = 90;
  marks[2] = 78;
  marks[3] = 92;
  marks[4] = 88;

  printf("--- 1D Array: Initialized Marks ---\n");
  for (int i = 0; i < 5; i++) {
    printf("Student %d (index %d): %d\n", i + 1, i, marks[i]);
  }

  // 2. Declaration with size omitted
  int scores[] = {10, 20, 30, 40};
  int size = sizeof(scores) / sizeof(scores[0]);

  printf("\n--- 1D Array: Auto-Size Scores ---\n");
  for (int i = 0; i < size; i++) {
    printf("scores[%d] = %d\n", i, scores[i]);
  }

  return 0;
}
