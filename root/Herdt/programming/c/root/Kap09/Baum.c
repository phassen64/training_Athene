#include <stdio.h>
#include <stdlib.h>
const int anzahl = 1000000;
int anz = 0;
struct blatt 
 {
  int zahl;
  struct blatt *links;
  struct blatt *rechts;
 } ;
struct blatt *wurzel;
 /* rekursive Funktion */
void einfuegen(int z, struct blatt *zeiger)
 {
  struct blatt *zgr;
  if (z < zeiger->zahl)
   {
     if (zeiger->links != NULL) einfuegen(z, zeiger->links);
     else
      {
       zgr = malloc(sizeof(struct blatt));
     	  zgr->zahl = z;
     	  zgr->links = NULL;
     	  zgr->rechts = NULL;
     	  zeiger->links = zgr;
     	 }
      }
  else
   {
    if (zeiger->rechts != NULL) einfuegen( z, zeiger->rechts );
    else
     {
      zgr = malloc(sizeof(struct blatt));
      zgr->zahl = z;
      zgr->links = NULL;
      zgr->rechts = NULL;
      zeiger->rechts = zgr;
     }
   }
   return;
  };
/* rekursive Funktion */
void ausgabe(struct blatt *zeiger)
 {
  if (zeiger->links != NULL) ausgabe(zeiger->links);
  printf( "%d \t",zeiger->zahl );
  if (zeiger->rechts != NULL) ausgabe( zeiger->rechts );
  return ;
 }
 /* rekursive Funktion */
void baumfrei(struct blatt *zeiger)
 {
  if(zeiger->links != NULL) baumfrei(zeiger->links);
  if (zeiger->rechts != NULL) baumfrei( zeiger->rechts );
  /* Löschen*/
  if(zeiger->links != NULL){ free(zeiger->links); anz++;};
  if(zeiger->rechts != NULL){ free(zeiger->rechts);anz++;};
  return ;
 }
/* Hauptfunktion  */
int main(void)
{
  int i;
  printf (" 1 Million Zufallszahlen werden sortiert!\n\n");
  wurzel = malloc(sizeof(struct blatt));
  wurzel->links = NULL;
  wurzel->rechts = NULL;
  wurzel->zahl = rand();
  for (i=0;i<anzahl-1;i++)
  {
   einfuegen(rand(),wurzel);
  };
 ausgabe(wurzel);
 baumfrei(wurzel); 
 printf("Es wurden %d Knoten wieder freigegeben.\n", anz);
 free(wurzel); 
 getchar();
 return 0;
 }