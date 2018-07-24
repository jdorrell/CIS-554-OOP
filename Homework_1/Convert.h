/**
 *Given a base and a valid number greater than zero returns the value in Base10
 */ 
class Convert
{
 public :
  explicit Convert();
  int getBase10(int num, int base);
 private :
  int numberToConvert;
  int base;
};
