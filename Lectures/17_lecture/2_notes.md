# 🔁 Binary Search in a Rotated Sorted Array

## 🧠 Problem Statement

Given an array that was originally sorted in **ascending order**, but then **rotated**, we need to **search for a target value**.

Example:

Original array: `[0, 1, 2, 3, 4, 5, 6, 7]`

Rotated array: `[4, 5, 6, 7, 0, 1, 2, 3]`

Task: Find index of `target` in this array.

---

## 🧊 Brute Force Approach: Linear Search

### ✅ Logic:

- Go element by element.
- Compare with target.
- Return index when found.

### 🧮 Time Complexity:

```
scss
Copy code
O(n)

```

### 🚫 Limitation:

Not optimized! Can be improved using binary search.

---

## ⚡ Optimized Approach: Binary Search

### 🧠 Insight:

We’re told the array was **originally sorted** — this **extra information** should be used.

In sorted arrays, always **think of Binary Search** because it gives:

```
css
Copy code
Time Complexity: O(log n)

```

---

## ❌ Why Normal Binary Search Fails Here?

In normal binary search:

- Compare target with `mid`.
- If `target < mid`: search in left half.
- If `target > mid`: search in right half.

But in **rotated arrays**, this rule fails because:

- The **right or left half might not be sorted**.

---

## 💡 Key Observation in Rotated Arrays

For any rotated sorted array:

> One half is always sorted (either left half or right half).
> 

### Example:

- Array: `[4, 5, 6, 7, 0, 1, 2]`
- Left half: `[4, 5, 6, 7]` → Sorted ✅
- Right half: `[0, 1, 2]` → Not sorted ❌

We can apply binary search **only on the sorted half**.

---

## 🪄 How to Identify Sorted Half?

If:

```cpp
cpp
Copy code
arr[start] <= arr[mid]

```

→ Left half is sorted ✅

Else:

→ Right half is sorted ✅

---

## 🔁 Modified Binary Search Algorithm

### 1️⃣ Check if `arr[mid] == target`:

- Return `mid` index.

### 2️⃣ If **left half is sorted** (`arr[start] <= arr[mid]`):

- Check if `target` lies in left half:

```cpp
cpp
Copy code
if (target >= arr[start] && target <= arr[mid])
    end = mid - 1;
else
    start = mid + 1;

```

### 3️⃣ If **right half is sorted**:

- Check if `target` lies in right half:

```cpp
cpp
Copy code
if (target >= arr[mid] && target <= arr[end])
    start = mid + 1;
else
    end = mid - 1;

```

---

## 🧩 Dry Run Example

Array: `[4, 5, 6, 7, 0, 1, 2]`, Target = `0`

Steps:

- `start = 0`, `end = 6`
- `mid = 3` → arr[mid] = 7
- Left half `[4, 5, 6, 7]` is sorted ✅
- Check if `0` lies between `4` and `7` ❌
    
    → Move to **right half**
    

Next:

- `start = 4`, `end = 6`
- `mid = 5` → arr[mid] = 1
- Left half `[0, 1]` is sorted ✅
- Check if `0` lies between `0` and `1` ✅
    
    → Answer found at index `4`
    

---

## 🔄 Summary Flow

```markdown
markdown
Copy code
While start <= end:
    mid = start + (end - start) / 2

    if arr[mid] == target:
        return mid

    if arr[start] <= arr[mid]:  # left half is sorted
        if target >= arr[start] and target <= arr[mid]:
            end = mid - 1
        else:
            start = mid + 1
    else:  # right half is sorted
        if target >= arr[mid] and target <= arr[end]:
            start = mid + 1
        else:
            end = mid - 1

```

---

## ✅ Final Notes

- Always use the **sorted half** to guide the binary search.
- Smartly discard the half where the target can’t exist.
- Works on distinct values (no duplicates).

### 🔍 **Pseudocode: Binary Search in Rotated Sorted Array**

**🔧 Initialization:**

```cpp
cpp
Copy code
start = 0
end = n - 1

```

**🔁 Loop:**

```cpp
cpp
Copy code
while (start <= end):
    mid = start + (end - start) / 2

```

**🎯 Check if target found:**

```cpp
cpp
Copy code
if (arr[mid] == target)
    return mid

```

**🧭 Decide which half is sorted:**

✔️ **Left half sorted:**

```cpp
cpp
Copy code
if (arr[start] <= arr[mid]):
    if (target >= arr[start] && target <= arr[mid])
        end = mid - 1
    else
        start = mid + 1

```

✔️ **Right half sorted:**

```cpp
cpp
Copy code
else:
    if (target >= arr[mid] && target <= arr[end])
        start = mid + 1
    else
        end = mid - 1

```

**⏹️ Loop ends when** `start > end`

---

### 📌 **Notes:**

- Modified binary search to handle **rotation**
- Works only with **distinct elements**
- **Time Complexity:** `O(log n)`

---

```cpp
	// 🔍 Function to search target in rotated sorted array
int searchInRotatedSortedArray(vector<int>& nums, int target) {
	// 🔧 Initialize start and end pointers
		  int start = 0;
		  int end = nums.size() - 1;
	
	// 🔁 Loop until search space is valid
			while (start <= end) {
		    // 🧠 Calculate mid without overflow
		    int mid = start + (end - start) / 2;
		
		    // ✅ If target found at mid, return index
		    if (nums[mid] == target) {
		        return mid;
		    }
		
		    // 🔎 Check if left half is sorted
		    if (nums[start] <= nums[mid]) {
		        // 🧭 Check if target lies in left half
		        if (target >= nums[start] && target <= nums[mid]) {
		            end = mid - 1;  // 🔄 Move left
		        } else {
		            start = mid + 1;  // 🔄 Move right
		        }
		    }
		    // 🔎 Otherwise, right half must be sorted
		    else {
		        // 🧭 Check if target lies in right half
		        if (target >= nums[mid] && target <= nums[end]) {
		            start = mid + 1;  // 🔄 Move right
		        } else {
		            end = mid - 1;  // 🔄 Move left
		        }
		    }
		    // ❌ If not found, return -1
				return -1;
	}
	
	// 🧪 Driver code
int main() {
			vector<int> nums = {4, 5, 6, 7, 0, 1, 2};  // 🔁 Rotated sorted array
			int target = 0;  // 🎯 Target to find
			
			// 🔍 Call search function
			int result = searchInRotatedSortedArray(nums, target);

			// 🖨️ Output result
			if (result != -1)
	    cout << "Target found at index: " << result << endl;
			else
	    cout << "Target not found." << endl;

			return 0;
			
}
```