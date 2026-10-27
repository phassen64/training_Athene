#include <iostream>
#include <string>
using namespace std;
class CPerson
{
  private:
    string Name;
    string Vorname;
    static int anzahl;
  public:
    CPerson(string ValueN, string ValueVN): Name(ValueN), Vorname(ValueVN)
    {
      anzahl++;
      return;
    }
    ~CPerson()
    {
      anzahl--;
      return;
    }
    static int &GibAnzahl()
    {
      return anzahl;
    }
};
int CPerson::anzahl = 0;
int main()
{
// cout << CPerson::anzahl << endl;  Zugriff nicht möglich=> anzahl ist private
  cout << CPerson::GibAnzahl() << endl;
  CPerson MisterX("Wuchtig", "Knut");
  cout << MisterX.GibAnzahl() << endl;
  CPerson MisterY("Kirsch", "Andreas");
  cout << MisterX.GibAnzahl() << endl;
  cout << MisterY.GibAnzahl() << endl;
  cout << CPerson::GibAnzahl() << endl;
  cin.get();
  return 0;
}

