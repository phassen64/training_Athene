#include <iostream>
#include <string>
using namespace std;
int main()
{
  string ziel;
  cout << "Bitte geben Sie eine Zeichenkette ein!" << endl;
  getline(cin, ziel, '\n'); // Default-Wert fuer end ist '\n' und kann auch entfallen
  fflush(stdin);            // Das Leeren des Eingabepufferns muss nicht bei allen Compilern erfolgen    
  cout << ziel << endl;     // Ausgabe der Zeichenkette
  cin.get();
  return 0;
}  

