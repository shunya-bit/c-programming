# C Programming Notes: `if-else` Control Statements

## 1. Overview
* **`if-else` statements** are **control statements** in C.
* They are used to perform different operations and make decisions based on specific conditions.

---

## 2. Types of `if` Statements
1. **`if` statement**
2. **`if-else` statement**
3. **`if-else if` ladder**
4. **Nested `if`**

---

## 3. Syntax & Execution Flow

### A. Simple `if` Statement
Executes a block of code only if the specified condition evaluates to **true**.

#### Syntax Example
```c
if (3 > 2) { // Condition is true
    printf("This will execute");
}
```

#### Flowchart Logic
```
       ( Start )
           |
           v
    <  Condition  > ---- False ----+
           |                       |
          True                     |
           |                       |
           v                       |
  [ Execute if code ]              |
           |                       |
           v                       |
   [ After if code ] <-------------+
```

---

### B. `if-else` Statement
Executes one block of code if the condition is **true**, and an alternative block if the condition is **false**.

#### Syntax
```c
if (condition) {
    // Execute if code
} else {
    // Execute else code
}
```

#### Flowchart Logic
```
           ( Start )
               |
               v
        <  Condition  > ---- False ----> [ Execute else code ]
               |                                   |
              True                                 |
               |                                   |
               v                                   |
      [ Execute if code ]                          |
               |                                   |
               v                                   |
        [ Code After ] <---------------------------+
```

---

### C. `if-else if` Ladder
Evaluates multiple conditions sequentially from top to bottom. As soon as one condition evaluates to **true**, its corresponding block executes and the rest of the ladder is bypassed. If none are true, the final `else` block executes.

#### Syntax
```c
if (condition1) {
    // Statement 1
} else if (condition2) {
    // Statement 2
} else {
    // Statement n
}
```

#### Flowchart Logic
```
   ( Start )
       |
       v
< if (Condition 1) > --- False ---> < else if (Cond. 2) > --- False ---> ... --- False ---> < else >
       |                                     |                                                |
      True                                  True                                              |
       |                                     |                                                v
 [ Statement 1 ]                       [ Statement 2 ]                                 [ Statement n ]
       |                                     |                                                |
       +-----------------> [ After if code ] <------------------------------------------------+
```