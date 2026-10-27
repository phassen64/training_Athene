#include <stdio.h>
double mwst_satz=0.19;
double usd_kurs;
double add_mwst(double p)
{
  return p*(mwst_satz + 1);
}
double gib_usd(double usd)
{
  return usd / usd_kurs;
}
int main(void) 
{
  double preis;
  printf("Bitte geben Sie den Netto-Artikelpreis in EUR ein:  ");
  scanf("%lf", &preis);
  printf("Bitte geben Sie den USD-Wechselkurs ein:  ");
  scanf("%lf", &usd_kurs);
  printf("\nPreis ohne Mwst in EUR:\t%5.2f  EUR \n", preis); 
  printf("Preis  mit Mwst in EUR:\t%5.2f  EUR \n", add_mwst(preis));
  printf("Preis ohne Mwst in USD:\t%5.2f  USD \n", gib_usd(preis));
  printf("Preis  mit Mwst in USD:\t%5.2f  USD\n", gib_usd(add_mwst(preis)));
  fflush(stdin); /* Alle Zeichen aus dem Eingabepuffer loeschen */
  getchar();
  return 0;
}	
