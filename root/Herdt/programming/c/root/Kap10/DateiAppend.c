#include <stdio.h> 
int main(void)      
{
  char dateiname[] = "Protokoll.txt";
  char meldung[80] = "Programmlauf DateiAppend wurde durchgefuehrt...";
  FILE *datei;
  datei = fopen(dateiname, "a");
  fprintf(datei, "%s", meldung);
  //fclose(datei);
  if(remove(dateiname) == 0) 
   printf("Datei geloescht!");
  else 
   printf("Datei konnte nicht geloescht werden.");
  getchar();
  return 0; 
}
