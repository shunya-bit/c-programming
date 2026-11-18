#include <stdio.h>

int main() {
  int i, age;

  printf("--- Break Statement ---\n");
  for (i = 0; i < 10; i++) {
    printf("Iteration %d - Enter your age (enter > 10 to exit): ", i);
    scanf("%d", &age);

    if (age > 10) {
      printf("Age is gretter than 10. Breaking out the loop!\n");
      break; // Immediately exits the for loop
    }
  }

  printf("Program control is now outside the loop.\n");
  return 0;
}
