#include <stdio.h>
const double mwst_satz = 0.19;
const double artikel_1 = 5.20;
const double artikel_2 = 1.25;
const double artikel_3 = 0.50;
void add_mwst(double preis)
{
  printf("\n*\t%5.2f  EUR\n", preis * (mwst_satz + 1));
}
int main()
{
  add_mwst(artikel_1);
  add_mwst(artikel_2);
  add_mwst(artikel_3);
  printf("---------------------\n");
  add_mwst(artikel_1 + artikel_2 + artikel_3);
  printf("=====================\n\n");
  getchar();
  return 0;
}
