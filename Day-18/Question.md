### By ChatGPT

### 🔹 **Day 18 DSA Challenge (C++)**

**Topic:** Arrays — Prefix Sum Technique
**Difficulty:** 🟡 Medium

---

### 🧩 Problem: *Find the Equilibrium Index of an Array*

Given an integer array `arr[]`, find an index `i` such that the **sum of elements on the left** of `i` is **equal** to the **sum of elements on the right** of `i`.
If no such index exists, return `-1`.

---

#### 📥 Input Example:

```
arr = {1, 7, 3, 6, 5, 6}
```

#### 📤 Output:

```
Equilibrium Index: 3
```

#### 📘 Explanation:

At index 3 (0-based),
Left sum = 1 + 7 + 3 = 11
Right sum = 5 + 6 = 11

✅ Both are equal, so `i = 3` is the equilibrium index.

---

### ⚙️ **Task Requirements**

You must solve this using **two different approaches**:

#### 🔸 Approach 1: Brute Force

* For each index `i`, calculate the left sum and right sum.
* Compare both; if equal, return that index.
* Time: `O(n²)` due to nested summations.

#### 🔸 Approach 2: Prefix Sum Optimization

* Compute the total sum of the array.
* Traverse the array, keeping track of the left sum.
* For every index `i`, right sum = totalSum − leftSum − arr[i].
* If left sum equals right sum, return index `i`.
* Time: `O(n)`, Space: `O(1)`.

---

### 🧮 **Expected Complexities**

| Approach    | Time Complexity | Space Complexity |
| ----------- | --------------- | ---------------- |
| Brute Force | O(n²)           | O(1)             |
| Prefix Sum  | O(n)            | O(1)             |

---

### 💡 Bonus Task (Optional)

* Print **all equilibrium indices**, not just the first one.
* Extend it for **negative numbers** and **zero-sum arrays**.
