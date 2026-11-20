# Exercise 02: Unit Converter in C

## Problem Statement

Write an interactive, menu-driven C program that converts units based on the user's choice. The program should repeatedly display a menu of conversion options until the user chooses to exit.

### Required Conversions

1. **Kilometers (kms) to Miles**
   $$1 \text{ km} = 0.621371 \text{ miles}$$

2. **Inches to Foot**
   $$1 \text{ foot} = 12 \text{ inches} \implies \text{foot} = \frac{\text{inches}}{12}$$

3. **Centimeters (cms) to Inches**
   $$1 \text{ inch} = 2.54 \text{ cm} \implies \text{inches} = \frac{\text{cms}}{2.54}$$

4. **Pounds to Kilograms (kgs)**
   $$1 \text{ pound} = 0.453592 \text{ kgs}$$

5. **Inches to Meters**
   $$1 \text{ inch} = 0.0254 \text{ meters}$$

---

## Program Requirements

* Display a clear menu allowing the user to select any of the 5 conversions or an option (e.g., `0` or `q`) to exit the program.
* Use a loop (`while` or `do-while`) so the user can perform multiple conversions in a single run without restarting the program.
* Use `switch-case` (or `if-else if`) to handle the selected conversion option.
* Use `float` or `double` data types to preserve decimal accuracy during calculations.
* *(Bonus)* Modularize your code by creating separate user-defined functions for each conversion.

---

## Sample Output

```text
=== Unit Conversion Menu ===
1. Kilometers (kms) to Miles
2. Inches to Foot
3. Centimeters (cms) to Inches
4. Pounds to Kilograms (kgs)
5. Inches to Meters
0. Exit
Enter your choice: 1
Enter the value to convert: 10
10.0000 kms = 6.2137 miles

=== Unit Conversion Menu ===
...
Enter your choice: 0
Exiting unit converter. Goodbye!
```