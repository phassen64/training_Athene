#include <iostream>
#include <string>
#include <deque>
using namespace std;
typedef deque<string> TString_Deque;
typedef TString_Deque::iterator Titerator;
int main()
{
  TString_Deque V(10);
  Titerator pos;
  string name = "";
  while(name != "E")
  {
    cout << "Es gehen ins Wartezimmer - Namen eingeben od. E: ";
    cin >> name;
//    V.push_back(name);   // am Ende anfuegen
//    V.push_front(name);  // am Anfang einfuegen
    pos = V.end();         // festlegen der Einfuegeposition
    V.insert(pos, name);   // an der Position pos einfuegen
  }

  cout << endl;
  cout << "und werden in gleicher Reihenfolge aufgerufen ..." << endl;
  while(!V.empty())
  {
    pos = V.end();                  // Vom Ende auslesen und loeschen
    pos--;                          //  -- " --
//    cout << *pos << "   ";          //  -- " --
//    V.pop_back();                   //  -- " --

    cout << V.front() << "   ";  //  Vom Anfang auslesen und loeschen
    V.pop_front();               //  -- " --
  }
  cin.ignore(100, '\n');
  cin.get();
  return 0;
}

