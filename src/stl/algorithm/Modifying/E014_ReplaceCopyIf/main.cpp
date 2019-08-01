/**
 * replace_copy_if() example
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> vector = { 1, 1, 2, 3, 5, 8, 12, 21 };
    std::vector<int> result(vector.size());

    std::replace_copy_if(vector.begin(), vector.end(), result.begin(), [](int n) { return n == 1; }, 0);

    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    std::copy(result.begin(), result.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}