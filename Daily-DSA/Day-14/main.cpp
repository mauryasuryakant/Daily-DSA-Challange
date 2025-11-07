
// Find the First and Last Occurrence of an Element

#include <iostream>
#include <vector>
#include <utility>

using std::cout, std::endl, std::cin, std::vector, std::pair;

pair<int, int> Find_Occurrence(int arr[], int array_size, int element){

    int First_Occurrence = -1;
    int Last_Occurrence = -1;

    for(int i = 0; i < array_size; i++){
        if(arr[i] == element){
            if(First_Occurrence == -1){
                First_Occurrence = i;
            }
            Last_Occurrence = i;
        }
    }
    return {First_Occurrence, Last_Occurrence};
}

int main () {
    int arr[] = {2, 4, 4, 4, 6, 8, 10};

    int element = 4;

    int n = sizeof(arr)/sizeof(arr[0]);

    pair<int, int> ans = Find_Occurrence(arr, n, element);

    cout << "First_Occurrence :- " << ans.first << "\n";
    cout << "Last_Occurrence :- " << ans.second << "\n";


    return 0;
}