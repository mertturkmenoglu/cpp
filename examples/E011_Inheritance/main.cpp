/**
 * Multiple inheritance example
 * 
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */
#include <iostream>

class Apple {
protected:
    const char *color;
public:
    void setColor(const char *value) {
        color = value;
    }
};

class Banana {
protected:
    int count;
public:
    void buyBanana(int n) {
        count = n;
    }
};

class Fruit : public Apple, public Banana {
public:
    void printInfo() {
        std::cout << "Color of the apple is : " << color << std::endl;
        std::cout << "Banana count: " << count << std::endl;
    }
};

int main() {
    Fruit f;
    f.setColor("green");
    f.buyBanana(10);
    f.printInfo();

    return 0;
}