#include <iostream>
using namespace std;
int main()
{
 double antal, pris;
 cout << "Mata in antal CDskivor: ";
 cin >> antal;
   
 if (antal <=50 && antal >10)
 {
   pris = 9.90*0.95;  
 }
 else if (antal <=100 && antal >50)
 {
   pris = 9.90*0.90; 
 }
 else if (antal >100)
 {
   pris = 9.90*0.85;    
 }  
 else 
 {
   pris = 9.90; 
 } 
 cout << "Ett inkop av " << antal << "skivor kostar " << pris*antal << endl;
 
 return 0;  
}
