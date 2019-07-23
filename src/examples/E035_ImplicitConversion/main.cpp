#include <utility>

/**
 * Implicit type conversion example
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

class Person
{
private:
    std::string m_Name;
    int m_Age;
public:
    Person(std::string  name)
        : m_Name(std::move(name)), m_Age(-1) { }

    Person(int age)
        : m_Name(""), m_Age(age) { }
};

void printPerson(Person p) {
    std::cout << "printPerson()" << std::endl;
}

int main() {
    Person j("John");
    Person e = std::string("Emily");
    Person f = 20;

    printPerson(j);
    printPerson(e);
    printPerson(f);
    printPerson(12);
    //printPerson("Raskolnikov");

    return 0;
}