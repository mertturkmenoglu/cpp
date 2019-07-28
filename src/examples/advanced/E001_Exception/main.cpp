/**
 * Exception handling example
 * 
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <exception>

class SpecialException : public std::exception {
public:
    const char *what() const noexcept override {
        return "Special Exception Occurred";
    }
};

// Return area of a square
int area(int sideLength) {
    if (sideLength <= 0) {
        throw "Side length must be positive";
    }

    return (sideLength * sideLength);
}

int specialArea(int sideLength) {
    if (sideLength <= 0) {
        throw SpecialException();
    }

    return (sideLength * sideLength);
}

int main () {
    int sides[] = {5, 7, 2, 0, 4};
    int a;

    // Basic throw
    try {
        for (int side : sides) {
            a = area(side);
            std::cout << "Area of the square: " << a << std::endl;
        }
    } catch (const char* e) {
        std::cerr << e << std::endl;
    } catch (...) {
        std::cout << "Default catch block" << std::endl;
    }

    std::cout << "After first try-catch block" << std::endl;

    // User defined exception throw
    try {
        for (int side : sides) {
            a = specialArea(side);
            std::cout << "Area of the square: " << a << std::endl;
        }
    } catch (SpecialException& e) {
        std::cout << e.what() << std::endl;
    } catch (...) {
        std::cout << "Default catch block" << std::endl;
    }

    std::cout << "After second try-catch block" << std::endl;

    return 0;
}