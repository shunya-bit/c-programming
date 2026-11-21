#include <stdio.h>

int main() {
  int *ptr = NULL; // Pointer does not point to any variable yet

  if (ptr == NULL) {
    printf("ptr is currently NULL.\n");
  }

  int num = 42;
  ptr = &num; // Now 'ptr' holds the adress of 'num'

  if (ptr != NULL) {
    printf("Now *ptr gives: %d\n", *ptr);
  }

  return 0;
}
