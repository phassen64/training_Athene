#include <iostream>
#include <string>
#include <list>
using namespace std;
int main()
{
  list <string> L;
  string name = "";
  while(name != "E")
  {
    cout << "Eingabe der Elemente - Namen eingeben od. E: ";
    cin >> name;
    if(name != "E")
    {
      L.push_back(name); 
      L.push_front(name);  
    }
  }
  cout << endl;
  L.sort();  // Sortieren der Liste
  L.reverse();  // Umkehren der Reihenfolge
  L.unique();   // Entfernen der doppelten Elemente
  cout << "Ausgabe und Loeschen der Elemente ..." << endl;
  while(!L.empty())
  {
    cout << L.front() << "   ";  //  Vom Anfang auslesen und löschen
    L.pop_front();
  }
  cin.ignore(100, '\n');
  cin.get();
  return 0;
}

