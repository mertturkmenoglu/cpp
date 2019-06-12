/**
 * Overloading example
 * 
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

class Complex {
public:
    double real;
    double imaginary;

    Complex(double real, double imaginary) : real(real), imaginary(imaginary) { }

    // Addition operator overloading
    Complex operator+(Complex other) {
        return Complex(this->real + other.real, this->imaginary + other.imaginary);
    }

    // Subtraction operator overloading
    Complex operator-(Complex other) {
        return Complex(this->real - other.real, this->imaginary - other.imaginary);
    }

    // Casting operator overloading
    operator std::string() {
        if (imaginary > 0) {
            return (std::to_string(real) + " +" + std::to_string(imaginary) + "i");
        } else if (imaginary < 0) {
            return (std::to_string(real) + " " + std::to_string(imaginary) + "i");
        } else {
            return (std::to_string(real));
        }
    }
};

// Driver code
int main() {
    Complex c1(3, 1);
    Complex c2(4, -1);

    std::cout << std::string(c1) << std::endl << std::string(c2) << std::endl;
    std::cout << std::string(c1+c2) << std::endl;

    return 0;
}