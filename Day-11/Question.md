### 🔹 **Day 11 DSA Question (C++)**

**Topic:** Arrays — Prefix Sum
**Difficulty:** 🟣 Intermediate+

---

#### 🧩 Problem: *Find the Equilibrium Index of an Array*

An **equilibrium index** is an index `i` such that the **sum of elements before i** is equal to the **sum of elements after i**.

Your task is to find the **first equilibrium index** in the array (if any).
If no such index exists, return `-1`.

---

#### 🧠 Example Input:

```
arr = [-7, 1, 5, 2, -4, 3, 0]
```

#### ✅ Expected Output:

```
Equilibrium index: 3
```

#### 🧾 Explanation:

At index `3`,

* Sum of elements before index 3 → `(-7 + 1 + 5) = -1`
* Sum of elements after index 3 → `(-4 + 3 + 0) = -1`
  Hence, index `3` is the equilibrium index.

---

#### 💡 Hints:

1. Compute total sum of the array.
2. Iterate and keep a running `leftSum`.
3. At each step:

   * `rightSum = totalSum - leftSum - arr[i]`
   * If `leftSum == rightSum` → equilibrium found.
4. Time Complexity → **O(n)**
   Space Complexity → **O(1)**

---

#### 🧠 Bonus Challenge:

Can you find **all equilibrium indices** if more than one exists?
