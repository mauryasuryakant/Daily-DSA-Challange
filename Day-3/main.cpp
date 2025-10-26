
// Reverse an Array

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    cout << "Enter the array here ";
    cin >> size;

    int array[size];
    cout << "Enter " << size << " numbers ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int n = sizeof(array) / sizeof(array[0]);

    reverse(array, array + n); // It will reverse array

    cout << "Array 1 :- ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}