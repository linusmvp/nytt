#include <iostream>
using namespace std; 
int main()
{
  char tecken = 'a';
  cout << "tecken= " << tecken << endl;
  cout << "Mata in ett nytt tecken ";
  cin >> tecken;
  cout << "tecken= " << tecken << endl;
  tecken = tecken + 2;
  cout << "tecken= " << tecken << endl;
  return 0;
  
