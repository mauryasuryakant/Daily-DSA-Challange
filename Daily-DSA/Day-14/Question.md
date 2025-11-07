### By ChatGPT

### 🔹 **Day 14 DSA Challenge (C++)**

**Topic:** Arrays — Searching
**Difficulty:** 🟡 Moderate

---

#### 🧩 Problem: *Find the First and Last Occurrence of an Element*

Given a **sorted array** of integers and a target element `x`, find the **first** and **last** index where `x` appears in the array.
If `x` is not found, return `-1` for both indices.

---

### 🧠 **Example**

**Input:**

```
array = [2, 4, 4, 4, 6, 8, 10]
x = 4
```

**Output:**

```
First Occurrence = 1  
Last Occurrence = 3
```

**Explanation:**
Element `4` appears from index `1` to `3`.

---

### ⚙️ **Expected Approach**

* Use **Binary Search** (since array is sorted).
* Try to write two separate functions:

  * One for **first occurrence**
  * One for **last occurrence**

---

### ⏱️ **Complexity Targets**

* **Time Complexity:** O(log n)
* **Space Complexity:** O(1)