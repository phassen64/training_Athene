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
  CPerson *ZeigerMisterX;
  CSparer *ZeigerMisterZ; 
  ZeigerMisterZ = new CSparer("Wuchtig", "Knut");
  cout << ZeigerMisterZ -> GetName() << endl;
  cout << ZeigerMisterZ -> GetKredit() << endl;
  ZeigerMisterX = ZeigerMisterZ;  
  cout << ZeigerMisterX -> GetName() << endl;  
//  cout << ZeigerMisterX -> GetKredit() <<  endl;  // Fehler!! nur in der Klasse CSparer vorhanden
  delete ZeigerMisterZ;
  cin.get();
  return 0;
}

