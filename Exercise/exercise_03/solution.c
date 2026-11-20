#include <stdio.h>

// Function Declaration
void print_faibonacci(int terms);

int main() {
  int n;

  printf("--- Fabinacci Series ---\n");
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("Please enter a positive number.\n");
  } else {
    print_faibonacci(n);
  }

  return 0;
}

// Function Definition
void print_faibonacci(int terms) {
  int first = 0, seccond = 1, next;
  printf("Fabinacci Series: ");

  for (int i = 1; i <= terms; i++) {
    printf("%d ", first);
    next = first + seccond;
    first = seccond;
    seccond = next;
  }

  printf("\n");
}
