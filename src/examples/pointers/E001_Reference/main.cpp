/**
 * Reference example
 */

#include <iostream>

void swap(int& first, int& second);

int main()
{
    int var = 10;
    int& ref = var;

    while (var < 100)
    {
        std::cout << "Variable: " << var << std::endl;
        std::cout << "Reference: " << ref << std::endl;
        std::cout << "******" << std::endl;
        ref += 10;
    }

    int num_1 = 10;
    int num_2 = 20;
    int& ref_1 = num_1;
    int& ref_2 = num_2;

    std::cout << "Number1: " << num_1 << "\tNumber2: " << num_2 << std::endl;

    swap(num_1, num_2);

    std::cout << "Number1: " << num_1 << "\tNumber2: " << num_2 << std::endl;

    return 0;
}

void swap(int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}