/**
 * Operator Overloading example
 * g++ main.cpp std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

class Temperature
{
private:
    int m_Value;
public:
    Temperature() : m_Value(-273) { }

    Temperature(int value) : m_Value(value) { }

    int GetValue() const {
        return m_Value;
    }

    void SetValue(int value) {
        m_Value = value;
    }

    void operator=(const Temperature& other) {
        m_Value = other.m_Value;
    }

    void operator+=(const Temperature& other) {
        m_Value += other.m_Value;
    }

    void operator-=(const Temperature& other) {
        m_Value -= other.m_Value;
    }

    void operator*=(const Temperature& other) {
        m_Value *= other.m_Value;
    }

    void operator/=(const Temperature& other) {
        m_Value /= other.m_Value;
    }

    void operator%=(const Temperature& other) {
        m_Value %= other.m_Value;
    }

    void operator^=(const Temperature& other) {
        m_Value ^= other.m_Value;
    }

    void operator&=(const Temperature& other) {
        m_Value &= other.m_Value;
    }

    void operator|=(const Temperature& other) {
        m_Value |= other.m_Value;
    }
};

int main() {
    Temperature t1(8);
    Temperature t2(5);
    std::cout << "T1: " << t1.GetValue() << std::endl;
    std::cout << "T2: " << t2.GetValue() << std::endl;
    std::cout << "--------" << std::endl;

    t1 = t2;
    std::cout << "T1: " << t1.GetValue() << std::endl;
    std::cout << "T2: " << t2.GetValue() << std::endl;
    std::cout << "--------" << std::endl;

    t1.SetValue(8);
    t2.SetValue(5);
    t1 += t2;
    std::cout << "T1: " << t1.GetValue() << std::endl;
    std::cout << "T2: " << t2.GetValue() << std::endl;
    std::cout << "--------" << std::endl;

    t1.SetValue(8);
    t2.SetValue(5);
    t1 -= t2;
    std::cout << "T1: " << t1.GetValue() << std::endl;
    std::cout << "T2: " << t2.GetValue() << std::endl;
    std::cout << "--------" << std::endl;

    t1.SetValue(8);
    t2.SetValue(5);
    t1 *= t2;
    std::cout << "T1: " << t1.GetValue() << std::endl;
    std::cout << "T2: " << t2.GetValue() << std::endl;
    std::cout << "--------" << std::endl;

    t1.SetValue(8);
    t2.SetValue(5);
    t1 /= t2;
    std::cout << "T1: " << t1.GetValue() << std::endl;
    std::cout << "T2: " << t2.GetValue() << std::endl;
    std::cout << "--------" << std::endl;

    t1.SetValue(8);
    t2.SetValue(5);
    t1 %= t2;
    std::cout << "T1: " << t1.GetValue() << std::endl;
    std::cout << "T2: " << t2.GetValue() << std::endl;
    std::cout << "--------" << std::endl;

    t1.SetValue(8);
    t2.SetValue(5);
    t1 ^= t2;
    std::cout << "T1: " << t1.GetValue() << std::endl;
    std::cout << "T2: " << t2.GetValue() << std::endl;
    std::cout << "--------" << std::endl;

    t1.SetValue(8);
    t2.SetValue(5);
    t1 &= t2;
    std::cout << "T1: " << t1.GetValue() << std::endl;
    std::cout << "T2: " << t2.GetValue() << std::endl;
    std::cout << "--------" << std::endl;

    t1.SetValue(8);
    t2.SetValue(5);
    t1 |= t2;
    std::cout << "T1: " << t1.GetValue() << std::endl;
    std::cout << "T2: " << t2.GetValue() << std::endl;
    std::cout << "--------" << std::endl;

    return 0;
}
