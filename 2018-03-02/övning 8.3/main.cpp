#include <iostream>
using namespace std;
int main()
{
  int hogst;
  cout << "mata in högsta värdet: ";
  cin >> hogst;
  int minst;
  cout << "mata in minsta värdet: ";
  cin >> minst;
 
 for ( int n=hogst ; n>=minst ; n-- )
 {
   cout << n << ' ' << endl;
 }  
}
