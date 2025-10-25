By ChatGPT

🔹 Day 5 DSA Question (C++)

Topic: Vectors (Sorting + STL Practice)
Difficulty: 🟢 Beginner

🧩 Problem: Sort a Vector in Ascending and Descending Order

Question:
Write a C++ program to sort a vector of integers in both ascending and descending order.
Display the vector before sorting, after ascending sort, and after descending sort.


---

🧠 Example Input:

6
12 7 3 15 9 1

✅ Expected Output:

Original Vector: 12 7 3 15 9 1
Sorted (Ascending): 1 3 7 9 12 15
Sorted (Descending): 15 12 9 7 3 1


---

💡 Hints:

1. Use the STL Vector container:

vector<int> arr;


2. Input values using a loop and push_back().


3. Sort ascending:

sort(arr.begin(), arr.end());


4. Sort descending:

sort(arr.begin(), arr.end(), greater<int>());


5. Print results after each sort for verification.
