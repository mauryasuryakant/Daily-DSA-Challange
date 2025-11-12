🔹 **Day 23 DSA Challenge (C++)**

**Topic:** Sliding Window — Longest Subarray with Sum ≤ K
**Difficulty:** 🟡 Medium

---

🧩 **Problem:** Find the Longest Subarray with Sum ≤ K

You are given an integer array `arr[]` and an integer `K`.
Your task is to find the **length of the longest subarray** whose sum is **less than or equal to K**.

If no such subarray exists, return `0`.

---

🔸 **Example 1**

**Input:**

```
arr = {2, 5, 1, 7, 10}  
K = 14
```

**Output:**

```
3
```

**Explanation:**
Subarray `{2, 5, 1}` has sum = 8 ≤ 14,
Subarray `{5, 1, 7}` has sum = 13 ≤ 14,
The longest valid length is **3**.

---

🔸 **Example 2**

**Input:**

```
arr = {4, 3, 2, 6}  
K = 5
```

**Output:**

```
2
```

**Explanation:**
Subarray `{3, 2}` has sum = 5 ≤ 5, which is the longest possible.

---

⚙️ **Hints:**

* Use **two pointers** (start, end) to represent a sliding window.
* Maintain a **current_sum** of elements inside the window.
* When `current_sum > K`, shrink the window from the left until it becomes ≤ K.

**Time Complexity:** O(n)
**Space Complexity:** O(1)
