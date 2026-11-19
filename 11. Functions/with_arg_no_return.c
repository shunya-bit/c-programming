#include <stdio.h>

// Function Declaration
void print_stars(int count);

int main() {
  printf("--- With Arguments, No Return Value ---\n");

  // Function Call
  print_stars(7);

  return 0;
}

// function Definition
void print_stars(int count) {
  for (int i = 0; i < count; i++) {
    printf("* ");
  }
  printf("\n");
}
