/**
 * Operator overloading example
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

class Player
{
private:
    bool m_Alive;
public:
    explicit Player(bool alive) : m_Alive(alive) { }

    bool GetStatus() const {
        return m_Alive;
    }

    bool operator^(const Player& other) const {
        return (this->m_Alive ^ other.m_Alive);
    }

    bool operator&(const Player& other) const {
        return (this->m_Alive & other.m_Alive);
    }

    bool operator|(const Player& other) const {
        return (this->m_Alive | other.m_Alive);
    }

    void operator~() {
        m_Alive = !m_Alive;
    }

    bool operator!() {
        return !m_Alive;
    }
};

int main() {
    Player p1(true);
    Player p2(false);

    std::cout << ((p1 ^ p2)? "True" : "False") << std::endl;
    std::cout << ((p1 & p2)? "True" : "False") << std::endl;
    std::cout << ((p1 | p2)? "True" : "False") << std::endl;
    ~p1;
    std::cout << (p1.GetStatus() ? "True" : "False") << std::endl;
    std::cout << ((!p2)? "True" : "False") << std::endl;

    return 0;
}

