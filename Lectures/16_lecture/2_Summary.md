# BINARY SEARCH SUMMARY NOTES

---

### ✅ **What is Binary Search?**

Binary Search ek efficient searching algorithm hai jo sirf **sorted arrays** pe kaam karta hai.

---

### 🧠 **Key Idea:**

Har step pe hum array ka **middle element** check karte hain:

- Agar target `mid` se bada hai → right half me search karo
- Agar chhota hai → left half me search karo
- Agar equal hai → 🎯 Target mil gaya!

---

### 📘 **Real-Life Example: Dictionary**

Jaise dictionary me kisi word ko dhoondhne ke liye hum randomly page kholte hain aur decide karte hain left me jaana hai ya right — **same logic** Binary Search ka bhi hota hai!

---

### ⚔️ **Linear vs Binary Search**

| Type | Time Complexity | Works On |
| --- | --- | --- |
| Linear Search | O(n) | Any data |
| Binary Search | O(log n) | Sorted only ✅ |

---

### 🧩 **Binary Search Steps (Iterative)**

1. `start = 0`, `end = n - 1`
2. Loop till `start <= end`
3. Find `mid = start + (end - start) / 2` ✅ *(optimized version)*
4. Check:
    - `arr[mid] == target` → return mid
    - `arr[mid] < target` → search right: `start = mid + 1`
    - `arr[mid] > target` → search left: `end = mid - 1`
5. If not found → return `1`

---

### 💻 **Code (Iterative Version)**

```cpp
cpp
Copy code
int binarySearch(vector<int>& arr, int target) {
    int start = 0, end = arr.size() - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2; // Prevents overflow
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}

```

---

### 🧪 **Dry Run Example**

Array: `[2, 4, 6, 8, 10, 11, 12]`

Target: `12`

Steps:

- Mid = 8 → go right
- Mid = 11 → go right
- Mid = 12 → ✅ Found at index 6

Only **3 comparisons** vs 7 in linear search!

---

### 🧠 **Optimized Mid Formula**

```cpp
cpp
Copy code
int mid = start + (end - start) / 2;

```

✅ Prevents **integer overflow**

---

### 🔁 **Recursive Binary Search**

Function calls itself to search in subarrays.

### 📦 **Signature:**

```cpp
cpp
Copy code
int binarySearchRecursive(vector<int>& arr, int target, int start, int end)

```

### 🧪 Steps:

- **Base Case** → if `start > end` → return `1`
- Calculate `mid`
- Compare with `target`
    - target == arr[mid] → return mid
    - target < arr[mid] → search left
    - target > arr[mid] → search right

---

### 💻 **Code (Recursive Version)**

```cpp
cpp
Copy code
int binarySearchRecursive(vector<int>& arr, int target, int start, int end) {
    if (start > end) return -1;
    int mid = start + (end - start) / 2;
    if (arr[mid] == target) return mid;
    else if (target < arr[mid]) return binarySearchRecursive(arr, target, start, mid - 1);
    else return binarySearchRecursive(arr, target, mid + 1, end);
}

```

---

### 📊 **Complexities**

| Approach | Time | Space |
| --- | --- | --- |
| Iterative | O(log n) | O(1) ✅ |
| Recursive | O(log n) | O(log n) ❗ |

---

### 🧠 **Tips to Remember**

- Binary Search = Only for **sorted data**
- Use optimized mid formula
- Iterative is **more space-efficient**
- Dry run both versions on paper
- Practice till it becomes as easy as loops!