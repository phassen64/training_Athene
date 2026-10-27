#include <stdio.h> 
int main(void)      
{
  char dateiname[] = "Protokoll.txt";
  char meldung[80] = "Programmlauf DateiNeu wurde durchgefuehrt...";
  FILE *datei;
  datei = fopen(dateiname, "w");
  fprintf(datei, "%s", meldung);
  fclose(datei);
  return 0;     
}

