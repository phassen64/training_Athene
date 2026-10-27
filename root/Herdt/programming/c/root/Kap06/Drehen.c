#include <stdio.h>
int main(void)
{
   int zeichen1, zeichen2, zeichen3, zeichen4, zeichen5, zeichen6, zeichen7, zeichen8, zeichen9;
   printf("Ihr Name (9 Buchstaben): ");
   zeichen1 = getchar();
   zeichen2 = getchar();
   zeichen3 = getchar();
   zeichen4 = getchar();
   zeichen5 = getchar();
   zeichen6 = getchar();
   zeichen7 = getchar();
   zeichen8 = getchar();
   zeichen9 = getchar();
   putchar(zeichen9);
   putchar(zeichen8);
   putchar(zeichen7);
   putchar(zeichen6);
   putchar(zeichen5);
   putchar(zeichen4);
   putchar(zeichen3);
   putchar(zeichen2);
   putchar(zeichen1);
   fflush(stdin);  /* Eingabepuffer loeschen */
   getchar();
   return 0;
}
