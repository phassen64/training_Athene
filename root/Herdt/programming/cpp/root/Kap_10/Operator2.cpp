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
};
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
  CBruch x;
  cout << "Bitte geben Sie einen Bruch in der Form Zaehler/Nenner ein: " << endl;
  cin >> x;
  cout << "Der eingegebene Bruch ist: " << x << endl;
  cin.ignore(100, '\n');
  cin.get();
  return 0;
}
