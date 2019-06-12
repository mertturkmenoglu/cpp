/**
 * Namespace example
 * 
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

namespace integer {
    void printType() {
        std::cout << "Integer" << std::endl;
    }
}

namespace string {
    void printType() {
        std::cout << "String" << std::endl;
    }
}

// Driver code
int main() {
    integer::printType();
    string::printType();

    return 0;
}
