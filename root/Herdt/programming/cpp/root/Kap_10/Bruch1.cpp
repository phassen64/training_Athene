#include <cmath>
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
    friend ostream &operator<<(ostream &ostr, const CBruch &a);
 
    CBruch(int i);		
    CBruch(double d);	
    friend CBruch operator+(const CBruch &a, const CBruch &b);
    CBruch operator-(const CBruch &a );
//    CBruch operator*(const CBruch &a );  // siehe Quelle der Übungsaufgabe
//  . CBruch operator/(const CBruch &a );  // siehe Quelle der Übungsaufgabe
    operator double() { return double(zaehler) / double(nenner); }
};
ostream &operator<<(ostream &ostr, const CBruch &a)
{
 ostr << a.zaehler << "/" << a.nenner;
 return ostr;
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
CBruch::CBruch(int i)
{  
  zaehler = i;
  nenner = 1;
}
CBruch CBruch::operator-(const CBruch &a)
{
  CBruch c;
  c.nenner = nenner * a.nenner;
  c.zaehler = zaehler * a.nenner - a.zaehler * nenner;
  c.Kuerzen();
  return c;
}
CBruch::CBruch(double d)
{
  nenner = 1; 
  while(floor(d) != d)
  {
    nenner *= 10;
    d *= 10;
  }
  zaehler = int(d);
  Kuerzen();  
}
CBruch operator+(const CBruch &a, const CBruch &b)
{
  CBruch c;
  c.nenner = a.nenner * b.nenner;
  c.zaehler = a.zaehler * b.nenner + b.zaehler * a.nenner;
  c.Kuerzen();
  return c;
}
void f(double r){cout << "Die Funktion hat den Wert " << r << " uebernommen" << endl;}  // eine beliebige Funktion mit double-Argument
int main()
{
  CBruch a(1, 10), b(4, 2), c;
  double d; 	
  d = double(a);		// -> double(CBruch)
  cout << "Der Bruch: " << a << " ergibt die Zahl: " << d << endl;
  d = a;				// -> double(CBruch)
  cout << "Die Zahl: " << d << " wurde aus dem Bruch " << a << " gebildet." << endl; 
  d = a + b;			// -> double(CBruch + CBruch)
  cout << "Die Summe der Brueche " << a << " und " << b << " betraegt: " << d << endl;
  f(a);				// -> f(double(CBruch));
  f(a + b);			// -> f(double(CBruch + CBruch))
  cout << "Die Umwandlung des Bruches " << a << " in einen Wert vom Typ double ergibt: " <<double(a);		// -> double(CBruch);
  cin.get();
  return 0;
}