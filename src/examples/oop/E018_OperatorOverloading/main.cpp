/**
 * Operator overloading example
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

// Overloaded for minus(-), increment(++) and
// decrement(--) operators
class Temperature
{
private:
    double m_Value;
public:
    Temperature(double value) : m_Value(value) { }

    double GetValue() const {
        return m_Value;
    }

    void operator- () {
        m_Value = -m_Value;
    }

    // Pre-increment, return object
    Temperature operator++() {
        return {++m_Value};
    }

    // Post-increment, return object
    Temperature operator++(int) {
        return Temperature(m_Value++);
    }

    // Pre-decrement, return object
    Temperature operator--() {
        return {--m_Value};
    }

    // Post-decrement, return object
    Temperature operator--(int) {
        return Temperature(m_Value--);
    }
};

int main() {
    Temperature t(32);
    std::cout << t.GetValue() << std::endl;

    -t;
    std::cout << t.GetValue() << std::endl;

    t++;
    std::cout << t.GetValue() << std::endl;
    
    Temperature t2 = t++;
    std::cout << t2.GetValue() << std::endl;

    std::cout << (--t2).GetValue() << std::endl;

    return 0;
}

