#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.1415927;
class CVektor
{
  protected:
    double X, Y;
  public:
    CVektor() {X = 0; Y = 0;} // Konstruktor
    virtual void SetVektor(double ax, double ay, double ex, double ey);
    virtual void SetVektor(double x, double y) {X = x; Y = y;}
    virtual void SetBetrag(double betrag);
    virtual  double GibBetrag() {return sqrt(pow(X, 2) + pow(Y  ,2));}
    double GibWinkel();
    virtual void GibEinheitsvektor();
    virtual double GibX() {return X;}
    virtual double GibY() {return Y;}
};
void CVektor::SetVektor(double ax, double ay, double ex, double ey)
{
  X = ex - ax;
  Y = ey - ay;
}
void CVektor::SetBetrag(double betrag)
{
  if(GibBetrag() > 0)
  {
    double h = betrag / GibBetrag();
    X = X * h;
    Y = Y * h;
  }
}
double CVektor::GibWinkel()
{
  double h = atan(X / Y);
  return (180 * h / PI);
}
void CVektor::GibEinheitsvektor()
{
  cout << "Der Einheitsvektor ist ( "  << X / GibBetrag();
  cout << ", " << Y / GibBetrag() << " )" << endl;
}

int main ()
{
  CVektor* zeiger = new CVektor();
  cout << endl <<" ==== Angaben zum gespeicherten Vektor === "<< endl;
  cout << "Die x-Kordinate: " << zeiger -> GibX() << endl;
  cout << "Die y-Kordinate: " << zeiger -> GibY() << endl;
  cout << endl;
  zeiger -> SetVektor(2, 5, 20,50);
  cout << endl <<" ==== Angaben zum gespeicherten Vektor Punkt(2,5), Punkt(20,50) === "<< endl;
  cout << "Die x-Kordinate: " << zeiger -> GibX() << endl;
  cout << "Die y-Kordinate: " << zeiger -> GibY() << endl;
  cout << "Der Winkel zwischen der x-Achse und dem Vektor betraegt: " << zeiger -> GibWinkel() << " Grad" <<endl;
  cout << "Der Vektor hat einen Betrag von " << zeiger -> GibBetrag() << endl;
  zeiger -> GibEinheitsvektor();
  cout << endl;
  zeiger -> SetBetrag(20);
  cout << endl <<" ==== Angaben zum gespeicherten Vektor (Betrag = 20) === "<< endl;
  cout << "Die x-Kordinate: " << zeiger -> GibX() << endl;
  cout << "Die y-Kordinate: " << zeiger -> GibY() << endl;
  cout << "Der Winkel zwischen der x-Achse und dem Vektor betraegt: " << zeiger -> GibWinkel() << " Grad" <<endl;
  cout << "Der Vektor hat einen Betrag von " << zeiger -> GibBetrag() << endl;
  zeiger -> GibEinheitsvektor();
  cout << endl;

  delete zeiger;
  cin.get();
  return 0;
}
