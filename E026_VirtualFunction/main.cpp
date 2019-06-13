/**
 * Virtual function example
 * g++ main.cpp -Wall -Wextra -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

// Not using virtual function
class Entity {
public:
    std::string getEntityInfo() {
        return std::string("Entity object");
    }
};

// Not using virtual function
class Player : public Entity {
private:
    std::string info;
public:
    Player(const std::string& info) : info(info) { }
    std::string getEntityInfo() {
        return info;
    }
};

// ----------------- -------------------

// Using virtual function
class Animal {
public:
    virtual std::string getAnimalName() {
        return std::string("Animal");
    }
};

// Using virtual function
class Squirrel : public Animal {
private:
    std::string name;
public:
    Squirrel(const std::string& name) : name(name) { }
    std::string getAnimalName() override {
        return name;
    }
};

int main() {
    Entity *e = new Entity();
    Player *p = new Player(std::string("Ready Player One"));

    Animal *a = new Animal();
    Squirrel *alf = new Squirrel(std::string("Alf"));

    std::cout << e->getEntityInfo() << std::endl;
    std::cout << p->getEntityInfo() << std::endl;

    // Referencing as Entity
    delete e;
    e = p;
    std::cout << e->getEntityInfo() << std::endl;

    std::cout << a->getAnimalName() << std::endl;
    std::cout << alf->getAnimalName() << std::endl;

    // Referencing as Animal
    delete a;
    a = alf;
    std::cout << a->getAnimalName() << std::endl;

    delete p;
    delete alf;

    return 0;
}
