#include <iostream>
#include <string>
using namespace std;

int main()
{
cout << "Anvandarnamn: ";
string namn;
getline(cin, namn);
cout << "Losenord: ";
string losen;
getline(cin, losen);
if (namn == "Emil" && losen == "hemligt")
{
 cout << "\nVar halsad\n"; 
}
else
{
 cout << "\nAIRSTRIKE ENGAGED\n"; 
}
return 0;
}
