/**
 * Exception handling example
 *
 * If you have a Java background, you may know that there are two kinds of exception: Checked and Unchecked
 * If a code block throws a checked exception, you must always handle the exception: In other words, you must use that
 * code inside a try - catch block.
 *
 * In C++, there is only unchecked exceptions. You can use try-catch blocks but you do not have to.
 */

#include <exception>
#include <iostream>

// You may create your own exception class simply by taking inheritance from std::exception class
class SpecialException: public std::exception
{
public:
    [[nodiscard]] const char* what() const noexcept override
    {
        return "Special Exception Occurred";
    }
};

// Return area of a square
// Square are is defined for a non-negative side length.
// If the given side length is negative, we can throw an exception.
// It is one of the solutions. So let's use this in here.
int area(int side_length)
{
    if (side_length <= 0)
    {
        throw std::exception();
    }

    return (side_length * side_length);
}

// Same function. Just one difference:
// We threw std::runtime_error in other implementation
// Here, we throw specialException
// We will see the difference(and similarities) of these two
// in main function.
int special_area(int side_length)
{
    if (side_length <= 0)
    {
        throw SpecialException();
    }

    return (side_length * side_length);
}

int main()
{
    int sides[] = { 5, 7, 2, 0, 4 };
    int a;

    // Basic throw
    try
    {
        for (int side : sides)
        {
            a = area(side);
            std::cout << "Area of the square: " << a << std::endl;
        }
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (...)
    {
        std::cout << "Default catch block" << std::endl;
    }

    std::cout << "After first try-catch block" << std::endl;

    // User defined exception throw
    try
    {
        for (int side : sides)
        {
            a = special_area(side);
            std::cout << "Area of the square: " << a << std::endl;
        }
    }
    catch (const SpecialException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (...)
    {
        std::cout << "Default catch block" << std::endl;
    }

    std::cout << "After second try-catch block" << std::endl;

    return 0;
}