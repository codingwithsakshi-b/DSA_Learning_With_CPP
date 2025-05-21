# Space Complexity 🚀

## 🧠 Space Complexity Tips:

- Iterative > Recursive (no stack overhead) 💡
- In-place algorithms save space (e.g., two-pointer technique) 🧍‍♀️↔️🧍‍♂️

---

## 🧪 Time & Space Analysis Examples:

### ✅ Example 1: Linear Search
```
bool search(int arr[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) return true;
  }
  return false;
}
```
- Time: O(n)
- Space: O(1)

---

### ✅ Example 2: Merge Sort
```
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    int m = (l + r) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    merge(arr, l, m, r);
  }
}
```
- Time: O(n log n)
- Space: O(n) (extra temp arrays)

---

### 🧾 Master Theorem (for Recurrence)
For a recurrence of the form:  
**T(n) = aT(n/b) + f(n)**  
We compare **f(n)** with **n^log_b(a)** to determine the time complexity:

| 🔢 Case | 📋 Condition                                | ⏱️ Time Complexity            |
|--------|---------------------------------------------|-------------------------------|
| 1️⃣     | f(n) = O(n^c), where c < log_b(a)          | T(n) = Θ(n^log_b(a))          |
| 2️⃣     | f(n) = Θ(n^log_b(a))                        | T(n) = Θ(n^log_b(a) * log n)  |
| 3️⃣     | f(n) = Ω(n^c), where c > log_b(a) <br>+ Regularity Condition: a·f(n/b) ≤ k·f(n), for some k < 1 | T(n) = Θ(f(n))                |

---

### 🪄 Tips to Reduce Time & Space:
- ✅ Use Hash Maps for fast lookups (O(1))
- ✅ Use Sliding Window to avoid extra loops
- ✅ Choose Iterative over Recursive where possible
- ✅ Avoid unnecessary memory allocation

---

### 🧠 Practice Problems:
- 1.Find time complexity of nested loops 🧮
- 2.Analyze recursive functions using Master Theorem 📘
- 3.Optimize a brute-force algorithm 💡

---

### ✅ Summary:
- Time Complexity = "How long?" ⌛
- Space Complexity = "How much memory?" 🧠
- Optimize both for clean, efficient code! 💪