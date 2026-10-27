#include <iostream>
#include <string>
using namespace std;
class CPerson
{
  private:
    string Name;
    string Vorname;
  public:
    CPerson();
    CPerson(string Value1, string Value2);
    void ausgeben();
};

CPerson::CPerson()
{
  Name = "Unbenannt";
  Vorname = "Unbenannt";
  return;
}
CPerson::CPerson(string Value1, string Value2)
{
  Name = Value1;
  Vorname = Value2;
  return;
}

void CPerson::ausgeben()
{
  cout << "Name: " << Name << endl;
  cout << "Vorname: " << Vorname << endl;
  return;
}

int main ()
{
  CPerson person1;
  CPerson person2("Meier", "Klaus");

  cout << endl << "Ausgabe der Personendaten" << endl;
  person1.ausgeben();
  cout << endl << "Ausgabe der Personendaten" << endl;
  person2.ausgeben();
  cin.get();
  return 0;
}

