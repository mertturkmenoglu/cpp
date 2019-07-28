/**
 * Friend function example
 * 
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

class SecondClass;

class FirstClass {
public:
    void printInfo(SecondClass &sc);
};

class SecondClass {
private:
    int number;
public:
    SecondClass() = default;
    explicit SecondClass(int number) {
        this->number = number;
    }

    friend void FirstClass::printInfo(SecondClass &sc);
};

void FirstClass::printInfo(SecondClass &sc) {
    std::cout << "I am at first class" << std::endl;
    std::cout << sc.number << std::endl;
}

// Driver code
int main() {
    FirstClass fc;
    SecondClass sc(10);
    
    fc.printInfo(sc);

    return 0;
}