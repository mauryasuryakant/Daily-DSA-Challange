#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> array = {1, 2, 3, 4, 5};

    for(int val : array) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}