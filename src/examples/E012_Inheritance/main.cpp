/**
 * Inheritance ambiguity resolution example
 * 
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

class A {
public:
    void classInfo() {
        std::cout << "I'm at class A" << std::endl;
    }
};

class B {
public:
    void classInfo() {
        std::cout << "I'm at class B" << std::endl;
    }
};

class C : public A, public B {
public:
    void printInfo() {
        A::classInfo();
        B::classInfo();
    }
};

int main() {
    C c;
    c.printInfo();

    return 0;
}