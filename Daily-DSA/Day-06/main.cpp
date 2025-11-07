
// Count Even and Odd Elements in an Array

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> array = {6, 8, 7, 2, 9};
    int odd = 0;
    int even = 0;

    for (int val : array)
    {
        if (val % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << even << endl;
    cout << odd << endl;

    return 0;
}