#include <stdio.h>

int main() {
  int a = 25;
  int *p = &a; // 'p' stores the memory address of 'a'

  printf("Value of a: %d\n", a);
  printf("Address stored in p: %p\n", p);
  printf("Value at address p (*p): %d\n", *p);

  // Change the value of 'a' using the pointer
  *p = 20;
  printf("Updated value of a: %d\n", a);

  return 0;
}
