# Binary Search 🔍🔍

Created: July 5, 2025 9:21 PM

### ✅ **Introduction**

Hi everyone, and welcome to the Complete DSA Series!

In today’s session, we will be learning about the **Binary Search Algorithm**.

If you're interested in learning other DSA concepts, you can find them in this playlist on the same channel.

---

### ✅ **What Will Be Covered**

In this lecture, we will cover the following:

- Real-life usage of Binary Search
- Programming approach to Binary Search
- Writing the **iterative code** using loops
- Optimizing the Binary Search algorithm
- Understanding the **time complexity**
- Writing the **recursive version** of Binary Search for students familiar with recursion

---

### ✅ **Binary Search in Real Life**

Let’s understand Binary Search using a real-world example — **searching a word in a dictionary**.

When we search for a word in a dictionary:

- We don’t go **page by page**.
- Instead, we open a **random page**, and based on the word there, we decide whether to search **before** or **after** that page.

📝 **Example**:

Suppose we want to search for the word **“dog”**, and we randomly open a page with words starting with **P**:

- Since **D** comes before **P**, we ignore everything **after P**.
- We then look in the **first half** of the dictionary.
- This process continues until we find the word.

📌 This is exactly how **Binary Search** works — we reduce the search space by half each time!

Even though we don’t realize it, we’re **applying Binary Search** in such cases.

---

### ✅ **Binary Search vs Linear Search**

Before learning Binary Search, we’ve already studied **Linear Search**.

- Linear Search checks every element one by one.
- Binary Search is more efficient — it only works on **sorted data** and keeps dividing the search space in half.
- Time Complexity: Binary Search(O(logn)) Linear Search(O(n))

### ✅ **Binary Search Approach**

Our task:

🔍 **Search a target value in a sorted array**.

- If found → return the **index**
- If not found → return **`1`**

---

### ✅ **Binary Search Visualization**

Let’s say we have a sorted array and a **target = 12**.

Instead of checking each element like **Linear Search**, we follow a smarter approach:

---

### ✅ **Step 1: Find the Middle**

To begin:

```cpp
cpp
Copy code
int start = 0;
int end = n - 1;
int mid = (start + end) / 2;

```

📌 This formula finds the **middle index** between `start` and `end`.

---

### ✅ **Step 2: Compare Middle with Target**

Now compare `arr[mid]` with the `target`:

### 👉 Case 1: `target > arr[mid]`

- Go to the **second half**
- Update `start = mid + 1`

### 👉 Case 2: `target < arr[mid]`

- Go to the **first half**
- Update `end = mid - 1`

### 👉 Case 3: `target == arr[mid]`

- Found the answer!
- Return `mid` as the result

---

### ✅ **How the Array Gets Halved**

Every time we narrow the search space:

- Original array → `[5, 9, 12]`
- 1st Mid = `9`
- `target (12)` is greater → go right → `[12]`
- 2nd Mid = `12` → Match found ✅

🎯 **Only 3 comparisons needed!**

Compared to **7 comparisons** in Linear Search — a big improvement!

---

### ✅ **Updating Search Space**

To shift between halves:

- First half → `start to mid - 1`
- Second half → `mid + 1 to end`

So:

```cpp
cpp
Copy code
if (target > arr[mid])
    start = mid + 1;
else if (target < arr[mid])
    end = mid - 1;
else
    return mid;

```

---

### ✅ **Loop Condition**

We continue the loop **as long as**:

```cpp
cpp
Copy code
while (start <= end)

```

Because:

- Initially, `start = 0`, `end = n - 1`
- The search space keeps shrinking
- Eventually, `start` may become greater than `end`

---

### ✅ **Final Return Statement**

If loop ends and `target` wasn’t found:

```cpp
cpp
Copy code
return -1; // Target doesn’t exist

```

---

### ✅ **Full Binary Search Algorithm Steps**

1. Set `start = 0`, `end = n - 1`
2. Loop while `start <= end`
3. Find `mid = (start + end) / 2`
4. Compare:
    - If `target == arr[mid]` → return `mid`
    - If `target > arr[mid]` → `start = mid + 1`
    - If `target < arr[mid]` → `end = mid - 1`
5. If not found → return `1`

### ✅ **Iterative Binary Search Code**

Let’s write a **function** to implement Binary Search using a **loop** (iterative method).

This function will take:

- A sorted array (vector of integers)
- A target value to search

---

### ✅ **C++ Function**

```cpp
cpp
Copy code
int binarySearch(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (target > arr[mid]) {
            // Search in the right half
            start = mid + 1;
        } else if (target < arr[mid]) {
            // Search in the left half
            end = mid - 1;
        } else {
            // Target found!
            return mid;
        }
    }

    // If not found, return -1
    return -1;
}

```

---

### 🧠 **Why `start <= end` and not just `<`?**

Because in the **last possible comparison**, `start` and `end` can become **equal**, like we saw in the case of target `12`.

We still need to compare that **one last element** before stopping.

---

### ✅ **Example Testing**

```cpp
cpp
Copy code
int main() {
    vector<int> arr1 = {2, 4, 6, 8, 10, 11, 12};
    int target1 = 12;
    cout << binarySearch(arr1, target1) << endl; // Output: 6

    int target2 = 4;
    cout << binarySearch(arr1, target2) << endl; // Output: 1

    int target3 = 40;
    cout << binarySearch(arr1, target3) << endl; // Output: -1
}

```

---

### ✅ **Dry Run Example**

Let’s dry-run with:

```cpp
cpp
Copy code
arr = {2, 4, 6, 8, 10, 11, 12}
target = 12

```

- `start = 0`, `end = 6`, `mid = 3` → arr[3] = 8 → 12 > 8 → search right
- `start = 4`, `end = 6`, `mid = 5` → arr[5] = 11 → 12 > 11 → search right
- `start = 6`, `end = 6`, `mid = 6` → arr[6] = 12 → match ✅ return 6

🎯 Only 3 comparisons needed instead of 7 in Linear Search!

### 🔁 **Dry Run – Binary Search on Even-Sized Array**

### 🎯 Given Array:

```
ini
Copy code
arr = { -1, 0, 3, 5, 9, 12 }
Target = 0
Indexes =  0   1   2   3   4   5
Size = 6 (Even)

```

---

### 📍 Step-by-step Execution:

### 🔹 **Initial Values**

- `start = 0`
- `end = 5` → (n - 1)
- `mid = (0 + 5) / 2 = 2`

👉 `arr[mid] = 3`

👉 Target `0` is **less than** `3`, so search **left half**

---

### 🔹 **Update**

- `end = mid - 1 = 1`
- `start = 0` (unchanged)
- New `mid = (0 + 1) / 2 = 0`

👉 `arr[mid] = -1`

👉 Target `0` is **greater than** `-1`, so search **right half**

---

### 🔹 **Update**

- `start = mid + 1 = 1`
- `end = 1`
- New `mid = (1 + 1) / 2 = 1`

👉 `arr[mid] = 0`

✅ Target found at index `1`

---

### 🎯 **Output**

```cpp
cpp
Copy code
binarySearch(arr, 0) → returns 1

```

---

### 🔍 Another Test Case

### 🎯 Target = 10 (Not in array)

**Process**:

1. `mid = 2` → `arr[2] = 3` → 10 > 3 → go right
2. `mid = 4` → `arr[4] = 9` → 10 > 9 → go right
3. `mid = 5` → `arr[5] = 12` → 10 < 12 → go left
4. Now `start = 6` and `end = 4` → Invalid

🚫 Target not found

✅ **Returns `-1`**

---

### 🕒 Time Complexity

- **Best Case:** O(1) → target is at mid in first go
- **Worst Case:** O(log₂n) → search space reduces by half each time
- **Space Complexity:** O(1) in iterative approach

## ⚙️ Optimization in Binary Search

### ❓ Problem in Default Mid Formula

By default, we calculate `mid` like this:

```cpp
cpp
Copy code
mid = (start + end) / 2;

```

🔺 **Issue: Integer Overflow**

If `start` and `end` both are very large integers (like near `INT_MAX`), then:

```cpp
cpp
Copy code
start + end ➝ might exceed INT_MAX

```

This leads to:

- **Overflow**
- **Wrong mid value**
- ❌ Incorrect Binary Search results on large datasets

---

### ✅ Optimized Mid Formula

To prevent overflow, use this formula:

```cpp
cpp
Copy code
mid = start + (end - start) / 2;

```

### 🔍 Why This Works?

Let's simplify:

```
sql
Copy code
start + (end - start) / 2
= (2*start + end - start) / 2
= (start + end) / 2

```

🔹 *Same value mathematically*

🔹 *Avoids adding two large numbers directly*

---

### 🧠 When to Use?

✅ Always use optimized formula in:

- Competitive programming
- Large arrays
- Production-level code

---

### ✅ Final Code Snippet (Iterative Binary Search)

```cpp
cpp
Copy code
int binarySearch(vector<int>& arr, int target) {
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;  // ✅ Optimized

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            start = mid + 1;  // Search in right half
        } else {
            end = mid - 1;    // Search in left half
        }
    }

    return -1;  // Target not found
}

```

# 📊 Time Complexity of Binary Search

## 🔍 Linear Search vs Binary Search

Let’s suppose we have an array of size `n = 10`.

### Linear Search:

- In worst case, we may have to check **every element**.
- So total operations = **n = 10**
- Time Complexity = **O(n)**

### Binary Search:

- Step 1: Find mid → 1 operation
- Step 2: Decide whether to search in left or right half
- Step 3: Repeat the process on reduced search space (half of the array)

In each step, the array size becomes **half** of the previous one:

- First → 10
- Then → 5
- Then → 2
- Then → 1
    
    So, max 4 operations for size 10 (compared to 10 in linear search).
    

---

## 📉 How it reduces?

Each time:

```
text
Copy code
n → n/2 → n/4 → n/8 → ... → 1

```

Let’s say it takes `k` steps to reduce size `n` to 1:

```
ini
Copy code
1 = n / 2^k

```

Now solve for `k`:

```
ruby
Copy code
=> n = 2^k
=> log₂(n) = k

```

So,

### ✅ Time Complexity = **O(log n)**

(Base of log doesn’t matter in Big-O notation.)

---

## 🧠 Why it is Optimized?

- Instead of checking every element (like linear search), we **divide the array** in half each time.
- This makes **binary search much faster** for large arrays.

---

## 🧮 Space Complexity:

- Iterative binary search takes **O(1)** space.
- Recursive binary search takes **O(log n)** space (due to recursion stack).

---

## ✅ Summary

| Search Type | Time Complexity | Space Complexity |
| --- | --- | --- |
| Linear Search | O(n) | O(1) |
| Binary Search | O(log n) | O(1) or O(log n) (recursive) |

## 📌 What is Recursive Binary Search?

Binary Search ka **recursive version** wahi kaam karta hai jo iterative karta hai — bas yeh **recursion** (function calling itself) ke through hota hai.

> Use only if you're comfortable with recursion.
> 

---

## 🧠 Key Concept

- Array should be **sorted**
- Har recursive call mein:
    - `mid` calculate hota hai
    - Target value `mid` se compare hoti hai
    - Phir **left ya right half** mein search hoti hai
- **Base condition** hoti hai: `start > end`, i.e. element not found

---

## 📦 Function Signature

```cpp
cpp
Copy code
int binarySearchRecursive(vector<int>& arr, int target, int start, int end)

```

---

## 🪜 Steps:

1. **Base Case**:
    
    If `start > end` → return `-1` (element not found)
    
2. **Mid Calculate**:
    
    ```cpp
    cpp
    Copy code
    int mid = start + (end - start) / 2;
    
    ```
    
3. **3 Conditions**:
    - ✅ If `arr[mid] == target` → return `mid`
    - 🔽 If `target < arr[mid]` → search in **left half**
        
        Call: `binarySearchRecursive(arr, target, start, mid - 1)`
        
    - 🔼 If `target > arr[mid]` → search in **right half**
        
        Call: `binarySearchRecursive(arr, target, mid + 1, end)`
        

---

## 🧑‍💻 Code (Recursive Binary Search in C++)

```cpp
cpp
Copy code
int binarySearchRecursive(vector<int>& arr, int target, int start, int end) {
    if (start > end)
        return -1;

    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
        return mid;
    else if (target < arr[mid])
        return binarySearchRecursive(arr, target, start, mid - 1);
    else
        return binarySearchRecursive(arr, target, mid + 1, end);
}

```

---

## 🕒 Time & Space Complexity

| Complexity | Value |
| --- | --- |
| ⏱️ Time | `O(log n)` |
| 🧠 Space | `O(log n)` (due to recursion stack) |

> Iterative approach ka space complexity O(1) hota hai — isiliye iterative approach is more memory-efficient.
> 

---

## ✅ Example Dry Run

Array: `[2, 4, 6, 10, 13, 18]`

Target: `10`

```
text
Copy code
start = 0, end = 5
mid = (0+5)/2 = 2   → arr[2] = 6
target > arr[mid]  → Search in right half

start = 3, end = 5
mid = (3+5)/2 = 4   → arr[4] = 13
target < arr[mid]  → Search in left half

start = 3, end = 3
mid = 3             → arr[3] = 10 → 🎯 Match!

```

Final return = index `3`

---

## 💡 Tips

- Always use `mid = start + (end - start) / 2` to avoid **overflow**
- Recursion mein `stack` memory lagti hai, so zyada deep recursions avoid karo
- **Iterative binary search** preferred in interviews (for space)

---

## 📝 Practice Advice

- Do a **dry run** of recursive and iterative code on paper
- Try with both **even-sized** and **odd-sized** arrays
- Practice enough so that **binary search becomes like writing a loop**