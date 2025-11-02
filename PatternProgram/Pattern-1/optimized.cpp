
// Pattern Programs

// With Input - 4

// Expected Output
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4


#include <iostream>

int main() {

    int n;
    std::cout << "Enter n :- ";
    std::cin >> n;
    std::cout << std::endl;

    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n; j++){
            std::cout << j << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}