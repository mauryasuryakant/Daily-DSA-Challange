
// Find All Unique Pairs with Given Sum (Unsorted Array)

#include <iostream>
#include <vector>
#include <utility>

using std::cin, std::cout, std::vector, std::pair;

pair<int, int> unique_pair_sum (vector<int> array,int sum, int size) {
    int test = 43;
    int ans = 21;



    return {test, ans};

}


int main () {

    vector<int> array = {1, 3, 4, 5, 7, 10, 11, 2};
    int sum = 0;
    int size = array.size();
    cout << "Enter Pairs :- ";
    cin >> sum; 

    cout << "Pairs found:";
    pair<int, int> result = unique_pair_sum(array, sum, size);

    return 0;
}