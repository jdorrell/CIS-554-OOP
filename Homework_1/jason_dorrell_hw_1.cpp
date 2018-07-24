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
  //takes input and error checks
  while(number <= 0){
    std::cout << "Please enter a number greater than ZERO: ";
    std::cin >> number;
  }
  std::cout << "Please enter a base : ";
  std::cin >> base;
  //instantiate Convert object
  Convert numberConverter;

  std::cout << "Number to covert is "
	    << number << " in base "
	    << base << std::endl;
  //convert to Base10
  int result = numberConverter.getBase10(number, base);
  //Return value of 0 indicates invalid input, i.e. value of 3 in Base2
  if(result == 0){
    std::cout << "Your input was invalid" << std::endl;
  //Display result
  }else std::cout << "The number in base 10 is "
		  << result << std::endl;
}
