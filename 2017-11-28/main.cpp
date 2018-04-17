#include <iostream>
#include <string>
using namespace std; 


int main()
{
  cout << "Anvandarnamn "; 
  string namn;
  getline(cin, namn);
  cout << "Losenord ";
  string losen;
  getline(cin,losen);
  if (namn == "Linus" && losen == "MVP")
  {
    cout << "\nHej MÄstarLinus\n";
  }
  if (namn == "Ludvig" && losen == "Almgren")
  {
    cout << "\nHej Ludvig\n;
  }
  else
  {
    cout << "\nFel lösenord\n"; 
  }
  return 0; 
}
