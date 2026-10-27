#include <iostream>
using namespace std;
class CZeichnung
{
  public:
    int X, Y;
    char Name[40];
  
};
class CLinie : virtual public CZeichnung
{
  public:
    int Breite;
    int Farbe;

};
class CFlaeche : virtual public CZeichnung
{
  public:
    int Farbe;
};
class CRechteck : public CLinie, public CFlaeche
{
 
};

int main()
{

  CRechteck myRechteck;
  myRechteck.CLinie::Farbe = 17;
  myRechteck.CFlaeche::Farbe = 28;
  myRechteck.Breite = 200;
  myRechteck.CLinie::X = 100;
  myRechteck.CFlaeche::X = 200;
  cout << "Farbe von der Klasse Linie: " << myRechteck.CLinie::Farbe << endl;
  cout << "Farbe von der Klasse Flaeche: " << myRechteck.CFlaeche::Farbe << endl;
  cout << "Die Breite betraegt: " << myRechteck.Breite << endl; 

  cout << "Die gemeinsame Eigenschaft der Klasse ist nur einmal vorhanden!" << endl;
  cout << "Die X-Koordinate des Rechtecks betraegt: " << myRechteck.CLinie::X << endl;
  cout << "Die X-Koordinate des Rechtecks betraegt: " << myRechteck.CFlaeche::X << endl;
  cin.get();
  return 0;
}

