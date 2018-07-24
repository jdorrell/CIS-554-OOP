/*
Jason Dorrell -- Homework #1
*/
#include <iostream>
#include <string>
#include "Convert.h"

int main()
{

  int number = 0;
  int base;
  
  while(number <= 0){
    std::cout << "Please enter a number greater than ZERO: ";
    std::cin >> number;
  }
  std::cout << "Please enter a base : ";
  std::cin >> base;

  Convert numberConverter;

  std::cout << "Number to covert is "
	    << number << " in base "
	    << base << std::endl;
  
  int result = numberConverter.getBase10(number, base);
  if(result == 0){
    std::cout << "Your input was invalid" << std::endl;
  }else std::cout << "The number in base 10 is "
		  << result << std::endl;
}
