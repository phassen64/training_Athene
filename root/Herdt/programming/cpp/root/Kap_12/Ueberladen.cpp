#include <iostream>
using namespace std;
template <class T>
double Potenz(T t, int exp)
{
  double erg = t;
  for(int i = 1; i<exp; i++)
     erg *= t;
  return erg;
}
template <class T>
double Potenz(T t1, T t2, int exp)
{
  double max = (t1 > t2)? t1 : t2;
  return Potenz(max, 3);
}

int main()
{
  double a = 2.5, b = 7.0;
  cout << "Ergebnis: " << Potenz(a, 3) << endl;
  cout << "3.Potenz des Maximums von " << a << " und " << b << " ist " << Potenz(a, b, 3) << endl;
  cin.get();
  return 0;
}
