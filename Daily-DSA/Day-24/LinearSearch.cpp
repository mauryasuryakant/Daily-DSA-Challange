
// Find Maximum Sum Subarray of Size K

#include <iostream>
#include <vector>
using std::cout, std::vector;

int main () {
    vector<int> array = {1, 2, 3, 4, 5, 6};
    int n = array.size();

    for(int i = 0; i < n; i++){
        cout << array[i] << "\n";
    }

    return 0;
}