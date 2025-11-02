
// Find the Frequency of an Element in an Array

#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 1, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    map<int, int> freq;

    // Count frequency
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print frequency
    for(auto &pair : freq) {
        cout << pair.first << " occurs " << pair.second << " times\n";
    }

    return 0;
}
