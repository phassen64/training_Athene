#include <stdio.h>
int nummer = 1;
float gesamt = 0.0;
 int aufstieg(int i, float e)
{
  printf("Der Aufstieg!\n");
  printf("Aktuelle Schachfeldnr. ist: %d\naktuelles Ergebnis: %5.0f\n", i, e);
  getchar();
  return 0;
}
 void abstieg(int i)
{
  printf("Der Abstieg!\n");
  printf("Schachfeldnr. %d\nUnterprogramm wurde %dx aufgerufen.\n", i, nummer);
  fflush(stdin);  
  getchar();
  nummer++;
  }
float rechne(int z)
{
  float ergebnis;
  abstieg(z);    
  if(z > 1)
    ergebnis = 2 * rechne(z - 1);
  else 
    ergebnis = 1;
  aufstieg(z, ergebnis);
  gesamt += ergebnis;  
  return ergebnis;
}
int main(void)
{
  int feldnummer;
  float u;
   printf("Welches Feld wollen Sie bestimmen: ");
  scanf("%d", &feldnummer);
  u = rechne(feldnummer);
  printf("Es sind %5.0f Koerner auf dem %d. Feld.\n\n", u, feldnummer);
  printf("Insgesamt liegen %E Koerner auf dem Schachbrett.", gesamt);
  getchar();
  return 0;
}
