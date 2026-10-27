#include <stdio.h>
int main(void)
{ 
  union vario
  { 
    int ganzzahl;
    float gleitpunktzahl;
  } zahl;
  zahl.ganzzahl = 15;
  printf("Ganze Zahl: %d\n\n", zahl.ganzzahl);
  zahl.gleitpunktzahl = 8.25; 
  printf("Gleitkommazahl: %f\n\n", zahl.gleitpunktzahl); 
  printf("Ganze Zahl: %d\n\n", zahl.ganzzahl);/*Fehler, da Gleitkommazahl gespeichert ist*/
  getchar();
  return 0;
}

