#include <iostream>
using namespace std;
namespace zone1
{
  int Anzahl;
  class CProbe
  {
    private:
      string Name;
      double Einkommen;
    public:
      CProbe(string NN) {Name = NN; }
      double GibEinkommen() {return Einkommen;}
      void SetEinkommen(double Betrag) {Einkommen = Betrag;}
  };
}
namespace zone2
{
  int Anzahl;
  class CProbe
  {
    private:
      string Name;
      string Geburtsname;
    public:
      CProbe(string NN, string GN) { Name = NN; Geburtsname = GN; }
      string GibName() { return Name;}
      string GibGeburtsname() { return Geburtsname; }
  };
}
int main()
{
  using namespace zone1;
  using zone2::Anzahl;
  CProbe a("Wuchtig");
  a.SetEinkommen(10000);
  Anzahl = 700; 
  cout << "Einkommen: " << a.GibEinkommen() << endl;
  cout << Anzahl << endl;
  cin.get();
  return 0;
}

