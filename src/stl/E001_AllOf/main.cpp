/**
 * all_of() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main() {

    std::vector<int> nums = {0, 2, 4, 6, 8};
    std::vector<int> odds = {1, 3, 5, 6, 7, 9};

    bool value = std::all_of(nums.begin(), nums.end(), [](int num) {
        return num % 2 == 0;
    });

    if (value) {
        std::cout << "All numbers are even" << std::endl;
    } else {
        std::cout << "At least one number is not even" << std::endl;
    }

    value = std::all_of(odds.begin(), odds.end(), [](int num) {
        return num % 2 != 0;
    });

    if (value) {
        std::cout << "All numbers are odd" << std::endl;
    } else {
        std::cout << "At least one number is not odd" << std::endl;
    }
    
    return 0;
}

