/**
 * Const keyword example
 * 
 * For more details, check TheChernoProject Youtube channel and this video:
 * https://www.youtube.com/watch?v=4fJBrditnJU
 * 
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

class Point_First {
private:
    double x;
    double y;
public:
    Point_First(double x, double y) : x(x), y(y) { }
    double GetX() {
        return x;
    }
};

class Point_Second {
private:
    double x;
    double y;
public:
    Point_Second(double x, double y) : x(x), y(y) { }
    double GetX() const {
        return x;
    }
    
    double GetX() {
        return x;
    }
};

class Point_Third {
private:
    double x;
    mutable double y;
public:
    Point_Third(double x, double y) : x(x), y(y) { }
    double GetX() const {
        y = y * 2;
        return x;
    }
    double GetY() const {
        return y;
    }
};

void print_first(const Point_First& pf) {
    // You can not do this.

    // std::cout << pf.GetX() << std::endl;
    std::cout << "Sorry I can not write X\n";
}

void print_second(const Point_Second& ps) {
    std::cout << ps.GetX() << std::endl;
}

void print_third(const Point_Third& pt) {
    std::cout << pt.GetX() << std::endl;
}

int main() {
    std::cout << "First" << std::endl;
    Point_First pf(3, 4);
    std::cout << pf.GetX() << std::endl;
    print_first(pf);
    std::cout << "--------\n";

    std::cout << "Second" << std::endl;
    Point_Second ps(3, 4);
    std::cout << ps.GetX() << std::endl;
    print_second(ps);
    std::cout << "--------\n";

    std::cout << "Third" << std::endl;
    Point_Third pt(3, 4);
    std::cout << pt.GetY() << std::endl;
    std::cout << pt.GetX() << std::endl;
    std::cout << pt.GetY() << std::endl;
    print_third(pt);
    std::cout << "--------\n";


    // Declare an arbitrary value 
    // to use as pointer
    int arbitrary = 0;
    int* ptrArb = &arbitrary;


    // Declare a variable
    int var = 5;


    // ptr1 is a pointer to an integer that is constant
    const int *ptr1 = &var;
    // *ptr1 = 1;                   // You can not do this
    ptr1 = ptrArb;                  // You can do this because pointer is not constant
    std::cout << *ptr1 << std::endl;
    ptr1 = &var;                    // Now turn it to original


    // ptr2 is a pointer to a constant integer
    int const *ptr2 = &var;
    // *ptr2 = 1;                   // You can not do this
    ptr2 = ptrArb;                  // You can do this because pointer is not constant
    std::cout << *ptr2 << std::endl;
    ptr2 = &var;                    // Turn it to original


    // ptr3 is a constant pointer to an integer
    int* const ptr3 = &var;
    *ptr3 = 1;                      // You can do this because it points to a normal integer
    // ptr3 = ptrArb;               // You can not do this because pointer is a constant
    std::cout << *ptr3 << std::endl;
    std::cout << var << std::endl;
    *ptr3 = 5;                      // Turn it to original

    // ptr4 is a constant pointer to a constant integer
    const int* const ptr4 = &var;
    // *ptr4 = 1;                   // You can not do this. It points to a constant integer
    // ptr4 = ptrArb;               // You can not do this. Pointer is a constant

    std::cout << *ptr1 << std::endl << *ptr2 << std::endl;
    std::cout << *ptr3 << std::endl << *ptr4 << std::endl;

    // Declare a constant
    const int no_change = 10;

    // ptr5 is a pointer to an integer that is constant
    const int* ptr5 = &no_change;

    // ptr is a pointer to constant integer
    int const* ptr6 = &no_change;

    // ptr7 is a constant pointer to an int
    // bu no_change is a constant int
    // So we do type casting
    // Not recommended but it is an example
    int* const ptr7 = (int*) &no_change;

    // ptr8 is a constant pointer to an constant integer
    const int* const ptr8 = &no_change;

    std::cout << *ptr5 << std::endl << *ptr6 << std::endl;
    std::cout << *ptr7 << std::endl << *ptr8 << std::endl;

    return 0;
}