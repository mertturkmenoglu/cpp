/**
 * Overloading example
 * 
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <string>

class Complex {
public:
    double real;
    double imaginary;

    Complex(double real, double imaginary) : real(real), imaginary(imaginary) { }

    std::string toString() {
        return (std::to_string(real) + " " + std::to_string(imaginary));
    }
};

class Operations {
public:
    static Complex add(Complex first, Complex second) {
        return Complex(first.real + second.real, first.imaginary + second.imaginary);
    }

    static int add(int first, int second) {
        return (first + second);
    }

    static int add(int first, int second, int third) {
        return (first + second + third);
    }
};

// Driver code
int main() {
    Complex c1(3, 1);
    Complex c2(4, -1);

    std::cout << c1.toString() << std::endl << c2.toString() << std::endl;

    Operations op;
    Complex c3 = op.add(c1, c2);
    std::cout << c3.toString() << std::endl;

    std::cout << op.add(1, 2) << std::endl; 
    std::cout << op.add(1, 2, 3) << std::endl;

    return 0;
}