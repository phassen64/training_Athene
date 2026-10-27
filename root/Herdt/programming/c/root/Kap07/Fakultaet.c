#include <stdio.h>
int main(void)
{
   int a, i, f = 1;
   printf("Fakultaet einer Zahl\n");
   printf("Geben Sie eine nat. Zahl ein: ");
   scanf("%d", &a);
   for(i = 1; i < a+1; i++)
     f *= i;
   printf("Die Fakultaet der Zahl %d ist %d\n", a, f);
   fflush(stdin);
   getchar();
   return 0;
}
