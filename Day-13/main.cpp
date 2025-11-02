
// Find the Intersection of Two Arrays

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr1 = {1, 2, 2, 3, 4};
    std::vector<int> arr2 = {2, 2, 4, 6};
    std::vector<int> Intersection;

    std::sort(arr1.begin(), arr1.end());
    std::sort(arr2.begin(), arr2.end());
    
    // int size1 = arr1.size();            // Works great in every versions
    // int size2 = size(arr2);             // Works great in 17+ versions
    // int n = 0;

    // if(size1 > size2){
    //     n = size1;
    //     arr2.resize(size1);
    // }else{
    //     n = size2;
    //     arr1.resize(size2);
    // }

    std::set_intersection(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), std::back_inserter(Intersection));

    std::vector<int>::iterator it = std::unique(Intersection.begin(), Intersection.end());
    Intersection.erase(it, Intersection.end());

    // for(int i = 0; i < n; i++){
    //     for(int val : arr1){
    //         if(arr1[i] == arr2[i]){
    //             Intersection.push_back(arr1[i]);
    //         }else{
    //             continue;
    //         }
    //     }
    // }

    for(int val : Intersection){
        
        std::cout << val << " ";
    }


    return 0;
}