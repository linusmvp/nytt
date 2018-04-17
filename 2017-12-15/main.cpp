#include <iostream>
using namespace std;
int main()
{
  setlocale(LC_ALL, "" );
  
  int hastighet[50];
  int antal = 0;
  
  cout << "Antal värden: ";
  cin >> antal;
  
  for ( int n = 0; n < antal ; n++ )
  {
   cout << "ange tal" << n << ": ";
   cin >> hastighet[n];
  }
  
  int max = hastighet[0]
  for (  int n = 0 ; n < antal ; n++ )
  {
    if ( max < hastighet[n] )  max = hastighet[n];
  }
  
  
  
  return 0;
}
