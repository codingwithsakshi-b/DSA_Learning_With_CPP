# 🔁 Search in Rotated Sorted Array – Summary

## 🧠 Problem Statement

Given an **ascending sorted array** that has been **rotated**, find the **index of a target element**.

**Example:**

```
txt

Original: [0, 1, 2, 3, 4, 5, 6, 7]
Rotated:  [4, 5, 6, 7, 0, 1, 2, 3]
Target:   0 → Output: 4

```

---

## 🐌 Brute Force (Linear Search)

- Traverse element by element and compare with target.
- **Time Complexity:** `O(n)`
- ❌ Not optimal.

---

## ⚡ Optimized: Binary Search (Modified)

### 🤔 Why not normal binary search?

In rotated arrays, **one half is always sorted**, but we don’t know which.

---

## 🔍 Key Idea

At every step:

- Either **left half is sorted**: `arr[start] <= arr[mid]`
- Or **right half is sorted**: otherwise

### 🔧 Use this to decide:

If target lies in the **sorted half**, search there.

Else, go to the other half.

---

## 🛠️ Modified Binary Search Logic

```cpp

while (start <= end):
    mid = start + (end - start) / 2

    if arr[mid] == target:
        return mid

    if arr[start] <= arr[mid]:  // Left half sorted
        if target in [arr[start], arr[mid]]:
            end = mid - 1
        else:
            start = mid + 1
    else:  // Right half sorted
        if target in [arr[mid], arr[end]]:
            start = mid + 1
        else:
            end = mid - 1

```

---

## 🧪 Dry Run

Array = `[4, 5, 6, 7, 0, 1, 2]`, Target = `0`

1. mid = 3 → 7 → Left sorted → target not in it → go right
2. mid = 5 → 1 → Left sorted → target in it → found at index `4`

---

## ✅ Final Notes

- Use **sorted half** for decisions.
- Only works with **distinct values**.
- **Time Complexity:** `O(log n)`

---

## 🧾 Final Code Snippet

```cpp
int searchInRotatedSortedArray(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) return mid;

        if (nums[start] <= nums[mid]) {
            if (target >= nums[start] && target <= nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        } else {
            if (target >= nums[mid] && target <= nums[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }

    return -1;
}
```