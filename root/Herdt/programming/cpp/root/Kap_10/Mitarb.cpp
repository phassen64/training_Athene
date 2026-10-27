#include <string>
#include <iostream>

using namespace std;
struct Wohnsitz
{
 char PLZ[6];
 char Ort[40];
 char Strasse[50];
 int Nr;
};

class CMitarbeiter
{
  private:
    string Name;
    Wohnsitz HauptWS;
    Wohnsitz *ZweitWS;
  public:
    CMitarbeiter(string name, Wohnsitz haupt, Wohnsitz* zweit): Name(name), HauptWS(haupt), ZweitWS(zweit){}
    CMitarbeiter &operator=(const CMitarbeiter &m);
    void Ausgabe();
};
void CMitarbeiter::Ausgabe()
{
  cout << Name << endl;
  cout << "HAUPTWOHNSITZ" << endl;
  cout << HauptWS.PLZ << '\t' << HauptWS.Ort << endl;
  cout << HauptWS.Strasse << '\t' << HauptWS.Nr << endl;
  cout << "NEBENWOHNUNG" << endl;
  cout << ZweitWS->PLZ << '\t' << ZweitWS->Ort << endl;
  cout << ZweitWS->Strasse << '\t' << ZweitWS->Nr << endl;
}

CMitarbeiter &CMitarbeiter::operator=(const CMitarbeiter &m)
{
  Name = m.Name;
  HauptWS = m.HauptWS;
  if(ZweitWS)
    delete ZweitWS;
  if(m.ZweitWS)
  {
    ZweitWS = new Wohnsitz;
    *ZweitWS = *m.ZweitWS;
  }
  else
    ZweitWS = 0;
  return *this;
}

int main()
{
  Wohnsitz sitz;
  sitz.Nr = 33;
  strcpy(sitz.Ort, "Leipzig");
  strcpy(sitz.PLZ, "04100");
  strcpy(sitz.Strasse, "Heine Str.");
  Wohnsitz* zweit = new Wohnsitz;
  zweit->Nr = 100;
  strcpy(zweit->Ort, "Bautzen");
  strcpy(zweit->PLZ, "02625");
  strcpy(zweit->Strasse, "Flinzstrasse.");
  CMitarbeiter kollege("Helmut Werner",sitz, zweit);
  CMitarbeiter kunde = kollege;
  kollege.Ausgabe();
  kunde.Ausgabe();
  cin.get(); 
  delete zweit;
  return 0;
}
