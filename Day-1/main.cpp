#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the array here ";
    cin >> number;

    int arr[number];
    cout << "Enter " << number << " numbers ";
    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    for(int i = 1; i < number; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "The largest element in array is " << max << endl;
    system("pause");
    return 0;
}