#include <iostream>
#include <stdlib.h>
using namespace std;
// https://stackoverflow.com/questions/3219393/stdlib-and-colored-output-in-c
// https://en.wikipedia.org/wiki/ANSI_escape_code#SGR_(Select_Graphic_Rendition)_parameters
int main()
{

  for (int colorisation = 0; colorisation < 42; colorisation++) // You can make more than 42.
  {
    printf("\033[%dm",colorisation);
  cout << "colorisation = " << colorisation << endl;
  }
return 0;
}
