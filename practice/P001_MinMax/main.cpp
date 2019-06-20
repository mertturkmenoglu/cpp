/**
 * Practice 001: Minimum Maximum Functions
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

template<class T>
inline const T& Min(const T& a, const T& b) {
    return (a < b)? a : b;
}

template<class T>
inline const T& Max(const T& a, const T& b) {
    return (a > b)? a : b;
}

int main() {

    int max1 = Max(3, 1);
    double max2 = Max(2.3, 5.1);

    int min1 = Min(-1, 4);
    float min2 = Min(3.2f, 6.99f);

    std::cout << max1 << std::endl;
    std::cout << max2 << std::endl;
    std::cout << min1 << std::endl;
    std::cout << min2 << std::endl;

    return 0;
}

