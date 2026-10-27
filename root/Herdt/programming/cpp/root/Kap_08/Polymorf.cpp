#include <iostream>
using namespace std;
class CZahl
{
  public:
    virtual void Ausgeben() = 0;
};
class CInteger : public CZahl
{
  private:
    int value;
  public:
    CInteger(int i) { value = i; };
    void Ausgeben() { cout << "Die int-Zahl ist " << value << endl; };
};
class CGleitKomma : public CZahl
{
  private:
    double value;
  public:
    CGleitKomma (double d) { value = d; };
    void Ausgeben() { cout << "Die Gleitkommazahl ist " << value << endl; };
};
int main()
{
  CGleitKomma Gl(12.12);
  CInteger In(120);
  Gl.Ausgeben();
  In.Ausgeben();
  cin.peek();
  return 0;
}


