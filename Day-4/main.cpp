#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {4, 1, 6, 2, 5};

    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    sort(arr.begin(), arr.end());

    cout << "Ascending array :- ";

    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    sort(arr.begin(), arr.end(), greater<int>());

    cout << "Descending array :- ";

    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
