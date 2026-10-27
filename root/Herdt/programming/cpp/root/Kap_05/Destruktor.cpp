#include <iostream>
#include <string>
using namespace std;
struct Angaben
{
  int Alter;
  int Telefon;
  int Fax;
};
class CPerson
{
  private:
    string Name;
    string Vorname;
    Angaben* angaben;
  public:
    CPerson();                         // Standard-Konstruktor - Prototyp
    ~CPerson();                        // Standard-Destruktor - Prototyp
    Angaben GetAngaben();
    void ausgeben();
};  
CPerson::CPerson()                   // Standard-Konstruktor
{
  Name = "Name unbenannt";           // Initialisierung mit festen Werten
  Vorname = "Vorname unbenannt";
  angaben = new Angaben;
  angaben->Alter = 50;
  angaben->Telefon = 441533;
  angaben->Fax = 441534;
  return;
}
CPerson::~CPerson()                  // Destruktor - Definition 
{                                      
  delete angaben;                      // Freigeben des Speicherplatzes für alter
  return;
}
Angaben CPerson::GetAngaben()
{
  return *angaben;
}
void CPerson::ausgeben()
{
  cout << "Name: " << Name << endl;
  cout << "Vorname: " << Vorname << endl;
  cout << "Alter: " << GetAngaben().Alter << endl;
  cout << "Telefon: " << GetAngaben().Telefon << endl;
  cout << "Fax: " << GetAngaben().Fax << endl;
  return;
}

int main ()
{
  CPerson person;
  
  cout << endl << "Ausgabe der Personendaten" << endl;
  person.ausgeben();

  cin.get();
  return 0;
}
