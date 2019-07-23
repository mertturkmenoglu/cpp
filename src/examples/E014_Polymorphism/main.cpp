/**
 * Runtime polymorphism examples
 * 
 * g++ main.cpp -Wall -Wextra -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

class Animal {
public:
    void sound() {
        std::cout << "Animal class sound function invoked" << std::endl;
    }
};

class Squirrel: public Animal {
public:
    void sound() {
        std::cout << "Squirrel class sound function invoked" << std::endl;
    }
};

class Shape {
public:
    virtual void draw() {
        std::cout << "Shape class draw function" << std::endl;
    }
};

class Rectangle: public Shape {
public:
    void draw() {
       std::cout << "Rectangle class draw function" << std::endl;
    }
};

class Triangle: public Shape {
public:
    void draw() {
        std::cout << "Triangle class draw function" << std::endl;
    }
};

// Driver code
int main(void) {
    Squirrel alf = Squirrel();
    alf.sound();

    Animal bonibon = Squirrel();
    bonibon.sound();

    Shape *ptrShape;   // Pointer
    
    Shape shape;       // Object
    Rectangle rectangle;     // Object
    Triangle triangle; // Object

    ptrShape = &shape;
    ptrShape->draw();

    ptrShape = &rectangle;
    ptrShape->draw();

    ptrShape = &triangle;
    ptrShape->draw();

    return 0;
}