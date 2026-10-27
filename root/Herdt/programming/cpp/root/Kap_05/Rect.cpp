#include <iostream>
using namespace std;
class Rect
{
  private:
    int Breite;
    int Hoehe;
  public:
    Rect(int breite, int hoehe): Breite(breite), Hoehe(hoehe){}
    int GibHoehe() const { return Hoehe; }
    int GibBreite() const { return Breite; }
    int GibFlaeche() const { return Hoehe * Breite; }
    int GibUmfang() const { return 2*Hoehe + 2*Breite; }
    void SetzeSeiten(int neueBreite, int neueHoehe);  
    void Zeichne();
};
void Rect::SetzeSeiten(int neueBreite, int neueHoehe)
{
  Breite = neueBreite;
  Hoehe = neueHoehe;
}
void Rect::Zeichne()
{
  cout << "Rechteck mit h= " << Hoehe <<  " und b= ";
  cout << Breite << endl << endl;
  cout << "   ";
  for(int j = Hoehe; j != 0; j--)
  {
    for(int i = Breite; i != 0; i--)
      cout << "*";
    cout << endl << "   ";
  }
  cout << endl;
}
int main()
{
  Rect einRechteck(30, 20);
  for(int i = 2; i != 0; i--)
  {
    einRechteck.Zeichne();
    cout << "Die Flaeche betraegt " << einRechteck.GibFlaeche() << "." << endl;
    cout << "Der Umfang betraegt " << einRechteck.GibUmfang() << "." << endl;
    cin.get();
    einRechteck.SetzeSeiten(50, 3);
  }
  cin.get();
  return 0;
}

