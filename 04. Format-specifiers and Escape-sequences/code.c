#include <stdio.h>

// 1. Defining constants using the #define preprocessor
#define ORGANIZATION "Sunya-Bit"
#define PI 3.14159

int main() {
  // 2. Defining a constant using the const keyword
  const int MAX_LIMIT = 100;
  printf("Maximum limit: %d\n", MAX_LIMIT); // This uses the variable

  // Variable for format specifier demonstration
  char grade = 'A';                  // Character type
  int age = 21;                      // Integer type
  float percentage = 92.4f;          // Float type
  double exact_value = 3.1415926535; // Double type

  // --- PART 1: Escape Sequences ---
  printf("--- Escape Sequences ---\n");
  printf("Hello\tWorld!\n"); // \t adds a horizontal tab , \n add new line.
  printf(
      "Directory path: C:\\Users\\Raj\\C\n"); // \\ prints a literal backslash.
  printf("She said, \"C programing is awesom!\"\n\n"); // \" prints double
                                                       // quotes inside strings.

  // --- PART 2: Constants ---
  printf("--- Constants ---\n");
  printf("Grade (using%%c): %c\n", grade);           // %c format a character
  printf("Age (using%%d): %d\n", age);               // %d format a integer
  printf("Percentage (using%%f): %f\n", percentage); // %f format a float

  // Custom width & precision formatting (`%a.bf` format from your notes):
  // `%8.2f` reserves 8 spaces of character width and restricts output to 2
  // decimal points.
  printf("Formatted Percentage (using %%8.2f): %8.2f\n", percentage);

  printf("Exact Value (using %%lf for double): %lf\n",
         exact_value); // %lf formats double precision values

  return 0;
}
