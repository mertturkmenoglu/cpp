/**
 * find() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = { 2, 7, 13, 21, 42, 34, -1, 0, 2019 };
    auto iter = std::find(numbers.begin(), numbers.end(), 42);

    int index = 0;

    std::for_each(numbers.begin(), numbers.end(), [&index](int num){
        std::cout << "Index: " << index++ << "\tElement: " << num << std::endl;
    });


    if (iter != numbers.end()) {
        std::cout << "Element found: " << *iter << std::endl;
        std::cout << "Index: " << iter - numbers.begin() << std::endl;
    } else {
        std::cout << "Element can not be found" << std::endl;
    }

    return 0;
}