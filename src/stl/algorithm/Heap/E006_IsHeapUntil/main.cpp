/**
 * is_heap_until() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> vector = { 3, 1, 4, 1, 5, 9 };

    std::cout << "Initial vector: ";
    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::make_heap(vector.begin(), vector.end());

    std::cout << "After heapify:  ";
    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    vector.push_back(5);
    vector.push_back(6);

    std::cout << "After push_back():  ";
    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    auto iter = std::is_heap_until(vector.begin(), vector.end());

    if (iter == vector.end()) {
        std::cout << "Heap" << std::endl;
    } else {
        std::cout << "Not Heap" << std::endl;
        std::cout << "Print heap part" << std::endl;
        for (auto i = vector.begin(); i != iter; i++) {
            std::cout << *i << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
