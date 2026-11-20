# C Programming Notes: Arrays in C

## 1. What is an Array?

* An **array** is a collection of data items of the **same data type** (for example, an array of size `100` holds `100` elements of that type).
* Elements are stored at **contiguous (adjacent) memory locations**.
* Arrays can also store collections of derived data types, such as **pointers** and **structures**.
* **Dimensions:**
  * A **one-dimensional (1D) array** is like a list (sometimes called a *vector*).
  * A **two-dimensional (2D) array** is like a table or grid (sometimes called a *matrix*).
  * The C language places **no fixed limit** on the number of dimensions an array can have.

---

## 2. Why Do We Need Arrays?

* Code using arrays is much cleaner, more organized, and easier to read than managing dozens of individual variables.
* **Example:** Storing test marks for `56` students using `56` separate variables (`mark1`, `mark2`, ..., `mark56`) would make a program cluttered and messy.
* With an array of integers, you can store consecutive marks in a single structure where the index naturally aligns with a student's roll number.

---

## 3. Advantages of Arrays

1. **Single Name for Multiple Items:** Represents multiple values of the same data type under one variable name.
2. **Fast Access:** Accessing any element by index is very fast because memory addresses are calculated directly using arithmetic.
3. **Matrix Representation:** Two-dimensional arrays make mathematical applications involving tables and matrices straightforward.

---

## 4. Properties of Arrays

* **Contiguous Memory:** All elements sit side-by-side in memory without gaps.
* **Uniform Element Size:** Every element in a given array has the exact same size in bytes (determined by the array's data type).
* **Direct Address Calculation:** Any element at a given `index` can be accessed very quickly using the **base address** and the **index**:

$$
\text{Address}(\text{index}) = \text{Base Address} + (\text{index} \times \text{sizeof}(\text{element}))
$$

---

## 5. Syntax for Declaring and Initializing an Array

* **1D Declaration:**

  ```c
  data_type name[size];
  ```

* **1D Declaration with Initialization:** *(Size can be omitted when initialized directly)*

  ```c
  data_type name[size] = {x, y, z, ...};
  data_type name[] = {x, y, z, ...};
  ```

* **2D Declaration:**

  ```c
  data_type name[rows][columns];
  ```

* **Element-by-Element Initialization (using index):**

  ```c
  name[0] = 0;
  ```

---

## 6. Disadvantages of Using Arrays

* **Poor time complexity of insertion and deletion operations:** Inserting or removing elements (especially in the middle or at the beginning) often requires shifting surrounding elements in memory.
* **Wastage of memory:** Because array sizes are fixed, allocating a large array when only a few elements are used wastes memory.
* **Contiguous memory requirement:** Even if enough total free memory exists, if there is no single **contiguous** block large enough, initializing the array will fail.
* **Fixed size after declaration:** Once an array is declared with a given size, it is not possible to directly expand that size later.