#include <stdio.h>
#include <stdlib.h>
struct element 
  {
   int inhaltA;
   int inhaltB;
   struct element *zeiger;
  };
struct element *anker;
void anhaengen( struct element *anker, int a, int b )
 {
  struct element *zgr, *hzgr;
  zgr = anker;
  while (zgr->zeiger !=NULL)
   {
   zgr=zgr->zeiger;
   } ;
  hzgr = malloc(sizeof(struct element));
  hzgr -> inhaltA = a;
  hzgr -> inhaltB = b;
  hzgr -> zeiger = NULL;
  zgr -> zeiger = hzgr;
 return;
 }
void einfuegen( struct element *z, int a, int b )
 {
  struct element *hzgr;
  hzgr = malloc(sizeof(struct element));
  hzgr->inhaltA = a; hzgr->inhaltB = b;
  hzgr->zeiger=z->zeiger;
  z->zeiger = hzgr;
  return;
 }
void loeschen(struct element *z)
 {
  struct element *hzgr;
  hzgr = anker;
  while (hzgr->zeiger != z)
   {
    hzgr = hzgr->zeiger;
   }
  hzgr->zeiger = z->zeiger;
  free(z);
  return;
 }
struct element *nav(int merkmal)
 {
  struct element *hzgr;
  hzgr=anker;
  while ((hzgr->inhaltA != merkmal) && (hzgr->zeiger !=NULL))
    hzgr=hzgr->zeiger;
  return hzgr;
 };
void ausgabe(void)
 {
  struct element *hzgr;
  hzgr = anker;
  while(hzgr != NULL)
   {
    printf ("Inhalt: %d    %d\n", hzgr->inhaltA, hzgr->inhaltB );
    hzgr = hzgr->zeiger;
   }
  ;
  printf("\n\n");
  return;
 }
int main(void)
 {
  anker = malloc(sizeof( struct element)) ;
  anker->zeiger =NULL;
  anker->inhaltA = 11; anker->inhaltB = 12;
  ausgabe();
  anhaengen(anker,3,2);
  ausgabe();
  einfuegen(anker,1,1);
  einfuegen(anker,17,18);
  ausgabe();
  loeschen(nav(1));
  ausgabe();
  getchar();
  return 0;
 }