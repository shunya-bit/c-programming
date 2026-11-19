# C Programming Notes: Typecasting in C

## 1. What is Typecasting?
* **Typecasting** (or type conversion) is the process of converting a variable or expression from one data type to another (e.g., converting an `int` to a `float`, or a `char` to an `int`).
* It ensures that operations involving different data types produce accurate, expected results without unintended data loss.

---

## 2. Types of Typecasting in C

There are two types of typecasting in C:
1. **Implicit Typecasting** (Automatic Type Conversion)
2. **Explicit Typecasting** (Manual Type Conversion)

---

### A. Implicit Typecasting (Automatic)
* Performed **automatically by the C compiler** without any programmer intervention.
* Happens when an expression contains variables of different data types.
* **Type Promotion Rule:** The compiler automatically converts the smaller/lower data type into the larger/higher data type to prevent data loss.

#### Data Type Hierarchy (Lower $\rightarrow$ Higher)
$$\text{char} \rightarrow \text{short int} \rightarrow \text{int} \rightarrow \text{unsigned int} \rightarrow \text{long} \rightarrow \text{float} \rightarrow \text{double} \rightarrow \text{long double}$$

#### Example of Implicit Typecasting
```c
int a = 5;
float b = 2.5;
float result = a + b; // 'a' is automatically promoted to float (5.0) before addition
// result = 7.5
```

---

### B. Explicit Typecasting (Manual)
* Performed **manually by the programmer** using the **cast operator** `(data_type)`.
* Used when you want to force a specific conversion—especially when converting a higher data type to a lower data type (which may cause truncation/data loss) or when forcing floating-point division between two integers.

#### Syntax
```c
(target_data_type) expression;
```

#### Example of Explicit Typecasting
```c
int a = 5, b = 2;

// Without typecasting (Integer division truncates the decimal)
float wrong_div = a / b;          // Result: 2.000000

// With explicit typecasting
float right_div = (float)a / b;   // 'a' becomes 5.0, so 5.0 / 2 = 2.500000
```

---

## 3. Common Pitfalls & Best Practices

| Scenario | Behavior | Example |
| :--- | :--- | :--- |
| **Integer Division** | Dividing two `int` values always discards the fractional part before assignment. | `float x = 5 / 2;` $\rightarrow$ `2.0` |
| **Proper Float Division** | Cast at least one operand to `float` or `double` *before* dividing. | `float x = (float)5 / 2;` $\rightarrow$ `2.5` |
| **Narrowing Conversion** | Casting a `float`/`double` to an `int` truncates (cuts off) the decimal part—it does **not** round. | `(int)3.99` $\rightarrow$ `3` |
| **Character to ASCII** | Casting a `char` to an `int` reveals its underlying ASCII integer value. | `(int)'A'` $\rightarrow$ `65` |