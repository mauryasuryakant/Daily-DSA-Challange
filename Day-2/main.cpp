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

    int first = elements[0];
    int second = elements[0];

    for (int i = 1; i < size; i++)
    {
        if (elements[i] > first)
        {
            first = elements[i];
        }
    }

    for (int i = 1; i < size; i++) {
        if (elements[i] > second && elements[i] < first) {
            second = elements[i];
        }
    }

    cout << "The second largest element in array is " << second << endl;
    cout << "The largest element in array is " << first << endl;
    return 0;
}