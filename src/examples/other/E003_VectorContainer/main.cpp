/**
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 */

#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v1;

    for (int i = 1; i <= 10; i++)
        v1.push_back(i);

    std::cout << "begin: ";
    for (int & i : v1)
        std::cout << i << " ";

    std::cout << std::endl << "cbegin: ";
    for (int i : v1)
        std::cout << i << " ";

    std::cout << std::endl << "rbgin: ";
    for (auto ir = v1.rbegin(); ir != v1.rend(); ++ir)
        std::cout << *ir << " ";

    std::cout << std::endl << "crbegin: ";
    for (auto ir = v1.crbegin(); ir != v1.crend(); ++ir)
        std::cout << *ir << " ";

    std::cout << std::endl;
    return 0;
}