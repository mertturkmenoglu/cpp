/**
 * count() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

int main() {
    std::vector<int> numbers = { 3, 3, 3, 3, 4, 1, 1, 5, 3, 7, 7, 7, 7, 4, 1, 3 };
    std::unordered_map<int, int> map;

    std::for_each(numbers.begin(), numbers.end(), [&map, &numbers](int n) {
        map.insert(std::make_pair(n, std::count(numbers.begin(), numbers.end(), n)));
    });


    for (auto& mapIter : map) {
        std::cout << "Element: " << mapIter.first << " Count: " << mapIter.second << std::endl;
    }

    return 0;
}