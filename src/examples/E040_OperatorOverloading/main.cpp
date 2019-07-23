/**
 * Operator overloading example
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

// Overloaded for addition(+), subtraction(-)
// division(/) and multiplication(*) operators
class Temperature
{
private:
    int m_Value;
public:
    Temperature(int value) : m_Value(value) { }

    int GetValue() const {
        return m_Value;
    }

    Temperature operator-(const Temperature& other) const {
        return Temperature(this->m_Value - other.m_Value);
    }

    Temperature operator+(const Temperature& other) const {
        return Temperature(this->m_Value + other.m_Value);
    }

    Temperature operator/(const Temperature& other) const {
        return Temperature(this->m_Value / other.m_Value);
    }

    Temperature operator*(const Temperature& other) const {
        return Temperature(this->m_Value * other.m_Value);
    }

    Temperature operator%(const Temperature& other) const {
        return Temperature(this->m_Value % other.m_Value);
    }
};

int main() {
    Temperature t1(8);
    Temperature t2(5);

    Temperature t3 = t1 - t2;
    std::cout << t3.GetValue() << std::endl;

    t3 = t1 + t2;
    std::cout << t3.GetValue() << std::endl;

    t3 = t1 / t2;
    std::cout << t3.GetValue() << std::endl;

    t3 = t1 * t2;
    std::cout << t3.GetValue() << std::endl;

    t3 = t1 % t2;
    std::cout << t3.GetValue() << std::endl;

    return 0;
}

