#include <stdio.h>
int main(void)
 {
  char z1;                                   
  z1='A';           /*Der Buchstabe A wird in z1 eingeschrieben. */
  putchar(z1);      /* Der Buchstabe A wird ausgegeben. */
  putchar(' ');     /* Ein Leerzeichen wird ausgegeben. */
  putchar('b');     /* Der Buchstabe b wird ausgegeben. */
  putchar(7);       /* Das Steuerzeichen Bell (Ton ) wird ausgegeben */
  putchar(124) ;    /* Das Zeichen | wird ausgegeben. */
  getchar();
  return 0;
 }