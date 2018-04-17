#include <iostream>
using namespace std;

int main()
{
  setlocale( LC_ALL, "" );
  cout << "m/s      km/h"<< endl;
  int hastighet[8];
  int hastighetkmh[8];
  for ( int n = 0 ; n < 8 ; n++ )
  {
   hastighet[n] = 5 * ( n + 1 );
   hastighetkmh[n] = (5 * (n + 1))*3.6;
   cout << hastighet[n] << "        " << hastighetkmh[n] << endl;
   
  }
  
  
 return 0; 
}+





































