#include <stdio.h>
const double lohnsteuersatz = 20.0;
const double rentenversatz = 9.6;
const double pflegeversatz = 0.7;
const double krankenversatz = 11.6;

const double brutto = 8000;

double gesamt = 0;

double lohnst(double brutto)
{
  return brutto * lohnsteuersatz/100;
}
double rente(double brutto)
{
  return brutto * rentenversatz/100;
}
double pflege(double brutto)
{
  return brutto * pflegeversatz/100;
}
double krank(double brutto)
{
  return brutto * krankenversatz/100;
}

int main(void)
{
   printf("Lohnrechnung\n\n");
   gesamt += lohnst(brutto);
   printf("Brutto EUR:\t\t\t%5.2f\n\n", brutto);
   printf("---------------------------------------\n");
   printf("Lohnsteuer EUR: \t\t%5.2f\n", lohnst(brutto));
   gesamt += rente(brutto);
   printf("Rentenversicherung EUR: \t%5.2f\n", rente(brutto));
   gesamt += pflege(brutto);
   printf("Pflegeversicherung EUR: \t%5.2f\n", pflege(brutto));
   gesamt += krank(brutto);
   printf("Krankenversicherung EUR: \t%5.2f\n", krank(brutto));
   printf("---------------------------------------\n\n");
   printf("Netto EUR: \t\t\t%5.2f\n", brutto - gesamt);
   getchar();
   return 0;
}
