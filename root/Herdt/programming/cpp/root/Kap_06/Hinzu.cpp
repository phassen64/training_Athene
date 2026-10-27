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
  private:
    double Kredit;                         
  public:
    CSparer(string name): CPerson(name) {}
    void abheben(double betrag)            
    {
      CPerson::abheben(betrag);
      cout << "verfuegbarer Betrag EUR: ";
      cout << GetKonto() << endl;
    }
    void SetKredit(double hoehe) {Kredit = hoehe;}   
    double GetKredit() {return Kredit;}
};

int main()
{
  CSparer MisterZ("Wuchtig");
  cout << "Kredithoehe vor dem Zuweisen ist unbestimmt: " << MisterZ.GetKredit() << endl;
  MisterZ.SetKredit(4000);
  cout << "Kredithoehe nach dem Zuweisen: EUR " << MisterZ.GetKredit() << endl;
  cin.get();
  return 0;
}
