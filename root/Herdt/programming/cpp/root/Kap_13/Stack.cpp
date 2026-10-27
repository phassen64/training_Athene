#include <iostream>
#include <stack>
using namespace std;
int main()
{
  stack <int> stapel;
  stapel.push(17);
  stapel.push(28);
  cout << stapel.top() << "   ";
  stapel.pop();
  cout << stapel.top() << "   ";
  cin.get();
  return 0;
}


