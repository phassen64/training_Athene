#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef vector <string> TString_Vector;
typedef TString_Vector::iterator Titerator;
int main()
{
  TString_Vector V;
  Titerator pos;
  string name = "";
  pos = V.begin();
  do
  {
    cout << "Karten auf den Stapel legen - Karte eingeben oder E: ";
    cin >> name;
    if(name != "E") 
      V.push_back(name);
  }
  while(name != "E");
  cout << endl;
  cout << "und in umgekehrter Reihenfolge wieder aufdecken..." << endl;
  pos = V.end();
  while(pos != V.begin())
  {
    pos--;
    cout << *pos << "   ";
  }
  cin.ignore(100, '\n');  
  cin.get();
  return 0;
}

