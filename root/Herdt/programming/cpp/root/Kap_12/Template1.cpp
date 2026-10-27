#include <iostream>
using namespace std;
template <class T1, class T2> 
double Prozent(T1 Von, T2 Proz)
{
  return((double) Proz * 100.0 / (double) Von);
}


int main()
{
  cout << "24 % von 345 : " << Prozent(345, 24) << endl;
  cout << "24.0 % von 345.0 : " << Prozent(345.0, 24.0) << endl;

  cout << "24.00 % von 345 : " << Prozent (345, 24.00) << endl;

  cin.get();
  return 0;
}

