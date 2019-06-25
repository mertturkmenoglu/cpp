/**
 * Sorting example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

void printAll(std::vector<int> vec) {
    for (auto element : vec) {
        std::cout << element << "\t";
    }

    std::cout << std::endl;
}

int main() {
    std::vector<int> vec = {3, 2, 1, 5, 2, 2, 4, 6};
    printAll(vec);
    std::sort(vec.begin(), vec.end());
    printAll(vec);



    std::cout << "-------" << std::endl;



    vec = {3, 2, 1, 5, 2, 2, 4, 6};
    printAll(vec);
    std::sort(vec.begin(), vec.end(), std::greater<int>());
    printAll(vec);



    std::cout << "-------" << std::endl;



    vec = {3, 2, 1, 5, 2, 2, 4, 6};
    printAll(vec);
    std::sort(vec.begin(), vec.end(), [](int a, int b){
        return a < b;
    });
    printAll(vec);

    return 0;
}

