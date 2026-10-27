#include <iostream>
#include <string>
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
  using namespace zone2;
  zone1::CProbe probe1("Meier");
  zone2::CProbe probe2("Meier", "Lehmann");
  cout << probe2.GibName() << endl;
  cin.get();
  return 0;
}
