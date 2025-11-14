🔹 **Day 25 DSA Challenge (C++)**

**Topic:** Hashing — Count Distinct Elements in Every Window
**Difficulty:** 🟡 Medium

---

🧩 **Problem:** Sliding Window Distinct Count

You are given an integer array `arr[]` of size **N** and a window size **K**.
Your task is to find **how many distinct numbers** are present in **every window of size K** as the window slides from left to right.

Return the result as a vector of integers.

---

### **Example**

**Input:**
arr = {1, 2, 1, 3, 4, 2, 3}, K = 4

**Output:**
{3, 4, 4, 3}

**Explanation (text-diagram):**

```
Window 1: [1 2 1 3] → distinct = 3  
Window 2: [2 1 3 4] → distinct = 4  
Window 3: [1 3 4 2] → distinct = 4  
Window 4: [3 4 2 3] → distinct = 3
```