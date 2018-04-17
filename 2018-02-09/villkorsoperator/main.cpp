#include <iostream>
using namespace std;

int main()
{
  int antal;
  cout << "Hur många bilar har du? ";
  cin >> antal;
  cout << "Du angav " << antal << (antal == 1 ? " bil." : " bilar.");
  return 0;
}
