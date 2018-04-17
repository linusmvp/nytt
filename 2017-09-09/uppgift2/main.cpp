#include <iostream>
using namespace std; 
int main()
{
  /* 
   * datatyp variabelnamn
   */ 
  int tal1, tal2; 
  //Plats för 
             //en int 
             //allokeras
             //(bokas)
             
             //antal
             //tilldelas 
             //värdet 4
    //inmatning från tangentbord 
    cout << "Mata in heltal 1: ";
    cin >> tal1;
    cout << "Mata in heltal 2: ";
    cin >> tal2;       
    int summa = tal1*-tal2;
    cout << "Längden på dig: " << summa << endl;             
  
  return 0;   
}      
