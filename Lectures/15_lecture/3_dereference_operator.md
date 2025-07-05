# ✅ **Dereference Operator**

Another important operator in pointers is the **Dereference Operator**, represented by the asterisk `*`.

You've already used `*` for multiplication, but in the context of pointers, `*` is used for **dereferencing** — which means accessing the **value stored at a memory address**.

> Think of &a as “get the address of a”
> 
> 
> And `*(&a)` as “go to that address and get the value stored there”
> 

### Example:

If we have:

```cpp
cpp
Copy code
int a = 10;
int* ptr = &a;

```

Then,

```cpp
cpp
Copy code
cout << *ptr;

```

This will print `10`, because `ptr` stores the address of `a`, and dereferencing it gives us the value stored at that address.

Similarly,

```cpp
cpp
Copy code
cout << *(&a);

```

will also give `10`.