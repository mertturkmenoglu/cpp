#include <utility>

/**
 * friend function example
 * 
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */
#include <iostream>
#include <string>

// Class definition
class Person {
private:
    std::string name;
    int age;
public:
    // Constructor
    Person(std::string name, int age): name(std::move(name)), age(age) { }
    
    //friend function declaration
    friend void printInfo(const Person&);
};

// Friend function definition
void printInfo(const Person& p) {
    std::cout << "Name: " << p.name << " Age: " << p.age << std::endl;
}

int main() {
    Person p("John", 40);
    std::cout<<"Personal info: "<< std::endl;
    printInfo(p);

    return 0;
}