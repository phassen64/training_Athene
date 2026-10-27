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
  private:
    double Kredit;
  public:
    CSparer(string name, string vorname): CPerson(name, vorname)
    {
      Kredit = 1000;
    }
    double GetKredit() {return Kredit;}
};
int main()
{
  CPerson MisterX("Kirsch", "Andreas");
  CSparer MisterZ("Wuchtig", "Knut");
  cout << MisterZ.GetName() << endl;
  cout << MisterZ.GetKredit() << endl;
  MisterX = MisterZ;  
  cout << MisterX.GetName() << endl; 
//  cout << MisterX.GetKredit();   
  cin.get();
  return 0;
}

