#include <iostream>
using namespace std;
int add(int ,int);
int mul(int, int);

int main()
{
  int zahl1 = 5, zahl2 = 7;
  cout << "Summe: " << add(zahl1, zahl2) << endl;
  cout << "Produkt: " << mul(zahl1, zahl2) << endl;
  cin.get();
  return 0;
}
int add(int x, int y)
{
  return x + y;
}
int mul(int x, int y)
{
  return x * y;
}

