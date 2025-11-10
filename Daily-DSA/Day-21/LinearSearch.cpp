#include <iostream>
#include <vector>
#include <utility>

std::pair<int, int> FindPair(std::vector<int> array, int n, int target) {

    for(int i = 0; i < n; i++){

        int temp = target - array[i];

        for(int j = 0; j < n; j++){

            if(temp + array[j] == target){
                return {array[j], temp};
            }
        }
    }

    return {-1, -1};
}


int main () {

    std::vector<int> array = {1, 3, 4, 5, 7, 10, 11};

    int n = array.size();

    int target = 0;
    std::cout << "Enter Target :- ";
    std::cin >> target;

    auto answer = FindPair(array, n, target);

    std::cout << "The answer is :- " << "{" << answer << "}";

    return 0;
}