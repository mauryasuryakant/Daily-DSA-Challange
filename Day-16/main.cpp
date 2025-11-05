
// Find the Intersection of Two Arrays

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using std::cout, std::cin, std::vector, std::pair, std::sort, std::adjacent_find;

int main () {
    vector<int> array1 = {1, 2, 2, 3, 4};
    vector<int> array2 = {2, 2, 3, 5};

    int size1 = array1.size();
    int size2 = array2.size();

    int n = 0;
    int first = 0;
    int second = 0;

    sort(array1.begin(), array1.end());
    sort(array2.begin(), array2.end());

    auto it1 = adjacent_find(array1.begin(), array1.end());
    auto it2 = adjacent_find(array2.begin(), array2.end());
    
    // for(int i = 0; i < size1; i++){
    //     for(int j = i + 1; j < size2; j++){
    //         if(array1[i] == array2[j]){
    //             first = array1[i];
    //         }
    //     }
    // }

    return 0;
}