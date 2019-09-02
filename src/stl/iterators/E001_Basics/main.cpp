/**
 * Iterators example
 */

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = { 3, 4, 5, 6, 7 };
    auto iter = v.begin();

    for (; iter != v.end(); iter++) {
        std::cout << std::distance(v.begin(), iter) + 1 << "-th: " << *iter << std::endl;
    }

    return 0;
}