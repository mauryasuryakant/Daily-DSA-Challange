### By ChatGPT

### 🔹 **Day 4 DSA Question (C++)**

**Topic:** Arrays (Sorting + Logic Building)
**Difficulty:** 🔵 Easy+

#### 🧩 Problem: *Sort an Array in Ascending and Descending Order*

**Question:**
Write a program in C++ to **sort a given array of integers** in both **ascending** and **descending** order.
Display both versions clearly.

---

#### 🧠 **Example Input:**

```
6
12 5 7 3 9 1
```

#### ✅ **Expected Output:**

```
Sorted (Ascending): 1 3 5 7 9 12
Sorted (Descending): 12 9 7 5 3 1
```

---

#### 💡 **Hints:**

1. Use the **STL function** `sort()` from `<algorithm>`.
2. For ascending order:

   ```cpp
   sort(arr, arr + n);
   ```
3. For descending order:

   ```cpp
   sort(arr, arr + n, greater<int>());
   ```
4. Print the array after each sort to confirm.

---

Would you like me to make **Day 5** a slightly trickier array question next — like “**Merge Two Sorted Arrays**” (without using extra libraries)?
