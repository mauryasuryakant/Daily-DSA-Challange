### By ChatGPT

### 🔹 **Day 13 DSA Question (C++)**

**Topic:** Arrays (Set, Sorting & Two Pointer Techniques)
**Difficulty:** 🟡 Easy → 🟠 Intermediate

---

#### 🧩 **Problem:** *Find the Intersection of Two Arrays*

**Question:**
Given two integer arrays, find all the **unique elements** that are **common** to both arrays.
Each element in the result must appear **only once**, even if it appears multiple times in the input arrays.

This problem strengthens your understanding of **array traversal**, **hashing**, and **two-pointer techniques**, and is often seen in interviews by companies like **Google**, **Adobe**, and **TCS**.

---

#### 🧠 **Example Input:**

```
arr1 = [1, 2, 2, 3, 4]
arr2 = [2, 2, 4, 6]
```

#### ✅ **Expected Output:**

```
Intersection: [2, 4]
```

---

#### 💡 **Hints:**

1. **Brute Force Approach:**
   Use nested loops to compare each element of `arr1` with `arr2` — simple but slow.

2. **Using Sets (Optimized):**

   * Store unique elements of one array in a `set<int>`.
   * Traverse the second array and check for existence in the set.

3. **Sorting + Two Pointer (Highly Optimized):**

   * Sort both arrays.
   * Use two indices to traverse both simultaneously and collect matches.

---

#### ⚙️ **Expected Complexity:**

| Approach    | Time Complexity | Space Complexity                  |
| ----------- | --------------- | --------------------------------- |
| Brute Force | O(n × m)        | O(1)                              |
| Set-based   | O(n + m)        | O(n + m)                          |
| Two Pointer | O(n + m)        | O(1) *(if arrays are pre-sorted)* |
