#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int elements = 5;
    int array[elements] = {2, 3, 4, 7, 8};

    int n = sizeof(array) / sizeof(array[0]);

    reverse(array, array + n); // It will reverse array

    cout << "Array 1 :- ";
    for (int i = 0; i < elements; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}