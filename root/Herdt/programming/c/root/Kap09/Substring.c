#include <stdio.h>
#include <stdlib.h>
char *substring(char *s, int pos, int count)
{
  int i;
  char *erg, *h;
  erg = malloc((count+1)*sizeof(char));
  h = s + pos-1;
  for(i = 0; i < count; i++)
    *(erg+i) = *(h+i);
  *(erg+i) = '\0';
  return erg;
}
int main(void)
{
   char *s1, *s2;
   s1 = malloc(80*sizeof(char));
   printf("Bitte geben Sie einen Text mit max. 79 Buchstaben ein: \n\n");
   gets(s1);
   s2 = substring(s1, 3, 5);
   printf("\n\n");
   puts(s2);
   free(s1);
   free(s2);
   getchar();
   return 0;
}
