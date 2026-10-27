#include <iostream>
#include <string>
using namespace std;
class CPerson
{
  private:
    string Name;
    double Konto;
  public:
    CPerson(string ValueN): Name(ValueN) {Konto = 1000;}
    void abheben(double betrag)
    {
      Konto -= betrag;
    }
    double GetKonto() {return Konto;}
};
class CSparer : public CPerson
{
  public:
    CSparer(string name): CPerson(name)  {  }

    void abheben(double betrag)
    { 
      CPerson::abheben(betrag);
      cout << "verfuegbarer Betrag EUR: ";
      cout << GetKonto() << endl;
    }
};
int main()
{
  CPerson MisterX("Kirsch");
  MisterX.abheben(100);  
  CSparer MisterZ("Wuchtig");
  MisterZ.abheben(100);  
  cin.get();
  return 0;
}

