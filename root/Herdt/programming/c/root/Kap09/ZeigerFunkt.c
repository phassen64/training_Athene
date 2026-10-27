#include <stdio.h>
#include <stdlib.h>
int hoch(int exponent)
{
  int ii, erg = 1;
   for(ii = 0; ii < exponent; ii++)
   {
     erg *= 10;
   }
   return erg;
}
int strtoint(char *x)
{
  int l, ii = 0, zahl = 0;
  while ((*(x + ii) < 57) && (*(x + ii) > 48))
  {
    ii++;
  }
  for (l = ii; l > 0; l--)
  {
     zahl += (*(x + (l - 1)) - 48) * hoch(ii - l);
     /* ASCII 48 entspricht Zahl 0 */
  }
  return zahl;
}
int main(void)
{
  char *st = "2541";
  printf("%d", strtoint(st));
  getchar();
  return 0;
}
