#include <iostream>
#include <string>
using namespace std;
class CA
{
  public:
    void Ausgabe(int anzahl, string r);
    void Ausgabe(string r);
};
class CB : public CA
{
  public:
    void Ausgabe(string nr);
    using CA::Ausgabe;             // Methoden mit dem Namen Ausgabe werden sichtbar
};
int main()
{
  CB b_objekt;
  b_objekt.Ausgabe("Information");
  b_objekt.CA::Ausgabe(5, "Information"); // Methode waere verdeckt- using aendert es
  cin.get();
  return 0;
}

void CA::Ausgabe(string r)
{
  cout << "Ausgabe der Klasse CA " << endl << r << endl << endl;
  return;
}

void CA::Ausgabe(int anzahl, string r)
{

  for(int i = anzahl; i > 0 ; i--)
  {
    cout << "Ausgabe der Klasse CA " << endl;
    cout << " Inhalt: "<< r << endl;
    cout << "Anzahl: " << anzahl << endl;
  }
  return;
}

void CB::Ausgabe(string r)
{
  cout << "Ausgabe der Klasse CB " << endl << r << endl << endl;
  return;
}
