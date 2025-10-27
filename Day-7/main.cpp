#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> array = {1, 2, 3, 4, 5};
    int sum;

    cout << "Started..." << endl;

    for(int i = 0; i < i+1; i++) {
        sum = sum + array[i];
    }

    for(int val : array) {
        cout << val << " ";
    }
    cout << "Loop end.." << endl;
    cout << endl;
    cout << sum;
    cout << endl;
    return 0;
}