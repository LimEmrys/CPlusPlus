#include <iostream>

using namespace std;

int rand_int(int length)
{
  string calc = "" ;
  for (int i = 1;i <= length; i++)
  {
    calc += to_string((rand() % 9) + 1);
  }
  
  int output = stoi(calc);
  return output;
}

// The input value for this function is the length of the number that is to be generated.
// Both the input and output are to be integers (int)
