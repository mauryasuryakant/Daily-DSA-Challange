
// Find the Longest Subarray with Sum ≤ K

#include <iostream>
#include <vector>

int main () {
    std::vector<int> array;

    int n = array.size();

    for(int i = 0; i < n; i++ ){
        for(int j = i; i < n; j++){
            std::cout << array[i];
        }
         
    }

    return 0; 
}