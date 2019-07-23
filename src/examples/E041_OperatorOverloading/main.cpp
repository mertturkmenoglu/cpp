/**
 * Operator overloading example
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

class Temperature
{
private:
    int m_Value;
public:
    explicit Temperature(int value) : m_Value(value) { }

    int GetValue() const {
        return m_Value;
    }

    bool operator<(const Temperature& other) const {
        return (this->m_Value < other.m_Value);
    }

    bool operator>(const Temperature& other) const {
        return (this->m_Value + other.m_Value);
    }

    bool operator<=(const Temperature& other) const {
        return (this->m_Value <= other.m_Value);
    }

    bool operator>=(const Temperature& other) const {
        return (this->m_Value >= other.m_Value);
    }

    bool operator==(const Temperature& other) const {
        return (this->m_Value == other.m_Value);
    }

    bool operator!=(const Temperature& other) const {
        return (this->m_Value != other.m_Value);
    }
};

int main() {
    Temperature t1(8);
    Temperature t2(5);

    std::cout << ((t1 < t2)? "True" : "False") << std::endl;
    std::cout << ((t1 > t2)? "True" : "False") << std::endl;
    std::cout << ((t1 <= t2)? "True" : "False") << std::endl;
    std::cout << ((t1 >= t2)? "True" : "False") << std::endl;
    std::cout << ((t1 == t2)? "True" : "False") << std::endl;
    std::cout << ((t1 != t2)? "True" : "False") << std::endl;

    return 0;
}

