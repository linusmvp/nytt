#include <iostream>
using namespace std;
int main()
{
  if ( (2<=1) && (1<=1) )//Måste entidigt 
           //Kunna utvärderas
           //True/false
  {
   cout << "sats 1(sant)" << endl; 
   cout << "sats 2(sant)" << endl;
  }
  else
  {
   cout << "sats 1(falskt)" << endl; 
   cout << "sats 2(falskt)" << endl;
  }
  
  return 0;
}
