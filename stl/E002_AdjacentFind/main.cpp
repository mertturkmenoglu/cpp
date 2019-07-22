/**
 * adjacent_find() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int newints[] = {1, 5, 1, 20, 20, 50, 0, 0, 3};
    std::vector<int> newVector(newints, newints + 9);
    
    // Print elemets
    std::for_each(newVector.begin(), newVector.end(), [](int it) {
        std::cout << it << '\t';
    });

    std::cout << std::endl;

    // Normal call
    auto iter = std::adjacent_find(newVector.begin(), newVector.end());

    // If iterator is not equal to end of the list, it is the element
    if (iter != newVector.end())
    {
        std::cout << "First pair of sequence that is repeated is:" << *iter << "\n";
    }

    // You may provide your own comparator function
    iter = std::adjacent_find(++iter, newVector.end(), [](int a, int b) { 
        return a == b; 
    });

    if (iter != newVector.end()) {
        std::cout << "Second pair of sequence that is repeated is:" << *iter << "\n";
    }

    return 0;
}

