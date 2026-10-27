#include <stdio.h>
int main(void)
{
   int dividend, divisor, quotient, rest;
   dividend = 56;
   divisor = 18;
   printf("\n\nDivision zweier Zahlen:\n\n");
   printf("Der Dividend ist a = %d.\n", dividend);
   printf("Der Divisor ist b = %d.\n", divisor);
   quotient = dividend / divisor;
   printf("Das Ergebnis lautet: %d : %d = %d ", dividend, divisor, quotient);
   rest = quotient = dividend % divisor;
   printf("Rest: %d\n\n\n", rest);
   getchar();
   return 0;
}
