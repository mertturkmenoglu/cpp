/**
 * Sorting example
 */

#include <iostream>
#include <vector>
#include <algorithm>

void print_all(const std::vector<int>& vec)
{
    for (auto element : vec)
    {
        std::cout << element << "\t";
    }

    std::cout << std::endl;
}

int main()
{
    std::vector<int> vec = { 3, 2, 1, 5, 2, 2, 4, 6 };
    print_all(vec);

    std::sort(vec.begin(), vec.end());

    print_all(vec);
    std::cout << "-------" << std::endl;

    vec = { 3, 2, 1, 5, 2, 2, 4, 6 };
    print_all(vec);

    // You can give a comparator function
    std::sort(vec.begin(), vec.end(), std::greater<>());

    print_all(vec);
    std::cout << "-------" << std::endl;

    vec = { 3, 2, 1, 5, 2, 2, 4, 6 };
    print_all(vec);

    // You can give a comparator lambda function
    std::sort(vec.begin(), vec.end(), [](int a, int b)
    {
        return a < b;
    });

    print_all(vec);

    return 0;
}

