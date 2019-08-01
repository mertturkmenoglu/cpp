/**
 * move_backward() example
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> first = { "emily", "diana", "barbara"};
    std::vector<std::string> second = { "empty_slot", "empty_slot", "empty_slot", "empty_slot", "empty_slot" };

    std::for_each(first.begin(), first.end(), [](const std::string& str) {
        std::cout << "<" << str << ">";
    });

    std::cout << std::endl;

    std::for_each(second.begin(), second.end(), [](const std::string& str) {
        std::cout << "<" << str << ">";
    });

    std::cout << std::endl << std::endl << "----------------" << std::endl << std::endl;

    std::move_backward(first.begin(), first.end(), second.end());

    std::for_each(first.begin(), first.end(), [](const std::string& str) {
        std::cout << "<" << str << ">";
    });

    std::cout << std::endl;

    std::for_each(second.begin(), second.end(), [](const std::string& str) {
        std::cout << "<" << str << ">";
    });

    std::cout << std::endl;

    return 0;

}
