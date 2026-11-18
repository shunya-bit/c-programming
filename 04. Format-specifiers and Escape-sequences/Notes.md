# C Programming Notes: Format Specifiers, Constants & Escape Sequences

## 1. What is a Format Specifier?

* A **format specifier** is a way to tell the compiler what type of data is in a variable when taking input (`scanf`) or displaying output (`printf`) to the user.
* **Precision & Width Formatting Example:**
  ```c
  printf("This is a good boy %a.bf", var);
  ```
  * This prints `var` with **`b` decimal points** inside an **`a`-character space**.

### Common Format Specifiers (Board Notes)

| Number | Format Specifier | Data Type |
| :---: | :---: | :--- |
| **1** | `%c` | Character (`char`) |
| **2** | `%d` | Integer (`int`) |
| **3** | `%f` | Float (`float`) |
| **4** | `%l` / `%ld` | Long (`long`) |
| **5** | `%lf` | Double (`double`) |
| **6** | `%Lf` | Long Double (`long double`) |

---

## 2. Constants in C

* A **constant** is a value or variable that **cannot be changed** during program execution.
  * **Examples:** `15`, `23`, `'a'`, `3.4`, `"code with harry"`, etc.

### Two Ways to Define Constants in C
1. Using the **`const`** keyword (e.g., `const float PI = 3.14;`)
2. Using the **`#define`** preprocessor directive (e.g., `#define PI 3.14`)

---

## 3. Escape Sequences in C

* An **escape sequence** in the C programming language is a sequence of characters that does not represent itself when used inside a string literal or character constant.
* It is composed of two or more characters starting with a backslash (`\`).
  * **Example:** `\n` represents a **new line**.

### Escape Sequences List in C

| Escape Sequence | Meaning |
| :---: | :--- |
| `\a` | Alarm or Beep |
| `\b` | Backspace |
| `\f` | Form Feed |
| `\n` | New Line |
| `\r` | Carriage Return |
| `\t` | Tab (Horizontal) |
| `\v` | Vertical Tab |
| `\\` | Backslash |
| `\'` | Single Quote |
| `\"` | Double Quote |
| `\?` | Question Mark |
| `\nnn` | Octal number |
| `\xhh` | Hexadecimal number |
| `\0` | Null |