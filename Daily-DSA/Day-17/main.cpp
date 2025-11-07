
// Find the Majority Element in an Array

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>


int main () {
    std::vector<int> array;

    int n = array.size();
    auto new_array = adjacent_find(array.begin(), array.end());

    int Major = 0;


    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(array[i] == array[j]){
                Major = array[i];
            } 
        }
    }

    return 0;
}