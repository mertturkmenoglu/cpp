/**
 * Reference example
 * 
 * g++ reference.cpp
 */

#include <iostream>

void swap(int& num1, int& num2);

int main()
{
  int var = 10;
  int& ref = var;
  
  while (var < 100) {
    std::cout << "Variable: " << var << std::endl;
    std::cout << "Referance: " << ref << std::endl;
    std::cout << "******" << std::endl;
    ref += 10;
  }

  int num1 = 10;
  int num2 = 20;
  int& ref1 = num1;
  int& ref2 = num2;

  std::cout << "Number1: " << num1 << "\tNumber2: " << num2 << std::endl;

  swap(num1, num2);

  std::cout << "Number1: " << num1 << "\tNumber2: " << num2 << std::endl;

  return 0;
}


void swap(int& num1, int& num2)
{
  int temp = num1;
  num1 = num2;
  num2 = temp;
}