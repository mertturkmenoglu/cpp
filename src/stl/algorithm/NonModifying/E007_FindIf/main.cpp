/**
 * find() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

int main() {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> random(0, 10);

    int n = random(mt);
    std::vector<int> numbers(n);

    for (unsigned long i = 0; i < n; i++) {
        numbers.push_back(random(mt));
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