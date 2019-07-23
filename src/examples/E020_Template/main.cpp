/**
 * Function template example
 * 
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <string>
#include <cmath>


// A generic function to determine maximum of two value
template <class T>
int findMax(T first, T second) {
    return (first > second) ? 0 : 1;
}

// First class. It represents a complex number.
class Complex {
public:
    double real;
    double imag;

    Complex(double real, double imag) : real(real), imag(imag) { }

    double magnitude() {
        return sqrt((this->real * this->real) + (this->imag * this->imag));
    }

    inline bool operator>(Complex &other) {
        return (this->magnitude() > other.magnitude());
    }

    inline bool operator<(Complex &other) {
        return (this->magnitude() < other.magnitude());
    }

    friend std::ostream &operator<<(std::ostream &output, const Complex &c) {
        std::string val;

        if (c.imag > 0) {
            val = (std::to_string(c.real) + "+" + std::to_string(c.imag) + "i");
        } else if (c.imag < 0) {
            val = (std::to_string(c.real) + ""  + std::to_string(c.imag) + "i");
        } else {
            val = (std::to_string(c.real));
        }

        output << val;
        return output;
    }

    friend std::istream &operator>>(std::istream &input, Complex &c) {
        input >> c.real >> c.imag;
        return input;
    }
};

// Second class. It represents a number and its reading
class Number {
public:
    double value;
    std::string reading;

    Number(double value, std::string reading) : 
        value(value), reading(std::move(reading)) { }

    inline bool operator>(Number &other) {
        return (this->value > other.value);
    }

    inline bool operator<(Number &other) {
        return (this->value < other.value);
    }

    friend std::ostream &operator<<(std::ostream &output, const Number &n) {
        output << std::to_string(n.value) << " : " << n.reading;
        return output;
    }

    friend std::istream &operator>>(std::istream &input, Number &n) {
        input >> n.value >> n.reading;
        return input;
    }
};

// Driver code
int main() {
    Complex c1(3, 4);
    Complex c2(1, -2);

    Number n1(15, "fifteen");
    Number n2(3, "three");

    std::cout << c1 << " Magnitude: " << c1.magnitude() << std::endl;
    std::cout << c2 << " Magnitude: " << c2.magnitude() << std::endl;

    std::cout << n1 << std::endl << n2 << std::endl;

    std::cout << c1 << " --- " << c2 << ": " << findMax(c1, c2) << std::endl;
    std::cout << n1 << " --- " << n2 << ": " << findMax(n1, n2) << std::endl;

    return 0;
}