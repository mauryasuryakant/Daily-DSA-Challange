
// Count Elements Greater Than Average

#include <iostream>
#include <vector>

int main () {

    std::vector<int> array = {2, 4, 6, 8, 10};
    
    int sum = 0;
    int n = array.size();
    int count = 0;
    
    for(int i = 0; i < n; i++){
        sum += array[i];
    }

    int average = sum / n;
    // double average = static_cast<double>(sum)/n;

    for(int i = 0; i < n; i++){
        if(average < array[i]){
            count++;
        }
    }

    std::cout << "Count :- " << count;


    return 0;
}