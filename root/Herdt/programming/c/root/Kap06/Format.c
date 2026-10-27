#include <stdio.h>
int main(void)
{
   int zahl = 1258;
   double zahl1 = 1258.0;
   printf("Die Zahl als int: %d\n", zahl);
   printf("Die Zahl als Gleitkomma mit Exponentialschreibweise: %E\n", zahl1);
   printf("Die Zahl als Hexadezimalzahl: %#X\n", zahl);
   getchar();
   return 0;
}
