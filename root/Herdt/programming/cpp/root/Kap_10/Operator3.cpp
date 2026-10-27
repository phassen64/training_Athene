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
    friend ostream &operator<<(ostream &ostr, const CBruch &a);
    friend istream &operator>>(istream &istr, CBruch &a);
    void Ausgabe() { cout << zaehler << "/" << nenner << endl; };
    void Kuerzen();
    CBruch operator-(const CBruch &a);
    CBruch operator-();
    CBruch operator+=(const CBruch &a);
};
CBruch CBruch::operator-(const CBruch &a)
{
  CBruch c;
  c.nenner = nenner * a.nenner;
  c.zaehler = zaehler * a.nenner - a.zaehler * nenner;
  c.Kuerzen();
  return c;
}

CBruch CBruch::operator-()
{
 CBruch c; 
 c.zaehler = -zaehler;
 c.nenner = nenner;
 return c;
}
CBruch CBruch::operator+= (const CBruch &a)
{
 zaehler = zaehler * a.nenner + a.zaehler * nenner;
 nenner *= a.nenner;
 Kuerzen();
 return *this;
}
ostream &operator<<(ostream &ostr, const CBruch &a)
{
 ostr << a.zaehler << "/" << a.nenner;
 return ostr;
}
istream &operator>> (istream &istr, CBruch &a)
{
 char z;
 istr >> a.zaehler >> z >> a.nenner;
 return istr;
}
int CBruch::ggt(int a, int b)  // rekursive Methode
{
  int erg, rest, an, bn;
  if(a < 0) a *= -1;
  if(b < 0) b *= -1;
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
  CBruch x (2,1);
  CBruch y (3,5);
  cout << "Ergebnis: " << (x += y) << endl;
  cout << "Ergebnis: " << (x = x - y) << endl;
  cout << "Ergebnis: " << (-x) << endl;

  cin.get();
  return 0;
}
