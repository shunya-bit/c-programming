#include <stdio.h>

int main() {
  printf("--- Breaking Nested Loops with Goto ---\n");

  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      printf("i = %d, j = %d\n", i, j);

      if (i == 2 & j == 3) {
        printf("Target reached! Breaking out of ALL loops...\n");
        goto end_all_loops; // Exits both inner and outher loops
      }
    }
  }

end_all_loops:
  printf("Safely outside both loops.\n");
  return 0;
}
