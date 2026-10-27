#include <iostream>
#include <set>
#define ANZAHL 10000
using namespace std;
typedef set<int> Tint_set;

// typedef multiset<int> Tint_set;  // für Multiset

typedef Tint_set::iterator Titerator;
int main()
{
  Tint_set Baum;
  Titerator pos;
  int Zahl;
  cout << "Es können maximal " << Baum.max_size();
  cout << " Elemente in den Baum eingefügt werden.";
  for(int i = 0; i != ANZAHL; i++)
  {
    Zahl = rand();
    Baum.insert(Zahl); 
  }
  cout << endl;
  for(pos = Baum.begin(); pos != Baum.end(); pos++)
  {
    cout << *pos << "   ";
  }
  cout << endl << "Eingabe einer Zahl: " ;
  cin >> Zahl;
  cout << "Die Zahl ist " << Baum.count(Zahl) << " mal enthalten." << endl;
  cout << "Es sind " << Baum.size() << " Elemente im Baum gespeichert.";
  cin.ignore(100, '\n');
  cin.get();
  return 0;
}

