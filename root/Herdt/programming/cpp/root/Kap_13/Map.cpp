#include <iostream>
#include <string>
#include <map>
#define ANZAHL 10000
using namespace std;
typedef pair<int, string> TPaar;
typedef map<int, string> Tint_map;
// typedef multimap<int, string> Tint_map;  // für Multiset
typedef Tint_map::iterator Titerator;
TPaar Element;
int main()
{
  Tint_map Mappe;
  Titerator pos;
  Element.first = 5;
  Element.second = "Lehmann";
  Mappe.insert(Element);
  Element.first = 9;
  Element.second = "Meier";
  Mappe.insert(Element);
  Element.first = 2;
  Element.second = "Schulze";
  Mappe.insert(Element);
  pos = Mappe.begin();
  cout << "Das kleinste Element: " << pos->second << endl;
  pos = Mappe.end();
  pos--;
  cout << "Das groesste Element: " << pos->second << endl;
  pos = Mappe.find(5);
  if(pos != Mappe.end())
    cout << "Element gefunden: " << pos->second << endl;
  cin.get();
  return 0;
}

