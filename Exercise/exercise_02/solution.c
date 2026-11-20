#include <stdio.h>

int main() {
  char choice = '\0';
  float value, result;

  while (1) {
    printf("\n=== Unit Converter ===\n");
    printf("1. Kms to Miles\n");
    printf("2. Inches to Foot\n");
    printf("3. Cms to Inches\n");
    printf("4. Pound to Kgs\n");
    printf("5. Inches to Meters\n");
    printf("q. Exit\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    if (choice == 'q' || choice == 'Q') {
      printf("Exiting program. Bye!\n");
      break;
    }

    if (choice < '1' || choice > '5') {
      printf("Invalid choice! Please select 1-5 or q.\n");
      continue;
    }

    printf("Enter the value: ");
    scanf("%f", &value);

    switch (choice) {
    case '1':
      result = value * 0.621371f;
      printf("%.2f kms = %.2f miles\n", value, result);
      break;
    case '2':
      result = value / 12.0f;
      printf("%.2f inches = %.2f foot\n", value, result);
      break;
    case '3':
      result = value / 2.54f;
      printf("%.2f cms = %.2f inches\n", value, result);
      break;
    case '4':
      result = value * 0.453592f;
      printf("%.2f pounds = %.2f kgs\n", value, result);
      break;
    case '5':
      result = value * 0.0254f;
      printf("%.2f inches = %.2f meters\n", value, result);
      break;
    default:
      printf("Invalid choice!\n");
    }
  }

  return 0;
}
