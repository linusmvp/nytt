#include <iostream>
using namespace std;
int main()
{
  //f�lt
  //datatyp namn (storlek)
  double tid[5];

  for (int i=0,j=0; i<5; i++,j--)
  {
   tid[i] = (12.58+j);
  }
  for (int i=0; i<5; i++)
    cout << tid[i] <<' ';

  cout << endl;

 return 0;
}
