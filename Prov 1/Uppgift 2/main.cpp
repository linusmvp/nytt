//Emil Lidbom: Flyttal
#include <iostream>
#include <iomanip> 
using namespace std;
  int main()
  { 
   float tal1;  
   cout << "Mata in ett tal med decimaler: ";
   cin >> tal1;
   float tal2;
   cout << "Mata in ännu ett tal: ";
   cin >> tal2;
   float tal3;
   cout << "Mata in det tredje och sista: ";
   cin >> tal3;
   float tal4 = tal1/3+tal2/3+tal3/3;
   cout << "Medelvärdet av " << tal1 << ", " << tal2 << " och " << tal3 << " blir " << fixed << setprecision(1) << tal4 << endl;
   return 0;
   
  }