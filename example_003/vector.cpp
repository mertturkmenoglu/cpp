#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v1;

    for (int i = 1; i <= 10; i++)
        v1.push_back(i);

    std::cout << "begin: ";
    for (auto i = v1.begin(); i != v1.end(); ++i)
        std::cout << *i << " ";

    std::cout << std::endl << "cbegin: ";
    for (auto i = v1.cbegin(); i != v1.cend(); ++i)
        std::cout << *i << " ";

    std::cout << std::endl << "rbgin: ";
    for (auto ir = v1.rbegin(); ir != v1.rend(); ++ir)
        std::cout << *ir << " ";

    std::cout << std::endl << "crbegin: ";
    for (auto ir = v1.crbegin(); ir != v1.crend(); ++ir)
        std::cout << *ir << " ";

    std::cout << std::endl;
    return 0;
}