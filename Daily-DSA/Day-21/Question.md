### 🔹 **Day 21 DSA Challenge (C++)**

**Topic:** Two Pointers — Pair with Target Sum
**Difficulty:** 🟡 Medium

---

### 🧩 **Problem: Find a Pair with Given Sum (Sorted Array)**

You are given a **sorted array** of integers `arr[]` and an integer `target`.
Find **two numbers** such that they **add up to the target sum** and return their **indices (1-based)**.

If no such pair exists, return `{-1, -1}`.

---

### 🔸 **Example 1**

**Input:**
`arr = {2, 7, 11, 15}, target = 9`
**Output:**
`{1, 2}`
**Explanation:**
`arr[0] + arr[1] = 2 + 7 = 9`

---

### 🔸 **Example 2**

**Input:**
`arr = {1, 3, 4, 5, 7, 10, 11}, target = 9`
**Output:**
`{3, 4}`
**Explanation:**
`arr[2] + arr[3] = 4 + 5 = 9`

---

### ⚙️ **Hints:**

* Use **two pointers**, one starting from the beginning (`left`) and one from the end (`right`).
* Move the pointers based on the current sum.
* Time Complexity: `O(n)`
* Space Complexity: `O(1)`