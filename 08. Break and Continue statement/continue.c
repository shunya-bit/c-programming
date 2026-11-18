#include <stdio.h>

int main() {
  int i, age;

  printf("--- Continue Statement Demo ---\n");
  for (i = 0; i < 5; i++) {
    printf("\nIteration %d - Enter your age: ", i);
    scanf("%d", &age);

    if (age > 10) {
      printf("Age > 10 detected! Skipping the remaining messages for this "
             "iteration...\n");
      continue; // Jumps directly to the next iteration (i++)
    }

    // These lines are skipped whenever age > 10
    printf("You entered a valid kid's age: %d\n", age);
    printf("Continuing normal loop execution...\n");
  }

  return 0;
}
