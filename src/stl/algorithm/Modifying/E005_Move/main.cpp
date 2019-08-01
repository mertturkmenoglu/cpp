/**
 * move() example
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <vector>


void print_vector(const std::string& container_name, const std::vector<std::string>::iterator& begin, const std::vector<std::string>::iterator& end) {
    std::cout << container_name << ": " << std::endl;

    for(auto a = begin; a != end; a++) {
        std::cout << "<" << *a << ">";
    }

    std::cout << std::endl;
}


int main() {
    std::vector<std::string> first = { "emily", "diana", "barbara" };
    std::vector<std::string> second (3);

    print_vector("First", first.begin(), first.end());
    print_vector("Second", second.begin(), second.end());
    std::cout << "----------------" << std::endl;

    std::move(first.begin(), first.end(), second.begin());

    print_vector("First", first.begin(), first.end());
    print_vector("Second", second.begin(), second.end());
    std::cout << "First size: " << first.size() << std::endl;
    std::cout << "Second size: " << second.size() << std::endl;
    std::cout << "----------------" << std::endl;

    first = std::move(second);

    print_vector("First", first.begin(), first.end());
    print_vector("Second", second.begin(), second.end()); // NOLINT(bugprone-use-after-move,hicpp-invalid-access-moved)
    std::cout << "First size: " << first.size() << std::endl;
    std::cout << "Second size: " << second.size() << std::endl;
    std::cout << "----------------" << std::endl;

    return 0;
}
