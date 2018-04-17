#include <iostream> 
using namespace std;

int main ()
{
   setlocale( LC_ALL, "" );
   
   int hastighet[50];
   int antal=5;
   
   cout << "Antal värden: " << antal << endl;
   
   for ( int n = 0 ; n < antal ; n++ )
   {
     cout << "Ange tal " << n+1 << ": ";
     cin >> hastighet[n];
   }
   
   int min = hastighet[0];
   for ( int n = 0 ; n < antal ; n++ )
   {
     if ( min > hastighet[n] ) min = hastighet[n];
   }
   
   double summa = 0;
   for ( int n = 0 ; n < antal ; n++ )
   {
     summa = summa + hastighet[n]; 
   }
   
   cout << endl;
   cout << "minsta värdet: " << min << endl;
   cout << "medelvärdet: " << (summa/antal) << endl;
   
   return 0;
}