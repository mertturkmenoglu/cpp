/**
 * Lambda function example
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <vector>
#include <functional>

void print_floats(const std::vector<float>& nums, void (* func)(float))
{
    for (auto num : nums)
    {
        func(num);
    }
}

void print_with_lambda(const std::vector<float>& nums,
        const std::function<void(float)>& func)
{
    for (auto num : nums)
    {
        func(num);
    }
}

int main()
{
    // Create local variables
    std::string local_var_tag = "MAIN FUNCTION";
    int local_var_id = 24601;

    // Create a vector to use in function calls
    std::vector<float> nums = { 3.14, 2.71, 42, 1.61, 1.41 };

    // Basic function call
    print_floats(nums, [](float num)
    {
        std::cout << num << std::endl;
    });

    // Define a lambda function
    auto lambda_function = [](float num)
    {
        std::cout << "Value: " << num << std::endl;
    };

    // Either of the functions can be called with the 
    // lambda_function parameter
    print_floats(nums, lambda_function);
    print_with_lambda(nums, lambda_function);

    // If you want ta use captures
    // You must use std::function<>
    print_with_lambda(nums, [local_var_id](float num)
    {
        std::cout << "Local: " << local_var_id << std::endl;
        std::cout << "Num: " << num << std::endl;
    });

    // Pass all local variables by reference
    print_with_lambda(nums, [&](float num)
    {
        std::cout << "String: " << local_var_tag << std::endl;
        std::cout << "Integer: " << local_var_id << std::endl;
        std::cout << "Number: " << num << std::endl;
    });

    // Pass all local variables by value
    // Values can not be changed
    print_with_lambda(nums, [=](float num)
    {
        std::cout << "String: " << local_var_tag << std::endl;
        std::cout << "Integer: " << local_var_id << std::endl;
        std::cout << "Number: " << num << std::endl;
    });

    // Pass all local variables by value
    // Values can be changed
    print_with_lambda(nums, [=](float num) mutable
    {
        std::cout << "String: " << local_var_tag << std::endl;
        std::cout << "Integer: " << local_var_id++ << std::endl;
        std::cout << "Number: " << num << std::endl;
    });

    return 0;
}

