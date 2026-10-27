#include <iostream>
#include <string>
using namespace std;
class CPerson
{
  private:
    string Name;
    string Vorname;
  public:
    CPerson(string ValueN, string ValueVN): Name(ValueN), Vorname(ValueVN)
    {
      // braucht keine Initialisierung vornehmen
    }
    void CPerson::ausgeben();
};

void CPerson::ausgeben()
{
  cout << "Name: " << Name << endl;
  cout << "Vorname: " << Vorname << endl;
  return;
}

int main()
{
  CPerson person("Meier", "Klaus");;
  cout << endl << "Ausgabe der Personendaten" << endl;
  person.ausgeben();
  cin.get();
  return 0;
}
