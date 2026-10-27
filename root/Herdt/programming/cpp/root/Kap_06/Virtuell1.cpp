#include <iostream>
using namespace std;
class CMulti
{
  protected:
    int Z1;
    int Z2;
  public:
    CMulti(int z1, int z2): Z1(z1), Z2(z2) { }
    virtual int Rechne() {return Z1 * Z2;}
};
class CAdd : public CMulti
{
  public:
    CAdd(int z1, int z2) : CMulti(z1, z2) { }
    int Rechne() {return Z1 + Z2;}  // Neue Funktionalität
};
int main()
{
  CMulti *Zeiger;
  CAdd einObjekt(7, 9);
  Zeiger = &einObjekt;
  cout << Zeiger -> Rechne() << endl;
  cin.get();
  return 0;
}

