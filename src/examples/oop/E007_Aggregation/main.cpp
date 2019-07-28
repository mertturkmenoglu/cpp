/**
 * Aggregation(has-a) example
 * 
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

class Address {
public:
    std::string street;
    int no;
    std::string city;

    Address(std::string street, int no, std::string city) : 
        street(std::move(street)), no(no), city(std::move(city)) { }
};

class Student {
private:
    Address* address;
public:
    int id;
    std::string name;

    Student(Address *address, int id, std::string name) : 
        address(address), id(id), name(std::move(name)) { }

    void printInfo() {
        std::cout << id << " " << name << " " << std::endl;
        std::cout << address->street << " " << address->no << " " << address->city << std::endl;
    }
};

// Driver code
int main() {
    Address address = Address("Ataturk Street", 19, "Istanbul");
    Student student = Student(&address, 1923, "Kemal");
    student.printInfo();

    return 0;
}