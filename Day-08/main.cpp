
// Separate Even and Odd Numbers from an Array

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> array = {5, 6, 4, 5, 7, 9};
    vector<int> even;
    vector<int> odd;

    int n = array.size();

    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            even.push_back(array[i]);
        }
        else
        {
            odd.push_back(array[i]);
        }
    }

    cout << "Original Array :- ";

    for (int val : array)
    {
        cout << val << " ";
    }

    cout << endl;
    cout << "Even :- ";

    for (int val : even)
    {
        cout << val << " ";
    }

    cout << endl;
    cout << "Odd :- ";

    for (int val : odd)
    {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}