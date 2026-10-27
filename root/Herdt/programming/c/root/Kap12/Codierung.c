#include <stdio.h>
#include <stdlib.h>
char* codiere(char* s, char Key)
{
   int i;
   for(i = 0; *(s+i) != '\0'; i++)
       *(s+i) ^= Key;    /* jetzt ist der Buchstabe verschluesselt */
   return s;
}
int main(void)
{
   char key = 'A';
   char *s;
   s = malloc(80 * sizeof(char));
   printf("Bitte geben Sie einen kurzen Text ein:\n");
   gets(s);
   s = codiere(s, key);
   puts(s);
   printf("Codierung wird ein zweites mal ausgefuehrt! - weiter mit <ENTER>");
   getchar();
   s = codiere(s, key);
   puts(s);
   free(s);
   getchar();
   return 0;
}
/* Wenn der zu codierende Buchstabe dem Schluessel entspricht, 
wird dem Zeiger s an der Stelle das Abschlusszeichen '/0' zugewiesen. (ASCII_Code 0) 
Alle Zeichen danach werden nicht mehr ausgegeben. */
