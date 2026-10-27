#include <stdio.h>
char brett[8][8];
void init(void)
{
  int i;
  int j;
  for (j = 0; j < 8; j++)
    for (i = 0; i < 8; i++)
      brett[j] [i] = 'O';
}
int zeile()
{
  int z;
  printf("Zeile: ");
  scanf("%d",&z);
  return z;
}
int spalte()
{
  int s;
  printf("Spalte: ");
  scanf("%d",&s);
  return s;
}
int erg(int sp)
{
  char zeichen;
  int r = 0; int i; int j;
  if (sp < 0) zeichen ='A'; else zeichen ='B';
    for ( j = 0; j < 8; j++ )
    {
       if (r < 4) r = 0;
         for (i = 0; i < 8; i++)
            if (brett[i] [j] == zeichen) r++;  else if (r<4) r=0;
    }
  for (j = 0; j < 8; j++)
  {
    if (r < 4) r = 0;
      for (i = 0; i < 8; i++ )
         if (brett[j] [i] == zeichen) r++;  else if (r < 4) r = 0;
  }
  return r;
}
void ausgabe(int i, int j, int sp)
{
  int a;
  int b;
  if (sp < 0) brett[i] [j]='A';
  if (sp > 0) brett[i] [j]='B';
  printf("\n");
  for (a = 0; a < 8; a++)
  {
    printf("\n");
    for (b = 0; b < 8; b++)
      printf(" %c",brett[a] [b]);
  }
}
int main (void)
{
  int runde=64;
  int i;
  int j;
  int spieler=1;
  init();
  while ((runde > 0) &&  (erg(spieler)<4) )
  {
    i=zeile();
    j=spalte();
    spieler*=-1;
    ausgabe(i,j,spieler);
    printf("\n");
    runde--;
  }
  if (runde > 0)
    printf("Gewonnen!!!");
  fflush(stdin);
  getchar();
  return 0;
}
