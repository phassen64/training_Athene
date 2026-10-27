#include <stdio.h>
const double usd_kurs = 1.43372;
const double artikelpreis = 23.45;
double ergebnis;
double eur_usd(double preis)
{
  return preis * usd_kurs;
}
int main(void)
{
  ergebnis = eur_usd(artikelpreis);
  printf("Der Artikelpreis betraegt %5.2f EUR \n das entspricht %5.2f USD.\n",  
  artikelpreis, ergebnis);
  printf("------ oder durch den direkten Funktionsaufruf -----\n"); 
  printf("Der Artikelpreis betraegt %5.2f EUR \n das entspricht %5.2f USD.\n",
  artikelpreis, eur_usd(artikelpreis));
  getchar(); 
  return 0;
}
