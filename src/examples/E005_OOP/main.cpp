/**
 * Object Oriented Programming Example
 * Basic class definition and instance creating
 * 
 * g++ main.cpp -g -o main
 * valgrind --leak-check=yes -v ./main
 */
#include <string>
#include <iostream>

class Student {
private:
    std::string name;
    int id;
public:
    Student(std::string name, int id) : name(std::move(name)), id(id) {}

    const std::string &getName() const {
        return name;
    }

    void setName(const std::string &_name) {
        Student::name = _name;
    }

    int getId() const {
        return id;
    }

    void setId(int _id) {
        Student::id = _id;
    }
};

int main() {
    Student student1("student1", 1);
    Student student2("student2", 2);

    std::cout << student1.getName() << " - " << student1.getId() << std::endl;
    std::cout << student2.getName() << " - " << student2.getId() << std::endl;

    return 0;
}