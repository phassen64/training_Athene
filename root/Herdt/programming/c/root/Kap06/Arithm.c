#include <stdio.h>
int main(void)
{
   const double zahl1 = 27.3;
   const double zahl2 = 28.8;
   printf("Die Addition von %5.3f und %5.3f ergibt %5.3f\n",zahl1, zahl2, zahl1 + zahl2);
   printf("Die Subtraktion von %5.3f und %5.3f ergibt %5.3f\n", zahl1, zahl2, zahl1 -zahl2);
   printf("Die Multiplikation von %5.3f und %5.3f ergibt %5.3f\n",zahl1, zahl2, zahl1 * zahl2);
   printf("Die Division von %5.3f und %5.3f ergibt %5.3f\n",zahl1, zahl2, zahl1 / zahl2);
   getchar();
   return 0;
}
