/**
 * Operator Overloading example
 * g++ main.cpp std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
 
class Temperature
{
private:
    double m_Value;
public:
    Temperature() : m_Value(-273.15) { }
    
    explicit Temperature(double value) : m_Value(value) { }
    
    friend std::ostream& operator<<(std::ostream& output, const Temperature& T) {
        output << T.m_Value;
        return output;
    }

    friend std::istream& operator>>(std::istream& input, Temperature& T) {
        input >> T.m_Value;
        return input;
    }
};


int main() {
    Temperature t;
    std::cout << "Enter temperature: " << std::endl;
    std::cin >> t;

    std::cout << "Temperature: " << t << std::endl;
    return 0;
}

