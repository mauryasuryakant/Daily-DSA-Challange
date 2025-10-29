
// Find the missing number in a sequence


#include <iostream>
#include <vector>

int findMissing(int arr[], int n) {
    int total = (n + 1) * (n + 2) / 2;      // (n + 1) * (n + 1) / 2
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    return total - sum;
}


int main () {
    std::vector<int> arr = {1, 2, 4, 5}; // 3 is missing
    int n = arr.size(); // n = 4

    std::cout << findMissing(arr.data(), n) << std::endl;

    return 0;
}
