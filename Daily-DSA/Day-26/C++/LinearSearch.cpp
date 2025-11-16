
// Find the Unique Element

#include <iostream>
#include <vector>
using namespace std;

class FindUnique {
    public:
        int xor_tool = 0;

        void unique(vector<int> array) {
            for(int val : array){
                xor_tool ^= val;
            }
            cout << "The Unique element is :- " << xor_tool << "\n";
        }
};

int main () {
    vector<int> array = {2, 3, 6, 5, 3, 7, 6, 7, 2};

    FindUnique Element;
    Element.unique(array);

    return 0;
}