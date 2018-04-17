#include <iostream>
using namespace std;
int main()
{ /*
  int falt[10];
  falt[0]= -3;
  */
  int falt[10]={-3,-45,23,4,5,-7,-8,9,2,67};
  int i=0;
  falt[0];
  while (i < 10)
  {
    i++;
  }
  
  i=0;
  while (i < 10)
  {
    if (falt[i] > 0)
        falt[i] = falt[i] * (-1);  
  i++;
  }
  
  i=0;
    while (i < 10)
  {
    cout << falt[i] << " " << endl;
    i++;
  }
  
  
  return 0;
}
 