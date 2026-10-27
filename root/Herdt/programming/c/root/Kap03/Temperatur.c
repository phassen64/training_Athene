#include <stdio.h>
int main(void)
{
   const int offset = 273;
   const int temp = 288; /* 288 K ist der umzurechnende Wert */
   printf("Temperaturumrechnungen von Kelvin in Celsius\n\n");
   printf("%d Kelvin sind %d Grad Celsius.\n", temp, temp-offset);
   getchar();
   return 0;
}

