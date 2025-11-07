### By Internet

### 🔹 **Day 10 DSA Question (C++)**

**Topic:** Arrays & Strings (Two Pointer Technique)
**Difficulty:** 🔵 Easy+

#### 🧩 Problem: *Merge Two Sorted Arrays*

**Question:**
You are given two **sorted arrays** `arr1[]` and `arr2[]` of sizes `n` and `m`.
Your task is to **merge them into a single sorted array** without using any built-in sort function.

This question tests your understanding of the **Two Pointer approach**, which is fundamental in problems involving merging or comparing multiple sequences.

---

#### 🧠 **Example Input:**

```
arr1 = [1, 3, 5, 7]  
arr2 = [2, 4, 6, 8]
```

#### ✅ **Expected Output:**

```
Merged Array: [1, 2, 3, 4, 5, 6, 7, 8]
```

---

#### 💡 **Hints:**

1. Use **two pointers**, one for each array (`i` for `arr1`, `j` for `arr2`).
2. Compare `arr1[i]` and `arr2[j]`, and push the smaller element into a new result array.
3. Move the pointer forward in whichever array had the smaller element.
4. Once one array is fully traversed, append all remaining elements of the other array.
5. Runs in **O(n + m)** time and uses **O(n + m)** space (can be optimized if merging in-place).