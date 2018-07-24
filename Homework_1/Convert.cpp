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
  if(base == 10)return numberToConvert;
  
  int digits = 0;
  if (numberToConvert < 10) {
    digits = 1;
  }

  int placeHolder = numberToConvert;

  while(placeHolder > 0){
    placeHolder /= 10;
    digits++;
  }

  placeHolder = numberToConvert;
  int newNumber = 0;
  int count = 0;
  
  while(count <= digits - 1){
    int remainder = placeHolder%10;

    if(remainder >= base){
      std::cout << "Digit " << count << " is an invalid value of "
		<< remainder << " in base " << base << " : " << std::endl;
      return 0;
    }
    
    int x = std::pow(base, count);
    int digitValue = remainder * x;
    newNumber += digitValue;
    placeHolder /= 10;
    count++;
  }
  return newNumber;
}
