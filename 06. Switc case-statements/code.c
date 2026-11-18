#include <stdio.h>

int main() {
  int department;
  char role;

  printf("Select Department (1= Tech, 2 = Salse): ");
  scanf("%d", &department);

  switch (department) {
  case 1:
    printf("Tech Department selected.\n");
    printf("Select Role (D = Developer, T = Tester): ");
    scanf(" %c", &role);

    // Nested switch in Case 1
    switch (role) {
    case 'D':
      printf("Role: Software Developer\n");
      break;

    case 'T':
      printf("Role: QA Tester\n");
      break;

    default:
      printf("Unknown Tech role\n");
    }
    break;

  case 2:
    printf("Salse Department selected\n");
    break;

  default:
    printf("Invalid department.\n");
  }

  return 0;
}
