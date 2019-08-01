/**
 * Memory Allocation example
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#define REALLY_BIG_NUMBER 0xfffffffffffff

// An example class to observe memory allocation on a complex type
class Example {
public:
    Example() {
        std::cout << "An Example Object created" << std::endl;
    }

    ~Example() {
        std::cout << "An Example Object destroyed" << std::endl;
    }

    static void printHello() {
        std::cout << "Hello" << std::endl;
    }
};

int main() {
    // Primitive type
    int *ptr = new int;
    *ptr = 5;

    std::cout << ptr << ": " << *ptr << std::endl;
    delete ptr;

    // Complex type
    auto example = new Example();
    Example::printHello();
    delete example;

    int *array = nullptr;

    try {
        // Array creation
        // It should produce an exception unless your machine
        // has this amount of memory...
        array = new int[REALLY_BIG_NUMBER];
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    if (array == nullptr) {
        std::cerr << "Error during memory allocation" << std::endl;
    } else {
        delete[] array;
    }

    return 0;
}


