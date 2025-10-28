### By ChatGPT

### 🔹 **Day 3 DSA Question (C++)**

**Topic:** Arrays (Basic + Two-Pointer Logic)
**Difficulty:** 🟢 Easy

#### 🧩 Problem: *Reverse an Array*

**Question:**
Write a program in C++ to **reverse the elements of an array**.
Your program should take the size of the array and the elements as input,
and then print the array elements in reverse order.

---

#### 🧠 **Example Input:**

```
5
10 20 30 40 50
```

#### ✅ **Expected Output:**

```
Reversed array: 50 40 30 20 10
```

---

#### 💡 **Hints:**

1. Use two indexes — `start` (at the beginning) and `end` (at the last element).
2. Swap `arr[start]` and `arr[end]`, then move inward:

   * `start++` and `end--`
3. Continue this process until `start` becomes greater than or equal to `end`.
4. Alternatively, you can use a **for loop** from the end to the beginning to print directly.
