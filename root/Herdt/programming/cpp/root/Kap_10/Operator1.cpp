#include <iostream>
using namespace std;
class CBruch
{
  private:
    int zaehler, nenner;
    int ggt(int a, int b);
  public:
    CBruch() : zaehler(0), nenner(1) {}
    CBruch(int z, int n) : zaehler(z), nenner(n) {}
    friend CBruch operator+(const CBruch &a, const CBruch &b);
    void Ausgabe() { cout << zaehler << "/" << nenner << endl; };
    void Kuerzen();
};
int CBruch::ggt(int a, int b)  // rekursive Methode
{
  int erg, rest, an, bn;
  a = abs(a);
  b = abs(b);
  an = a > b ? a : b;
  bn = a < b ? a : b;
  rest = an - bn;
  if((rest > 0) && (bn != 0))   // bn = 0 ergibt eine endlose Konstruktion
    erg = ggt(bn, rest);
  else
    erg = an;
  return erg;
}
void CBruch::Kuerzen()
{
  int teiler = ggt(zaehler, nenner);
  zaehler /= teiler;
  nenner /= teiler;
}
CBruch operator+(const CBruch &a, const CBruch &b)
{
  CBruch c;
  c.nenner = a.nenner * b.nenner;
  c.zaehler = a.zaehler * b.nenner + b.zaehler * a.nenner;
  c.Kuerzen();
  return c;
}
int main()
{
  CBruch a(1,1), b(2,2), x;
  x = a + b;
  x.Ausgabe();
  cin.get();
  return 0;
}

