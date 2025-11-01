### 🔹 **Day 12 DSA Question (C++)**

**Topic:** Arrays (Prefix Sum + Optimization Logic)
**Difficulty:** 🟠 Intermediate

#### 🧩 **Problem:** *Maximum Subarray Sum (Kadane’s Algorithm)*

**Question:**
Given an array of integers (which may include both positive and negative numbers), find the **contiguous subarray** that has the **largest sum**, and print that sum.

This problem is a **classic interview question**, commonly asked by **Amazon**, **Microsoft**, and **Goldman Sachs**, testing your understanding of **array optimization** and **dynamic logic**.

---

#### 🧠 **Example Input:**

```
arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
```

#### ✅ **Expected Output:**

```
Maximum Subarray Sum: 6
```

**Explanation:**
The subarray `[4, -1, 2, 1]` gives the maximum sum = `6`.

---

#### 💡 **Hints:**

1. Use **Kadane’s Algorithm**:

   * Keep a running sum `currentSum`.
   * If `currentSum` becomes negative, reset it to 0.
   * Keep track of the maximum value of `currentSum` as `maxSum`.
2. Runs in **O(n)** time and uses **O(1)** extra space.
3. *(Bonus)* Try printing the **subarray elements** that form the maximum sum.
