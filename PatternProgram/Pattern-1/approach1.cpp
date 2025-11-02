
// Pattern Programs

// With Input - 4

// Expected Output
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4


#include <iostream>
#include <vector>

int main () {

    int n;
    std::cout << "Enter a number :- ";
    std::cin >> n;
    std::cout << std::endl;
    std::vector<int> nums;

    for(int i = 0; i < n; i++){
        int val = i + 1;
        nums.push_back(val);
    }

    for(int i = 0; i < n; i++){
        for(int val : nums){
            std::cout << val << " ";
        }

        std::cout << std::endl;
    }

    std::cout << "Size" << nums.size() << std::endl;
    std::cout << "Capacity" << nums.capacity() << std::endl;

    return 0;
}