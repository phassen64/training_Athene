#include <stdio.h>
#include <stdlib.h>
char *cut(char *s1, int pos, int anz)
{
  int i;
  char *erg, *h;
  erg = malloc((anz + 1) * sizeof(char));
  h = s1 + pos - 1;
  for(i = 0; i < anz; i++)
    *(erg + i) = *(h + i);
  *(erg + i) = '\0';
  return erg;
}
int zahl(char *st, int *z)
{
  int a;
  char *h;
  a = *z;
  while(*(st + a) < 58 && *(st + a) > 47)
    a++;
  h = cut(st, *z+1, a-*z);
  *z = a;
  a = atoi(h);
  free(h);
  return a;
}
char rechn(char *s, int pos)
{
  char *h;
  h = cut(s, pos, 1);
  return *h;
}
int main(void)
{
   int i, r;
   float gesamt;
   char *s;
   char op;
   s = (char*) malloc(200 * sizeof(char));
   printf("Geben Sie die Kettenaufgabe der Form 5+2*7+2-8= ein!\nAufgabe: ");
   gets(s);
   i = 0;
   r = zahl(s, &i);  
   gesamt = (float) r;
   do
   {
     i++;
     op = rechn(s, i);
     if (op != '=')
       r = zahl(s, &i);  
     switch(op)
     {
       case '+': 
         gesamt += r; 
         break;
       case '-': 
         gesamt -= r; 
         break;
       case '*': 
         gesamt *= r; 
         break;
       case '/': 
         gesamt /= r; 
         break;
     }
   }
   while(op != '=');
   printf("Ergebnis: %5.2f\n", gesamt);
   free(s);
   getchar();
   return 0;
}
