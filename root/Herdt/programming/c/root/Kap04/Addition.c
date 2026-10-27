#include <stdio.h>
int main(void)
{
   int summand1, summand2, summe;
   summand1=18;
   summand2=56;
   printf("Addition zweier Zahlen:\n\n" );
   printf("Der erste Summand ist a = %d.\n", summand1);
   printf("Der zweite Summand ist b = %d.\n", summand2);
   summe = summand1 + summand2;
   printf("Das Ergebnis lautet: %d + %d = %d.\n ", summand1, summand2, summe);
   getchar();
   return 0;
}
