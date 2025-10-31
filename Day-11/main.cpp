#include <iostream>
#include <vector>

int main()
{

    std::vector<int> array = {1, 2, 3, 4, 5};
    std::vector<int> prefix;

    int size1 = sizeof(array) * sizeof(array[0]) / 2;
    int size2 = sizeof(prefix) * sizeof(prefix[0]) / 2;
    int n = array.size();

    if (prefix > array)
    {
        for (int i = 0; n < i; i++)
        {
            prefix.push_back(prefix[i] += array[i - 1] + array[i]);
        }

        for (int val : prefix)
        {
            std::cout << val << " ";
        }
    }
    else
    {
        std::cout << "Size is less" << std::endl;
    }
    return 0;
}