/**
 * Templates example
 *
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

template <typename T>
T product(T first, T second) {
    return first * second;
}

template <int N, typename T>
class Array {
private:
    T array[N];
public:
    int GetN() const { return N; }
};

int main() {
    double b = product(1.4, 2.6);
    std::cout << b << std::endl;

    auto arr = Array<10, int>();
    std::cout << arr.GetN() << std::endl;
}