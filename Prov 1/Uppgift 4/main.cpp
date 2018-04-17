//Emil Lidbom: Klockan
#include <iostream>
using namespace std; 

int main()
{
 cout << "Mata in timmar, minuter och sekunder. Använd heltal." << endl;
 int timmar;
 cout << "Timmar: ";
 cin >> timmar;
 int min;
 cout << "Minuter: ";
 cin >> min;
 int sek;
 cout << "Sekunder: ";
 cin >> sek;
 int minuter = min+sek/60;
 int sekunder = sek;
 cout << "Den inmatade tiden motsvarar " << timmar << "timmar, " << minuter << "minuter och " << sekunder << "sekunder ";  



 return 0; 
}
