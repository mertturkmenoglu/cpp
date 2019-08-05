/**
 * STL Container: Array example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::array<int, 5> arr = { 3, 6, 2, 9, 1 };
    std::array<int, 5> other = { };

    std::cout << "Array: ";
    std::copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::cout << "Array.at(3): " << arr.at(3) << std::endl;
    std::cout << "Array[3]: " << arr[3] << std::endl;

    std::cout << "Array.front(): " << arr.front() << std::endl;
    std::cout << "Array.back():  " << arr.back() << std::endl;

    std::cout << "Array.data(): " << arr.data() << " : " <<  *arr.data() << std::endl;

    std::cout << "Array.cbegin(): " << *arr.cbegin() << std::endl;
    std::cout << "Array.cend(): " << *(arr.cend() - 1) << std::endl;

    std::cout << "Array.crbegin(): " << *arr.crbegin() << std::endl;
    std::cout << "Array.crend(): " << *(arr.crend() - 1)  << std::endl;

    std::cout << "Array.empty(): " << std::boolalpha << arr.empty() << std::endl;
    std::cout << "Array.size(): " << arr.size() << std::endl;
    std::cout << "Array.max_size(): " << arr.max_size() << std::endl;

    return 0;
}
