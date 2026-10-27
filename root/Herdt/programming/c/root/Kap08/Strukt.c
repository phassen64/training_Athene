#include <stdio.h>
typedef struct t_regal
{
  int cdnr;
  float dauer;
  int titelanz;
  char art;
} t_regal;
int main(void)
{
  t_regal regal[3];
  int i;
  for(i = 0; i < 3; i++)
  {
    printf("\nEingaben fuer Fach %d.\n\n", i+1);
    printf("CD-Nummer: "); 
    scanf("%d", &regal[i].cdnr);
    printf("Spieldauer: "); 
    scanf("%f", &regal[i].dauer);
    printf("Titelanzahl: "); 
    scanf("%d", &regal[i].titelanz);
    printf("Musikart: "); 
    scanf("%s", &regal[i].art);
    fflush(stdin);/* Ueberfluessige Zeichen aus dem Tastaturpuffer entfernen*/
  }
  printf("\n\nAusgabe des Inhaltsverzeichnisses\n\n");
  for(i = 0; i < 3; i++)
  {
    printf("\nRegalnummer %d\n", i+1);
    printf("CD-Nummer: %d\n", regal[i].cdnr);
    printf("Spieldauer: %5.2f min\n", regal[i].dauer);
    printf("Titelanzahl: %d\n", regal[i].titelanz);
    printf("Musikart: %c\n", regal[i].art);
  }
  getchar();
  return 0;
}
