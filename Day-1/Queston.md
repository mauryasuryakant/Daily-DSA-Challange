### By ChatGPT

### 🔹 **Today's DSA Question (for C++ Absolute Beginner)**

**Topic:** Arrays (Basics + Logic Thinking)

#### 🧩 Problem: *Find the Largest Element in an Array*

**Question:**
Write a program in C++ to find the **largest number** in a given array of integers.

---

#### 🧠 **Example Input:**

```
5
3 9 1 22 14
```

#### ✅ **Expected Output:**

```
The largest element is: 22
```

---

#### 💡 **Hints:**

1. Use a **loop** to traverse the array.
2. Keep a variable, say `max`, to store the **largest number found so far**.
3. Compare each element with `max` — if it’s larger, update `max`.

---

#### 🧾 **Sample Solution Skeleton (Don’t copy-paste blindly — type it yourself!)**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0]; // assume first element is largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "The largest element is: " << max << endl;

    return 0;
}
```
