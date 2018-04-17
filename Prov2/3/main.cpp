/* Uppgift 3,Emil Lidbom*/
#include <iostream>
using namespace std; 
 int main()
 {
   setlocale( LC_ALL, "" );
   
   int tal1, tal2, tal3, tal4, tal5, tal6;
   

    cout << "Mata in tal2: ";
    cin >> tal2;
   
    if ( tal2 < 57 && tal2 > 48 )
    {
      cout << "Mata in tal3: ";
      cin >> tal3;
    }
    else if
    {
      cout << "Mata in tal4: ";
      cin >> tal4;
    }
        else if ( tal4 < 57 && tal4 > 48 )
    {
      cout << "Mata in tal5: ";
      cin >> tal5;
    }
        else if ( tal5 < 57 && tal5 > 48 )
    {
      cout << "Mata in tal6: ";
      cin >> tal6;
    }
        
    else
    {
      cout << "Felaktigt tal";
      cin >> tal4;
    }
  
  return 0;
 }
 