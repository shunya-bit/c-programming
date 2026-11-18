#include <stdio.h>

int main() {
  int num;

  printf("--- Basic Goto Statement ---\n");
  printf("Enter a number (enter 0 to trigger jump): ");
  scanf("%d", &num);

  if (num == 0) {
    goto error_handler; // Jumps straight to error_handler
  }

  printf("Success: You entered %d.\n", num);
  goto end_program; // Skips the error_handler block

error_handler:
  printf("[Alert]: Zero is not allowed! Jumped to error handler.\n");

end_program:
  printf("Program execution finished.\n");

  return 0;
}
