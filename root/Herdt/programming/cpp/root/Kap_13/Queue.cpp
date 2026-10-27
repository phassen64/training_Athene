#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main()
{
  queue <string> schlange;
  schlange.push("1.Edith");          // Hinzufuegen von 4 Elementen
  schlange.push("2.Paul");
  schlange.push("3.Eric");
  schlange.push("4.Ruth");
  cout << schlange.front() << "   "; // Ausgabe des ersten Elements
  schlange.pop();				             // Loeschen des ersten Elements	
  cout << schlange.front() << "   "; // Ausgabe des 2. Elements, welches statt-
  schlange.pop();                    // dessen an die Stelle des 1. getreten ist 
  cout << schlange.front() << "   ";
  schlange.pop();
  cout << schlange.front() << "   ";
  schlange.pop();
  cin.get();
  return 0;
}

