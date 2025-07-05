# Memory Address

A memory Address refers to the location where a variable is stored when we create it in C++ or in fact in any programming language.

For Example,
`int a = 5`
it takes a space in memory.That specific space in memory is unified address, and that is called memory address.

This Memory address is usually represented in Hexadecimal format, which is a base-16 number system.
- Decimal(base-10): digits from 0-9
- Binary (base-2): digits 0 and 1
- Hexadecimal (base-16): Digits 0-9 and letters A to F

So a hexadecimal number looks lke 0x36A6

### ✅ **How to Print Memory Address**

We can actually **print the memory address** of a variable using an operator called the **address-of operator** (`&`).

You might have already seen `&` used as a **bitwise AND** operator, or `&&` as a **logical AND**. But when we use a **single `&` before a variable**, it gives us the memory address of that variable.

Example:

```cpp
cpp
Copy code
int a = 10;
cout << &a;

```

This will print something like `0x3636` — the memory address of `a`. The actual value will differ every time, but the format will look similar.