### By ChatGPT

### 🔹 **Day 2 DSA Question (C++)**

**Topic:** Arrays (Intermediate + Comparison Logic)
**Difficulty:** 🟢 Beginner

#### 🧩 Problem: *Find the Second Largest Element in an Array*

**Question:**
Write a program in C++ to find the **second largest number** in a given array of integers.
If no such element exists (for example, all numbers are equal), display an appropriate message.

---

#### 🧠 **Example Input:**

```
5
12 35 1 10 34
```

#### ✅ **Expected Output:**

```
The second largest element is: 34
```

---

#### 💡 **Hints:**

1. Keep two variables: `first` (for largest) and `second` (for second largest).
2. If the current number is **greater than `first`**, update both:
   `second = first; first = arr[i];`
3. Otherwise, if it’s **greater than `second`** and not equal to `first`, update `second`.
4. Handle edge cases where all elements are the same or the array size is less than 2.
