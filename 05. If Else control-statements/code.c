#include <stdio.h>

int main() {
  int age;
  int marks;

  // --- 1. Simple `if` statement ---
  printf("--- 1. Simple if statement ---\n");
  if (3 > 2) {
    printf("This will execute because 3 is greater than 2.\n\n");
  }

  // --- 2. `if-else` statement ---
  printf("--- 2. if-else Statement ---\n");
  printf("Enter your age: ");
  scanf("%d", &age);

  if (age >= 18) {
    printf("You are eligible to vote.\n\n");
  } else {
    printf("You are not eligible for vote yet.\n\n");
  }

  // --- 3. `if-else if` ladder ---
  printf("--- 3. if-else if Ladder & Nested if ---\n");
  printf("Enter your exam marks (0 to 100): ");
  scanf("%d", &marks);

  // Outer condition validates input range
  if (marks >= 0 && marks <= 100) {
    // Nested if-else if ladder inside the valid range check
    if (marks >= 90) {
      printf("Grade: A+\n");
    } else if (marks >= 75) {
      printf("Grade: A\n");
    } else if (marks >= 50) {
      printf("Grade: B\n");
    } else {
      printf("Grade: F\n");
    }
  } else {
    // Executes if the outher `if` condition is false
    printf("Invalid marks entered. Please enter a value between 0 to 100\n");
  }

  return 0;
}
