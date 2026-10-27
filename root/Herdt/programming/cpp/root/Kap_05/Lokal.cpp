#include <iostream>
using namespace std;
void f()
{
  class Clokal
  {
    public:
      int Zahl;
      int GibZahl()
      {
        return Zahl;
      }
  };
  Clokal LObjekt;
  LObjekt.Zahl = 30;
  cout << LObjekt.GibZahl();
  return;
}
int main()
{
  f();
  cin.get();
  return 0;
}

