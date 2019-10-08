/**
 * Function pointers example
 */

#include <iostream>
#include <vector>

void print_hello()
{
    std::cout << "Hello" << std::endl;
}

void print_message(const char* message)
{
    std::cout << message << std::endl;
}

int add_ints(int a, int b)
{
    return (a + b);
}

void print_number(float num)
{
    std::cout << num << std::endl;
}

void print_square(float num)
{
    std::cout << (num * num) << std::endl;
}

void apply_function(const std::vector<float>& nums, void (* func)(float))
{
    for (float number : nums)
    {
        func(number);
    }
}

int main()
{
    // Declaring with type
    void (* print)() = print_hello;
    print();

    // With auto keyword
    auto message_print = print_message;
    message_print("Hello World");

    // Function with a return type
    int (* addition)(int, int) = &add_ints;
    int result = addition(3, 4);
    std::cout << result << std::endl;

    std::cout << "------------" << std::endl;

    std::vector<float> nums = { 3.14, 2.71, 42, 1.61, 1.41 };
    // Function takes another function as argument
    apply_function(nums, print_number);
    apply_function(nums, print_square);

    // Lambda function
    apply_function(nums, [](float number)
    {
        std::cout << number + 1 << std::endl;
    });

    return 0;
}

