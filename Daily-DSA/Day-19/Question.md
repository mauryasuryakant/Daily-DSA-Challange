### By ChatGPT

### 🔹 **Day 19 DSA Challenge (C++)**

**Topic:** Searching — Binary Search Algorithm
**Difficulty:** 🟡 Medium

---

### 🧩 Problem: *Find the Position of an Element Using Binary Search*

Given a **sorted array** of integers and a **target value**, return the **index** of the target if it exists.
If the target does **not** exist in the array, return `-1`.

---

#### 📥 Input Example:

```
arr = {2, 4, 7, 10, 14, 18, 21}
target = 10
```

#### 📤 Output:

```
Element found at index: 3
```

---

### ⚙️ **Task Requirements**

You must solve it using **two approaches**:

#### 🔸 Approach 1: Iterative Binary Search

* Use two pointers — `low` and `high`.
* While `low <= high`, find `mid = (low + high) / 2`.
* If `arr[mid] == target`, return `mid`.
* If `arr[mid] < target`, move `low = mid + 1`.
* Else, move `high = mid - 1`.

#### 🔸 Approach 2: Recursive Binary Search

* Use recursion to divide the array until the element is found or range becomes invalid.
* Same logic, but function calls itself with adjusted bounds.

---

### 🧮 **Expected Complexities**

| Approach                | Time Complexity | Space Complexity |
| ----------------------- | --------------- | ---------------- |
| Iterative Binary Search | O(log n)        | O(1)             |
| Recursive Binary Search | O(log n)        | O(log n) (stack) |

---

### 💡 Bonus Task (Optional)

* Return the **insertion position** if the target isn’t found (where it should be inserted to keep array sorted).
* Try to modify the code to work with **descending arrays** too.