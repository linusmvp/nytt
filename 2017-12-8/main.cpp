#include <iostream> 
using namespace std;
int main()
{
  cout << "1. Presentera statistik" << endl;
  cout << "2. Mata in en ny statistik" << endl;
  int val;
  cin >> val;
  if (val == 1)
  {  
  cout <<                    "Kon" << endl;
  cout << "Lon                Man      Kvinna" << endl; 
  cout << "Minst 20 000       12       3" << endl;
  cout << "Mindre an 20 000   5        8" << endl;
  }
  if (val == 2)
  {
  int man20k;
  cout << "Mata in antal man med lon hogre an 20 000: ";
  cin >> man20k;
  int kvinna20k;
  cout << "Mata in antal kvinnor med lon hogre an 20 000: ";
  cin >> kvinna20k;
  int man10k;
  cout << "Mata in antal man med lagre lon an 20 000; ";
  cin >> man10k;
  int kvinna10k;
  cout << "Mata in antal kvinnor med lon lagre an 20 000: ";
  cin >> kvinna10k;
  cout <<                    "Kon" << endl;
  cout << "Lon                Man          Kvinna" << endl;
  cout << "Minst 20 000       " << man20k << "		" << kvinna20k << endl;
  cout << "Mer an 20 000      " << man10k << "		" << kvinna10k << endl;  
  }                                           
  
  
  
  
  return 0;
}