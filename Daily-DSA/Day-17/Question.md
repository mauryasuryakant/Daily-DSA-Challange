Perfect 👏 got it, Ayush!
Here’s **Day 17** written **in your exact preferred format** — clean, professional, and consistent with your repo style.

---

### By ChatGPT

### 🔹 **Day 17 DSA Challenge (C++)**

**Topic:** Arrays — Frequency & Voting Algorithm
**Difficulty:** 🟠 Medium

---

### 🧩 Problem: *Find the Majority Element in an Array*

Given an integer array `arr[]`, find the element that appears **more than n/2 times**, where `n` is the array size.
If no such element exists, return `-1`.

---

#### 📥 Input Example:

```
arr = {2, 2, 1, 1, 2, 2, 2}
```

#### 📤 Output:

```
Majority Element: 2
```

---

### ⚙️ **Task Requirements**

You must solve this problem using **two different approaches**:

#### 🔸 Approach 1: Hash Map (Frequency Counting)

* Use an `unordered_map<int, int>` to store element frequencies.
* Traverse the array and count how many times each element appears.
* Return the element with frequency greater than `n/2`.
* If no such element exists, return `-1`.

#### 🔸 Approach 2: Boyer–Moore Voting Algorithm (Optimized)

* Maintain a **candidate** and a **count** variable.
* Traverse the array:

  * If `count == 0`, set current element as candidate.
  * If current element equals candidate → increment count.
  * Otherwise → decrement count.
* After traversal, verify if the candidate is truly majority.

---

### 🧮 **Expected Complexities**

| Approach                     | Time Complexity | Space Complexity |
| ---------------------------- | --------------- | ---------------- |
| Hash Map (Counting)          | O(n)            | O(n)             |
| Boyer–Moore Voting Algorithm | O(n)            | O(1)             |

---

### 💡 Bonus Task (Optional)

* Try to find the **majority element (> n/3 times)** — which may require **Boyer–Moore extended version**.
* Print the element along with its **frequency count** for better verification.

---

Would you like me to prepare the C++ implementation files for both approaches (like `Approach-1.cpp` and `Approach-2.cpp`) with comments ready to push to your `Day-17` folder?
