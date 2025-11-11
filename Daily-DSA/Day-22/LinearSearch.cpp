
// Find the Longest Subarray with Sum = K

#include <iostream>
#include <vector>

int main () {
    std::vector<int> array = {1, 2, 3, 4, 5, 6, 7};

    int n = array.size();

    for(int i = 0; i < n ; i++){
        for(int j = i ; j < n ; j++){
            for(int k = i; k <= n - 1; k++){
                std::cout << array[i];
            }
            std::cout << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

