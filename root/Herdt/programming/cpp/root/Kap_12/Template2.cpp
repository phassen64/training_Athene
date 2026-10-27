#include <iostream>
using namespace std;
template <class T> 
double Prozent (T Von, T Proz)
{
  return double(Proz * 100.0) / double(Von);
}
int main()
{
  cout << "24.00 % von 345 : " << Prozent<double>(345, 24.00) << endl; // fuer double
  cin.get();
  return 0;
}
