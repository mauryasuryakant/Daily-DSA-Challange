🔹 **Day 24 DSA Challenge (C++)**

**Topic:** Sliding Window — Maximum Sum Subarray of Size K
**Difficulty:** 🔵 Easy

---

🧩 **Problem:** Find Maximum Sum Subarray of Size K

You are given an integer array `arr[]` of size `N` and an integer `K`.
Your task is to find the **maximum sum of any contiguous subarray of size K**.

---

### **Example:**

**Input:**

```
N = 6, K = 3  
arr = [2, 1, 5, 1, 3, 2]
```

**Output:**

```
9
```

**Explanation:**
The subarray `[5, 1, 3]` has the maximum sum = 9.

---

### **Constraints:**

```
1 <= N <= 10^5  
1 <= arr[i] <= 10^4  
1 <= K <= N
```

---

### **Your Task:**

Implement a function `maxSumSubarray(arr, N, K)` that returns the maximum sum among all subarrays of size `K`.