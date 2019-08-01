/**
 * Prime number example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <list>

int main() {
    int max_prime = -1;
    std::vector<int> vec = { 2, 3, 1, 0, 2, 2, 13, 7, 9, 11, 4, -2, 3};

    std::for_each(vec.begin(), vec.end(), [&max_prime](const int& num){
        if (num > max_prime) {
            std::list<int> l(static_cast<unsigned long>(num - 1));
            std::iota(l.begin(), l.end(), 2);

            bool result = std::any_of(l.begin(), l.end(), [num](int i) {
                return num % i == 0;
            });

            if (result) {
                max_prime = num;
            }
        }
    });

    std::cout << max_prime << std::endl;

    return 0;
}
