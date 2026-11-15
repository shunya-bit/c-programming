# C Programming Notes: Variables & Data Types

## What is a Variable?
* A name given to a memory location.
* **Declaration:** `type variable_name;`
* **Declaration & Initialization:** `type variable_name = value;`

---

## Rules for Defining a Variable in C
* Can contain alphabets (`a-z`, `A-Z`), digits (`0-9`), and underscores (`_`).
* A variable name can start with an alphabet or an underscore only.
* **Cannot** start with a digit.
* **No** whitespace or reserved keywords are allowed.
* **Valid variable names:** `int raj;`, `float raj123;`, `char _raj32;`
* **Invalid variable names:** `$harry`, `int 77raj;`, `char long;`

---

## Data Types in C
1. **Basic Data Types:** `int`, `char`, `float`, `double`
2. **Derived Data Types:** Array, Pointer, Structure, Union
3. **Enumeration Data Type:** `enum`
4. **Void Data Type:** `void`

---

## Data Types: Size & Range (32-Bit Architecture)

| Data Type | Memory Size | Range |
| :--- | :--- | :--- |
| `char` | 1 byte (8 bits) | $-128$ to $127$ |
| `signed char` | 1 byte | $-128$ to $127$ |
| `unsigned char` | 1 byte | $0$ to $255$ |
| `short` | 2 bytes | $-32,768$ to $32,767$ |
| `signed short` | 2 bytes | $-32,768$ to $32,767$ |
| `unsigned short` | 2 bytes | $0$ to $65,535$ |
| `int` | 2 bytes | $-32,768$ to $32,767$ |
| `signed int` | 2 bytes | $-32,768$ to $32,767$ |
| `unsigned int` | 2 bytes | $0$ to $65,535$ |
| `short int` | 2 bytes | $-32,768$ to $32,767$ |
| `signed short int` | 2 bytes | $-32,768$ to $32,767$ |
| `unsigned short int` | 2 bytes | $0$ to $65,535$ |
| `long int` | 4 bytes | $-2,147,483,648$ to $2,147,483,647$ |
| `signed long int` | 4 bytes | $-2,147,483,648$ to $2,147,483,647$ |
| `unsigned long int` | 4 bytes | $0$ to $4,294,967,295$ |
| `float` | 4 bytes | *Single-precision floating-point* |
| `double` | 8 bytes | *Double-precision floating-point* |
| `long double` | 10 bytes | *Extended-precision floating-point* |

---

## Extra Board Notes & Memory Units

* **Character Initialization Example:**
  ```c
  char c = 'c';
  ```
  *(Allocates $1\text{ byte} = 8\text{ bits}$ in RAM)*

* **Memory Conversion Breakdown (4 GB RAM Example):**
  * $1\text{ Byte} = 8\text{ bits}$
  * $4\text{ GB} = 4 \times 1024\text{ MB}$
  * $4\text{ GB} = 4 \times 1024 \times 1024\text{ KB}$
  * $4\text{ GB} = 4 \times 1024 \times 1024 \times 1024\text{ Bytes}$
  * $4\text{ GB} = (4 \times 1024 \times 1024 \times 1024) \times 8\text{ bits}$