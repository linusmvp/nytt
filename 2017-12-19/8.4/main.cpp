#include <iostream>
using namespace std;
int main()
{
  /*
  const int MAX_ANTAL = 1000000;
  int antal = 100; 
  int antal_manader = 0;
  while (antal < MAX_ANTAL)
  {
    antal_manader++;
    antal = antal * 2;
    
  }
  cout << "Efter " << antal_manader << " manader har rattorna blivit " << antal << endl;
  */
  char val;
  float summa=0, pris; 
  while (val != 'a')
  {  
  cout << " *** Meny *** " << endl;
  cout << " *** Ny kund (n) ***  " << endl;
  cout << " *** Avsluta (a) ***  " << endl;
  cout << " *** Fortsätt mata in varor (f) ***  " << endl;
  cin >> val; 
  
  if (val == 'n')
      summa=0;
  
  else if (val == 'f')
  {
    cout << "Varans pris (kronor) ";
    cin >> pris;
    summa = summa + pris;
    cout << "Du har handlat för " << summa << " kronor\n\n";
  }
}

  return 0;
