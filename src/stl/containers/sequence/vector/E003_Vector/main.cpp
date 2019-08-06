/**
 * STL Container: Vector example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <vector>

template<typename T> std::ostream& operator<<(std::ostream& s, const std::vector<T>& v) {
    s.put('<');
    for (const auto& e : v) {
        s << " " << e;
    }
    return s << " >";
}

int main() {
    std::vector<std::string> names;
    names.assign(5, "emily");

    std::cout << names << std::endl;

    names = {"emily", "diana", "barbara", "selina", "dinah" };

    std::cout << "At: " << names.at(3) << std::endl;
    std::cout << "[]: " << names[3] << std::endl;
    std::cout << "front: " << names.front() << std::endl;
    std::cout << "back:  " << names.back() << std::endl;
    std::cout << "data:  " << *names.data() << std::endl;

    if (names.begin() != names.end()) {
        std::cout << "Vector is not empty" << std::endl;
    } else {
        std::cout << "Vector is empty" << std::endl;
    }

    std::cout << "rbegin: " << *names.rbegin() << std::endl;
    std::cout << "rend:   " << *names.rend() << std::endl;

    return 0;
}
