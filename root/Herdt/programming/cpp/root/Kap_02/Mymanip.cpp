#include <iostream>
using namespace std;
ostream& MyManip(ostream& os)
{ 
  os << '\t';
  return os;
}
int main()
{
  cout << "Test: " << MyManip << "Test";
  cin.get();
  return 0;
}

