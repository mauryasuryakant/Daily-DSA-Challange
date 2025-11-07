
// Find the Largest Element in an Array

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the array here ";
    cin >> size;

    int elements[size];
    cout << "Enter " << size << " numbers ";
    for (int i = 0; i < size; i++)
    {
        cin >> elements[i];
    }

    int max = elements[0];
    for (int i = 1; i < size; i++)
    {
        if (elements[i] > max)
        {
            max = elements[i];
        }
    }

    cout << "The largest element in array is " << max << endl;
    system("pause");
    return 0;
}