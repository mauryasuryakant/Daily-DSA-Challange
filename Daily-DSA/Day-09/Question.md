### By Internet

### 🔹 **Day 9 DSA Question (C++)**

**Topic:** Arrays (Mathematical Logic + Sequence Handling)
**Difficulty:** 🟠 Intermediate

#### 🧩 Problem: *Find the Missing Number in a Sequence*

**Question:**
You are given an array containing `n` distinct integers taken from `1` to `n + 1`, meaning **exactly one number is missing**.
Write a C++ program to find that **missing number** efficiently.

This problem is commonly asked in **Google**, **Amazon**, and **Microsoft** interviews to test logical reasoning and optimization thinking.

---

#### 🧠 **Example Input:**

```
4  
1 2 4 5
```

#### ✅ **Expected Output:**

```
Missing number is: 3
```

---

#### 💡 **Hints:**

1. The **sum of the first N natural numbers** is given by the formula:

   ```
   total = (n + 1) * (n + 2) / 2
   ```
2. Calculate the **sum of the given array elements** using a loop.
3. The missing number = `total - sum`.
4. This approach runs in **O(n)** time and uses **O(1)** extra space.
5. (Bonus 💡) Try solving it using the **XOR method** for extra efficiency.