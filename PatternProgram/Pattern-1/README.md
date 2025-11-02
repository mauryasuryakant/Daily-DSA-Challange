# 🧩 Pattern Program – Square Number Grid

### 📝 Problem Statement

Write a program that prints a **square number pattern** based on user input.

#### Example

**Input:**
4

**Expected Output:**
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

---

### ⚙️ Approaches Overview

#### **Approach 1 – Clean & Efficient (Final Version)**

* Builds a dynamic vector using `push_back()` for storing numbers.
* The size of the pattern is fully user-defined.
* Utilizes simple nested loops for pattern generation.
* Compact, efficient, and easy to understand. ✅

**Status:** ✅ *Best & Final Approach*
**File:** `approach1.cpp` (also used as `optimized.cpp`)

---

#### **Approach 2 – Predefined Size + Clear**

* Initializes the vector with a fixed size (`vector<int> nums(n);`)
* Then immediately clears it and refills using `push_back()`.
* Output remains correct but includes an unnecessary initialization step.
* Slightly redundant in both clarity and performance.

**Status:** ⚙️ *Functional but redundant*
**File:** `approach2.cpp`

---

### 💡 Key Learnings

* `vector<int> nums(n);` preallocates `n` zero-initialized elements.
* `clear()` removes all elements but **does not release** reserved memory.
* Prefer `push_back()` with an empty vector or use `reserve(n)` if the final size is known.
* Understanding `size()`, `capacity()`, and `reserve()` helps in writing memory-efficient C++ code.

---

### 🧠 Takeaways

Even a simple pattern program is valuable for practicing:

* **Nested loop structures**
* **Vector usage and initialization**
* **Understanding memory behavior in STL containers**

> 💬 *“Clean code isn’t just about fewer lines — it’s about fewer surprises.”*

---

### 📂 File Structure

PatternPrograms/
├── approach1.cpp       # Clean and final version
├── approach2.cpp       # Experimental version
└── optimized.cpp       # Same as approach1 (for clarity)

---

### 🚀 Author

**Ayush**
Exploring C++ patterns, DSA, and performance-focused programming — one approach at a time.
