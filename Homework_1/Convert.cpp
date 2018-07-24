#include <iostream>
#include <cmath>
#include "Convert.h"
/**
 * Returns a value in Base10 from a value in another base
 */
Convert::Convert()
{}

int Convert::getBase10(int numberToConvert, int base)
{
  //Checks if number is already in Base10 and returns unchaged if it is
  if(base == 10)return numberToConvert;
  
  int digits = 0;
  //bypasses check for digits if less than 10
  if (numberToConvert < 10) {
    digits = 1;
  }

  int placeHolder = numberToConvert;
  //checks the number of digits
  while(placeHolder > 0){
    placeHolder /= 10;
    digits++;
  }

  placeHolder = numberToConvert;
  int newNumber = 0;
  int count = 0;
  //converts to Base10
  while(count <= digits - 1){
	//isolate least significant digit  
    int remainder = placeHolder%10;
	//performs check forinvalid data, i.e. value of 3 in Base2
    if(remainder >= base){
      std::cout << "Digit " << count << " is an invalid value of "
		<< remainder << " in base " << base << " : " << std::endl;
      return 0;
    }
    //calculate the value of each individual digit
    int x = std::pow(base, count);
    int digitValue = remainder * x;
    newNumber += digitValue;
	//remove the least significant digit
    placeHolder /= 10;
    count++;
  }
  return newNumber;
}
