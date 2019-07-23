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
    virtual const char *what() const throw() {
        return "Special Exception Occured";
    }
};

// Return area of a square
double area(double sideLength) {
    if (sideLength <= 0) {
        throw "Side length must be positive";
    }

    return (sideLength * sideLength);
}

double specialArea(double sideLength) {
    if (sideLength <= 0) {
        throw SpecialException();
    }

    return (sideLength * sideLength);
}

int main () {
    double sides[] = {5, 7, 2, 0, 4};
    double a;

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