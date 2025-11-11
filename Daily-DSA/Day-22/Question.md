🔹 **Day 22 DSA Challenge (C++)**

**Topic:** Prefix Sum — Longest Subarray with Given Sum
**Difficulty:** 🟡 Medium

---

🧩 **Problem:** Find the Longest Subarray with Sum = K

You are given an integer array `arr[]` and a target integer `K`.
Your task is to find the **length of the longest subarray** whose elements sum up exactly to `K`.

If no such subarray exists, return `0`.

---

🔸 **Example 1**

**Input:**

```
arr = {10, 5, 2, 7, 1, 9}  
K = 15
```

**Output:**

```
4
```

**Explanation:**
The subarray `{5, 2, 7, 1}` has sum 15 and length 4, which is the longest possible.

---

🔸 **Example 2**

**Input:**

```
arr = {-1, 2, 3}  
K = 6
```

**Output:**

```
0
```

**Explanation:**
No subarray sums to 6, so the answer is 0.

---

⚙️ **Hints:**

* Use **prefix sum** to calculate cumulative sums efficiently.
* Use an **unordered_map** to store the first occurrence of each prefix sum.
* Check if `(current_sum - K)` exists in the map to find potential subarrays.

**Time Complexity:** O(n)
**Space Complexity:** O(n)
