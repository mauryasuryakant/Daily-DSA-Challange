### By ChatGPT

### 🔹 **Day 16 DSA Challenge (C++)**

**Topic:** Arrays — Hashing & Set Operations
**Difficulty:** 🟠 Medium

---

### 🧩 Problem: *Find the Intersection of Two Arrays*

Given two **unsorted arrays** of integers, find all **unique common elements** that appear in **both arrays**.
Each element in the result should appear **only once**, even if it appears multiple times in the input arrays.

---

#### 📥 Input Example:

```
arr1 = {1, 2, 2, 3, 4}
arr2 = {2, 2, 3, 5}
```

#### 📤 Output:

```
Intersection: {2, 3}
```

---

### ⚙️ **Task Requirements**

You must solve it using **two different approaches**:

#### 🔸 Approach 1: Using Hashing

* Use `unordered_set` to store unique elements from the first array.
* Traverse the second array and check which elements already exist in the set.
* Store matched elements in a result set to ensure uniqueness.

#### 🔸 Approach 2: Sorting + Two-Pointer

* Sort both arrays first.
* Use two pointers to iterate and find common elements.
* Move the smaller pointer forward to synchronize both arrays.
* Skip duplicates to ensure unique intersection.

---

### 🧮 **Expected Complexities**

| Approach              | Time Complexity      | Space Complexity |
| --------------------- | -------------------- | ---------------- |
| Hashing               | O(n + m)             | O(n)             |
| Sorting + Two-pointer | O(n log n + m log m) | O(1)             |

---

### 💡 Bonus Task (Optional)

Modify your program to also return:

* The **Union** of the two arrays (all unique elements from both).
* Try to print both **Union** and **Intersection** cleanly for better comparison.
