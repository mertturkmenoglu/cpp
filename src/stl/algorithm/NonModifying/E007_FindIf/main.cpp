/**
 * find() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    unsigned long n = std::rand() % 10;
    std::vector<int> numbers(n);

    for (unsigned long i = 0; i < n; i++) {
        numbers.push_back(std::rand() % n);
    }

    int index = 0;
    for (int num : numbers) {
        std::cout << index++ << ": " << num << std::endl;
    }

    auto item = std::find_if(numbers.begin(), numbers.end(), [](int i) {
        return i % 2 != 0;
    });

    if (item != numbers.end()) {
        std::cout << "Number: " << *item << std::endl;
    } else {
        std::cout << "No occurrence found" << std::endl;
    }

    return 0;
}