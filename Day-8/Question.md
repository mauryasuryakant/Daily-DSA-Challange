### By ChatGPT

### 🔹 **Day 8 DSA Question (C++)**

**Topic:** Arrays (Even–Odd Separation + Logic Practice)
**Difficulty:** 🔵 Easy+

#### 🧩 Problem: *Separate Even and Odd Numbers from an Array*

**Question:**
Write a C++ program to input an array of integers and separate all **even** and **odd** numbers into two different arrays (or vectors).
Finally, print both lists separately.

---

#### 🧠 **Example Input:**

```
7  
2 5 8 11 4 9 6
```

#### ✅ **Expected Output:**

```
Even numbers: 2 8 4 6  
Odd numbers: 5 11 9
```

---

#### 💡 **Hints:**

1. Use two separate arrays (or `vector<int>`) — one for even, one for odd.
2. Use the modulo operator `%` to check:

   * `if (num % 2 == 0)` → even
   * else → odd
3. Use `.push_back()` for vectors to store results dynamically.
4. Print both arrays clearly after separation.