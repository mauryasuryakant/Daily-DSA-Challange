### By ChatGPT

### 🔹 **Day 20 DSA Challenge (C++)**

**Topic:** Arrays — Average & Comparison
**Difficulty:** 🟢 Easy

---

### 🧩 Problem: *Count Elements Greater Than Average*

Given an integer array `arr[]`, find **how many elements are strictly greater than the average** of all elements in the array.

---

#### 📥 Input Example:

```
arr = {2, 4, 6, 8, 10}
```

#### 📤 Output:

```
Count: 2
```

#### 📘 Explanation:

Average = (2 + 4 + 6 + 8 + 10) / 5 = 6
Elements greater than 6 are 8 and 10 → **Count = 2**

---

### ⚙️ **Task Requirements**

You must solve this using **two different approaches**:

#### 🔸 Approach 1: Basic Traversal

* Find the total sum of the array.
* Compute the average.
* Traverse again to count how many elements are greater than the average.
* Time: `O(2n)` (can be simplified to `O(n)`), Space: `O(1)`

#### 🔸 Approach 2: Single Pass (Optimized Memory Access)

* Use the same idea but compute total sum and count elements in a more cache-friendly single scan if needed.
* Still `O(n)` but with better locality and no extra data structures.

---

### 🧮 **Expected Complexities**

| Approach        | Time Complexity | Space Complexity |
| --------------- | --------------- | ---------------- |
| Basic Traversal | O(n)            | O(1)             |
| Single Pass     | O(n)            | O(1)             |

---

### 💡 Bonus Task (Optional)

* Return both the **count** and the **elements** greater than average.
* Extend for **floating-point arrays** as well.
* Handle cases with **negative numbers** or **all identical elements**.
