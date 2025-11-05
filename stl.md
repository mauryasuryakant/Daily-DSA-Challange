### By ChatGPT

# 🧰 C++ STL Reference Sheet

A compact and practical **STL (Standard Template Library)** reference for everyday coding, revision, and DSA practice.

---

## ⚙️ `<algorithm>`

Core functions for **array/vector manipulation**, **searching**, and **comparisons** — the heart of STL logic.

```cpp
sort(first, last);                 // Sort elements in ascending order
reverse(first, last);              // Reverse the order of elements
find(first, last, val);            // Find the first occurrence of val
copy(first, last, dest);           // Copy elements to another container
count(first, last, val);           // Count occurrences of val
unique(first, last);               // Remove consecutive duplicates
max_element(first, last);          // Find the maximum element
min_element(first, last);          // Find the minimum element
adjacent_find(first, last);        // Find first pair of equal consecutive elements
binary_search(first, last, val);   // True if val exists (sorted array required)
lower_bound(first, last, val);     // Iterator to first element >= val
upper_bound(first, last, val);     // Iterator to first element > val
equal_range(first, last, val);     // Pair of iterators [lower, upper)
accumulate(first, last, init);     // Sum (requires <numeric>)
```

🧠 *Tip:* `adjacent_find` is great for checking repeated values or patterns in sorted sequences.

---

## 🧩 `<vector>`

### 🏗 Initialization

```cpp
vector<int> v;               // Empty vector
vector<int> v(5);            // Size 5, all elements 0
vector<int> v(5, 10);        // Size 5, all elements 10
vector<int> v2 = {1, 2, 3};  // Using initializer list
vector<int> v3(v2);          // Copy constructor
```

---

### 📏 Capacity

```cpp
v.size();           // Number of elements
v.capacity();       // Allocated memory size
v.empty();          // Check if vector is empty
v.resize(n);        // Resize vector to n elements
v.reserve(n);       // Allocate memory for n elements
v.shrink_to_fit();  // Reduce capacity to size
```

---

### 🔍 Element Access

```cpp
v[i];         // Access by index
v.at(i);      // Bounds-checked access
v.front();    // First element
v.back();     // Last element
v.data();     // Pointer to internal array
```

---

### ✏️ Modifiers

```cpp
v.push_back(x);           // Add element at end
v.pop_back();             // Remove last element
v.insert(pos, val);       // Insert at position
v.erase(pos);             // Erase element at position
v.clear();                // Remove all elements
v.assign(n, val);         // Replace content
v.swap(v2);               // Swap with another vector
v.emplace(pos, val);      // Construct in place
v.emplace_back(val);      // Construct at end
```

---

### 🧭 Iterators

```cpp
v.begin();      // Iterator to first
v.end();        // Iterator to past-the-end
v.rbegin();     // Reverse begin
v.rend();       // Reverse end
v.cbegin();     // Const begin
v.cend();       // Const end
v.crbegin();    // Const reverse begin
v.crend();      // Const reverse end
```

---

## 🧠 Other Important STL Headers

### 📚 `<string>`

```cpp
string s = "Hello";
s.length();         // Length of string
s.append("!");      // Add text
s.substr(pos, len); // Substring
s.find("l");        // Find position
s.erase(pos);       // Remove chars
s.insert(pos, str); // Insert text
s.replace(pos, len, str); // Replace section
s.compare(str);     // Lexicographic compare
```

---

### 📋 `<map>` / `<unordered_map>`

```cpp
map<int, string> m;
m[key] = value;            // Insert or update
m.insert({key, value});    // Insert pair
m.erase(key);              // Remove by key
m.find(key);               // Find iterator
m.size();                  // Get size
m.clear();                 // Remove all
for (auto &p : m) cout << p.first << " " << p.second;
```

---

### 🧮 `<set>` / `<unordered_set>`

```cpp
set<int> s;
s.insert(x);       // Add element
s.erase(x);        // Remove element
s.count(x);        // Check existence
s.find(x);         // Find element
s.size();          // Size of set
s.clear();         // Clear all
```

---

### 🪣 `<queue>` / `<stack>` / `<priority_queue>`

```cpp
queue<int> q;
q.push(x); q.pop(); q.front();

stack<int> st;
st.push(x); st.pop(); st.top();

priority_queue<int> pq;  // Max-heap
priority_queue<int, vector<int>, greater<int>> pq_min; // Min-heap
pq.push(x); pq.pop(); pq.top();
```

---

### ⚡ `<pair>` and `<tuple>`

```cpp
pair<int, string> p = {1, "Ayush"};
p.first; p.second;

tuple<int, string, float> t = {1, "A", 2.5};
get<0>(t); get<1>(t); get<2>(t);
```

---

### 🔍 `<numeric>`

```cpp
accumulate(v.begin(), v.end(), 0);   // Sum of elements
inner_product(a.begin(), a.end(), b.begin(), 0); // Dot product
partial_sum(v.begin(), v.end(), result.begin()); // Prefix sums
adjacent_difference(v.begin(), v.end(), diff.begin()); // Element-wise diff
```

---

✅ **Pro Tip:** Combine `algorithm` and `numeric` headers — they make your DSA life *10x faster and cleaner*.

---
