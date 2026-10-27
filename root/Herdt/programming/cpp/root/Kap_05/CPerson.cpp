#include <iostream>
#include <string>
using namespace std;
class CPerson
{
  private:
    string Name;
  public:
    void ausgeben();            // Prototyp der Methode
    void SetName(string value)  // inline-Methode
    {
      Name = value;
      return;
    }
};  

void CPerson::ausgeben()    // Methode wird auﬂerhalb der Klassendefinition definiert
{
  cout << "Name: " << Name << endl;
  return;
}
int main ()
{
  CPerson person;
  string eingabe;
  cout << "Bitte geben Sie einen Namen ein: " << endl;
  cin >> eingabe;
  person.SetName(eingabe);
  cout << endl << "Ausgabe der Personendaten" << endl;
  person.ausgeben();
  cin.ignore(100, '\n');
  cin.get();
  return 0;
}

