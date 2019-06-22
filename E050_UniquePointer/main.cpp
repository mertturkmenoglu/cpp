/**
 * Unique pointer example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <memory>

class Person {
private:
 std::string name;
public:
    Person(const std::string& name) : name(name) {
      std::cout << "Person created" << std::endl;
    }

    ~Person() { std::cout << "Person deleted" << std::endl; }

    inline const std::string& GetName() const { return name; }
    inline void SetName(const std::string& name) { this->name = name; }
};

int main() {
    std::unique_ptr<int> p_int = std::make_unique<int>();

    *p_int = 5;
    std::cout << *p_int << std::endl;
    *p_int = 7;
    std::cout << *p_int << std::endl;

    std::cout << "Before block" << std::endl;
    {
        std::unique_ptr<Person> p_person = std::make_unique<Person>("Emily");
        std::cout << p_person->GetName() << std::endl;
        p_person->SetName(std::string("Cemre"));
        std::cout << p_person->GetName() << std::endl;
    }
    std::cout << "After block" << std::endl;

    return 0;
}

