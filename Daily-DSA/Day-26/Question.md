### 🔹 **Day 26 DSA Question (C++)**

**Topic:** Arrays + XOR
**Difficulty:** 🟡 Medium

---

### 🧩 **Problem: Find the Unique Element**

You are given an array of integers where **every element appears twice except one**, which appears **exactly once**.
Write a C++ program to **find and print that unique element**.

---

### 🧠 **Example Input:**

```
5
4 1 2 1 2
```

### ✅ **Expected Output:**

```
Unique element: 4
```

---

### 💡 **Hints:**

1. XOR all numbers — duplicates cancel out.
2. `a ^ a = 0`
3. `a ^ 0 = a`
4. Final XOR holds the unique number.