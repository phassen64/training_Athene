#include <cstdarg>
#include <iostream>
using namespace std;
double mittel(double anfang, ... )
{
  double wert;
  va_list liste;
  int anzahl = 0;
  double erg = anfang;
  va_start(liste, anfang);
  do
  {
    anzahl++;
    wert = va_arg(liste, double);
    erg += wert;
  }
  while(wert != 0.0);
    va_end(liste);
  return (erg / anzahl);
}
int main()
{
  double mittelwert;
  mittelwert = mittel(1.0, 2.0, 3.0, 4.0, 5.0, 0.0);
  cout << "Der Mittelwert betraegt: " << mittelwert << endl;
  cin.get();
  return 0;
}

