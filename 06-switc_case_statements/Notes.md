# C Programming Notes: `switch-case` Statements

## 1. Overview & Syntax

A **`switch-case` statement** allows a variable or expression to be tested for equality against a list of values (called **cases**). It provides a cleaner alternative to long `if-else if` ladders when checking a single variable against multiple constant values.

### Syntax Example (Board Notes)

```c
int a = 2;

switch (a) {
    case 2:
        printf("Value is 2");
        break; // Exits the switch block immediately
    case 3:
        printf("Value is 3");
        break;
    default:
        printf("Nothing matched");
}
// Code continues outside switch...
```

---

## 2. Rules for `switch` Statement

1. **Expression Type:** The `switch` expression **must** evaluate to an **`int`** (integer) or **`char`** (character).
2. **Case Value Type:** Every `case` value **must** be an **integer** or a **character** constant.
3. **Placement:** Every `case` label **must** come inside the `switch` block (`{ ... }`).
4. **`break` is Optional:** Using `break` is not mandatory. However, if you omit `break`, execution will continue ("fall through") into the subsequent `case` blocks until a `break` or the end of the `switch` statement is reached.

---

## 3. Flowchart for `switch-case` Statements

```text
      ( Start )
          |
          v
   < Expression >
          |
          v
     < Case 1 > ---- Match ----> [ Statement 1 ] ----> [ break ] ----+
          |                                                          |
      Unmatched                                                      |
          |                                                          |
          v                                                          |
     < Case 2 > ---- Match ----> [ Statement 2 ] ----> [ break ] ----+
          |                                                          |
      Unmatched                                                      |
          |                                                          |
          v                                                          |
         ...                                                         |
          |                                                          |
          v                                                          |
     [ default ] ----------------------------------------------------+
                                                                     |
                                                                     v
                                                           [ Outside switch ]
```