/**
 * Abstract class example
 * g++ main.cpp -Wall -Wextra -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

class Shape {
public:
    virtual void drawShape() = 0;
};

class Triangle : public Shape {
public:
    void drawShape() override {
        std::cout << "Drawing Triangle" << std::endl;
    }
};

class Circle : public Shape {
public:
    void drawShape() {
        std::cout << "Drawing Circle" << std::endl;
    }
};

int main() {
    Circle c;
    c.drawShape();

    Triangle t;
    t.drawShape();

    // object of abstract class type "Shape" is not allowed: 
    // -- function "Shape::drawShape" is a pure virtual function
    // Shape s;

    return 0;
}

