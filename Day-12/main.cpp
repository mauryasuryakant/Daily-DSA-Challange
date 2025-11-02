#include <iostream>
#include <vector>

int main () {

    int nth;
    std::cin >> nth;

    std::vector<int> array(nth);
    for(int i = 0; i < nth;i++){
        std::cin >> array[i];
    }

    int n = array.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for(int val : array){
        std::cout << val << " ";
    }

    std::cout << std::endl;

    return 0;
}