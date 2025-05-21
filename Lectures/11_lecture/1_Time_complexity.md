# ⏱️ Time & Space Complexity 📦

Understanding time and space complexity is crucial for writing efficient code! Let's break it down topic-by-topic with examples and quick tips. 🚀

---

## 🧠 What is Time Complexity?

Time Complexity is a way to represent how the **runtime** of an algorithm increases with the size of the input 📈.

---

### 📊 Common Time Complexities:

| Notation | Name             | Example                            |
|----------|------------------|------------------------------------|
| O(1)     | Constant Time     | Accessing array element `arr[i]`  |
| O(log n) | Logarithmic       | Binary Search                      |
| O(n)     | Linear            | Loop through array                 |
| O(n log n)| Linearithmic     | Merge Sort, Quick Sort (avg case) |
| O(n²)    | Quadratic         | Bubble Sort, Nested Loops         |
| O(2ⁿ)    | Exponential       | Recursive Fibonacci               |
| O(n!)    | Factorial         | Permutations, Travelling Salesman|

---

### 📌 Types of Time Complexity:

- **Best Case** 🌞: Minimum time (e.g., first element match in search).
- **Average Case** 😐: Typical case (usually assumed in analysis).
- **Worst Case** 🌩️: Maximum time (e.g., last element match or no match).

---

### 🔄 Time Complexity of Loops:

- 🔁 `for (int i = 0; i < n; i++)` → O(n)
- 🔁 Nested: `for (i = 0; i < n; i++)` + `for (j = 0; j < n; j++)` → O(n²)
- 🔁 Halving loop: `for (i = n; i > 0; i /= 2)` → O(log n)

---

### 📦 Recursive Time Complexity:

Use **Recurrence Relations** and the **Master Theorem** 🧮.

Example:
```cpp
int fib(int n) {
  if (n <= 1) return n;
  return fib(n-1) + fib(n-2);
}
// Time: O(2^n)
```
---




