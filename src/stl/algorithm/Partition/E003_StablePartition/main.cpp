/**
 * stable_partition() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <chrono>
#include <iostream>
#include <iterator>
#include <random>
#include <vector>

int main() {
    std::vector<int> vector = { 5, 1, 6, 2, 7, 3, 8, 4 };
    std::shuffle(vector.begin(), vector.end(), std::default_random_engine(std::chrono::system_clock::now().time_since_epoch().count()));
    std::vector<int> v_copy(vector.size());

    std::copy(vector.begin(), vector.end(), v_copy.begin());

    std::cout << "Vector: ";
    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::partition(vector.begin(), vector.end(), [](int n) { return n > 5; });

    std::cout << "Using std::partition(): ";
    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::stable_partition(v_copy.begin(), v_copy.end(), [](int n) { return n > 5; });
    std::cout << "Using std::stable_partition(): ";
    std::copy(v_copy.begin(), v_copy.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}
