/**
 * unique_copy() example
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> vector = { 10, 10, 10, 20, 30, 10, 40, 20, 50 , 30, 40, 40, 50, 10, 60, 70, 70 };
    std::sort(vector.begin(), vector.end());
    std::vector<int> result(vector.size());

    auto iter = std::unique_copy(vector.begin(), vector.end(), result.begin());
    result.erase(iter, result.end());

    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    std::copy(result.begin(), result.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}