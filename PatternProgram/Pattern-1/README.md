# 🧩 Pattern Program – Square Number Grid

### 📝 Problem Statement

Write a program that prints a **square number pattern** based on user input.

#### Example

**Input:**

```
4
```

**Expected Output:**

```
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
```

---

### ⚙️ Approaches & Analysis

#### **Approach 1 – Vector with `push_back()`**

* Dynamically fills a vector using `push_back()`.
* Fully flexible and memory-managed by STL.
* Prints pattern using nested loops iterating over the vector.
* Balanced between readability and control.

**Time Complexity:** `O(n²)` – outer × inner loop iterations.
**Space Complexity:** `O(n)` – for storing numbers in the vector.
**Verdict:** ✅ *Clean, efficient, and flexible.*
**File:** `approach1.cpp` *(also referred as optimized.cpp)*

---

#### **Approach 2 – Pre-sized Vector + Clear()**

* Starts with a preallocated vector (`vector<int> nums(n)`),
  then immediately clears it and refills it using `push_back()`.
* Works fine but has redundant initialization and minor overhead.
* Good to understand how `clear()` and `capacity()` behave.

**Time Complexity:** `O(n²)`
**Space Complexity:** `O(n)`
**Verdict:** ⚙️ *Functional but unnecessary extra step.*
**File:** `approach2.cpp`

---

#### **Approach 3 – Direct Print (Most Optimized)**

* No vector or extra storage.
* Prints values directly inside nested loops.
* Smallest memory footprint and simplest logic.

**Time Complexity:** `O(n²)`
**Space Complexity:** `O(1)` – constant space.
**Verdict:** 🥇 *Fastest and most memory-efficient.*
**File:** `approach3.cpp`

---

### 🧮 Comparison Table

| Approach          | Description                  | Time Complexity | Space Complexity | Efficiency         | Verdict       |
| :---------------- | :--------------------------- | :-------------- | :--------------- | :----------------- | :------------ |
| **1 (push_back)** | Dynamic vector creation      | O(n²)           | O(n)             | ✅ Efficient        | ⭐ Recommended |
| **2 (clear)**     | Pre-sized + clear() overhead | O(n²)           | O(n)             | ⚙️ Slightly slower | 🥈 Redundant  |
| **3 (direct)**    | No vector, direct print      | O(n²)           | O(1)             | 🥇 Fastest         | 💯 Optimized  |

---

### 💡 Key Learnings

* `vector<int> nums(n)` → preallocates memory with default 0s.
* `clear()` → removes elements but keeps the allocated capacity.
* `push_back()` → appends new elements; use `reserve(n)` if size is known.
* For simple patterns, **avoiding unnecessary containers** gives cleaner and faster code.

---

### 🧠 Takeaway

This simple pattern program helps you practice:

* **Nested loop logic**
* **STL vector operations**
* **Understanding memory and capacity in C++**

> “Write it simple first — then make it smarter, not heavier.”

---

### 📁 Files

```
📂 PatternPrograms/
├── approach1.cpp       # Vector with push_back()
├── approach2.cpp       # Pre-sized + clear() version
├── approach3.cpp       # Direct loop (most optimized)
└── README.md           # Full explanation and analysis
```

---

### 🚀 Author

**Ayush** — learning C++ patterns, DSA, and performance-oriented coding.
