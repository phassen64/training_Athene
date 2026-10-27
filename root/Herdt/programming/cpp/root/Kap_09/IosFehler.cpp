#include <iostream>
#include <string>
using namespace std;
int main()
{
  int i;
  string zeichenkette;
  cout << "Ihre Eingabe: ";
  cin >> i;
  if(cin.fail())
  {
    cout << "Fehler: kein Integerwert gefunden!" << endl;
    cin.clear();
    cin >> zeichenkette;
    if(cin.good())
      cout << "aber folgender Text:  " << zeichenkette << endl;
    else
      cout << "!Fehler! - Eingabe gescheitert!" << endl;
  }
  else
    cout << "Die Zahl ist: "  << i << endl;
  cin.ignore(100, '\n');
  cin.get();
  return 0;
}

