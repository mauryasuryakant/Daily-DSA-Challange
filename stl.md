### By ChatGPT

# 🧰 C++ STL Reference Sheet

A compact list of essential **STL (Standard Template Library)** headers and functions for quick revision and practice.

---

## ⚙️ `<algorithm>`

Commonly used functions for array and vector manipulation:

```cpp
sort(first, last);         // Sort elements in ascending order
reverse(first, last);      // Reverse the order of elements
find(first, last, val);    // Find the first occurrence of val
copy(first, last, dest);   // Copy elements to another container
count(first, last, val);   // Count occurrences of val
unique(first, last);       // Remove consecutive duplicates
max_element(first, last);  // Find the maximum element
min_element(first, last);  // Find the minimum element
```

---

## 🧩 `<vector>`

### 🏗 Initialization

```cpp
vector<int> v;             // Empty vector
vector<int> v(5);          // Size 5, all elements 0
vector<int> v(5, 10);      // Size 5, all elements 10
vector<int> v2 = {1, 2, 3}; // Using initializer list
vector<int> v3(v2);        // Copy constructor
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
v[i];         // Access element by index
v.at(i);      // Safe access with bounds checking
v.front();    // First element
v.back();     // Last element
v.data();     // Pointer to internal array
```

---

### ✏️ Modifiers

```cpp
v.push_back(x);           // Add element at end
v.pop_back();             // Remove last element
v.insert(pos, val);       // Insert at specific position
v.erase(pos);             // Erase element at position
v.clear();                // Remove all elements
v.assign(n, val);         // Replace content with n copies of val
v.swap(v2);               // Swap with another vector
v.emplace(pos, val);      // Construct element in place
v.emplace_back(val);      // Construct element at end
```

---

### 🧭 Iterators

```cpp
v.begin();      // Iterator to first element
v.end();        // Iterator to past-the-end
v.rbegin();     // Reverse iterator to last element
v.rend();       // Reverse iterator to before-first
v.cbegin();     // Constant iterator to first
v.cend();       // Constant iterator to past-the-end
v.crbegin();    // Constant reverse iterator to last
v.crend();      // Constant reverse iterator to before-first
```

---

## 🧠 Other Important STL Headers

### 📚 `<string>`

```cpp
string s = "Hello";
s.length();     // Get size
s.append("!");  // Add text
s.substr(pos, len); // Get substring
s.find("l");    // Find position
s.erase(pos);   // Remove characters
s.insert(pos, str); // Insert string
```

---

### 📋 `<map>` / `<unordered_map>`

```cpp
map<int, string> m;
m[key] = value;            // Insert or update
m.insert({key, value});    // Insert pair
m.erase(key);              // Remove by key
m.find(key);               // Find iterator to key
m.size();                  // Get size
m.clear();                 // Remove all
```

---

### 🧮 `<set>` / `<unordered_set>`

```cpp
set<int> s;
s.insert(x);       // Add element
s.erase(x);        // Remove element
s.count(x);        // Check existence
s.find(x);         // Find element
s.size();          // Get number of elements
s.clear();         // Clear all
```

---

### 🪣 `<queue>` / `<stack>` / `<priority_queue>`

```cpp
queue<int> q;
q.push(x); q.pop(); q.front();

stack<int> st;
st.push(x); st.pop(); st.top();

priority_queue<int> pq;             // Max-heap
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
