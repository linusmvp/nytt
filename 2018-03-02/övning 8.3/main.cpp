#include <iostream>
using namespace std;
int main()
{
  int hogst;
  cout << "mata in h�gsta v�rdet: ";
  cin >> hogst;
  int minst;
  cout << "mata in minsta v�rdet: ";
  cin >> minst;
 
 for ( int n=hogst ; n>=minst ; n-- )
 {
   cout << n << ' ' << endl;
 }  
}
