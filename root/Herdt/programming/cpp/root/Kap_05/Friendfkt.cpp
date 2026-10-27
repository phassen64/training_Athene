#include <iostream>
using namespace std;
class CPerson
{
  private:
    string Name;
    string Vorname;
    double Kontostand;
  public:
    CPerson(string ValueN, string ValueVN): Name(ValueN), Vorname(ValueVN)
    {
      Kontostand = 0.00;
    }                       // Konstruktor mit Initialisierungsliste
    void einzahlen(double Betrag);
    friend double kapital(CPerson &t);  // Prototyp der friend-Funktion
};  

void CPerson::einzahlen(double Betrag)
{
  Kontostand += Betrag;
  return;
}
double kapital(CPerson &t)    // Definition der friend-Funktion
{
  return t.Kontostand;
}
int main()
{
  CPerson MisterX("Wuchtig", "Knut");
  CPerson MissX("Wuchtig", "Waltraut");
  MisterX.einzahlen(1000.00);
  MissX.einzahlen(850.55);
  cout << "Gesamtkapital der Fam. Wuchtig (EUR): "; 
  cout << kapital(MisterX) + kapital(MissX) << endl;
  cin.get();
  return 0;
}

