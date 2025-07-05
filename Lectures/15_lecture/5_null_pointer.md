### ✅ **NULL Pointer**

A **NULL Pointer** is a pointer that doesn’t point to any valid memory location. You can declare it like:

```cpp
cpp
Copy code
int* ptr = NULL;

```

Or:

```cpp
cpp
Copy code
int* ptr = 0;

```

- Null Pointer Mainly used in Linked List and Trees topics

The purpose of a NULL pointer is to show that this pointer is **intentionally empty** or **not yet assigned**.

Without assigning any value, a pointer may contain **garbage (random) values**, which is dangerous.

```cpp
cpp
Copy code
int* ptr; // uninitialized
cout << ptr; // garbage address

ptr = NULL;
cout << ptr; // prints 0 or 0x0

```

### ⚠️ Important:

You **cannot dereference a NULL pointer**, because it doesn’t point to any valid memory.

Trying to do so will cause a **segmentation fault error** (crash), as you’re trying to access memory you don’t own.

---

### 🔚 Summary

- `&a` gives the address of variable `a`
- `ptr` gives the value at the address stored in `ptr`
- `int**` is used to declare a pointer to a pointer
- `NULL` is used when a pointer should not point to any memory yet
- Dereferencing a NULL pointer causes **segmentation fault**