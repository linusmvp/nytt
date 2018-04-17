#include <iostream>
using namespace std;
int main()
{
  //Ett val mellan två
  //alternativ
  //något som entydigt
  //är sant eller falskt 
  cout << "Mata in ett tal: ";
  int i;
  cin >> i;
  if(i >= 10)
  {
   cout << "Du matade in din kuk i tildas mun" << endl;
  
  }
  else 
  {
   cout << "Du matade in din kuk i torgnys röv" << endl; 
  }  
return 0;
}