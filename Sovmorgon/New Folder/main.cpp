#include <iostream>
using namespace std;
int main()
{
  float tal1, tal2;// l�s in tv� tal, tal1 och tal2
  cout << "Ange tal 1: ";
  cin >> tal1;
  cout << "Ange tal 2: ";
  cin >> tal2;
  // om tal1 �r st�rre �n tal2
  // skriv ut tal1 
  // annars
  // skriv ut tal2
  if(tal1>tal2)
  {
   cout << tal1; 
  }
  else
  {
   cout << tal2; 
  }
  return 0;
}  