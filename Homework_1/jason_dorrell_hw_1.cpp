/*
Jason Dorrell -- Homework #1
*/
#include <iostream>
#include <string>
#include "Convert.h"

int main()
{
  int name;
  int base;
  std::cout << "Please enter a number : ";
  std::cin >> number;
  std::cout << "Please enter a base : ";
  std::cin >> base;

  Convert convertedNumber.getBase10(number, base);

  std::cout << "The number in base 10 is " << convertedNumber;
}
