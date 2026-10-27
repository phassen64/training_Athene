#include <iostream>
using namespace std;
class CTest
{
  public:
    CTest(int ni, int nk)
    {
      i = ni;
      k = nk;
    }
    mutable int i;
    int k;
};
int main()
{
  const CTest TestObjekt(3, 17);
  TestObjekt.i = 23;  // OK - mutable hebt const auf
//  TestObjekt.k = 2; // !!Fehler - konstante Instanzvariable
  cout << "i= " << TestObjekt.i << endl;
  cout << "k= " << TestObjekt.k << endl;
  cin.get();
  return 0;
}

