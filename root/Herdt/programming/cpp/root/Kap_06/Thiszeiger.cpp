#include <iostream>
using namespace std;
class CTest
{
  public:
    int i;
    CTest *Back() {return this;}
};
int main()
{
  CTest *Zeiger;
  CTest Obj;
  Zeiger = Obj.Back();
  Zeiger -> i = 7;
  cout << "Die Instanzvariable i speichert den Wert: " << Obj.i << endl;
  cin.get();
  return 0;
}

