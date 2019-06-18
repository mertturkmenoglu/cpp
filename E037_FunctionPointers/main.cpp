/**
 * Function pointers example
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <vector>

void printHello()
{
    std::cout << "Hello" << std::endl;
}

void printMessage(const char* message)
{
    std::cout << message << std::endl;
}

int addInts(int a, int b)
{
    return (a + b);
}

void printNumber(float num)
{
    std::cout << num << std::endl;
}

void printSquare(float num)
{
    std::cout << (num * num) << std::endl;
}

void applyFunction(const std::vector<float>& nums, void (*func)(float))
{
    for (float number : nums) {
        func(number);
    }
}

int main() {
    // Declaring with type
    void (*print)() = printHello;
    print();

    // With auto keyword
    auto messagePrint = printMessage;
    messagePrint("Hello World");

    // Function with a return type
    int (*addition)(int, int) = &addInts;
    int result = addition(3, 4);
    std::cout << result << std::endl;

    std::cout << "------------" << std::endl;

    std::vector<float> nums = {3.14, 2.71, 42, 1.61, 1.41};
    // Function takes another function as argument
    applyFunction(nums, printNumber);
    applyFunction(nums, printSquare);

    // Lambda function
    applyFunction(nums, [](float number) {
        std::cout << number + 1 << std::endl;
    });

    return 0;
}

