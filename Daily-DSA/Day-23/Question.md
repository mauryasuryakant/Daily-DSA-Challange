🔹 **Day 23 DSA Challenge (C++)**

**Topic:** Hashing — Count Subarrays with Equal 0s and 1s
**Difficulty:** 🟡 Medium

---

🧩 **Problem:** Count Subarrays with Equal Number of 0s and 1s

You are given a binary array `arr[]` (containing only 0s and 1s).
Your task is to find the **total number of subarrays** that contain **an equal number of 0s and 1s**.

---

🔸 **Example 1**

**Input:**

```
arr = {0, 1, 0, 1}
```

**Output:**

```
4
```

**Explanation:**
The valid subarrays are:

* `{0, 1}` (indices 0–1)
* `{1, 0}` (indices 1–2)
* `{0, 1}` (indices 2–3)
* `{0, 1, 0, 1}` (indices 0–3)

Total = **4 subarrays**

---

🔸 **Example 2**

**Input:**

```
arr = {0, 0, 1, 0, 1, 1, 0}
```

**Output:**

```
8
```

**Explanation:**
There are **8 subarrays** where the count of 0s and 1s is equal.

---

⚙️ **Hints:**

* Replace every `0` in the array with `-1`.
* The problem then reduces to **counting subarrays with sum = 0**.
* Use an **unordered_map** to store prefix sums and their frequencies.

**Time Complexity:** O(n)
**Space Complexity:** O(n)