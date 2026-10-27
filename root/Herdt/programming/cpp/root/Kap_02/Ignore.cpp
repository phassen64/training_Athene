#include <iostream>

using namespace std;
int main()
{
  int i;
  char Taste;
  cout << "Geben Sie bitte eine Zahl ein: ";
  cin >> i;                                                    // i einlesen
  cout << "Das Quadrat von " << i << " ist " << i * i << endl;         // Ergebnis ausgeben
  cout << "Betaetigen Sie eine beliebige Taste, um fortzusetzen!";
  cin.ignore(100, '\n');
  cin.get(Taste);                                              // auf Eingabe warten
  return 0;
}  

