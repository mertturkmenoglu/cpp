/**
 * Single Inheritance Example
 * 
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <string>

// Parent class
class Employee {
public:
    const char *name;
    float salary;
    int age;

    Employee(const char *name, float salary, int age) : name(name), salary(salary), age(age) { }

    void makeRaise(float extra) {
        salary += extra;
    }

    void printAge() {
        std::cout << age << std::endl;
    }

    const char *getName() const {
        return name;
    }

    float getSalary() const {
        return salary;
    }

    int getAge() const {
        return age;
    }
};

// First child class, private single inheritance
// Members become private
class Programmer: private Employee {
public:
    Programmer(const char *name, float salary, int age) : Employee(name, salary, age) {}

    void makeDoubleRaise(float bonus) {
        salary += bonus * 2;
    }

    void printInfo() {
        std::cout << name << " " << salary << " " << age << std::endl;
    };
};

// Second child class, public single inheritance
// Members become public
class Designer: public Employee {
public:
    Designer(const char *name, float salary, int age) : Employee(name, salary, age) {}

    int createIdea(int value) {
        return value * 2;
    }

    void printInfo() {
        std::cout << name << " " << salary << " " << age << std::endl;
    }
};

// Driver code
int main() {  
    Programmer programmer("john", 400, 40);
    programmer.printInfo();
    programmer.makeDoubleRaise(100);
    programmer.printInfo();

    Designer designer("emily", 350, 30);
    designer.printInfo();
    int value = designer.createIdea(10);
    std::cout << value << std::endl;
    designer.makeRaise(50);
    std::cout << designer.salary << std::endl;
    std::cout << designer.getAge() << std::endl;
}  