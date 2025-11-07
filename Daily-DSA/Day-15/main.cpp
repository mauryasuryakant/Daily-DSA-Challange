
// Find All Unique Pairs with Given Sum (Unsorted Array)

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using std::cin, std::cout, std::vector, std::pair;

pair<int, int> unique_pair_sum (vector<int> array,int sum, int size) {

    int resultfirst = 0;
    int resultsecond = 0;

    for(int i = 0; i < size; i++){
        for(int j = i +1; j < size; j++){
            int temp = array[i] + array[j];
            if(temp == sum){
                resultfirst = array[i];
                resultsecond = array[j];
                return {resultfirst, resultsecond};
            }
        }
    }
    return {resultfirst, resultsecond};
}


int main () {

    vector<int> array = {1, 3, 4, 5, 7, 10, 11, 2};
    int sum = 0;
    int size = array.size();
    cout << "Enter Pairs :- ";
    cin >> sum;

    auto result = unique_pair_sum(array, sum, size);

    if(result.first != 0 && result.second != 0){
        cout << "Found pairs :- " << "(" << result.first << "," << result.second << ")";
    }
    else{
        cout << "No pair found in array.";
    }

    return 0;
}