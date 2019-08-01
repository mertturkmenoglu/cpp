/**
 * swap() example
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <vector>


int main() {
    int a = 3;
    int b = 5;

    std::cout << "a: " << a << " b: " << b << std::endl;
    std::swap(a, b);
    std::cout << "a: " << a << " b: " << b << std::endl;

    std::vector<int> first = { 1, 2, 3 };
    std::vector<int> second = { 4, 5, 6 };

    std::cout << "First: ";
    for (const int& e : first) {
        std::cout << "<" << e << ">";
    }

    std::cout << std::endl;

    std::cout << "Second: ";
    for (const int& e : second) {
        std::cout << "<" << e << ">";
    }

    std::cout << std::endl;

    std::swap(first, second);

    std::cout << "First: ";
    for (const int& e : first) {
        std::cout << "<" << e << ">";
    }

    std::cout << std::endl;

    std::cout << "Second: ";
    for (const int& e : second) {
        std::cout << "<" << e << ">";
    }

    std::cout << std::endl;

    return 0;
}