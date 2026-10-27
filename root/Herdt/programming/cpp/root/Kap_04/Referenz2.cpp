#include <iostream>
using namespace std;
void quadrat(int &par)
{
  par *= par;
}
int main()
{
  int i = 11;
  cout << "i= " << i << endl;
  quadrat(i);
  cout << "i * i = " << i << endl;
  cin.peek();
  return 0;
}

