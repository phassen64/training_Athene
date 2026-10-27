#include <iostream>
using namespace std;
int main()
{
  int i;
  int j = i;
  int &ri = i;
  i = 1;
  j = 3;
  cout << "i = " << i << ", j = " << j << endl;
  cout << "&i = " << &i << ", &j = " << &j << endl << endl;
  ri = 5;
  cout << "i = " << i << ", ri = " << ri << endl;
  cout << "&i = " << &i << ", &ri = " << &ri << endl;
  cin.peek();
  return 0;
}

