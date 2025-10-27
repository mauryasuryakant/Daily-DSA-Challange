
// Calculate the Sum and Average of Array Elements

#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> array = {1, 2, 3, 41, 5};
    int sum = 0;
    float Average = 0;

    int n = array.size();

    for(int i = 0; i < n; i++) {
        sum = sum + array[i];
    }
    
    Average = (float) sum/n;

    cout << endl;
    cout << "Sum is :- " << sum << endl;
    cout << "Average is :- " << Average << endl;
    return 0;
}