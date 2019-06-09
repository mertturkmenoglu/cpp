/**
 * Multi level inheritance example
 * 
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

// Parent class
class Animal {
public:
    void eat() {
        std::cout << "Eat function" << std::endl;
    }
};

// First level inheritance
class Squirrel: public Animal {
public:
    void makeNoise() {
        std::cout << "Little annoying sounds" << std::endl;
    }
};

// Second level inheritance
class LittleSquirrel: public Squirrel {
public:
    void callMamaSquirrel() {
        std::cout << "duh" << std::endl;
    }
};

// Driver code
int main() {
    LittleSquirrel little;
    little.eat();
    little.makeNoise();
    little.callMamaSquirrel();

    return 0;
}