#include <iostream>
#include <string>
using namespace std;
class CPerson
{
  private:
    string Name;
    string Vorname;
  public:
    CPerson(string ValueN, string ValueVN): Name(ValueN),Vorname(ValueVN) { }
    string &GetName() {return Name;}
};
class CSparer : public CPerson
{
  public:
    CSparer(string name, string vorname): CPerson(name, vorname) {  }
};
int main()
{
  CSparer MisterZ("Wuchtig", "Knut");
  cout << MisterZ.GetName() << endl;
  cin.get();
  return 0;
}

