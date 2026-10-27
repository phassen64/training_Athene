#include <stdio.h>
#include <stdlib.h>
struct element
 {
  char zeichen;
  struct element *zeiger;
                        };
struct element *anker;
void einfuegen(struct element *z, char zei)
 {
  struct element *hzgr;
  hzgr = malloc(sizeof(struct element));
  hzgr->zeichen = zei;
  hzgr->zeiger=z->zeiger;
  z->zeiger = hzgr;
 }
void ausgabe(void)
 {
  int i;
  struct element *hzgr;
  hzgr = anker;
 
  for (i=1; i < 100; i++)
   {
    printf ("%c", hzgr->zeichen );
    hzgr = hzgr->zeiger;
   }
 printf("\n");
 }
int main(void)
 {
  char z;
  int i;
  anker = malloc(sizeof(struct element )) ;
  anker->zeiger =anker;
  printf("Geben Sie mindestens 9 Zeichen ein!\n");
  scanf( "%c", &z);
  anker->zeichen = z;
  for ( i=1; i < 9; i++)
   {
    scanf( "%c", &z );
    einfuegen(anker,z);
   } ;
  ausgabe();
  fflush(stdin);
  getchar();
  return 0;
 }
