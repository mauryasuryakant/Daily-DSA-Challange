#include <iostream>
#include <vector>

int main () {

    std::vector<int> arr = {1, 2, 4, 75, 33};

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
                if(arr[j] > arr[j+1]){
                    int temp_var = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp_var;
                }
            }
        }

    for(int val : arr){
        std::cout << val << " ";
    }

    std::cout << std::endl;

    return false;
}



































































// // Merge Two Sorted Arrays

// #include <iostream>
// #include <vector>

// int main () {

//     std::vector<int> array_1 = {1, 2, 3, 4, 5};
//     std::vector<int> array_2 = {1, 2, 3, 4, 5};
//     std::vector<int> sorted;

//     int n1 = array_1.size();
//     int n2 = array_2.size();

//     for(int i = 0; i < n1; i++){
//         sorted.push_back(array_1[i]);
//     }

//     for(int i = 0; i < n2; i++){
//         sorted.push_back(array_2[i]);
//     }

//     for(int val : sorted){
//         std::cout << val << " ";
//     }

//     std::cout << std::endl;

//     return 0;
// }