#include <iostream>
using namespace std; 
int main()
{
  /* 
   * datatyp variabelnamn
   */ 
  int tal1, tal2; 
  //Plats f�r 
             //en int 
             //allokeras
             //(bokas)
             
             //antal
             //tilldelas 
             //v�rdet 4
    //inmatning fr�n tangentbord 
    cout << "Mata in heltal 1: ";
    cin >> tal1;
    cout << "Mata in heltal 2: ";
    cin >> tal2;       
    int summa = tal1*-tal2;
    cout << "L�ngden p� dig: " << summa << endl;             
  
  return 0;   
}      
