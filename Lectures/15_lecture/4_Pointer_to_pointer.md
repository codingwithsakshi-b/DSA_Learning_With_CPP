# ✅ **Pointer to Pointer**

You can even create a pointer that stores the **address of another pointer**. This is called a **pointer to pointer**, declared like:

```cpp
cpp
Copy code
int a = 10;
int* ptr = &a;
int** parentPtr = &ptr;

```

Now, here's what each variable holds:

- `a` holds the value `10`
- `ptr` holds the address of `a` (say 100)
- `parentPtr` holds the address of `ptr` (say 300)

## Dereferencing Levels:

- `parentPtr` → gives the value stored in `ptr` → which is the address of `a` → 100
- `*parentPtr` → goes one step further → gives the value at that address (of `a`) → 10

So:

```cpp
cpp
Copy code
cout << *parentPtr;   // prints 100
cout << **parentPtr;  // prints 10

```

Both `*parentPtr` and `ptr` give the same value (100), and `**parentPtr` and `*ptr` both give 10.