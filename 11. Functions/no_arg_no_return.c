#include <stdio.h>

// Function Declaration
void print_banner(void);

int main() {
  printf("--- No Argument, No Return Value ---\n");

  // Function Call
  print_banner();

  return 0;
}

// Function Declaration
void print_banner(void) {
  printf("******************************\n");
  printf("*   Welcome to C Functions   *\n");
  printf("******************************\n");
}
