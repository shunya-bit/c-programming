#include <stdio.h>

int main() {
  // 2D array with 2 rows ans 3 columns
  int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

  printf("--- 2D Array (2x3 Matrix) ---\n");
  for (int row = 0; row < 2; row++) {
    for (int col = 0; col < 3; col++) {
      printf("%d ", matrix[row][col]);
    }
    printf("\n");
  }

  return 0;
}
