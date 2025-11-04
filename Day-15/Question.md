### By ChatGPT

### 🔹 **Day 15 DSA Challenge (C++)**

**Topic:** Arrays — Two Pointer + Hashing Hybrid
**Difficulty:** 🔴 Hard

---

### 🧩 Problem: *Find All Unique Pairs with Given Sum (Unsorted Array)*

Given an **unsorted array** of integers and a **target sum**, find **all unique pairs** of elements whose **sum equals the target**.

---

#### 📥 Input Example:

```
arr = {1, 3, 4, 5, 7, 10, 11, 2}
target = 7
```

#### 📤 Output:

```
Pairs found:
(1, 6) ❌ not present
(1, 2) ✅
(3, 4) ✅
```

Final output:

```
(1, 2)
(3, 4)
```

---

### ⚙️ **Task Requirements**

You must solve it using **two different approaches**:

#### 🔸 Approach 1: Hashing

Use a `set` or `unordered_set` to track complements.
Avoid duplicate pairs (hint: use `set<pair<int,int>>` or store sorted pairs).

#### 🔸 Approach 2: Sorting + Two-Pointer

* Sort the array first
* Use two-pointer logic to find all pairs
* Skip duplicate pairs carefully

---

### 🧮 **Expected Complexities**

| Approach              | Time Complexity | Space Complexity |
| --------------------- | --------------- | ---------------- |
| Hashing               | O(n)            | O(n)             |
| Sorting + Two-pointer | O(n log n)      | O(1)             |

---

### 💡 Bonus Task (Optional)

Extend it to find:

* **All unique triplets** whose sum equals the target
  *(Hint: Nested two-pointer inside a loop — this becomes the classic “3Sum Problem”)*
