
// Find the Equilibrium Index of an Array

#include <iostream>
#include <vector>

int Equilibrium(int array[], int n)
{
    int Equilibrium = 0;
    int temp1 = 0;
    int temp2 = 0;

    for (int i = 0; i < n / 2; i++)
    {
        temp1 += array[i];
        Equilibrium = array[i];
    }

    for (int i = Equilibrium + 1; i < n; i++)
    {
        temp2 += array[i];
    }

    if (temp1 == temp2)
    {
        return Equilibrium;
    }

    return -1;
}

int main()
{
    std::vector<int> array = {-7, 1, 5, 2, -4, 3, 0};

    int n = array.size();

    std::cout << "Equilibrium :- " << Equilibrium(array.data(), n);

    return 0;
}