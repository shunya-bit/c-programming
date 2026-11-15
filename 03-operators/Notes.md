# C Programming Notes: Operators

## What is an Operator?
* An operator is a symbol used to perform operations in a given programming language.
* In this section, we cover the different types of operators used in the C programming language.

---

## 1. Arithmetic Operators

| Operator | Description |
| :--- | :--- |
| `+` | Addition |
| `-` | Subtraction |
| `*` | Multiplication |
| `/` | Division |
| `%` | Modulus |

---

## 2. Logical Operators

| Operator | Description | Example |
| :--- | :--- | :--- |
| `&&` | **Logical AND operator:** If both the operands are non-zero, then the condition is true. | `(A && B)` is false. |
| `\|\|` | **Logical OR operator:** If any of these two operands is non-zero, then the condition becomes true. | `(A \|\| B)` is true. |
| `!` | **Logical NOT operator:** Used to reverse the logical state of its operand. If a condition is true, then the Logical NOT operator will make it false. | `!(A && B)` is true. |

---

## 3. Relational Operators

| Operator | Description |
| :--- | :--- |
| `==` | Is equal to |
| `!=` | Is not equal to |
| `>` | Greater than |
| `<` | Less than |
| `>=` | Greater than or equal to |
| `<=` | Less than or equal to |

---

## 4. Bitwise Operators

### Truth Table (`&`, `|`, `^`)

| `a` | `b` | `a & b` (AND) | `a \| b` (OR) | `a ^ b` (XOR) |
| :---: | :---: | :---: | :---: | :---: |
| `0` | `0` | `0` | `0` | `0` |
| `0` | `1` | `0` | `1` | `1` |
| `1` | `1` | `1` | `1` | `0` |
| `1` | `0` | `0` | `1` | `1` |

### Other Bitwise Operators
* `~` is the **binary one's complement operator**.
* `<<` is the **binary left shift operator**.
* `>>` is the **binary right shift operator**.

---

## 5. Assignment Operators

| Operator | Description |
| :--- | :--- |
| `=` | **Simple assignment operator:** Assigns values from right-side operands to the left-side operand. |
| `+=` | **Add AND assignment operator:** Adds the right operand to the left operand and assigns the result to the left operand. |
| `-=` | **Subtract AND assignment operator:** Subtracts the right operand from the left operand and assigns the result to the left operand. |
| `*=` | **Multiply AND assignment operator:** Multiplies the right operand with the left operand and assigns the result to the left operand. |
| `/=` | **Divide AND assignment operator:** Divides the left operand with the right operand and assigns the result to the left operand. |

---

## 6. Miscellaneous Operators

| Operator | Description | Example |
| :--- | :--- | :--- |
| `sizeof()` | Returns the size of a variable. | `sizeof(a)`, where `a` is an integer, will return `int`'s size on that architecture. |
| `&` | Returns the address of a variable. | `&a;` returns the actual address of the variable. |
| `*` | Pointer to a variable. | `*a;` |
| `?:` | Conditional Expression. | `If Condition is true ? then value X : otherwise value Y` |

---

## 7. Operator Precedence in C

> **Note on Associativity:** In programming languages, the **associativity** of an operator is a property that determines how operators of the same precedence are grouped in the absence of parentheses.

| Category | Operator | Associativity |
| :--- | :--- | :--- |
| **Postfix** | `() [] -> . ++ --` | Left to right |
| **Unary** | `+ - ! ~ ++ -- (type)* & sizeof` | Right to left |
| **Multiplicative** | `* / %` | Left to right |
| **Additive** | `+ -` | Left to right |
| **Shift** | `<< >>` | Left to right |
| **Relational** | `< <= > >=` | Left to right |
| **Equality** | `== !=` | Left to right |
| **Bitwise AND** | `&` | Left to right |
| **Bitwise XOR** | `^` | Left to right |
| **Bitwise OR** | `\|` | Left to right |
| **Logical AND** | `&&` | Left to right |
| **Logical OR** | `\|\|` | Left to right |
| **Conditional** | `?:` | Right to left |
| **Assignment** | `= += -= *= /= %= >>= <<= &= ^= \|=` | Right to left |
| **Comma** | `,` | Left to right |