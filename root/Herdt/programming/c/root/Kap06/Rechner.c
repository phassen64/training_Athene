#include <stdio.h>
float add(float zahl1, float zahl2)
{
   return zahl1 + zahl2;
}
float sub(float zahl1, float zahl2)
{
   return zahl1 - zahl2;
}
float mul(float zahl1, float zahl2)
{
   return zahl1 * zahl2;
}
float div(float zahl1, float zahl2)
{
   return zahl1 / zahl2;
}
int main(void)
{
   float zahl1, zahl2;
   printf("Taschenrechner...DEMO\n\n");
   printf("Bitte geben Sie zwei Zahlen ein!\n");
   printf("Zahl1: ");
   scanf("%f", &zahl1);
   printf("Zahl2: ");
   scanf("%f", &zahl2);
   printf("ERGEBNISSE\n\n");
   printf("Addition: %5.3f\n", add(zahl1,zahl2));
   printf("Subtraktion: %5.3f\n", sub(zahl1,zahl2));
   printf("Multiplikation: %5.3f\n", mul(zahl1,zahl2));
   printf("Division: %5.3f\n", div(zahl1,zahl2));
   fflush(stdin);
   getchar();
   return 0;
}
