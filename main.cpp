#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

  for (int colorisation = 0; colorisation < 42; colorisation++) // You can make more than 42.
  {
    printf("\033[%dm",colorisation);
  cout << "colorisation = " << colorisation << endl;
  }
return 0;
}
