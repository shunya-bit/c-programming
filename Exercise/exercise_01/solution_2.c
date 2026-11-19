#include <stdio.h>

int main() {
  int num;

  printf("Enter the number you want multiplication table of: ");
  scanf("%d", &num);

  printf("\nTable of: %d\n\n", num);

  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", i, num, i * num);
  }

  return 0;
}
