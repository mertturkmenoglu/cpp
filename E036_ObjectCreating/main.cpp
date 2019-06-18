/**
 * Object creating example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

class Person
{
private:
    std::string m_Name;
public:
    Person() : m_Name("No name") { }
    Person(const std::string& name) : m_Name(name) { }
    const std::string& GetName() const { return m_Name; }
};

int main() {

    // Creates on stack
    Person p1;                  // Calls Person() constructor
    Person p2("John");          // Calls Person(const std::string& name) constructor
    Person p3 = Person("Bruce"); // Calls Person(const std::string& name) constructor

    std::cout << "Name: " << p1.GetName() << std::endl;
    std::cout << "Name: " << p2.GetName() << std::endl;
    std::cout << "Name: " << p3.GetName() << std::endl;

    // Creates on heap
    Person* p4 = new Person();
    Person* p5 = new Person("Emily");
    
    std::cout << "Name: " << p4->GetName() << std::endl;
    std::cout << "Name: " << (*p5).GetName() << std::endl;

    delete p4;
    delete p5;

    return 0;
}

