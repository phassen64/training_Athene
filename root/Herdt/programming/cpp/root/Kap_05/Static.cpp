#include <iostream>
using namespace std;
class CPerson
{
  private:
    string Name;
    string Vorname;
  public:
    static int anzahl;
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
};
int CPerson::anzahl = 0;
int main()
{
  cout << CPerson::anzahl << endl;
  CPerson MisterX("Wuchtig", "Knut");
  cout << MisterX.anzahl << endl;
  CPerson MisterY("Kirsch", "Andreas");
  cout << MisterX.anzahl << endl;
  cout << MisterY.anzahl << endl; 
  cout << CPerson::anzahl << endl;
  cin.get();
  return 0;
}

