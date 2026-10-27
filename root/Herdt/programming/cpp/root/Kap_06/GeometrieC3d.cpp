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
    virtual void SetVektor(double ax, double ay, double bx, double by);
    virtual void SetVektor(double x, double y) {X = x; Y = y;}
    virtual void SetBetrag(double betrag);
    virtual  double GibBetrag() {return sqrt(pow(X, 2) + pow(Y  ,2));}
    double GibWinkel();
    virtual void GibEinheitsvektor();
    virtual double GibX() {return X;}
    virtual double GibY() {return Y;}
};
void CVektor::SetVektor(double ax, double ay, double bx, double by)
{
  X = bx - ax;
  Y = by - ay;
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
  cout << "Der Einheitsvektor ist ( "<< X / GibBetrag();
  cout << ", "<< Y / GibBetrag() << " )" << endl;
}
class  C3dVektor : protected CVektor
{
  protected:
    double Z;
  public:
    C3dVektor() : CVektor() {Z = 0;}
    void SetVektor(double x, double y, double z);
    void SetVektor(double ax,double ay,double az,double bx,double by,double bz);
    CVektor::GibX;
    CVektor::GibY;
    double GibZ() {return Z;}
    double GibBetrag(){return sqrt(pow(X, 2) + pow(Y, 2) + pow(Z, 2));}
    void GibEinheitsvektor();  // Überschreiben der Methode
    void SetBetrag(double betrag);
};
void C3dVektor::SetVektor(double x, double y, double z)
{
  CVektor::SetVektor(x, y);  // Aufruf der Basismethode
  Z = z;
}
void C3dVektor::SetVektor(double ax, double ay, double az, double bx, double by, double bz)
{
  CVektor::SetVektor(ax, ay, bx, by);
  Z = bz - az;
}
void C3dVektor::GibEinheitsvektor()
{
  double n = 1 / GibBetrag();
  cout << "Der Einheitsvektor ist ("<< X * n;
  cout << ", " << Y * n;
  cout << ", " << Z * n << " )"<< endl;
}
void C3dVektor::SetBetrag(double betrag)
{
  double h = betrag / GibBetrag();
  X = X * h;
  Y = Y * h;
  Z = Z * h;
}

int main()
{
  C3dVektor* zeiger = new C3dVektor();
  cout << endl <<" ==== Angaben zum gespeicherten Vektor === "<< endl;
  cout << "Die x-Kordinate: " << zeiger -> GibX() << endl;
  cout << "Die y-Kordinate: " << zeiger -> GibY() << endl;
  cout << "Die z-Kordinate: " << zeiger -> GibZ() << endl;
  cout << endl;
  zeiger -> SetVektor(2, 5, 20, 50, 4, 1);
  cout << endl <<" ==== Angaben zum gespeicherten Vektor Punkt(2,5), Punkt(20,50), Punkt(4,1) === "<< endl;
  cout << "Die x-Kordinate: " << zeiger -> GibX() << endl;
  cout << "Die y-Kordinate: " << zeiger -> GibY() << endl;
  cout << "Die z-Kordinate: " << zeiger -> GibZ() << endl;
  
  cout << "Der Vektor hat einen Betrag von " << zeiger -> GibBetrag() << endl;
  zeiger -> GibEinheitsvektor();
  cout << endl;
  zeiger -> SetBetrag(20);
  cout << endl <<" ==== Angaben zum gespeicherten Vektor (Betrag = 20) === "<< endl;
  cout << "Die x-Kordinate: " << zeiger -> GibX() << endl;
  cout << "Die y-Kordinate: " << zeiger -> GibY() << endl;
  cout << "Die z-Kordinate: " << zeiger -> GibZ() << endl;
  
  cout << "Der Vektor hat einen Betrag von " << zeiger -> GibBetrag() << endl;
  zeiger -> GibEinheitsvektor();
  cout << endl;

  delete zeiger;
  cin.get();
  return 0;
}