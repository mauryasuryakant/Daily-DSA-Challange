
// Find the Position of an Element Using Binary Search

#include <iostream>
#include <vector>

int main () {

    std::vector<int> array = {2, 4, 7, 10, 14, 18, 21};

    int n = array.size();

    int targate = 0; std::cin >> targate;

    for(int i = 0; i < n; i++){
        if(array[i] == targate){
            std::cout << "Element found at index: " << i;
        }
    }

    return 0;
}

